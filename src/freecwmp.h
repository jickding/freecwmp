/*
 *	This program is free software: you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation, either version 2 of the License, or
 *	(at your option) any later version.
 *
 *	Copyright (C) 2011-2012 Luka Perkov <freecwmp@lukaperkov.net>
 */

#ifndef _FREECWMP_FREECWMP_H__
#define _FREECWMP_FREECWMP_H__

#include <stdint.h>
#include <ctype.h>
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

#define FC_SUCCESS 0
#define FC_ERROR 1

#ifdef DEVEL_DEBUG
#	define FC_DEVEL_DEBUG(msg) \
		printf("__[ %s | %s ]__ : %s\n", __FILE__, __func__, msg);
#else
#	define FC_DEVEL_DEBUG(msg)
#endif

#define NAME	"freecwmpd"

#ifdef DEBUG
#define D(format, ...) fprintf(stderr, "%s(%d): " format, __func__, __LINE__, ## __VA_ARGS__)
#else
#define D(format, ...) no_debug(0, format, ## __VA_ARGS__)
#endif

#ifdef DEVEL
#define DD(format, ...) fprintf(stderr, "%s(%d):: " format, __func__, __LINE__, ## __VA_ARGS__)
#else
#define DD(format, ...) no_debug(0, format, ## __VA_ARGS__)
#endif

static inline void no_debug(int level, const char *fmt, ...)
{
}

#endif

