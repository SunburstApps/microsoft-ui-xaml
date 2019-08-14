// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "TabView.h"

CppWinRTActivatableClassWithDPFactory(TabView)

GlobalDependencyProperty TabViewProperties::s_AddTabButtonCommandProperty{ nullptr };
GlobalDependencyProperty TabViewProperties::s_AddTabButtonCommandParameterProperty{ nullptr };
GlobalDependencyProperty TabViewProperties::s_AllowDropTabsProperty{ nullptr };
GlobalDependencyProperty TabViewProperties::s_CanDragTabsProperty{ nullptr };
GlobalDependencyProperty TabViewProperties::s_CanReorderTabsProperty{ nullptr };
GlobalDependencyProperty TabViewProperties::s_IsAddTabButtonVisibleProperty{ nullptr };
GlobalDependencyProperty TabViewProperties::s_SelectedIndexProperty{ nullptr };
GlobalDependencyProperty TabViewProperties::s_SelectedItemProperty{ nullptr };
GlobalDependencyProperty TabViewProperties::s_TabItemsProperty{ nullptr };
GlobalDependencyProperty TabViewProperties::s_TabItemsSourceProperty{ nullptr };
GlobalDependencyProperty TabViewProperties::s_TabItemTemplateProperty{ nullptr };
GlobalDependencyProperty TabViewProperties::s_TabItemTemplateSelectorProperty{ nullptr };
GlobalDependencyProperty TabViewProperties::s_TabStripFooterProperty{ nullptr };
GlobalDependencyProperty TabViewProperties::s_TabStripFooterTemplateProperty{ nullptr };
GlobalDependencyProperty TabViewProperties::s_TabStripHeaderProperty{ nullptr };
GlobalDependencyProperty TabViewProperties::s_TabStripHeaderTemplateProperty{ nullptr };
GlobalDependencyProperty TabViewProperties::s_TabWidthModeProperty{ nullptr };

TabViewProperties::TabViewProperties()
    : m_addTabButtonClickEventSource{static_cast<TabView*>(this)}
    , m_selectionChangedEventSource{static_cast<TabView*>(this)}
    , m_tabCloseRequestedEventSource{static_cast<TabView*>(this)}
    , m_tabDragCompletedEventSource{static_cast<TabView*>(this)}
    , m_tabDragStartingEventSource{static_cast<TabView*>(this)}
    , m_tabDroppedOutsideEventSource{static_cast<TabView*>(this)}
    , m_tabStripDragOverEventSource{static_cast<TabView*>(this)}
    , m_tabStripDropEventSource{static_cast<TabView*>(this)}
{
    EnsureProperties();
}

