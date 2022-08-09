/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahussein <ahussein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:51:24 by ahussein          #+#    #+#             */
/*   Updated: 2022/07/27 17:57:46 by ahussein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_count_w(const char *s, char c) // hello world
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	if (s[i] == c)
		word--;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			word++;
		i++;
	}
	word++;
	return (word);
}

static	char	*ft_word_dup(const char *s, char c)
{
	char	*word_c;
	int		i;
	int		size;

	size = 0;
	while (s[size] != '\0' && s[size] != c)
		size++;
	word_c = (char *)malloc(sizeof(char) * (size + 1));
	if (!word_c)
		return (NULL);
	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		word_c[i] = s[i];
		i++;
	}
	word_c[i] = 0;
	return (word_c);
}

char	**ft_split(const char *s, char c)
{
	char	**tab;
	int		words;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	words = ft_count_w(s, c);
	tab = (char **)malloc(sizeof(char *) * (words + 1));
	if (!tab)
		return (NULL);
	while (*s != '\0')
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			tab[i] = ft_word_dup(s, c);
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	tab[i] = 0;
	return (tab);
}

// int	main(void)
// {
// 	char	**tab;

// 	tab = ft_split("hello world", ' ');
// 	printf("%s\n", tab[0]);
// 	printf("%s", tab[1]);
// }
