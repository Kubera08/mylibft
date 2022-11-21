/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeaudui <abeaudui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:00:00 by abeaudui          #+#    #+#             */
/*   Updated: 2022/11/21 13:21:32 by abeaudui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (*lst != NULL)
        new -> next = *lst; // on assigne a next la valeur de new (une adresse) dans *lst qui correspond au premier element
    *lst = new; // on definit le nouveau maillon comme le premier
}