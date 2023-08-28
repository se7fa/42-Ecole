/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stas <stas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 16:27:03 by stas              #+#    #+#             */
/*   Updated: 2023/01/04 16:27:04 by stas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <signal.h>

int	ft_atoi(char *str)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (str[i])
	{
		num = (num * 10) + (str[i] - 48);
		i++;
	}
	return (num);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	serverpid;

	if (ac == 3)
	{
		i = 0;
		serverpid = ft_atoi(av[1]);
		while (av[2][i])
		{
			j = 0;
			while (j != 8)
			{
				if ((av[2][i] >> j) & 1)
					kill(serverpid, SIGUSR1);
				else
					kill(serverpid, SIGUSR2);
				usleep(100);
				j++;
			}
			i++;
		}
	}
	else
		write (1, "please enter just three argument", 32);
}
