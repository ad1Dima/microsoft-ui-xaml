﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once

#include "pch.h"
#include "common.h"

#include "ProgressBar.g.h"
#include "ProgressBar.properties.h"

class ProgressBar :
    public ReferenceTracker<ProgressBar, winrt::implementation::ProgressBarT>,
    public ProgressBarProperties
{

public:
    ProgressBar();
    ~ProgressBar() {}

    // IFrameworkElement
    void OnApplyTemplate();

    // Internal
    void OnIsIndeterminatePropertyChanged(const winrt::DependencyPropertyChangedEventArgs& args);

private:
    void OnLoaded(const winrt::IInspectable&, const winrt::RoutedEventArgs&);
    void OnLayoutRootLoaded(const winrt::IInspectable&, const winrt::RoutedEventArgs&);

    void OnRangeBaseValueChanged(const winrt::DependencyObject& sender, const winrt::DependencyProperty& args);

    winrt::Grid::Loaded_revoker m_layoutRootLoadedRevoker{};

    tracker_ref<winrt::Grid> m_layoutRoot{ this };
};
