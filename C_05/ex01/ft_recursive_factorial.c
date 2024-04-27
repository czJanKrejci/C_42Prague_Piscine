/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrejci <jkrejci@student.42prague.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 13:04:36 by jkrejci           #+#    #+#             */
/*   Updated: 2024/04/21 17:25:07 by jkrejci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int		result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (result);
	result = ft_recursive_factorial(nb - 1) * nb;
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_recursive_factorial(6));
	return (0);
}
*/
