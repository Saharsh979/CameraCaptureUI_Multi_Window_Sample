#pragma once

#include "ThirdWindow.g.h"

namespace winrt::CameraCapture_Duplicate_WindowId::implementation
{
    struct ThirdWindow : ThirdWindowT<ThirdWindow>
    {
        ThirdWindow()
        {
            // Xaml objects should not call InitializeComponent during construction.
            // See https://github.com/microsoft/cppwinrt/tree/master/nuget#initializecomponent
        }

        int32_t MyProperty();
        void MyProperty(int32_t value);

        winrt::fire_and_forget myButton_Click(IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
        winrt::fire_and_forget myButton_Click1(IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
        winrt::fire_and_forget myButton_Click2(IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::CameraCapture_Duplicate_WindowId::factory_implementation
{
    struct ThirdWindow : ThirdWindowT<ThirdWindow, implementation::ThirdWindow>
    {
    };
}