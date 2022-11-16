/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeaudui <abeaudui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 13:10:28 by abeaudui          #+#    #+#             */
/*   Updated: 2022/11/16 13:33:52 by abeaudui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void ft_putstr_fd(char *s, int fd)
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
}