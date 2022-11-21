/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeaudui <abeaudui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:59:42 by abeaudui          #+#    #+#             */
/*   Updated: 2022/11/21 12:44:02 by abeaudui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	if(!size)
		return (len);
	if (size != 0)
	{
		while (src[i] && size - 1 > 0)
		{
			dst[i] = src[i];
			i++;
			size--;
		}
	}
	dst[i] = '\0';
	return (len);
}
