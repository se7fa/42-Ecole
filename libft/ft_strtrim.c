/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stas <stas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:55:46 by stas              #+#    #+#             */
/*   Updated: 2022/10/26 02:18:50 by stas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isinset(const char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_trimlen(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (ft_isinset(s1[i], set) && s1[i])
		i++;
	if (i == ft_strlen(s1))
		return (i);
	while (ft_isinset(s1[ft_strlen(s1) - j - 1], set))
		j++;
	return (i + j);
}

char	*ft_strtrim(const char *s1, char const *set)
{
	char	*str;
	size_t	len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	len = 0;
	if (!set)
		return (ft_strdup(s1));
	if (!s1)
		return (0);
	while (s1[len])
		len++;
	len = len - ft_trimlen(s1, set) + 1;
	str = malloc(sizeof(char) * len);
	if (!str)
		return (0);
	while (ft_isinset(s1[i], set))
		i++;
	while (j < len - 1)
		str[j++] = s1[i++];
	str[j] = 0;
	return (str);
}
