/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeaudui <abeaudui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:22:04 by abeaudui          #+#    #+#             */
/*   Updated: 2022/11/21 13:33:05 by abeaudui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    size_t i;
    
    i = 0;
    if (!lst)
		return (0);
    while (lst != NULL)
    {
        lst = lst -> next; // le pointeur vers le debut de la liste pointe sur l'adresse de l'elelent suivant, on passe a l'adresse suivante a chaque fois jusqu'a arriver a NULL
        i++;
    }
    return(i);
}