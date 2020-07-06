// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "ScrollView.h"

namespace winrt::Microsoft::UI::Xaml::Controls
{
    CppWinRTActivatableClassWithDPFactory(ScrollView)
}

#include "ScrollView.g.cpp"

GlobalDependencyProperty ScrollViewProperties::s_ComputedHorizontalScrollBarVisibilityProperty{ nullptr };
GlobalDependencyProperty ScrollViewProperties::s_ComputedVerticalScrollBarVisibilityProperty{ nullptr };
GlobalDependencyProperty ScrollViewProperties::s_ContentProperty{ nullptr };
GlobalDependencyProperty ScrollViewProperties::s_ContentOrientationProperty{ nullptr };
GlobalDependencyProperty ScrollViewProperties::s_HorizontalAnchorRatioProperty{ nullptr };
GlobalDependencyProperty ScrollViewProperties::s_HorizontalScrollBarVisibilityProperty{ nullptr };
GlobalDependencyProperty ScrollViewProperties::s_HorizontalScrollChainingModeProperty{ nullptr };
GlobalDependencyProperty ScrollViewProperties::s_HorizontalScrollControllerProperty{ nullptr };
GlobalDependencyProperty ScrollViewProperties::s_HorizontalScrollModeProperty{ nullptr };
GlobalDependencyProperty ScrollViewProperties::s_HorizontalScrollRailingModeProperty{ nullptr };
GlobalDependencyProperty ScrollViewProperties::s_IgnoredInputKindProperty{ nullptr };
GlobalDependencyProperty ScrollViewProperties::s_MaxZoomFactorProperty{ nullptr };
GlobalDependencyProperty ScrollViewProperties::s_MinZoomFactorProperty{ nullptr };
GlobalDependencyProperty ScrollViewProperties::s_ScrollPresenterProperty{ nullptr };
GlobalDependencyProperty ScrollViewProperties::s_VerticalAnchorRatioProperty{ nullptr };
GlobalDependencyProperty ScrollViewProperties::s_VerticalScrollBarVisibilityProperty{ nullptr };
GlobalDependencyProperty ScrollViewProperties::s_VerticalScrollChainingModeProperty{ nullptr };
GlobalDependencyProperty ScrollViewProperties::s_VerticalScrollControllerProperty{ nullptr };
GlobalDependencyProperty ScrollViewProperties::s_VerticalScrollModeProperty{ nullptr };
GlobalDependencyProperty ScrollViewProperties::s_VerticalScrollRailingModeProperty{ nullptr };
GlobalDependencyProperty ScrollViewProperties::s_ZoomChainingModeProperty{ nullptr };
GlobalDependencyProperty ScrollViewProperties::s_ZoomModeProperty{ nullptr };

ScrollViewProperties::ScrollViewProperties()
    : m_anchorRequestedEventSource{static_cast<ScrollView*>(this)}
    , m_bringingIntoViewEventSource{static_cast<ScrollView*>(this)}
    , m_extentChangedEventSource{static_cast<ScrollView*>(this)}
    , m_scrollAnimationStartingEventSource{static_cast<ScrollView*>(this)}
    , m_scrollCompletedEventSource{static_cast<ScrollView*>(this)}
    , m_stateChangedEventSource{static_cast<ScrollView*>(this)}
    , m_viewChangedEventSource{static_cast<ScrollView*>(this)}
    , m_zoomAnimationStartingEventSource{static_cast<ScrollView*>(this)}
    , m_zoomCompletedEventSource{static_cast<ScrollView*>(this)}
{
    EnsureProperties();
}

