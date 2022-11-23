/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeaudui <abeaudui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:37:12 by abeaudui          #+#    #+#             */
/*   Updated: 2022/11/23 16:04:17 by abeaudui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;

	new = ft_lstnew(f(lst -> content));
	if (!new)
		return (NULL);

		
	while (lst)
	{
		lst = lst -> next;
		
	}
	
		
	
}