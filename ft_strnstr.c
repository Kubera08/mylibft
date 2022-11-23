/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeaudui <abeaudui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:10:10 by abeaudui          #+#    #+#             */
/*   Updated: 2022/11/23 16:55:23 by abeaudui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*str, const char *to_find, size_t len)
{
	size_t	i;
	int		j;
	int		g;
	size_t	z;

	i = 0;
	if (to_find[i] == '\0')
		return ((char *)str);
	while (str[i] && i < len)
	{
		g = i;
		j = 0;
		z = 0;
		while (str[g] && str[g] == to_find[j] && i + j < len)
		{
			z++;
			g++;
			j++;
			if (to_find[j] == '\0' || z == len)
				return ((char *)&str[i]);
		}
	i++;
	}
	return (NULL);
}