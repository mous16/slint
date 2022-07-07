// Copyright © SixtyFPS GmbH <info@slint-ui.com>
// SPDX-License-Identifier: GPL-3.0-only OR LicenseRef-Slint-commercial

#pragma once

namespace slint {

/// The Point structure is used to represent a two-dimensional point
/// with x and y coordinates.
template<typename T>
struct Point
{
    /// The x coordinate of the point
    T x;
    /// The y coordinate of the point
    T y;

    /// Compares with \a other and returns true if they are equal; false otherwise.
    bool operator==(const Point &other) const = default;
};

}
