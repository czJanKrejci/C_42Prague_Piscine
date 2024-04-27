/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrejci <jkrejci@student.42prague.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 17:13:38 by jkrejci           #+#    #+#             */
/*   Updated: 2024/04/14 19:42:45 by jkrejci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;
	int	*taboriginal;

	i = 0;
	j = 0;
	temp = 0;
	taboriginal = tab;
	while (j < (size - 1 - j))
	{
		i = 0;
		while (i < size)
		{
			if (*(tab + i) > *(tab + i +1))
			{
				temp = *(tab + i);
				*(tab + i) = *(tab + i +1);
				*(tab + i + 1) = temp;
			}
			i++;
		}
		j++;
	}
}
/*
int main(void)
{
	int tab[] = {1, 20, 4, 47, 80, 67, 7, 6};
	ft_sort_int_tab(tab, 8);
	for (unsigned long i = 0; i < (sizeof(tab) / sizeof (tab[0])); i++){
		printf("%d\n", tab[i]);
	}
	return (0);
}
*/
