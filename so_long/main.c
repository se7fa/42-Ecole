/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stas <stas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 14:11:54 by stas              #+#    #+#             */
/*   Updated: 2023/03/05 14:46:24 by stas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "missing arguman error\n", 22);
		return (1);
	}
	if (!ft_check_file_name (av[1]))
	{
		write (1, "file name error\n", 16);
		return (1);
	}
	ft_map_init (av[1]);
	return (0);
}
