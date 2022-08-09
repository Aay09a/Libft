/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahussein <ahussein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:21:40 by ahussein          #+#    #+#             */
/*   Updated: 2022/07/23 15:03:27 by ahussein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str12;
	int		i;
	int		j;
	int		len;

	if (!s1)
		return (NULL);
	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	str12 = (char *)malloc(sizeof(char) * (len + 1));
	if (!str12)
		return (NULL);
	while (s1[i])
	{
		str12[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str12[i++] = s2[j++];
	}
	str12[i] = '\0';
	return (str12);
}

// int	main(void)
// {
// 	printf("%s", ft_strjoin("hello", "world"));
// }
