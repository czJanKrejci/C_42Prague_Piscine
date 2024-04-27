/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrejci <jkrejci@student.42prague.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:40:04 by jkrejci           #+#    #+#             */
/*   Updated: 2024/04/20 13:57:31 by jkrejci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strlcat returns the number of characters it tried to copy which is the sum
// of the lengths of the strings s1 and s2 or n, whichever is smaller

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	j;
	unsigned int	destlen;
	unsigned int	srclen;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	j = 0;
	while ((destlen + 1 + j < size) && src[j])
	{
		dest[destlen + j] = src[j];
		j++;
	}
	dest[destlen + j] = '\0';
	return (destlen + srclen);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	int size = 12;
	char dest[size];
	char *destinit = "abc";
	strcpy(dest, destinit);
	printf("%s\n", dest);
	char *src = "123456789";
	printf("%d\n", ft_strlcat(dest, src, size));
	printf("%s\n", dest);
	return (0);
}
*/
