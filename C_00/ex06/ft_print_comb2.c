/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrejci <jkrejci@student.42prague.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:13:57 by jkrejci           #+#    #+#             */
/*   Updated: 2024/04/11 21:08:39 by jkrejci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_index(int i)
{
	char	ones;
	char	tens;

	ones = i % 10 + '0';
	tens = i / 10 + '0';
	write(1, &tens, 1);
	write(1, &ones, 1);
}

void	print_iteration(int comb[])
{
	print_index(comb[0]);
	write(1, " ", 1);
	print_index(comb[1]);
	if ((comb[0] == 98) && (comb[1] == 99))
		return ;
	write(1, ",", 1);
	write(1, " ", 1);
}

void	ft_print_comb2(void)
{
	int	comb[2];

	comb[0] = 0;
	while (comb[0] <= 98)
	{
		comb[1] = comb[0] + 1;
		while (comb[1] <= 99)
		{
			print_iteration(comb);
			comb[1]++;
		}
		comb[0]++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
