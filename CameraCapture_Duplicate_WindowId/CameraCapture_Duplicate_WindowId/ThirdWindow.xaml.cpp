#include "pch.h"
#include "ThirdWindow.xaml.h"
#if __has_include("ThirdWindow.g.cpp")
#include "ThirdWindow.g.cpp"
#endif
#include <shobjidl_core.h>
#include <microsoft.ui.xaml.window.h>
#include <winrt/Microsoft.UI.Interop.h>
#include <winrt/Microsoft.Windows.Media.Capture.h>
#include <winrt/Microsoft.UI.Windowing.h>

using namespace winrt;
using namespace Microsoft::UI::Xaml;


// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::CameraCapture_Duplicate_WindowId::implementation
{
    int32_t ThirdWindow::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void ThirdWindow::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }
    winrt::fire_and_forget ThirdWindow::myButton_Click(IInspectable const&, RoutedEventArgs const&)
    {
        try
        {
            // Retrieve the window handle (HWND) of the current WinUI 3 window.
            auto windowNative{ this->m_inner.as<::IWindowNative>() };
            HWND hWnd{ 0 };
            windowNative->get_WindowHandle(&hWnd);

            // Get the WindowId for the window
            Microsoft::UI::WindowId windowId = this->AppWindow().Id();

            // Initialize CameraCaptureUI
            winrt::Microsoft::Windows::Media::Capture::CameraCaptureUI cameraUI(windowId);
            cameraUI.PhotoSettings().Format(winrt::Microsoft::Windows::Media::Capture::CameraCaptureUIPhotoFormat::Jpeg);
            cameraUI.PhotoSettings().AllowCropping(false);

            // Capture a photo asynchronously
            auto photo = co_await cameraUI.CaptureFileAsync(winrt::Microsoft::Windows::Media::Capture::CameraCaptureUIMode::Photo);

            // Check the result
            if (photo != nullptr)
            {
                // Log success if photo capture was successful
                // Optionally handle the photo file, e.g., save it or display it
                // Output to console or other logging mechanism
                OutputDebugString(L"Photo capture successful.");
            }
            else
            {
                // Log if photo capture was canceled or failed
                OutputDebugString(L"Photo capture was canceled or failed.");
            }
        }
        catch (winrt::hresult_error const& ex)
        {
            // Handle specific exceptions
        }
        catch (...)
        {
            // Handle other unexpected exceptions
        }

        myButton().Content(box_value(L"Clicked"));
    }
    winrt::fire_and_forget ThirdWindow::myButton_Click1(IInspectable const&, RoutedEventArgs const&)
    {
        try
        {
            // Retrieve the window handle (HWND) of the current WinUI 3 window.
            auto windowNative{ this->m_inner.as<::IWindowNative>() };
            HWND hWnd{ 0 };
            windowNative->get_WindowHandle(&hWnd);

            // Get the WindowId for the window
            Microsoft::UI::WindowId windowId = this->AppWindow().Id();

            // Initialize CameraCaptureUI
            winrt::Microsoft::Windows::Media::Capture::CameraCaptureUI cameraUI(windowId);
            cameraUI.PhotoSettings().Format(winrt::Microsoft::Windows::Media::Capture::CameraCaptureUIPhotoFormat::Jpeg);
            cameraUI.PhotoSettings().AllowCropping(false);

            // Capture a photo asynchronously
            auto photo = co_await cameraUI.CaptureFileAsync(winrt::Microsoft::Windows::Media::Capture::CameraCaptureUIMode::Photo);

            // Check the result
            if (photo != nullptr)
            {
                // Log success if photo capture was successful
                // Optionally handle the photo file, e.g., save it or display it
                // Output to console or other logging mechanism
                OutputDebugString(L"Photo capture successful.");
            }
            else
            {
                // Log if photo capture was canceled or failed
                OutputDebugString(L"Photo capture was canceled or failed.");
            }
        }
        catch (winrt::hresult_error const& ex)
        {
            // Handle specific exceptions
        }
        catch (...)
        {
            // Handle other unexpected exceptions
        }

        myButton1().Content(box_value(L"Clicked1"));
    }
    winrt::fire_and_forget ThirdWindow::myButton_Click2(IInspectable const&, RoutedEventArgs const&)
    {
        try
        {
            // Retrieve the window handle (HWND) of the current WinUI 3 window.
            auto windowNative{ this->m_inner.as<::IWindowNative>() };
            HWND hWnd{ 0 };
            windowNative->get_WindowHandle(&hWnd);

            // Get the WindowId for the window
            Microsoft::UI::WindowId windowId = this->AppWindow().Id();

            // Initialize CameraCaptureUI
            winrt::Microsoft::Windows::Media::Capture::CameraCaptureUI cameraUI(windowId);
            cameraUI.PhotoSettings().Format(winrt::Microsoft::Windows::Media::Capture::CameraCaptureUIPhotoFormat::Jpeg);
            cameraUI.PhotoSettings().AllowCropping(false);

            // Capture a photo asynchronously
            auto photo = co_await cameraUI.CaptureFileAsync(winrt::Microsoft::Windows::Media::Capture::CameraCaptureUIMode::Photo);

            // Check the result
            if (photo != nullptr)
            {
                // Log success if photo capture was successful
                // Optionally handle the photo file, e.g., save it or display it
                // Output to console or other logging mechanism
                OutputDebugString(L"Photo capture successful.");
            }
            else
            {
                // Log if photo capture was canceled or failed
                OutputDebugString(L"Photo capture was canceled or failed.");
            }
        }
        catch (winrt::hresult_error const& ex)
        {
            // Handle specific exceptions
        }
        catch (...)
        {
            // Handle other unexpected exceptions
        }

        myButton2().Content(box_value(L"Clicked1"));
    }
}
