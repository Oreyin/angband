/**
 * \file game-input.h
 * \brief Ask for non-command input from the UI.
 *
 * Copyright (c) 2014 Nick McConnell
 *
 * This work is free software; you can redistribute it and/or modify it
 * under the terms of either:
 *
 * a) the GNU General Public License as published by the Free Software
 *    Foundation, version 2, or
 *
 * b) the "Angband licence":
 *    This software may be copied and distributed for educational, research,
 *    and not for profit purposes provided that this copyright and statement
 *    are included in all such copies.  Other copyrights may also apply.
 */

#ifndef INCLUDED_GAME_INPUT_H
#define INCLUDED_GAME_INPUT_H

bool (*get_string_hook)(const char *prompt, char *buf, size_t len);
int (*get_quantity_hook)(const char *prompt, int max);
bool (*get_check_hook)(const char *prompt);
bool (*get_com_hook)(const char *prompt, char *command);
bool (*get_rep_dir_hook)(int *dir, bool allow_none);
bool (*get_aim_dir_hook)(int *dir);

bool get_string(const char *prompt, char *buf, size_t len);
int get_quantity(const char *prompt, int max);
bool get_check(const char *prompt);
bool get_com(const char *prompt, char *command);
bool get_rep_dir(int *dir, bool allow_none);
bool get_aim_dir(int *dir);

#endif /* INCLUDED_GAME_INPUT_H */
