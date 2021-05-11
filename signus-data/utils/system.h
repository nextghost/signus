/*
 *  This file is part of Signus: The Artefact Wars
 *  https://github.com/signus-game
 *
 *  Copyright (C) 2020-2021 Martin Doucha
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2 as
 *  published by the Free Software Foundation.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

#ifndef _SYSTEM_INOTBUTOXUTOMHUNOBUTOBUTBOTBUTOBU_H
#define _SYSTEM_INOTBUTOXUTOMHUNOBUTOBUTBOTBUTOBU_H

#include "stream.h"

#define memalloc malloc
#define memfree free

// Mock implementation for utils-game code compatibility
static void multipath_fopen(File &f, const char *name, unsigned mode) {
	f.open(name, mode);
}

#endif
