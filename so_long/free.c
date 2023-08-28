/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stas <stas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 14:11:43 by stas              #+#    #+#             */
/*   Updated: 2023/03/05 14:11:44 by stas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_free_map(t_arg *arg)
{
	int	i;

	i = 0;
	while (i < arg->line_count)
	{
		free(arg->map[i]);
		i++;
	}
	free(arg->map);
}

int	ft_exit(t_arg *arg)
{
	mlx_clear_window(arg->mlx, arg->mlx_win);
	mlx_destroy_image(arg->mlx, arg->back);
	mlx_destroy_image(arg->mlx, arg->wall);
	mlx_destroy_image(arg->mlx, arg->player);
	mlx_destroy_image(arg->mlx, arg->colec);
	ft_free_map(arg);
	exit(0);
	return (0);
}