void ScrollViewProperties::EnsureProperties()
{
    if (!s_ComputedHorizontalScrollBarVisibilityProperty)
    {
        s_ComputedHorizontalScrollBarVisibilityProperty =
            InitializeDependencyProperty(
                L"ComputedHorizontalScrollBarVisibility",
                winrt::name_of<winrt::Visibility>(),
                winrt::name_of<winrt::ScrollView>(),
                false /* isAttached */,
                ValueHelper<winrt::Visibility>::BoxValueIfNecessary(ScrollView::s_defaultComputedHorizontalScrollBarVisibility),
                winrt::PropertyChangedCallback(&OnComputedHorizontalScrollBarVisibilityPropertyChanged));
    }
    if (!s_ComputedVerticalScrollBarVisibilityProperty)
    {
        s_ComputedVerticalScrollBarVisibilityProperty =
            InitializeDependencyProperty(
                L"ComputedVerticalScrollBarVisibility",
                winrt::name_of<winrt::Visibility>(),
                winrt::name_of<winrt::ScrollView>(),
                false /* isAttached */,
                ValueHelper<winrt::Visibility>::BoxValueIfNecessary(ScrollView::s_defaultComputedVerticalScrollBarVisibility),
                winrt::PropertyChangedCallback(&OnComputedVerticalScrollBarVisibilityPropertyChanged));
    }
    if (!s_ContentProperty)
    {
        s_ContentProperty =
            InitializeDependencyProperty(
                L"Content",
                winrt::name_of<winrt::UIElement>(),
                winrt::name_of<winrt::ScrollView>(),
                false /* isAttached */,
                ValueHelper<winrt::UIElement>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnContentPropertyChanged));
    }
    if (!s_ContentOrientationProperty)
    {
        s_ContentOrientationProperty =
            InitializeDependencyProperty(
                L"ContentOrientation",
                winrt::name_of<winrt::ContentOrientation>(),
                winrt::name_of<winrt::ScrollView>(),
                false /* isAttached */,
                ValueHelper<winrt::ContentOrientation>::BoxValueIfNecessary(ScrollView::s_defaultContentOrientation),
                winrt::PropertyChangedCallback(&OnContentOrientationPropertyChanged));
    }
    if (!s_HorizontalAnchorRatioProperty)
    {
        s_HorizontalAnchorRatioProperty =
            InitializeDependencyProperty(
                L"HorizontalAnchorRatio",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ScrollView>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(ScrollView::s_defaultAnchorRatio),
                winrt::PropertyChangedCallback(&OnHorizontalAnchorRatioPropertyChanged));
    }
    if (!s_HorizontalScrollBarVisibilityProperty)
    {
        s_HorizontalScrollBarVisibilityProperty =
            InitializeDependencyProperty(
                L"HorizontalScrollBarVisibility",
                winrt::name_of<winrt::ScrollBarVisibility>(),
                winrt::name_of<winrt::ScrollView>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollBarVisibility>::BoxValueIfNecessary(ScrollView::s_defaultHorizontalScrollBarVisibility),
                winrt::PropertyChangedCallback(&OnHorizontalScrollBarVisibilityPropertyChanged));
    }
    if (!s_HorizontalScrollChainingModeProperty)
    {
        s_HorizontalScrollChainingModeProperty =
            InitializeDependencyProperty(
                L"HorizontalScrollChainingMode",
                winrt::name_of<winrt::ChainingMode>(),
                winrt::name_of<winrt::ScrollView>(),
                false /* isAttached */,
                ValueHelper<winrt::ChainingMode>::BoxValueIfNecessary(ScrollView::s_defaultHorizontalScrollChainingMode),
                winrt::PropertyChangedCallback(&OnHorizontalScrollChainingModePropertyChanged));
    }
    if (!s_HorizontalScrollControllerProperty)
    {
        s_HorizontalScrollControllerProperty =
            InitializeDependencyProperty(
                L"HorizontalScrollController",
                winrt::name_of<winrt::IScrollController>(),
                winrt::name_of<winrt::ScrollView>(),
                false /* isAttached */,
                ValueHelper<winrt::IScrollController>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnHorizontalScrollControllerPropertyChanged));
    }
    if (!s_HorizontalScrollModeProperty)
    {
        s_HorizontalScrollModeProperty =
            InitializeDependencyProperty(
                L"HorizontalScrollMode",
                winrt::name_of<winrt::ScrollMode>(),
                winrt::name_of<winrt::ScrollView>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollMode>::BoxValueIfNecessary(ScrollView::s_defaultHorizontalScrollMode),
                winrt::PropertyChangedCallback(&OnHorizontalScrollModePropertyChanged));
    }
    if (!s_HorizontalScrollRailingModeProperty)
    {
        s_HorizontalScrollRailingModeProperty =
            InitializeDependencyProperty(
                L"HorizontalScrollRailingMode",
                winrt::name_of<winrt::RailingMode>(),
                winrt::name_of<winrt::ScrollView>(),
                false /* isAttached */,
                ValueHelper<winrt::RailingMode>::BoxValueIfNecessary(ScrollView::s_defaultHorizontalScrollRailingMode),
                winrt::PropertyChangedCallback(&OnHorizontalScrollRailingModePropertyChanged));
    }
    if (!s_IgnoredInputKindProperty)
    {
        s_IgnoredInputKindProperty =
            InitializeDependencyProperty(
                L"IgnoredInputKind",
                winrt::name_of<winrt::InputKind>(),
                winrt::name_of<winrt::ScrollView>(),
                false /* isAttached */,
                ValueHelper<winrt::InputKind>::BoxValueIfNecessary(ScrollView::s_defaultIgnoredInputKind),
                winrt::PropertyChangedCallback(&OnIgnoredInputKindPropertyChanged));
    }
    if (!s_MaxZoomFactorProperty)
    {
        s_MaxZoomFactorProperty =
            InitializeDependencyProperty(
                L"MaxZoomFactor",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ScrollView>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(ScrollView::s_defaultMaxZoomFactor),
                winrt::PropertyChangedCallback(&OnMaxZoomFactorPropertyChanged));
    }
    if (!s_MinZoomFactorProperty)
    {
        s_MinZoomFactorProperty =
            InitializeDependencyProperty(
                L"MinZoomFactor",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ScrollView>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(ScrollView::s_defaultMinZoomFactor),
                winrt::PropertyChangedCallback(&OnMinZoomFactorPropertyChanged));
    }
    if (!s_ScrollPresenterProperty)
    {
        s_ScrollPresenterProperty =
            InitializeDependencyProperty(
                L"ScrollPresenter",
                winrt::name_of<winrt::ScrollPresenter>(),
                winrt::name_of<winrt::ScrollView>(),
                true /* isAttached */,
                ValueHelper<winrt::ScrollPresenter>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnScrollPresenterPropertyChanged));
    }
    if (!s_VerticalAnchorRatioProperty)
    {
        s_VerticalAnchorRatioProperty =
            InitializeDependencyProperty(
                L"VerticalAnchorRatio",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ScrollView>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(ScrollView::s_defaultAnchorRatio),
                winrt::PropertyChangedCallback(&OnVerticalAnchorRatioPropertyChanged));
    }
    if (!s_VerticalScrollBarVisibilityProperty)
    {
        s_VerticalScrollBarVisibilityProperty =
            InitializeDependencyProperty(
                L"VerticalScrollBarVisibility",
                winrt::name_of<winrt::ScrollBarVisibility>(),
                winrt::name_of<winrt::ScrollView>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollBarVisibility>::BoxValueIfNecessary(ScrollView::s_defaultVerticalScrollBarVisibility),
                winrt::PropertyChangedCallback(&OnVerticalScrollBarVisibilityPropertyChanged));
    }
    if (!s_VerticalScrollChainingModeProperty)
    {
        s_VerticalScrollChainingModeProperty =
            InitializeDependencyProperty(
                L"VerticalScrollChainingMode",
                winrt::name_of<winrt::ChainingMode>(),
                winrt::name_of<winrt::ScrollView>(),
                false /* isAttached */,
                ValueHelper<winrt::ChainingMode>::BoxValueIfNecessary(ScrollView::s_defaultVerticalScrollChainingMode),
                winrt::PropertyChangedCallback(&OnVerticalScrollChainingModePropertyChanged));
    }
    if (!s_VerticalScrollControllerProperty)
    {
        s_VerticalScrollControllerProperty =
            InitializeDependencyProperty(
                L"VerticalScrollController",
                winrt::name_of<winrt::IScrollController>(),
                winrt::name_of<winrt::ScrollView>(),
                false /* isAttached */,
                ValueHelper<winrt::IScrollController>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnVerticalScrollControllerPropertyChanged));
    }
    if (!s_VerticalScrollModeProperty)
    {
        s_VerticalScrollModeProperty =
            InitializeDependencyProperty(
                L"VerticalScrollMode",
                winrt::name_of<winrt::ScrollMode>(),
                winrt::name_of<winrt::ScrollView>(),
                false /* isAttached */,
                ValueHelper<winrt::ScrollMode>::BoxValueIfNecessary(ScrollView::s_defaultVerticalScrollMode),
                winrt::PropertyChangedCallback(&OnVerticalScrollModePropertyChanged));
    }
    if (!s_VerticalScrollRailingModeProperty)
    {
        s_VerticalScrollRailingModeProperty =
            InitializeDependencyProperty(
                L"VerticalScrollRailingMode",
                winrt::name_of<winrt::RailingMode>(),
                winrt::name_of<winrt::ScrollView>(),
                false /* isAttached */,
                ValueHelper<winrt::RailingMode>::BoxValueIfNecessary(ScrollView::s_defaultVerticalScrollRailingMode),
                winrt::PropertyChangedCallback(&OnVerticalScrollRailingModePropertyChanged));
    }
    if (!s_ZoomChainingModeProperty)
    {
        s_ZoomChainingModeProperty =
            InitializeDependencyProperty(
                L"ZoomChainingMode",
                winrt::name_of<winrt::ChainingMode>(),
                winrt::name_of<winrt::ScrollView>(),
                false /* isAttached */,
                ValueHelper<winrt::ChainingMode>::BoxValueIfNecessary(ScrollView::s_defaultZoomChainingMode),
                winrt::PropertyChangedCallback(&OnZoomChainingModePropertyChanged));
    }
    if (!s_ZoomModeProperty)
    {
        s_ZoomModeProperty =
            InitializeDependencyProperty(
                L"ZoomMode",
                winrt::name_of<winrt::ZoomMode>(),
                winrt::name_of<winrt::ScrollView>(),
                false /* isAttached */,
                ValueHelper<winrt::ZoomMode>::BoxValueIfNecessary(ScrollView::s_defaultZoomMode),
                winrt::PropertyChangedCallback(&OnZoomModePropertyChanged));
    }
}

