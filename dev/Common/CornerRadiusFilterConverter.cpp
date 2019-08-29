﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#include <pch.h>
#include <common.h>
#include "CornerRadiusFilterConverter.h"

winrt::CornerRadius CornerRadiusFilterConverter::Convert(winrt::CornerRadius const& radius, winrt::CornerRadiusFilterKind const& filterKind)
{
    winrt::CornerRadius result = radius;

    switch (filterKind)
    {
    case winrt::CornerRadiusFilterKind::Top:
        result.BottomLeft = 0;
        result.BottomRight = 0;
        break;
    case winrt::CornerRadiusFilterKind::Right:
        result.TopLeft = 0;
        result.BottomLeft = 0;
        break;
    case winrt::CornerRadiusFilterKind::Bottom:
        result.TopLeft = 0;
        result.TopRight = 0;
        break;
    case winrt::CornerRadiusFilterKind::Left:
        result.TopRight = 0;
        result.BottomRight = 0;
        break;
    case winrt::CornerRadiusFilterKind::TopLeft:
        result.TopRight = 0;
        result.BottomLeft = 0;
        result.BottomRight = 0;
        break;
    case winrt::CornerRadiusFilterKind::BottomRight:
        result.TopLeft = 0;
        result.TopRight = 0;
        result.BottomLeft = 0;
        break;
    }

    return result;
}

double CornerRadiusFilterConverter::GetDoubleValue(winrt::CornerRadius const& radius, winrt::CornerRadiusFilterKind const& filterKind)
{
    switch (filterKind)
    {
    case winrt::CornerRadiusFilterKind::TopLeft:
        return radius.TopLeft;
    case winrt::CornerRadiusFilterKind::BottomRight:
        return radius.BottomRight;
    }
    return 0;
}

winrt::IInspectable CornerRadiusFilterConverter::Convert(
    winrt::IInspectable const& value,
    winrt::TypeName const& targetType,
    winrt::IInspectable const& parameter,
    winrt::hstring const& language)
{
    auto cornerRadius = unbox_value<winrt::CornerRadius>(value);
    return ReturnAsDouble() ? box_value(GetDoubleValue(cornerRadius, Filter())) : box_value(Convert(cornerRadius, Filter()));
}

winrt::IInspectable CornerRadiusFilterConverter::ConvertBack(
    winrt::IInspectable const& value,
    winrt::TypeName const& targetType,
    winrt::IInspectable const& parameter,
    winrt::hstring const& language)
{
    winrt::throw_hresult(E_NOTIMPL);
}
