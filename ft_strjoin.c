/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeaudui <abeaudui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 14:07:39 by abeaudui          #+#    #+#             */
/*   Updated: 2022/11/13 14:31:34 by abeaudui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *a;
   
    int    totlen;
    int    i;
    int    j;
   

    totlen = (ft_strlen(s1) + ft_strlen(s2));
    i = 0;
    j = 0;
    
    if (!s1 || !s2)
        return(NULL);
    a = malloc(sizeof(char) * (totlen + 1));
    if(a == NULL)
        return(NULL);
  
    while (s1[i])
    {
        a[j] = s1[i];
        i++;
        j++;
    }
    i = 0;
    while (s2[i])
    {
        a[j] = s2[i];
        i++;
        j++;
    }
    a[j] = '\0';
    return(a);
    
}