void ScrollViewProperties::ClearProperties()
{
    s_ComputedHorizontalScrollBarVisibilityProperty = nullptr;
    s_ComputedVerticalScrollBarVisibilityProperty = nullptr;
    s_ContentProperty = nullptr;
    s_ContentOrientationProperty = nullptr;
    s_HorizontalAnchorRatioProperty = nullptr;
    s_HorizontalScrollBarVisibilityProperty = nullptr;
    s_HorizontalScrollChainingModeProperty = nullptr;
    s_HorizontalScrollControllerProperty = nullptr;
    s_HorizontalScrollModeProperty = nullptr;
    s_HorizontalScrollRailingModeProperty = nullptr;
    s_IgnoredInputKindProperty = nullptr;
    s_MaxZoomFactorProperty = nullptr;
    s_MinZoomFactorProperty = nullptr;
    s_ScrollPresenterProperty = nullptr;
    s_VerticalAnchorRatioProperty = nullptr;
    s_VerticalScrollBarVisibilityProperty = nullptr;
    s_VerticalScrollChainingModeProperty = nullptr;
    s_VerticalScrollControllerProperty = nullptr;
    s_VerticalScrollModeProperty = nullptr;
    s_VerticalScrollRailingModeProperty = nullptr;
    s_ZoomChainingModeProperty = nullptr;
    s_ZoomModeProperty = nullptr;
}

