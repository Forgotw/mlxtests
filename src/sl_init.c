/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsohler@student.42.fr <lsohler>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 10:36:17 by lsohler@stu       #+#    #+#             */
/*   Updated: 2022/12/19 11:00:32 by lsohler@stu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

sl_struct   *sl_init_struct(void)
{
    sl_struct *new;

    new = (sl_struct *)malloc(sizeof(sl_struct));
    if (!new)
        return (NULL);
    new->win_size_x = 640;
    new->win_size_y = 320;
    new->mlx_ptr = mlx_init();
    new->win_ptr = mlx_new_window(new->mlx_ptr, new->win_size_x, new->win_size_y, "Test 42");
    return (new);
}
