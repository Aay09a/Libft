/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahussein <ahussein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:12:48 by ahussein          #+#    #+#             */
/*   Updated: 2022/07/20 19:12:52 by ahussein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*j;

	if (!s)
	{
		return (NULL);
	}
	if (ft_strlen(&s[start]) < len)
	{
		len = ft_strlen(&s[start]);
	}
	j = (char *)malloc(sizeof(char) * (len + 1));
	if (!j)
		return (NULL);
	i = 0;
	while (start < ft_strlen(s) && s[start + i] && i < len)
	{
		j[i] = s[start + i];
		i++;
	}
	j[i] = '\0';
	return (j);
}