void ScrollViewProperties::OnComputedHorizontalScrollBarVisibilityPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollView>();
    winrt::get_self<ScrollView>(owner)->OnPropertyChanged(args);
}

void ScrollViewProperties::OnComputedVerticalScrollBarVisibilityPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollView>();
    winrt::get_self<ScrollView>(owner)->OnPropertyChanged(args);
}

void ScrollViewProperties::OnContentPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollView>();
    winrt::get_self<ScrollView>(owner)->OnPropertyChanged(args);
}

void ScrollViewProperties::OnContentOrientationPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollView>();
    winrt::get_self<ScrollView>(owner)->OnPropertyChanged(args);
}

void ScrollViewProperties::OnHorizontalAnchorRatioPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollView>();

    auto value = winrt::unbox_value<double>(args.NewValue());
    auto coercedValue = value;
    winrt::get_self<ScrollView>(owner)->ValidateAnchorRatio(coercedValue);
    if (std::memcmp(&value, &coercedValue, sizeof(value)) != 0) // use memcmp to avoid tripping over nan
    {
        sender.SetValue(args.Property(), winrt::box_value<double>(coercedValue));
        return;
    }

    winrt::get_self<ScrollView>(owner)->OnPropertyChanged(args);
}

void ScrollViewProperties::OnHorizontalScrollBarVisibilityPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollView>();
    winrt::get_self<ScrollView>(owner)->OnPropertyChanged(args);
}

void ScrollViewProperties::OnHorizontalScrollChainingModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollView>();
    winrt::get_self<ScrollView>(owner)->OnPropertyChanged(args);
}

void ScrollViewProperties::OnHorizontalScrollControllerPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollView>();
    winrt::get_self<ScrollView>(owner)->OnPropertyChanged(args);
}

void ScrollViewProperties::OnHorizontalScrollModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollView>();
    winrt::get_self<ScrollView>(owner)->OnPropertyChanged(args);
}

void ScrollViewProperties::OnHorizontalScrollRailingModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollView>();
    winrt::get_self<ScrollView>(owner)->OnPropertyChanged(args);
}

