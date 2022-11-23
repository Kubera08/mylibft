/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeaudui <abeaudui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:25:52 by abeaudui          #+#    #+#             */
/*   Updated: 2022/11/23 16:59:27 by abeaudui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countword(const char *s, char c)
{
	int	word;
	int	check;

	word = 0;
	check = 0;
	while (*s == c)
		s++;
	while (*s)
	{
		if (*s != c && check == 0)
		{
			check = 1;
			word++;
		}
		else if (*s == c)
			check = 0;
		s++;
	}
	return (word);
}

char	*tab_filler(char const *s, int i, char c)
{
	char	*wordintab;
	int		letter;
	int		j;
	int		k;

	letter = 0;
	j = 0;
	k = i;
	while (s[k] != c && s[k])
	{
		letter++;
		k++;
	}
	wordintab = malloc(sizeof(char) * letter + 1);
	if (!wordintab)
		return (NULL);
	while (s[i] != c && s[i])
	{
		wordintab[j] = s[i];
		j++;
		i++;
	}
	wordintab[j] = '\0';
	return (wordintab);
}

char	**ft_split(char const *s, char c)
{
	int			i;
	int			j;
	char		**tab;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (ft_countword(s, c) + 1));
	if (!tab)
		return (NULL);
	while (s[i] != '\0' && s[i] == c)
		i++;
	while (s[i] && j < ft_countword(s, c))
	{
		tab[j] = tab_filler(s, i, c);
		while (s[i] != c && s[i])
			i++;
		while (s[i] == c && s[i])
			i++;
		j++;
	}
	tab[j] = NULL;
	return (tab);
}
