/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrejci <jkrejci@student.42prague.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 13:25:21 by jkrejci           #+#    #+#             */
/*   Updated: 2024/04/14 14:08:28 by jkrejci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_row(int x, char first, char middle, char last)
{
	int	i;

	i = 2;
	while (i <= (x + 1))
	{
		if (i == 2)
			ft_putchar(first);
		if (x >= 3 && i < x)
			ft_putchar(middle);
		if (i == x)
			ft_putchar(last);
		i++;
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 2;
	while (i <= (y + 1))
	{
		if (i == 2)
		{
			print_row(x, 'A', 'B', 'C');
			ft_putchar('\n');
		}
		if (y >= 3 && i < y)
			print_row(x, 'B', ' ', 'B');
		if (i == y)
			print_row(x, 'C', 'B', 'A');
		ft_putchar('\n');
		i++;
	}
}
