/*
 * Copyright (C) 2009-2012 the libgit2 contributors
 *
 * This file is part of libgit2, distributed under the GNU GPL v2 with
 * a Linking Exception. For full terms see the included COPYING file.
 */
#ifndef INCLUDE_date_h__
#define INCLUDE_date_h__

#include "git2/types.h"

int git__date_parse(git_time_t *out, const char *date);

#endif
