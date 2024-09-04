#pragma once

#include "App.xaml.g.h"

namespace winrt::CameraCapture_Duplicate_WindowId::implementation
{
    struct App : AppT<App>
    {
        App();

        void OnLaunched(Microsoft::UI::Xaml::LaunchActivatedEventArgs const&);

    private:
        winrt::Microsoft::UI::Xaml::Window window{ nullptr };
        winrt::Microsoft::UI::Xaml::Window window2{ nullptr };
        winrt::Microsoft::UI::Xaml::Window window3{ nullptr };
        winrt::Microsoft::UI::Xaml::Window window4{ nullptr };
    };
}
