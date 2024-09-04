#include "pch.h"
#include "FourthWindow.xaml.h"
#if __has_include("FourthWindow.g.cpp")
#include "FourthWindow.g.cpp"
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
    int32_t FourthWindow::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void FourthWindow::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    winrt::fire_and_forget FourthWindow::myButton_Click_4(IInspectable const&, RoutedEventArgs const&)
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

        myButton_4().Content(box_value(L"Clicked"));
    }
    winrt::fire_and_forget FourthWindow::myButton_Click1_4(IInspectable const&, RoutedEventArgs const&)
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

        myButton1_4().Content(box_value(L"Clicked1"));
    }
    winrt::fire_and_forget FourthWindow::myButton_Click2_4(IInspectable const&, RoutedEventArgs const&)
    {
        try
        {
           //RUN some code here which runs like a loop and blocks the UI thread
            // Simulate a long-running task
            // Example of a CPU-intensive task
            long long int sum = 0;
            for (long long int i = 0; i < 10000000000; ++i) {
                for (long long int j = 0; j < i; j++) {
                    for (long long k = 0; j < j; k++) {
                        						sum += i;
                    }
                }
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

        myButton2_4().Content(box_value(L"Clicked1"));
        co_return;
    }
    winrt::fire_and_forget FourthWindow::myButton_Click3_4(IInspectable const&, RoutedEventArgs const&)
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

        myButton3_4().Content(box_value(L"Clicked1"));
    }
}
