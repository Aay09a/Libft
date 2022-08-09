/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahussein <ahussein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:24:46 by ahussein          #+#    #+#             */
/*   Updated: 2022/07/19 16:10:23 by ahussein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	if (*s == 0 && c != 0)
		return (NULL);
	i = 0;
	str = (char *)s;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i++;
	}
	if (*str == 0 || c == 0)
		return (&str[i]);
	return (0);
}

// int	main(void)
// {
// 	char	*m;

// 	m = ft_strchr("hello", 'e');
// 	printf("%s", m);
// }