void ScrollViewProperties::OnIgnoredInputKindPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollView>();
    winrt::get_self<ScrollView>(owner)->OnPropertyChanged(args);
}

void ScrollViewProperties::OnMaxZoomFactorPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollView>();

    auto value = winrt::unbox_value<double>(args.NewValue());
    auto coercedValue = value;
    winrt::get_self<ScrollView>(owner)->ValidateZoomFactoryBoundary(coercedValue);
    if (std::memcmp(&value, &coercedValue, sizeof(value)) != 0) // use memcmp to avoid tripping over nan
    {
        sender.SetValue(args.Property(), winrt::box_value<double>(coercedValue));
        return;
    }

    winrt::get_self<ScrollView>(owner)->OnPropertyChanged(args);
}

void ScrollViewProperties::OnMinZoomFactorPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollView>();

    auto value = winrt::unbox_value<double>(args.NewValue());
    auto coercedValue = value;
    winrt::get_self<ScrollView>(owner)->ValidateZoomFactoryBoundary(coercedValue);
    if (std::memcmp(&value, &coercedValue, sizeof(value)) != 0) // use memcmp to avoid tripping over nan
    {
        sender.SetValue(args.Property(), winrt::box_value<double>(coercedValue));
        return;
    }

    winrt::get_self<ScrollView>(owner)->OnPropertyChanged(args);
}

void ScrollViewProperties::OnScrollPresenterPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollView>();
    winrt::get_self<ScrollView>(owner)->OnPropertyChanged(args);
}

void ScrollViewProperties::OnVerticalAnchorRatioPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollView>();

    auto value = winrt::unbox_value<double>(args.NewValue());
    auto coercedValue = value;
    winrt::get_self<ScrollView>(owner)->ValidateAnchorRatio(coercedValue);
    if (std::memcmp(&value, &coercedValue, sizeof(value)) != 0) // use memcmp to avoid tripping over nan
    {
        sender.SetValue(args.Property(), winrt::box_value<double>(coercedValue));
        return;
    }

    winrt::get_self<ScrollView>(owner)->OnPropertyChanged(args);
}

void ScrollViewProperties::OnVerticalScrollBarVisibilityPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollView>();
    winrt::get_self<ScrollView>(owner)->OnPropertyChanged(args);
}

void ScrollViewProperties::OnVerticalScrollChainingModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollView>();
    winrt::get_self<ScrollView>(owner)->OnPropertyChanged(args);
}

void ScrollViewProperties::OnVerticalScrollControllerPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollView>();
    winrt::get_self<ScrollView>(owner)->OnPropertyChanged(args);
}

void ScrollViewProperties::OnVerticalScrollModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollView>();
    winrt::get_self<ScrollView>(owner)->OnPropertyChanged(args);
}

void ScrollViewProperties::OnVerticalScrollRailingModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollView>();
    winrt::get_self<ScrollView>(owner)->OnPropertyChanged(args);
}

void ScrollViewProperties::OnZoomChainingModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollView>();
    winrt::get_self<ScrollView>(owner)->OnPropertyChanged(args);
}

void ScrollViewProperties::OnZoomModePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ScrollView>();
    winrt::get_self<ScrollView>(owner)->OnPropertyChanged(args);
}

void ScrollViewProperties::ComputedHorizontalScrollBarVisibility(winrt::Visibility const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<ScrollView*>(this)->SetValue(s_ComputedHorizontalScrollBarVisibilityProperty, ValueHelper<winrt::Visibility>::BoxValueIfNecessary(value));
    }
}

winrt::Visibility ScrollViewProperties::ComputedHorizontalScrollBarVisibility()
{
    return ValueHelper<winrt::Visibility>::CastOrUnbox(static_cast<ScrollView*>(this)->GetValue(s_ComputedHorizontalScrollBarVisibilityProperty));
}

void ScrollViewProperties::ComputedVerticalScrollBarVisibility(winrt::Visibility const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<ScrollView*>(this)->SetValue(s_ComputedVerticalScrollBarVisibilityProperty, ValueHelper<winrt::Visibility>::BoxValueIfNecessary(value));
    }
}

winrt::Visibility ScrollViewProperties::ComputedVerticalScrollBarVisibility()
{
    return ValueHelper<winrt::Visibility>::CastOrUnbox(static_cast<ScrollView*>(this)->GetValue(s_ComputedVerticalScrollBarVisibilityProperty));
}

void ScrollViewProperties::Content(winrt::UIElement const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<ScrollView*>(this)->SetValue(s_ContentProperty, ValueHelper<winrt::UIElement>::BoxValueIfNecessary(value));
    }
}

