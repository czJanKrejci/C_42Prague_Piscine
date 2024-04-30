/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrejci <jkrejci@student.42prague.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 14:36:09 by jkrejci           #+#    #+#             */
/*   Updated: 2024/04/28 15:43:26 by jkrejci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *str)
{
	char	*dest;
	int		i;

	i = 0;
	while (str[i])
		i++;
	dest = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	if (!(dest))
		return (NULL);
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char *av[])
{
	t_stock_str	*stock;
	int			i;

	stock = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!(stock))
		return (NULL);
	i = 0;
	while (i < ac)
	{
		stock[i].size = ft_strlen(av[i]);
		stock[i].str = av[i];
		stock[i].copy = ft_strcpy(av[i]);
		i++;
	}
	stock[i].size = 0;
	stock[i].str = 0;
	stock[i].copy = 0;
	return (stock);
}
/*
// Main function
int main() {
    // Test strings
    char *strings[] = {"Hello", "World", "This", "is", "a", "test"};
    int num_strings = sizeof(strings) / sizeof(strings[0]);

    // Convert strings to stock_str array
    t_stock_str *stock_array = ft_strs_to_tab(num_strings, strings);
    if (stock_array == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Print the stock_str array
    for (int i = 0; stock_array[i].str != NULL; i++) {
        printf("String: %s\n", stock_array[i].str);
        printf("Size: %d\n", stock_array[i].size);
        printf("Copy: %s\n", stock_array[i].copy);
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; stock_array[i].str != NULL; i++) {
        free(stock_array[i].copy);
    }
    free(stock_array);

    return 0;
}
*/
