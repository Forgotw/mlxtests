/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsohler@student.42.fr <lsohler>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 10:54:44 by lsohler@stu       #+#    #+#             */
/*   Updated: 2022/12/19 10:58:30 by lsohler@stu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
#define SO_LONG_H

#include "mlx.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct  so_long_struct
{
    void    *mlx_ptr;
    void    *win_ptr;
    int     win_size_x;
    int     win_size_y;
    int     win_pos_x;
    int     win_pos_y;
}               sl_struct;

sl_struct   *sl_init_struct(void);

#endif