winrt::UIElement ScrollViewProperties::Content()
{
    return ValueHelper<winrt::UIElement>::CastOrUnbox(static_cast<ScrollView*>(this)->GetValue(s_ContentProperty));
}

void ScrollViewProperties::ContentOrientation(winrt::ContentOrientation const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<ScrollView*>(this)->SetValue(s_ContentOrientationProperty, ValueHelper<winrt::ContentOrientation>::BoxValueIfNecessary(value));
    }
}

winrt::ContentOrientation ScrollViewProperties::ContentOrientation()
{
    return ValueHelper<winrt::ContentOrientation>::CastOrUnbox(static_cast<ScrollView*>(this)->GetValue(s_ContentOrientationProperty));
}

void ScrollViewProperties::HorizontalAnchorRatio(double value)
{
    [[gsl::suppress(con)]]
    {
    double coercedValue = value;
    static_cast<ScrollView*>(this)->ValidateAnchorRatio(coercedValue);
    static_cast<ScrollView*>(this)->SetValue(s_HorizontalAnchorRatioProperty, ValueHelper<double>::BoxValueIfNecessary(coercedValue));
    }
}

double ScrollViewProperties::HorizontalAnchorRatio()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ScrollView*>(this)->GetValue(s_HorizontalAnchorRatioProperty));
}

void ScrollViewProperties::HorizontalScrollBarVisibility(winrt::ScrollBarVisibility const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<ScrollView*>(this)->SetValue(s_HorizontalScrollBarVisibilityProperty, ValueHelper<winrt::ScrollBarVisibility>::BoxValueIfNecessary(value));
    }
}

winrt::ScrollBarVisibility ScrollViewProperties::HorizontalScrollBarVisibility()
{
    return ValueHelper<winrt::ScrollBarVisibility>::CastOrUnbox(static_cast<ScrollView*>(this)->GetValue(s_HorizontalScrollBarVisibilityProperty));
}

void ScrollViewProperties::HorizontalScrollChainingMode(winrt::ChainingMode const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<ScrollView*>(this)->SetValue(s_HorizontalScrollChainingModeProperty, ValueHelper<winrt::ChainingMode>::BoxValueIfNecessary(value));
    }
}

winrt::ChainingMode ScrollViewProperties::HorizontalScrollChainingMode()
{
    return ValueHelper<winrt::ChainingMode>::CastOrUnbox(static_cast<ScrollView*>(this)->GetValue(s_HorizontalScrollChainingModeProperty));
}

void ScrollViewProperties::HorizontalScrollController(winrt::IScrollController const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<ScrollView*>(this)->SetValue(s_HorizontalScrollControllerProperty, ValueHelper<winrt::IScrollController>::BoxValueIfNecessary(value));
    }
}

winrt::IScrollController ScrollViewProperties::HorizontalScrollController()
{
    return ValueHelper<winrt::IScrollController>::CastOrUnbox(static_cast<ScrollView*>(this)->GetValue(s_HorizontalScrollControllerProperty));
}

void ScrollViewProperties::HorizontalScrollMode(winrt::ScrollMode const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<ScrollView*>(this)->SetValue(s_HorizontalScrollModeProperty, ValueHelper<winrt::ScrollMode>::BoxValueIfNecessary(value));
    }
}

winrt::ScrollMode ScrollViewProperties::HorizontalScrollMode()
{
    return ValueHelper<winrt::ScrollMode>::CastOrUnbox(static_cast<ScrollView*>(this)->GetValue(s_HorizontalScrollModeProperty));
}

void ScrollViewProperties::HorizontalScrollRailingMode(winrt::RailingMode const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<ScrollView*>(this)->SetValue(s_HorizontalScrollRailingModeProperty, ValueHelper<winrt::RailingMode>::BoxValueIfNecessary(value));
    }
}

winrt::RailingMode ScrollViewProperties::HorizontalScrollRailingMode()
{
    return ValueHelper<winrt::RailingMode>::CastOrUnbox(static_cast<ScrollView*>(this)->GetValue(s_HorizontalScrollRailingModeProperty));
}

void ScrollViewProperties::IgnoredInputKind(winrt::InputKind const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<ScrollView*>(this)->SetValue(s_IgnoredInputKindProperty, ValueHelper<winrt::InputKind>::BoxValueIfNecessary(value));
    }
}

