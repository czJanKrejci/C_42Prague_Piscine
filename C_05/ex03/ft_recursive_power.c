/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrejci <jkrejci@student.42prague.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 16:45:09 by jkrejci           #+#    #+#             */
/*   Updated: 2024/04/21 17:41:48 by jkrejci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = 1;
	if (power == 1)
		return (nb);
	result = ft_recursive_power(nb, power - 1) * nb;
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_recursive_power(2, -1));
	return (0);
}
*/
