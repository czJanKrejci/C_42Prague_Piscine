/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrejci <jkrejci@student.42prague.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:13:55 by jkrejci           #+#    #+#             */
/*   Updated: 2024/04/22 14:24:56 by jkrejci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sq_root;

	sq_root = 1;
	if (nb < 0)
		return (0);
	while ((sq_root * sq_root) <= nb)
	{
		if (sq_root * sq_root == nb)
			return (sq_root);
		sq_root++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n",ft_sqrt(10));
	printf("%d\n",ft_sqrt(9));
	printf("%d\n",ft_sqrt(8));
	printf("%d\n",ft_sqrt(7));
	printf("%d\n",ft_sqrt(6));
	printf("%d\n",ft_sqrt(5));
	printf("%d\n",ft_sqrt(4));
	printf("%d\n",ft_sqrt(3));
	printf("%d\n",ft_sqrt(2));
	printf("%d\n",ft_sqrt(1));
}
*/
