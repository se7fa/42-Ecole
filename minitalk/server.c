/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stas <stas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 16:27:16 by stas              #+#    #+#             */
/*   Updated: 2023/01/04 16:27:17 by stas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <signal.h>

void	put_nbr(int num)
{
	char	a;

	if (num < 10)
	{
		a = num + '0';
		write (1, &a, 1);
	}
	else if (num > 9)
	{
		put_nbr(num / 10);
		put_nbr(num % 10);
	}
}

void	my_handler(int sign)
{
	static int	bit;
	static int	set;

	if (sign == SIGUSR1)
		set |= 1 << bit;
	if (bit == 7)
	{
		write (1, &set, 1);
		bit = 0;
		set = 0;
	}
	else
		bit++;
}

int	main(void)
{
	int	pid;

	pid = getpid();
	put_nbr (pid);
	write (1, "\n", 1);
	signal (SIGUSR1, my_handler);
	signal (SIGUSR2, my_handler);
	while (1)
		pause();
}
