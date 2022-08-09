/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahussein <ahussein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 14:56:45 by ahussein          #+#    #+#             */
/*   Updated: 2022/07/13 15:40:41 by ahussein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}

// int main (void)
// {
// 	char	m[] = "hello";
// 	int i = 0;
// 	ft_bzero(m, 6);
// 	while (i < 6)
// 	{
// 		printf("%d", m[i]);
// 		i++;
// 	}
// }
