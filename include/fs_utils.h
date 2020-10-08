/*
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *
 *  Copyright (C) 2019-2020  The dosbox-staging team
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#ifndef DOSBOX_FS_UTILS_H
#define DOSBOX_FS_UTILS_H

#include <cinttypes>
#include <string>

// Checks if the given path corresponds to an existing file or directory.

bool path_exists(const char *path) noexcept;

inline bool path_exists(const std::string &path) noexcept
{
	return path_exists(path.c_str());
}

// TODO document
// ops; EEXISTS indicates that directory exists already
// double check if it exists on windows

int create_dir(const char *pathname, uint32_t mode);

#endif
