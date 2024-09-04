#pragma once

#include "FourthWindow.g.h"

namespace winrt::CameraCapture_Duplicate_WindowId::implementation
{
    struct FourthWindow : FourthWindowT<FourthWindow>
    {
        FourthWindow()
        {
            // Xaml objects should not call InitializeComponent during construction.
            // See https://github.com/microsoft/cppwinrt/tree/master/nuget#initializecomponent
        }

        int32_t MyProperty();
        void MyProperty(int32_t value);

        winrt::fire_and_forget myButton_Click_4(IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
        winrt::fire_and_forget myButton_Click1_4(IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
        winrt::fire_and_forget myButton_Click2_4(IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
        winrt::fire_and_forget myButton_Click3_4(IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::CameraCapture_Duplicate_WindowId::factory_implementation
{
    struct FourthWindow : FourthWindowT<FourthWindow, implementation::FourthWindow>
    {
    };
}
