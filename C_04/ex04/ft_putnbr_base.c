/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrejci <jkrejci@student.42prague.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 15:33:44 by jkrejci           #+#    #+#             */
/*   Updated: 2024/04/20 20:01:07 by jkrejci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	return (result * sign);
}

int	check_dup_sign(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (*(base + i))
	{
		j = i + 1;
		while (*(base + j))
		{
			if ((*(base + i)) == (*(base + j)))
				return (1);
			if ((*(base + i) == '+') || (*(base + i) == '-'))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	printrecursively(int nbr, int baselength, char *base)
{
	long	number;

	number = nbr;
	if (number < 0)
	{
		number *= -1;
		write(1, "-", 1);
	}
	if (number >= baselength)
		printrecursively(number / baselength, baselength, base);
	write(1, &base[nbr % baselength], 1);
	return ;
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		baselength;
	char	*tempbase;

	tempbase = base;
	baselength = 0;
	while (*tempbase)
	{
		tempbase++;
		baselength++;
	}
	if (baselength < 2)
		return ;
	if (check_dup_sign(base) == 1)
		return ;
	printrecursively(nbr, baselength, base);
	return ;
}
/*
int	main(int argc, char *argv[])
{
	int	number;

	number = 0;
	if (argc == 3)
	{
		number = ft_atoi(argv[1]);
		ft_putnbr_base(number, argv[2]);
	}
	return (0);
}
*/
