/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrejci <jkrejci@student.42prague.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:04:44 by jkrejci           #+#    #+#             */
/*   Updated: 2024/04/16 10:41:02 by jkrejci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;
	char			cap;

	i = 0;
	cap = 'y';
	while (str[i])
	{
		if (((str[i] >= 97) && (str[i] <= 122)) && (cap == 'y'))
			str[i] = str[i] - 32;
		else if (((str[i] >= 65) && (str[i] <= 90)) && (cap == 'n'))
			str[i] = str[i] + 32;
		if (((str[i] >= 97) && (str[i] <= 122))
			|| ((str[i] >= 65) && (str[i] <= 90))
			|| ((str[i] >= 48) && (str[i] <= 59)))
			cap = 'n';
		else
			cap = 'y';
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	test[] = "COMMENT tu vas ? 42mots QUARANTE-deux; cinquante+ET+un";
	printf("%s", ft_strcapitalize(test));
	return (0);	
}
*/
