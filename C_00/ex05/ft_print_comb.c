/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrejci <jkrejci@student.42prague.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 10:17:14 by jkrejci           #+#    #+#             */
/*   Updated: 2024/04/11 15:08:51 by jkrejci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_iteration(char a, char b, char c)
{
	a = a + 48;
	b = b + 48;
	c = c + 48;
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a == 55 && b == 56 && c == 57)
		return ;
	write(1, ",", 1);
	write(1, " ", 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				print_iteration(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
