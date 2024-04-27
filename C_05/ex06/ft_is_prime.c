/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrejci <jkrejci@student.42prague.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:03:27 by jkrejci           #+#    #+#             */
/*   Updated: 2024/04/22 14:42:14 by jkrejci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d\n", ft_is_prime(10));
	printf("%d\n", ft_is_prime(9));
	printf("%d\n", ft_is_prime(8));
	printf("%d\n", ft_is_prime(7));
	printf("%d\n", ft_is_prime(6));
	printf("%d\n", ft_is_prime(5));
	printf("%d\n", ft_is_prime(4));
	printf("%d\n", ft_is_prime(3));
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(1));
}
*/
