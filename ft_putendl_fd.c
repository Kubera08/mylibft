/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeaudui <abeaudui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 13:20:42 by abeaudui          #+#    #+#             */
/*   Updated: 2022/11/16 13:21:12 by abeaudui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    int i;

    i = 0;
    if (!s)
        return;
    while(s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
    write(fd, "\n", 1);
}