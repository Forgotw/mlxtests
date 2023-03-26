/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsohler@student.42.fr <lsohler>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 17:31:54 by lsohler@stu       #+#    #+#             */
/*   Updated: 2022/12/19 16:41:50 by lsohler@stu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    ft_putchar(char c)
{
    write (1, &c, 1);
}

void	ft_putnbr(int nb) {
	if (nb < 0) {
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10) {
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10) ft_putchar(nb + 48);
}

int deal_key(int key, void *sl_struct)
{
    (void)sl_struct;
    ft_putnbr(key);
    ft_putchar('\n');
    if (key == 53)
    {
        exit(0);
    }
    return (0);
}

int main()
{
    /*void    *mlx_ptr;
    void    *win_ptr;

    mlx_ptr = mlx_init();
    win_ptr = mlx_new_window(mlx_ptr, 500, 500, "Test 42");*/
    sl_struct   *sl_new;
    void        *imgtest;
    void        *imgtest2;
    int         img_width;
    int         img_height;


    sl_new = sl_init_struct();
    mlx_pixel_put(sl_new->mlx_ptr, sl_new->win_ptr, 250, 250, 0xFFFFFF);
    imgtest = mlx_xpm_file_to_image(sl_new->mlx_ptr, "xpm/floor.xpm", &img_width, &img_height);
    imgtest2 = mlx_xpm_file_to_image(sl_new->mlx_ptr, "xpm/wall.xpm", &img_width, &img_height);
    mlx_put_image_to_window(sl_new->mlx_ptr, sl_new->win_ptr, imgtest2, 50, 50);
    mlx_put_image_to_window(sl_new->mlx_ptr, sl_new->win_ptr, imgtest, 124, 124);
    mlx_put_image_to_window(sl_new->mlx_ptr, sl_new->win_ptr, imgtest, 124 + 64, 124 + 64);
    mlx_put_image_to_window(sl_new->mlx_ptr, sl_new->win_ptr, imgtest, 124 + 64, 124);
    mlx_put_image_to_window(sl_new->mlx_ptr, sl_new->win_ptr, imgtest, 124, 124 + 64);
    mlx_put_image_to_window(sl_new->mlx_ptr, sl_new->win_ptr, imgtest, 124 + 32, 124 + 32);
    write(1, "TEST", 4);
    mlx_key_hook(sl_new->win_ptr, deal_key, (void *)sl_new);
    write(1, "TEST", 4);
    mlx_loop(sl_new->mlx_ptr);
}

