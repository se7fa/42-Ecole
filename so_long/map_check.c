/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stas <stas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 14:12:04 by stas              #+#    #+#             */
/*   Updated: 2023/03/05 15:01:08 by stas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	border_check(t_arg *arg)
{
	int	x;

	x = 0;
	while (arg->map[0][x] != '\n')
	{
		if (arg->map[0][x] != '1')
			return (0);
		if (arg->map[arg->line_count - 1][x] != '1')
			return (0);
		x++;
	}
	return (1);
}

int	first_last_check(t_arg *arg)
{
	int	y;
	int	ln;

	y = 0;
	ln = arg->line_count;
	while (ln)
	{
		if (arg->map[y][0] != '1')
			return (0);
		else if (arg->map[y][arg->row_len -2] != '1')
			return (0);
		y++;
		ln--;
	}
	return (1);
}

int	ret_val(t_arg *arg)
{
	if (first_last_check (arg) && border_check (arg))
		return (1);
	return (0);
}
