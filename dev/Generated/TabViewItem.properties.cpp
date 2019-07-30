// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "TabViewItem.h"

CppWinRTActivatableClassWithDPFactory(TabViewItem)

GlobalDependencyProperty TabViewItemProperties::s_HeaderProperty{ nullptr };
GlobalDependencyProperty TabViewItemProperties::s_HeaderTemplateProperty{ nullptr };
GlobalDependencyProperty TabViewItemProperties::s_IconProperty{ nullptr };
GlobalDependencyProperty TabViewItemProperties::s_IsCloseableProperty{ nullptr };

TabViewItemProperties::TabViewItemProperties()
    : m_tabClosingEventSource{static_cast<TabViewItem*>(this)}
{
    EnsureProperties();
}

void TabViewItemProperties::EnsureProperties()
{
    if (!s_HeaderProperty)
    {
        s_HeaderProperty =
            InitializeDependencyProperty(
                L"Header",
                winrt::name_of<winrt::IInspectable>(),
                winrt::name_of<winrt::TabViewItem>(),
                false /* isAttached */,
                ValueHelper<winrt::IInspectable>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_HeaderTemplateProperty)
    {
        s_HeaderTemplateProperty =
            InitializeDependencyProperty(
                L"HeaderTemplate",
                winrt::name_of<winrt::DataTemplate>(),
                winrt::name_of<winrt::TabViewItem>(),
                false /* isAttached */,
                ValueHelper<winrt::DataTemplate>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_IconProperty)
    {
        s_IconProperty =
            InitializeDependencyProperty(
                L"Icon",
                winrt::name_of<winrt::IconElement>(),
                winrt::name_of<winrt::TabViewItem>(),
                false /* isAttached */,
                ValueHelper<winrt::IconElement>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_IsCloseableProperty)
    {
        s_IsCloseableProperty =
            InitializeDependencyProperty(
                L"IsCloseable",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::TabViewItem>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxValueIfNecessary(true),
                winrt::PropertyChangedCallback(&OnIsCloseablePropertyChanged));
    }
}

void TabViewItemProperties::ClearProperties()
{
    s_HeaderProperty = nullptr;
    s_HeaderTemplateProperty = nullptr;
    s_IconProperty = nullptr;
    s_IsCloseableProperty = nullptr;
}

void TabViewItemProperties::OnIsCloseablePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TabViewItem>();
    winrt::get_self<TabViewItem>(owner)->OnIsCloseablePropertyChanged(args);
}

void TabViewItemProperties::Header(winrt::IInspectable const& value)
{
    static_cast<TabViewItem*>(this)->SetValue(s_HeaderProperty, ValueHelper<winrt::IInspectable>::BoxValueIfNecessary(value));
}

winrt::IInspectable TabViewItemProperties::Header()
{
    return ValueHelper<winrt::IInspectable>::CastOrUnbox(static_cast<TabViewItem*>(this)->GetValue(s_HeaderProperty));
}

void TabViewItemProperties::HeaderTemplate(winrt::DataTemplate const& value)
{
    static_cast<TabViewItem*>(this)->SetValue(s_HeaderTemplateProperty, ValueHelper<winrt::DataTemplate>::BoxValueIfNecessary(value));
}

winrt::DataTemplate TabViewItemProperties::HeaderTemplate()
{
    return ValueHelper<winrt::DataTemplate>::CastOrUnbox(static_cast<TabViewItem*>(this)->GetValue(s_HeaderTemplateProperty));
}

void TabViewItemProperties::Icon(winrt::IconElement const& value)
{
    static_cast<TabViewItem*>(this)->SetValue(s_IconProperty, ValueHelper<winrt::IconElement>::BoxValueIfNecessary(value));
}

winrt::IconElement TabViewItemProperties::Icon()
{
    return ValueHelper<winrt::IconElement>::CastOrUnbox(static_cast<TabViewItem*>(this)->GetValue(s_IconProperty));
}

void TabViewItemProperties::IsCloseable(bool value)
{
    static_cast<TabViewItem*>(this)->SetValue(s_IsCloseableProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
}

bool TabViewItemProperties::IsCloseable()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<TabViewItem*>(this)->GetValue(s_IsCloseableProperty));
}

winrt::event_token TabViewItemProperties::TabClosing(winrt::TypedEventHandler<winrt::TabViewItem, winrt::TabViewTabClosingEventArgs> const& value)
{
    return m_tabClosingEventSource.add(value);
}

void TabViewItemProperties::TabClosing(winrt::event_token const& token)
{
    m_tabClosingEventSource.remove(token);
}
