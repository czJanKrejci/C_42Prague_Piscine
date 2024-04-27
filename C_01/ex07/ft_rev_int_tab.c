/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrejci <jkrejci@student.42prague.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 15:56:50 by jkrejci           #+#    #+#             */
/*   Updated: 2024/04/14 17:07:25 by jkrejci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	*taboriginal;

	i = 0;
	temp = 0;
	taboriginal = tab;
	while (i < (size / 2))
	{
		temp = *(tab + i);
		*(tab + i) = *(taboriginal + size - 1 - i);
		*(taboriginal + size - 1 - i) = temp;
		i++;
	}
}
/*
int main(void)
{
	int	tab[] = {10, 20, 30, 40, 50, 60, 70, 80};
	ft_rev_int_tab(tab, 8);
	for (unsigned long i = 0; i < (sizeof(tab) / sizeof (tab[0])); i++){
		printf("%d\n", tab[i]);
	}
	return (0);
}
*/
