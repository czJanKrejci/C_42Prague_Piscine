/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrejci <jkrejci@student.42prague.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:00:55 by jkrejci           #+#    #+#             */
/*   Updated: 2024/04/24 11:08:29 by jkrejci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	length;

	length = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (length));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min < max)
		(*range)[i++] = min++;
	return (length);
}
/*
int main(void) {
    int *range;
    int min = 0;
    int max = 100;

    // Test ft_ultimate_range
    int result = ft_ultimate_range(&range, min, max);
    if (result < 0) {
        printf("Memory allocation failed\n");
        return 1;
    } else if (result == 0) {
        printf("min is greater than or equal to max, range is NULL\n");
    } else {
        printf("Range:");
        for (int i = 0; i < result; i++) {
            printf(" %d", range[i]);
        }
        printf("\n");
    }

    // Free allocated memory
    free(range);

    return 0;
}
*/
