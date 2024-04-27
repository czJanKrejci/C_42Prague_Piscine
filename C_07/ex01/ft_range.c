/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrejci <jkrejci@student.42prague.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:15:47 by jkrejci           #+#    #+#             */
/*   Updated: 2024/04/22 18:15:04 by jkrejci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*newarray;
	int	i;

	if (min >= max)
		return (NULL);
	newarray = (int *)malloc(sizeof(int) * (max - min));
	if (newarray == NULL)
		return (NULL);
	i = 0;
	while (min < max)
		newarray[i++] = min++;
	return (newarray);
}
/*
int	main(void)
{
	int	min = -100;
	int max = 100;
	while (min < max)
	{
		printf("%p\t%d\n", ft_range(min, max),*(ft_range(min,max)));
		min++;
	}
	return (0);
}
*/
