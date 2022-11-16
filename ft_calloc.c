/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeaudui <abeaudui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:15:05 by abeaudui          #+#    #+#             */
/*   Updated: 2022/11/13 14:01:52 by abeaudui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>
#include <stdlib.h>

void * ft_calloc( size_t elementCount, size_t elementSize )
{
    char *a;
    size_t i;

    i = 0;
    a = malloc(elementCount * elementSize);
    if (a == NULL)
        return(NULL);
    while (i < (elementCount * elementSize))
    {
        a[i] = 0;
        i++;
    }
    return(a);
}