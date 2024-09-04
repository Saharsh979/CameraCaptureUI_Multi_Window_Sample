#pragma once

#include "SecondWindow.g.h"

namespace winrt::CameraCapture_Duplicate_WindowId::implementation
{
    struct SecondWindow : SecondWindowT<SecondWindow>
    {
        SecondWindow()
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
    struct SecondWindow : SecondWindowT<SecondWindow, implementation::SecondWindow>
    {
    };
}