void TabViewProperties::EnsureProperties()
{
    if (!s_AddTabButtonCommandProperty)
    {
        s_AddTabButtonCommandProperty =
            InitializeDependencyProperty(
                L"AddTabButtonCommand",
                winrt::name_of<winrt::ICommand>(),
                winrt::name_of<winrt::TabView>(),
                false /* isAttached */,
                ValueHelper<winrt::ICommand>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_AddTabButtonCommandParameterProperty)
    {
        s_AddTabButtonCommandParameterProperty =
            InitializeDependencyProperty(
                L"AddTabButtonCommandParameter",
                winrt::name_of<winrt::IInspectable>(),
                winrt::name_of<winrt::TabView>(),
                false /* isAttached */,
                ValueHelper<winrt::IInspectable>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_AllowDropTabsProperty)
    {
        s_AllowDropTabsProperty =
            InitializeDependencyProperty(
                L"AllowDropTabs",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::TabView>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxValueIfNecessary(true),
                nullptr);
    }
    if (!s_CanDragTabsProperty)
    {
        s_CanDragTabsProperty =
            InitializeDependencyProperty(
                L"CanDragTabs",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::TabView>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxValueIfNecessary(true),
                nullptr);
    }
    if (!s_CanReorderTabsProperty)
    {
        s_CanReorderTabsProperty =
            InitializeDependencyProperty(
                L"CanReorderTabs",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::TabView>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxValueIfNecessary(true),
                nullptr);
    }
    if (!s_IsAddTabButtonVisibleProperty)
    {
        s_IsAddTabButtonVisibleProperty =
            InitializeDependencyProperty(
                L"IsAddTabButtonVisible",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::TabView>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxValueIfNecessary(true),
                nullptr);
    }
    if (!s_SelectedIndexProperty)
    {
        s_SelectedIndexProperty =
            InitializeDependencyProperty(
                L"SelectedIndex",
                winrt::name_of<int>(),
                winrt::name_of<winrt::TabView>(),
                false /* isAttached */,
                ValueHelper<int>::BoxValueIfNecessary(-1),
                winrt::PropertyChangedCallback(&OnSelectedIndexPropertyChanged));
    }
    if (!s_SelectedItemProperty)
    {
        s_SelectedItemProperty =
            InitializeDependencyProperty(
                L"SelectedItem",
                winrt::name_of<winrt::IInspectable>(),
                winrt::name_of<winrt::TabView>(),
                false /* isAttached */,
                ValueHelper<winrt::IInspectable>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnSelectedItemPropertyChanged));
    }
    if (!s_TabItemsProperty)
    {
        s_TabItemsProperty =
            InitializeDependencyProperty(
                L"TabItems",
                winrt::name_of<winrt::ItemCollection>(),
                winrt::name_of<winrt::TabView>(),
                false /* isAttached */,
                ValueHelper<winrt::ItemCollection>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_TabItemsSourceProperty)
    {
        s_TabItemsSourceProperty =
            InitializeDependencyProperty(
                L"TabItemsSource",
                winrt::name_of<winrt::IInspectable>(),
                winrt::name_of<winrt::TabView>(),
                false /* isAttached */,
                ValueHelper<winrt::IInspectable>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_TabItemTemplateProperty)
    {
        s_TabItemTemplateProperty =
            InitializeDependencyProperty(
                L"TabItemTemplate",
                winrt::name_of<winrt::DataTemplate>(),
                winrt::name_of<winrt::TabView>(),
                false /* isAttached */,
                ValueHelper<winrt::DataTemplate>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_TabItemTemplateSelectorProperty)
    {
        s_TabItemTemplateSelectorProperty =
            InitializeDependencyProperty(
                L"TabItemTemplateSelector",
                winrt::name_of<winrt::DataTemplateSelector>(),
                winrt::name_of<winrt::TabView>(),
                false /* isAttached */,
                ValueHelper<winrt::DataTemplateSelector>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_TabStripFooterProperty)
    {
        s_TabStripFooterProperty =
            InitializeDependencyProperty(
                L"TabStripFooter",
                winrt::name_of<winrt::IInspectable>(),
                winrt::name_of<winrt::TabView>(),
                false /* isAttached */,
                ValueHelper<winrt::IInspectable>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_TabStripFooterTemplateProperty)
    {
        s_TabStripFooterTemplateProperty =
            InitializeDependencyProperty(
                L"TabStripFooterTemplate",
                winrt::name_of<winrt::DataTemplate>(),
                winrt::name_of<winrt::TabView>(),
                false /* isAttached */,
                ValueHelper<winrt::DataTemplate>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_TabStripHeaderProperty)
    {
        s_TabStripHeaderProperty =
            InitializeDependencyProperty(
                L"TabStripHeader",
                winrt::name_of<winrt::IInspectable>(),
                winrt::name_of<winrt::TabView>(),
                false /* isAttached */,
                ValueHelper<winrt::IInspectable>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_TabStripHeaderTemplateProperty)
    {
        s_TabStripHeaderTemplateProperty =
            InitializeDependencyProperty(
                L"TabStripHeaderTemplate",
                winrt::name_of<winrt::DataTemplate>(),
                winrt::name_of<winrt::TabView>(),
                false /* isAttached */,
                ValueHelper<winrt::DataTemplate>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_TabWidthModeProperty)
    {
        s_TabWidthModeProperty =
            InitializeDependencyProperty(
                L"TabWidthMode",
                winrt::name_of<winrt::TabViewWidthMode>(),
                winrt::name_of<winrt::TabView>(),
                false /* isAttached */,
                ValueHelper<winrt::TabViewWidthMode>::BoxValueIfNecessary(winrt::TabViewWidthMode::SizeToContent),
                winrt::PropertyChangedCallback(&OnTabWidthModePropertyChanged));
    }
}

void TabViewProperties::ClearProperties()
{
    s_AddTabButtonCommandProperty = nullptr;
    s_AddTabButtonCommandParameterProperty = nullptr;
    s_AllowDropTabsProperty = nullptr;
    s_CanDragTabsProperty = nullptr;
    s_CanReorderTabsProperty = nullptr;
    s_IsAddTabButtonVisibleProperty = nullptr;
    s_SelectedIndexProperty = nullptr;
    s_SelectedItemProperty = nullptr;
    s_TabItemsProperty = nullptr;
    s_TabItemsSourceProperty = nullptr;
    s_TabItemTemplateProperty = nullptr;
    s_TabItemTemplateSelectorProperty = nullptr;
    s_TabStripFooterProperty = nullptr;
    s_TabStripFooterTemplateProperty = nullptr;
    s_TabStripHeaderProperty = nullptr;
    s_TabStripHeaderTemplateProperty = nullptr;
    s_TabWidthModeProperty = nullptr;
}

void TabViewProperties::OnSelectedIndexPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TabView>();
    winrt::get_self<TabView>(owner)->OnSelectedIndexPropertyChanged(args);
}

void TabViewProperties::OnSelectedItemPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TabView>();
    winrt::get_self<TabView>(owner)->OnSelectedItemPropertyChanged(args);
}

void TabViewProperties::OnTabWidthModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TabView>();
    winrt::get_self<TabView>(owner)->OnTabWidthModePropertyChanged(args);
}

void TabViewProperties::AddTabButtonCommand(winrt::ICommand const& value)
{
    static_cast<TabView*>(this)->SetValue(s_AddTabButtonCommandProperty, ValueHelper<winrt::ICommand>::BoxValueIfNecessary(value));
}

winrt::ICommand TabViewProperties::AddTabButtonCommand()
{
    return ValueHelper<winrt::ICommand>::CastOrUnbox(static_cast<TabView*>(this)->GetValue(s_AddTabButtonCommandProperty));
}

void TabViewProperties::AddTabButtonCommandParameter(winrt::IInspectable const& value)
{
    static_cast<TabView*>(this)->SetValue(s_AddTabButtonCommandParameterProperty, ValueHelper<winrt::IInspectable>::BoxValueIfNecessary(value));
}

winrt::IInspectable TabViewProperties::AddTabButtonCommandParameter()
{
    return ValueHelper<winrt::IInspectable>::CastOrUnbox(static_cast<TabView*>(this)->GetValue(s_AddTabButtonCommandParameterProperty));
}

void TabViewProperties::AllowDropTabs(bool value)
{
    static_cast<TabView*>(this)->SetValue(s_AllowDropTabsProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
}

bool TabViewProperties::AllowDropTabs()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<TabView*>(this)->GetValue(s_AllowDropTabsProperty));
}

void TabViewProperties::CanDragTabs(bool value)
{
    static_cast<TabView*>(this)->SetValue(s_CanDragTabsProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
}

bool TabViewProperties::CanDragTabs()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<TabView*>(this)->GetValue(s_CanDragTabsProperty));
}

void TabViewProperties::CanReorderTabs(bool value)
{
    static_cast<TabView*>(this)->SetValue(s_CanReorderTabsProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
}

bool TabViewProperties::CanReorderTabs()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<TabView*>(this)->GetValue(s_CanReorderTabsProperty));
}

void TabViewProperties::IsAddTabButtonVisible(bool value)
{
    static_cast<TabView*>(this)->SetValue(s_IsAddTabButtonVisibleProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
}

bool TabViewProperties::IsAddTabButtonVisible()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<TabView*>(this)->GetValue(s_IsAddTabButtonVisibleProperty));
}

void TabViewProperties::SelectedIndex(int value)
{
    static_cast<TabView*>(this)->SetValue(s_SelectedIndexProperty, ValueHelper<int>::BoxValueIfNecessary(value));
}

int TabViewProperties::SelectedIndex()
{
    return ValueHelper<int>::CastOrUnbox(static_cast<TabView*>(this)->GetValue(s_SelectedIndexProperty));
}

void TabViewProperties::SelectedItem(winrt::IInspectable const& value)
{
    static_cast<TabView*>(this)->SetValue(s_SelectedItemProperty, ValueHelper<winrt::IInspectable>::BoxValueIfNecessary(value));
}

winrt::IInspectable TabViewProperties::SelectedItem()
{
    return ValueHelper<winrt::IInspectable>::CastOrUnbox(static_cast<TabView*>(this)->GetValue(s_SelectedItemProperty));
}

void TabViewProperties::TabItems(winrt::ItemCollection const& value)
{
    static_cast<TabView*>(this)->SetValue(s_TabItemsProperty, ValueHelper<winrt::ItemCollection>::BoxValueIfNecessary(value));
}

winrt::ItemCollection TabViewProperties::TabItems()
{
    return ValueHelper<winrt::ItemCollection>::CastOrUnbox(static_cast<TabView*>(this)->GetValue(s_TabItemsProperty));
}

void TabViewProperties::TabItemsSource(winrt::IInspectable const& value)
{
    static_cast<TabView*>(this)->SetValue(s_TabItemsSourceProperty, ValueHelper<winrt::IInspectable>::BoxValueIfNecessary(value));
}

winrt::IInspectable TabViewProperties::TabItemsSource()
{
    return ValueHelper<winrt::IInspectable>::CastOrUnbox(static_cast<TabView*>(this)->GetValue(s_TabItemsSourceProperty));
}

void TabViewProperties::TabItemTemplate(winrt::DataTemplate const& value)
{
    static_cast<TabView*>(this)->SetValue(s_TabItemTemplateProperty, ValueHelper<winrt::DataTemplate>::BoxValueIfNecessary(value));
}

winrt::DataTemplate TabViewProperties::TabItemTemplate()
{
    return ValueHelper<winrt::DataTemplate>::CastOrUnbox(static_cast<TabView*>(this)->GetValue(s_TabItemTemplateProperty));
}

void TabViewProperties::TabItemTemplateSelector(winrt::DataTemplateSelector const& value)
{
    static_cast<TabView*>(this)->SetValue(s_TabItemTemplateSelectorProperty, ValueHelper<winrt::DataTemplateSelector>::BoxValueIfNecessary(value));
}

winrt::DataTemplateSelector TabViewProperties::TabItemTemplateSelector()
{
    return ValueHelper<winrt::DataTemplateSelector>::CastOrUnbox(static_cast<TabView*>(this)->GetValue(s_TabItemTemplateSelectorProperty));
}

void TabViewProperties::TabStripFooter(winrt::IInspectable const& value)
{
    static_cast<TabView*>(this)->SetValue(s_TabStripFooterProperty, ValueHelper<winrt::IInspectable>::BoxValueIfNecessary(value));
}

winrt::IInspectable TabViewProperties::TabStripFooter()
{
    return ValueHelper<winrt::IInspectable>::CastOrUnbox(static_cast<TabView*>(this)->GetValue(s_TabStripFooterProperty));
}

void TabViewProperties::TabStripFooterTemplate(winrt::DataTemplate const& value)
{
    static_cast<TabView*>(this)->SetValue(s_TabStripFooterTemplateProperty, ValueHelper<winrt::DataTemplate>::BoxValueIfNecessary(value));
}

winrt::DataTemplate TabViewProperties::TabStripFooterTemplate()
{
    return ValueHelper<winrt::DataTemplate>::CastOrUnbox(static_cast<TabView*>(this)->GetValue(s_TabStripFooterTemplateProperty));
}

void TabViewProperties::TabStripHeader(winrt::IInspectable const& value)
{
    static_cast<TabView*>(this)->SetValue(s_TabStripHeaderProperty, ValueHelper<winrt::IInspectable>::BoxValueIfNecessary(value));
}

winrt::IInspectable TabViewProperties::TabStripHeader()
{
    return ValueHelper<winrt::IInspectable>::CastOrUnbox(static_cast<TabView*>(this)->GetValue(s_TabStripHeaderProperty));
}

void TabViewProperties::TabStripHeaderTemplate(winrt::DataTemplate const& value)
{
    static_cast<TabView*>(this)->SetValue(s_TabStripHeaderTemplateProperty, ValueHelper<winrt::DataTemplate>::BoxValueIfNecessary(value));
}

winrt::DataTemplate TabViewProperties::TabStripHeaderTemplate()
{
    return ValueHelper<winrt::DataTemplate>::CastOrUnbox(static_cast<TabView*>(this)->GetValue(s_TabStripHeaderTemplateProperty));
}

void TabViewProperties::TabWidthMode(winrt::TabViewWidthMode const& value)
{
    static_cast<TabView*>(this)->SetValue(s_TabWidthModeProperty, ValueHelper<winrt::TabViewWidthMode>::BoxValueIfNecessary(value));
}

winrt::TabViewWidthMode TabViewProperties::TabWidthMode()
{
    return ValueHelper<winrt::TabViewWidthMode>::CastOrUnbox(static_cast<TabView*>(this)->GetValue(s_TabWidthModeProperty));
}

winrt::event_token TabViewProperties::AddTabButtonClick(winrt::TypedEventHandler<winrt::TabView, winrt::IInspectable> const& value)
{
    return m_addTabButtonClickEventSource.add(value);
}

void TabViewProperties::AddTabButtonClick(winrt::event_token const& token)
{
    m_addTabButtonClickEventSource.remove(token);
}

winrt::event_token TabViewProperties::SelectionChanged(winrt::SelectionChangedEventHandler const& value)
{
    return m_selectionChangedEventSource.add(value);
}

void TabViewProperties::SelectionChanged(winrt::event_token const& token)
{
    m_selectionChangedEventSource.remove(token);
}

winrt::event_token TabViewProperties::TabCloseRequested(winrt::TypedEventHandler<winrt::TabView, winrt::TabViewTabCloseRequestedEventArgs> const& value)
{
    return m_tabCloseRequestedEventSource.add(value);
}

void TabViewProperties::TabCloseRequested(winrt::event_token const& token)
{
    m_tabCloseRequestedEventSource.remove(token);
}

winrt::event_token TabViewProperties::TabDragCompleted(winrt::TypedEventHandler<winrt::TabView, winrt::TabViewTabDragCompletedEventArgs> const& value)
{
    return m_tabDragCompletedEventSource.add(value);
}

void TabViewProperties::TabDragCompleted(winrt::event_token const& token)
{
    m_tabDragCompletedEventSource.remove(token);
}

winrt::event_token TabViewProperties::TabDragStarting(winrt::TypedEventHandler<winrt::TabView, winrt::TabViewTabDragStartingEventArgs> const& value)
{
    return m_tabDragStartingEventSource.add(value);
}

void TabViewProperties::TabDragStarting(winrt::event_token const& token)
{
    m_tabDragStartingEventSource.remove(token);
}

winrt::event_token TabViewProperties::TabDroppedOutside(winrt::TypedEventHandler<winrt::TabView, winrt::TabViewTabDroppedOutsideEventArgs> const& value)
{
    return m_tabDroppedOutsideEventSource.add(value);
}

void TabViewProperties::TabDroppedOutside(winrt::event_token const& token)
{
    m_tabDroppedOutsideEventSource.remove(token);
}

winrt::event_token TabViewProperties::TabStripDragOver(winrt::DragEventHandler const& value)
{
    return m_tabStripDragOverEventSource.add(value);
}

void TabViewProperties::TabStripDragOver(winrt::event_token const& token)
{
    m_tabStripDragOverEventSource.remove(token);
}

winrt::event_token TabViewProperties::TabStripDrop(winrt::DragEventHandler const& value)
{
    return m_tabStripDropEventSource.add(value);
}

void TabViewProperties::TabStripDrop(winrt::event_token const& token)
{
    m_tabStripDropEventSource.remove(token);
}