winrt::InputKind ScrollViewProperties::IgnoredInputKind()
{
    return ValueHelper<winrt::InputKind>::CastOrUnbox(static_cast<ScrollView*>(this)->GetValue(s_IgnoredInputKindProperty));
}

void ScrollViewProperties::MaxZoomFactor(double value)
{
    [[gsl::suppress(con)]]
    {
    double coercedValue = value;
    static_cast<ScrollView*>(this)->ValidateZoomFactoryBoundary(coercedValue);
    static_cast<ScrollView*>(this)->SetValue(s_MaxZoomFactorProperty, ValueHelper<double>::BoxValueIfNecessary(coercedValue));
    }
}

double ScrollViewProperties::MaxZoomFactor()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ScrollView*>(this)->GetValue(s_MaxZoomFactorProperty));
}

void ScrollViewProperties::MinZoomFactor(double value)
{
    [[gsl::suppress(con)]]
    {
    double coercedValue = value;
    static_cast<ScrollView*>(this)->ValidateZoomFactoryBoundary(coercedValue);
    static_cast<ScrollView*>(this)->SetValue(s_MinZoomFactorProperty, ValueHelper<double>::BoxValueIfNecessary(coercedValue));
    }
}

double ScrollViewProperties::MinZoomFactor()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ScrollView*>(this)->GetValue(s_MinZoomFactorProperty));
}


void ScrollViewProperties::VerticalAnchorRatio(double value)
{
    [[gsl::suppress(con)]]
    {
    double coercedValue = value;
    static_cast<ScrollView*>(this)->ValidateAnchorRatio(coercedValue);
    static_cast<ScrollView*>(this)->SetValue(s_VerticalAnchorRatioProperty, ValueHelper<double>::BoxValueIfNecessary(coercedValue));
    }
}

double ScrollViewProperties::VerticalAnchorRatio()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ScrollView*>(this)->GetValue(s_VerticalAnchorRatioProperty));
}

void ScrollViewProperties::VerticalScrollBarVisibility(winrt::ScrollBarVisibility const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<ScrollView*>(this)->SetValue(s_VerticalScrollBarVisibilityProperty, ValueHelper<winrt::ScrollBarVisibility>::BoxValueIfNecessary(value));
    }
}

winrt::ScrollBarVisibility ScrollViewProperties::VerticalScrollBarVisibility()
{
    return ValueHelper<winrt::ScrollBarVisibility>::CastOrUnbox(static_cast<ScrollView*>(this)->GetValue(s_VerticalScrollBarVisibilityProperty));
}

void ScrollViewProperties::VerticalScrollChainingMode(winrt::ChainingMode const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<ScrollView*>(this)->SetValue(s_VerticalScrollChainingModeProperty, ValueHelper<winrt::ChainingMode>::BoxValueIfNecessary(value));
    }
}

winrt::ChainingMode ScrollViewProperties::VerticalScrollChainingMode()
{
    return ValueHelper<winrt::ChainingMode>::CastOrUnbox(static_cast<ScrollView*>(this)->GetValue(s_VerticalScrollChainingModeProperty));
}

void ScrollViewProperties::VerticalScrollController(winrt::IScrollController const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<ScrollView*>(this)->SetValue(s_VerticalScrollControllerProperty, ValueHelper<winrt::IScrollController>::BoxValueIfNecessary(value));
    }
}

winrt::IScrollController ScrollViewProperties::VerticalScrollController()
{
    return ValueHelper<winrt::IScrollController>::CastOrUnbox(static_cast<ScrollView*>(this)->GetValue(s_VerticalScrollControllerProperty));
}

void ScrollViewProperties::VerticalScrollMode(winrt::ScrollMode const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<ScrollView*>(this)->SetValue(s_VerticalScrollModeProperty, ValueHelper<winrt::ScrollMode>::BoxValueIfNecessary(value));
    }
}

winrt::ScrollMode ScrollViewProperties::VerticalScrollMode()
{
    return ValueHelper<winrt::ScrollMode>::CastOrUnbox(static_cast<ScrollView*>(this)->GetValue(s_VerticalScrollModeProperty));
}

void ScrollViewProperties::VerticalScrollRailingMode(winrt::RailingMode const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<ScrollView*>(this)->SetValue(s_VerticalScrollRailingModeProperty, ValueHelper<winrt::RailingMode>::BoxValueIfNecessary(value));
    }
}

winrt::RailingMode ScrollViewProperties::VerticalScrollRailingMode()
{
    return ValueHelper<winrt::RailingMode>::CastOrUnbox(static_cast<ScrollView*>(this)->GetValue(s_VerticalScrollRailingModeProperty));
}

