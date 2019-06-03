// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class TeachingTipProperties
{
public:
    TeachingTipProperties();

    void ActionButtonCommand(winrt::ICommand const& value);
    winrt::ICommand ActionButtonCommand();

    void ActionButtonCommandParameter(winrt::IInspectable const& value);
    winrt::IInspectable ActionButtonCommandParameter();

    void ActionButtonContent(winrt::IInspectable const& value);
    winrt::IInspectable ActionButtonContent();

    void ActionButtonStyle(winrt::Style const& value);
    winrt::Style ActionButtonStyle();

    void CloseButtonCommand(winrt::ICommand const& value);
    winrt::ICommand CloseButtonCommand();

    void CloseButtonCommandParameter(winrt::IInspectable const& value);
    winrt::IInspectable CloseButtonCommandParameter();

    void CloseButtonContent(winrt::IInspectable const& value);
    winrt::IInspectable CloseButtonContent();

    void CloseButtonStyle(winrt::Style const& value);
    winrt::Style CloseButtonStyle();

    void HeroContent(winrt::UIElement const& value);
    winrt::UIElement HeroContent();

    void HeroContentPlacement(winrt::TeachingTipHeroContentPlacementMode const& value);
    winrt::TeachingTipHeroContentPlacementMode HeroContentPlacement();

    void IconSource(winrt::IconSource const& value);
    winrt::IconSource IconSource();

    void IsLightDismissEnabled(bool value);
    bool IsLightDismissEnabled();

    void IsOpen(bool value);
    bool IsOpen();

    void PlacementMargin(winrt::Thickness const& value);
    winrt::Thickness PlacementMargin();

    void PreferredPlacement(winrt::TeachingTipPlacementMode const& value);
    winrt::TeachingTipPlacementMode PreferredPlacement();

    void ShouldConstrainToRootBounds(bool value);
    bool ShouldConstrainToRootBounds();

    void Subtitle(winrt::hstring const& value);
    winrt::hstring Subtitle();

    void TailVisibility(winrt::TeachingTipTailVisibility const& value);
    winrt::TeachingTipTailVisibility TailVisibility();

    void Target(winrt::FrameworkElement const& value);
    winrt::FrameworkElement Target();

    void TemplateSettings(winrt::TeachingTipTemplateSettings const& value);
    winrt::TeachingTipTemplateSettings TemplateSettings();

    void Title(winrt::hstring const& value);
    winrt::hstring Title();

    static winrt::DependencyProperty ActionButtonCommandProperty() { return s_ActionButtonCommandProperty; }
    static winrt::DependencyProperty ActionButtonCommandParameterProperty() { return s_ActionButtonCommandParameterProperty; }
    static winrt::DependencyProperty ActionButtonContentProperty() { return s_ActionButtonContentProperty; }
    static winrt::DependencyProperty ActionButtonStyleProperty() { return s_ActionButtonStyleProperty; }
    static winrt::DependencyProperty CloseButtonCommandProperty() { return s_CloseButtonCommandProperty; }
    static winrt::DependencyProperty CloseButtonCommandParameterProperty() { return s_CloseButtonCommandParameterProperty; }
    static winrt::DependencyProperty CloseButtonContentProperty() { return s_CloseButtonContentProperty; }
    static winrt::DependencyProperty CloseButtonStyleProperty() { return s_CloseButtonStyleProperty; }
    static winrt::DependencyProperty HeroContentProperty() { return s_HeroContentProperty; }
    static winrt::DependencyProperty HeroContentPlacementProperty() { return s_HeroContentPlacementProperty; }
    static winrt::DependencyProperty IconSourceProperty() { return s_IconSourceProperty; }
    static winrt::DependencyProperty IsLightDismissEnabledProperty() { return s_IsLightDismissEnabledProperty; }
    static winrt::DependencyProperty IsOpenProperty() { return s_IsOpenProperty; }
    static winrt::DependencyProperty PlacementMarginProperty() { return s_PlacementMarginProperty; }
    static winrt::DependencyProperty PreferredPlacementProperty() { return s_PreferredPlacementProperty; }
    static winrt::DependencyProperty ShouldConstrainToRootBoundsProperty() { return s_ShouldConstrainToRootBoundsProperty; }
    static winrt::DependencyProperty SubtitleProperty() { return s_SubtitleProperty; }
    static winrt::DependencyProperty TailVisibilityProperty() { return s_TailVisibilityProperty; }
    static winrt::DependencyProperty TargetProperty() { return s_TargetProperty; }
    static winrt::DependencyProperty TemplateSettingsProperty() { return s_TemplateSettingsProperty; }
    static winrt::DependencyProperty TitleProperty() { return s_TitleProperty; }

    static GlobalDependencyProperty s_ActionButtonCommandProperty;
    static GlobalDependencyProperty s_ActionButtonCommandParameterProperty;
    static GlobalDependencyProperty s_ActionButtonContentProperty;
    static GlobalDependencyProperty s_ActionButtonStyleProperty;
    static GlobalDependencyProperty s_CloseButtonCommandProperty;
    static GlobalDependencyProperty s_CloseButtonCommandParameterProperty;
    static GlobalDependencyProperty s_CloseButtonContentProperty;
    static GlobalDependencyProperty s_CloseButtonStyleProperty;
    static GlobalDependencyProperty s_HeroContentProperty;
    static GlobalDependencyProperty s_HeroContentPlacementProperty;
    static GlobalDependencyProperty s_IconSourceProperty;
    static GlobalDependencyProperty s_IsLightDismissEnabledProperty;
    static GlobalDependencyProperty s_IsOpenProperty;
    static GlobalDependencyProperty s_PlacementMarginProperty;
    static GlobalDependencyProperty s_PreferredPlacementProperty;
    static GlobalDependencyProperty s_ShouldConstrainToRootBoundsProperty;
    static GlobalDependencyProperty s_SubtitleProperty;
    static GlobalDependencyProperty s_TailVisibilityProperty;
    static GlobalDependencyProperty s_TargetProperty;
    static GlobalDependencyProperty s_TemplateSettingsProperty;
    static GlobalDependencyProperty s_TitleProperty;

    winrt::event_token ActionButtonClick(winrt::TypedEventHandler<winrt::TeachingTip, winrt::IInspectable> const& value);
    void ActionButtonClick(winrt::event_token const& token);
    winrt::event_token CloseButtonClick(winrt::TypedEventHandler<winrt::TeachingTip, winrt::IInspectable> const& value);
    void CloseButtonClick(winrt::event_token const& token);
    winrt::event_token Closed(winrt::TypedEventHandler<winrt::TeachingTip, winrt::TeachingTipClosedEventArgs> const& value);
    void Closed(winrt::event_token const& token);
    winrt::event_token Closing(winrt::TypedEventHandler<winrt::TeachingTip, winrt::TeachingTipClosingEventArgs> const& value);
    void Closing(winrt::event_token const& token);

    event_source<winrt::TypedEventHandler<winrt::TeachingTip, winrt::IInspectable>> m_actionButtonClickEventSource;
    event_source<winrt::TypedEventHandler<winrt::TeachingTip, winrt::IInspectable>> m_closeButtonClickEventSource;
    event_source<winrt::TypedEventHandler<winrt::TeachingTip, winrt::TeachingTipClosedEventArgs>> m_closedEventSource;
    event_source<winrt::TypedEventHandler<winrt::TeachingTip, winrt::TeachingTipClosingEventArgs>> m_closingEventSource;

    static void EnsureProperties();
    static void ClearProperties();

    static void OnActionButtonCommandPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnActionButtonCommandParameterPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnActionButtonContentPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnActionButtonStylePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnCloseButtonCommandPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnCloseButtonCommandParameterPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnCloseButtonContentPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnCloseButtonStylePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnHeroContentPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnHeroContentPlacementPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnIconSourcePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnIsLightDismissEnabledPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnIsOpenPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnPlacementMarginPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnPreferredPlacementPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnShouldConstrainToRootBoundsPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnSubtitlePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnTailVisibilityPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnTargetPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnTemplateSettingsPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnTitlePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);
};
