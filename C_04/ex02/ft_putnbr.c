/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrejci <jkrejci@student.42prague.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 20:30:01 by jkrejci           #+#    #+#             */
/*   Updated: 2024/04/18 18:35:31 by jkrejci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	integer_length(int num)
{
	int	length;

	length = 0;
	while (num)
	{
		num /= 10;
		length++;
	}
	return (length);
}

void	print_int(int n)
{
	int		length;
	char	array[10];
	int		i;

	length = integer_length(n);
	i = 0;
	while (i < length)
	{
		array[i++] = n % 10 + '0';
		n /= 10;
	}
	i--;
	while (i >= 0)
	{
		write(1, &array[i], 1);
		i--;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	else if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	print_int(nb);
}
/*
int	main(void)
{
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(-1);
	write(1, "\n", 1);
	ft_putnbr(2);
	return (0);
}
*/
