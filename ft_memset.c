/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeaudui <abeaudui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:14:05 by abeaudui          #+#    #+#             */
/*   Updated: 2022/11/13 11:53:13 by abeaudui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>
void	*ft_memset(void *str, int c, size_t len)
{
	size_t	i;
	unsigned char	*string;
	char a;

	a = c;
	string = (unsigned char *)str;
	i = 0;
	while(i < len)
	{	
		string[i] = a;
		i++;
	}
	return (str);
}