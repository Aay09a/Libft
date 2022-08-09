/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahussein <ahussein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:44:46 by ahussein          #+#    #+#             */
/*   Updated: 2022/07/21 17:17:55 by ahussein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = 0;
	return (str);
}

// char	f(unsigned i, char s2)
// {
// 	printf("My function: index = %d and %c\n", i, s2);
// 	return (s2);
// }

// int	main(void)
// {
// 	char	*s2 = "Hello";
// 	char	*result;

// 	printf("The result is %s\n", s2);
// 	result = ft_strmapi(s2, f);
// 	printf("The result is %s\n", result);
// 	return (0);
// }
