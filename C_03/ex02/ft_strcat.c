/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrejci <jkrejci@student.42prague.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:39:05 by jkrejci           #+#    #+#             */
/*   Updated: 2024/04/18 21:14:10 by jkrejci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char dest[20] = "You";
	printf("%s\n",dest);
	printf("%s\n",ft_strcat(dest,"Are"));
	printf("%s\n",ft_strcat(dest, "The"));
	printf("%s\n",ft_strcat(dest, "Best"));
	return (0);
}
*/