void ScrollViewProperties::ZoomChainingMode(winrt::ChainingMode const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<ScrollView*>(this)->SetValue(s_ZoomChainingModeProperty, ValueHelper<winrt::ChainingMode>::BoxValueIfNecessary(value));
    }
}

winrt::ChainingMode ScrollViewProperties::ZoomChainingMode()
{
    return ValueHelper<winrt::ChainingMode>::CastOrUnbox(static_cast<ScrollView*>(this)->GetValue(s_ZoomChainingModeProperty));
}

void ScrollViewProperties::ZoomMode(winrt::ZoomMode const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<ScrollView*>(this)->SetValue(s_ZoomModeProperty, ValueHelper<winrt::ZoomMode>::BoxValueIfNecessary(value));
    }
}

winrt::ZoomMode ScrollViewProperties::ZoomMode()
{
    return ValueHelper<winrt::ZoomMode>::CastOrUnbox(static_cast<ScrollView*>(this)->GetValue(s_ZoomModeProperty));
}

winrt::event_token ScrollViewProperties::AnchorRequested(winrt::TypedEventHandler<winrt::ScrollView, winrt::ScrollingAnchorRequestedEventArgs> const& value)
{
    return m_anchorRequestedEventSource.add(value);
}

void ScrollViewProperties::AnchorRequested(winrt::event_token const& token)
{
    m_anchorRequestedEventSource.remove(token);
}

winrt::event_token ScrollViewProperties::BringingIntoView(winrt::TypedEventHandler<winrt::ScrollView, winrt::ScrollingBringingIntoViewEventArgs> const& value)
{
    return m_bringingIntoViewEventSource.add(value);
}

void ScrollViewProperties::BringingIntoView(winrt::event_token const& token)
{
    m_bringingIntoViewEventSource.remove(token);
}

winrt::event_token ScrollViewProperties::ExtentChanged(winrt::TypedEventHandler<winrt::ScrollView, winrt::IInspectable> const& value)
{
    return m_extentChangedEventSource.add(value);
}

void ScrollViewProperties::ExtentChanged(winrt::event_token const& token)
{
    m_extentChangedEventSource.remove(token);
}

winrt::event_token ScrollViewProperties::ScrollAnimationStarting(winrt::TypedEventHandler<winrt::ScrollView, winrt::ScrollingScrollAnimationStartingEventArgs> const& value)
{
    return m_scrollAnimationStartingEventSource.add(value);
}

void ScrollViewProperties::ScrollAnimationStarting(winrt::event_token const& token)
{
    m_scrollAnimationStartingEventSource.remove(token);
}

winrt::event_token ScrollViewProperties::ScrollCompleted(winrt::TypedEventHandler<winrt::ScrollView, winrt::ScrollingScrollCompletedEventArgs> const& value)
{
    return m_scrollCompletedEventSource.add(value);
}

void ScrollViewProperties::ScrollCompleted(winrt::event_token const& token)
{
    m_scrollCompletedEventSource.remove(token);
}

winrt::event_token ScrollViewProperties::StateChanged(winrt::TypedEventHandler<winrt::ScrollView, winrt::IInspectable> const& value)
{
    return m_stateChangedEventSource.add(value);
}

void ScrollViewProperties::StateChanged(winrt::event_token const& token)
{
    m_stateChangedEventSource.remove(token);
}

winrt::event_token ScrollViewProperties::ViewChanged(winrt::TypedEventHandler<winrt::ScrollView, winrt::IInspectable> const& value)
{
    return m_viewChangedEventSource.add(value);
}

void ScrollViewProperties::ViewChanged(winrt::event_token const& token)
{
    m_viewChangedEventSource.remove(token);
}

winrt::event_token ScrollViewProperties::ZoomAnimationStarting(winrt::TypedEventHandler<winrt::ScrollView, winrt::ScrollingZoomAnimationStartingEventArgs> const& value)
{
    return m_zoomAnimationStartingEventSource.add(value);
}

void ScrollViewProperties::ZoomAnimationStarting(winrt::event_token const& token)
{
    m_zoomAnimationStartingEventSource.remove(token);
}

winrt::event_token ScrollViewProperties::ZoomCompleted(winrt::TypedEventHandler<winrt::ScrollView, winrt::ScrollingZoomCompletedEventArgs> const& value)
{
    return m_zoomCompletedEventSource.add(value);
}

void ScrollViewProperties::ZoomCompleted(winrt::event_token const& token)
{
    m_zoomCompletedEventSource.remove(token);
}
