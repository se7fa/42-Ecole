/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stas <stas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:53:59 by stas              #+#    #+#             */
/*   Updated: 2022/10/24 16:53:59 by stas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*b;
	size_t	i;

	b = s;
	i = 0;
	while (i < n)
	{
		b[i] = c;
		i++;
	}
	return (b);
}
