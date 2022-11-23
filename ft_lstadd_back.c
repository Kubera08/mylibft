/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeaudui <abeaudui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:10:58 by abeaudui          #+#    #+#             */
/*   Updated: 2022/11/23 17:10:22 by abeaudui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*run;

	run = lst;
	while (run -> next != NULL)
		run = run -> next;
	run = malloc(sizeof(t_list));
	run -> next = new;
	new - next = NULL;
}
