/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrejci <jkrejci@student.42prague.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:36:46 by jkrejci           #+#    #+#             */
/*   Updated: 2024/04/18 13:52:27 by jkrejci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n",ft_strcmp("ahoj", "ahojky"));
	printf("%d\n",ft_strcmp("ahoj", "ahoy"));
	printf("%d\n",ft_strcmp("ahoy", "ahoj"));
	printf("%d\n",ft_strcmp("ahoj", "ahoj"));
	printf("%d\n",ft_strcmp("ahojky", "ahoj"));
	return (0);
}
*/
