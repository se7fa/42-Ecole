/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stas <stas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:55:19 by stas              #+#    #+#             */
/*   Updated: 2022/10/26 02:07:37 by stas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*rt;
	int		len;

	len = 0;
	if (!s)
		return (0);
	while (s[len])
		len++;
	rt = (char *)malloc(sizeof(char) * (len + 1));
	if (!rt)
		return (0);
	len = 0;
	while (*s)
	{
		rt[len] = (*f)(len, *s);
		s++;
		len++;
	}
	rt[len] = 0;
	return (rt);
}
