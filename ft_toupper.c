/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahussein <ahussein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 14:22:56 by ahussein          #+#    #+#             */
/*   Updated: 2022/07/12 14:48:09 by ahussein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}

// int	main(void)
// {
// 	printf("%d", ft_toupper('A'));
// }
