/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_image.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stas <stas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 14:12:33 by stas              #+#    #+#             */
/*   Updated: 2023/03/05 14:12:34 by stas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_put(t_arg *arg, void *img, int x, int y)
{
	mlx_put_image_to_window(arg->mlx, arg->mlx_win, img, 64 * x, 64 * y);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
