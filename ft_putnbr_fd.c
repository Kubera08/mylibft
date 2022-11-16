/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeaudui <abeaudui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 13:22:28 by abeaudui          #+#    #+#             */
/*   Updated: 2022/11/16 13:32:45 by abeaudui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if ( n > 0 && n < 9)
        ft_putchar(n, fd);
    else if( n < 0)
    {
        ft_putchar_fd("-", fd);
        n = n * -1;
    }
    else
    {
        ft_putnbr_fd(n / 10, fd);
        ft_putnbr_fd(n % 10, fd);
    }
}