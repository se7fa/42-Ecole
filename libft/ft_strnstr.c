/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stas <stas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:55:33 by stas              #+#    #+#             */
/*   Updated: 2022/10/26 01:42:28 by stas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)haystack;
	i = 0;
	if (!ft_strlen(needle) || needle == str)
		return (str);
	if (!len)
		return (0);
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] == needle[j])
		{
			if (needle[j + 1] == 0 && i + j < len)
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}
