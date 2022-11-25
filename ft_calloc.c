/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeaudui <abeaudui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:15:05 by abeaudui          #+#    #+#             */
/*   Updated: 2022/11/25 15:44:35 by abeaudui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	char	*a;
	size_t	i;
	size_t	max;

	max = SIZE_MAX;
	i = 0;
	if (elementCount > max / elementSize && elementSize != 0)
		return (NULL);
	a = malloc(elementCount * elementSize);
	if (a == NULL)
		return (NULL);
	while (i < (elementCount * elementSize))
	{
		a[i] = 0;
		i++;
	}
	return (a);
}