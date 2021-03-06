/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   log.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 15:04:25 by arsciand          #+#    #+#             */
/*   Updated: 2021/04/26 17:26:33 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "log.h"
#include <stdio.h>

void    log_msg(e_loglevel level, const char *s) {
    const char *level_colors[] =
    {
        ANSI_COLOR_GREEN,
        ANSI_COLOR_YELLOW,
        ANSI_COLOR_CYAN,
        ANSI_COLOR_MAGENTA,
        ANSI_COLOR_RED,
        ANSI_COLOR_RESET,
    };

    fprintf(stderr, "%s%s\n", level_colors[level], s);
}
