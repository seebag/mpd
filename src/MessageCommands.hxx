/*
 * Copyright (C) 2003-2012 The Music Player Daemon Project
 * http://www.musicpd.org
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef MPD_MESSAGE_COMMANDS_HXX
#define MPD_MESSAGE_COMMANDS_HXX

#include "command.h"

enum command_return
handle_subscribe(struct client *client, int argc, char *argv[]);

enum command_return
handle_unsubscribe(struct client *client, int argc, char *argv[]);

enum command_return
handle_channels(struct client *client, int argc, char *argv[]);

enum command_return
handle_read_messages(struct client *client, int argc, char *argv[]);

enum command_return
handle_send_message(struct client *client, int argc, char *argv[]);

#endif
