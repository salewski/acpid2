/*
 *  log.h - ACPI daemon logging
 *
 *  Copyright (C) 1999-2000 Andrew Henroid
 *  Copyright (C) 2001 Sun Microsystems
 *  Portions Copyright (C) 2004 Tim Hockin (thockin@hockin.org)
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
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef LOG_H__
#define LOG_H__

/* for LOG_ERR, LOG_DEBUG, LOG_INFO, etc... */
#include <syslog.h>

/* Set to 1 to send logging to stderr.  Default is zero. */
extern int log_to_stderr;

/* Global debug level. */
extern int debug_level;

extern int acpid_log(int level, const char *fmt, ...) __attribute__((format(printf,2,3)));

#endif /* LOG_H__ */
