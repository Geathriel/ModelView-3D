﻿//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------
#include "pch.h"

#pragma warning(push)
#pragma warning(disable: 4100) // unreferenced formal parameter

#if defined _DEBUG && !defined DISABLE_XAML_GENERATED_BINDING_DEBUG_OUTPUT
extern "C" __declspec(dllimport) int __stdcall IsDebuggerPresent();
#endif

#include "DirectXPage.xaml.h"

void ::Model_Viewer_3d::DirectXPage::InitializeComponent()
{
    if (_contentLoaded)
    {
        return;
    }
    _contentLoaded = true;
    ::Windows::Foundation::Uri^ resourceLocator = ref new ::Windows::Foundation::Uri(L"ms-appx:///DirectXPage.xaml");
    ::Windows::UI::Xaml::Application::LoadComponent(this, resourceLocator, ::Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation::Application);
}

void ::Model_Viewer_3d::DirectXPage::Connect(int __connectionId, ::Platform::Object^ __target)
{
    switch (__connectionId)
    {
    case 2:
        {
            this->swapChainPanel = safe_cast<::Windows::UI::Xaml::Controls::SwapChainPanel^>(__target);
        }
        break;
    case 3:
        {
            this->bottomAppBar = safe_cast<::Windows::UI::Xaml::Controls::AppBar^>(__target);
        }
        break;
    case 4:
        {
            ::Windows::UI::Xaml::Controls::AppBarButton^ element4 = safe_cast<::Windows::UI::Xaml::Controls::AppBarButton^>(__target);
            (safe_cast<::Windows::UI::Xaml::Controls::AppBarButton^>(element4))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::Model_Viewer_3d::DirectXPage::*)
                (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&DirectXPage::AppBarButton_Click);
        }
        break;
    }
    _contentLoaded = true;
}

::Windows::UI::Xaml::Markup::IComponentConnector^ ::Model_Viewer_3d::DirectXPage::GetBindingConnector(int __connectionId, ::Platform::Object^ __target)
{
    __connectionId;         // unreferenced
    __target;               // unreferenced
    return nullptr;
}

#pragma warning(pop)


