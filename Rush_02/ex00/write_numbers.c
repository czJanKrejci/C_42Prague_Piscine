/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vemichal <vemichal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:51:43 by vemichal          #+#    #+#             */
/*   Updated: 2024/04/28 18:52:27 by vemichal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

void	find_list(int num, int pow, t_dict *dict)
{
	t_dict	*tmp;

	tmp = dict;
	while (tmp)
	{
		if (num == tmp->num && pow == tmp->power)
		{
			ft_putstr(tmp->text);
			return ;
		}
		tmp = tmp->next;
	}
	write(1, "Dict Error\n", 11);
}

int	get_nbr(char *str, int i)
{
	int	j;
	int	num;

	j = 0;
	num = 0;
	while (j++ < 2)
	{
		num = num * 10 + str[i++] - 48;
	}
	return (num);
}

void	do_hundred(char *nbr, int i, t_dict *dict, int len)
{
	if (i != 0 && nbr[i - 1] == '0')
		write(1, " ", 1);
	find_list(nbr[i] - 48, 0, dict);
	write(1, " ", 1);
	find_list(1, 2, dict);
	if (nbr[i + 1] == '0' && nbr[i + 2] == '0' && i + 2 < len - 1)
	{
		write(1, " ", 1);
		find_list(1, len - i - 3, dict);
	}
}

void	do_tens(char *nbr, int i, t_dict *dict, int len)
{
	if (nbr[i] == '1' && nbr[i + 1] != '0')
		find_list(get_nbr(nbr, i), 0, dict);
	else
		find_list(nbr[i] - 48, 1, dict);
	if ((nbr[i + 1] == '0' || (nbr[i] == '1' && nbr[i + 1] != 0)) \
		&& i + 1 < len - 1)
	{
		write(1, " ", 1);
		find_list(1, len - i - 2, dict);
	}
}

void	do_ones(char *nbr, int i, t_dict *dict, int len)
{
	find_list(nbr[i] - 48, 0, dict);
	if (len > 3 && len - i > 3)
	{
		write(1, " ", 1);
		find_list(1, len - i -1, dict);
	}
}
