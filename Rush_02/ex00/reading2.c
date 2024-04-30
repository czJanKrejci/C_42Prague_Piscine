/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reading2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vemichal <vemichal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:49:55 by vemichal          #+#    #+#             */
/*   Updated: 2024/04/28 18:49:58 by vemichal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

void	get_dict_text(t_dict *dict, char *str)
{
	int	c;
	int	space;
	int	i;

	c = 0;
	space = 1;
	i = 0;
	dict->text = (char *)malloc(sizeof(char) * 300);
	while ((str[i] >= 48 && str[i] <= 57) || (str[i] == 32 || \
	(str[i] >= 9 && str[i] <= 13)) || str[i] == ':')
		i++;
	while (str[i] != '\0' && (str[i] >= 32 && str[i] < 127))
	{
		if (space == 1 && str[i] == 32)
		{
			dict->text[c++] = str[i++];
			space = 0;
		}
		else if (str[i] >= 32 && str[i] < 127)
		{
			dict->text[c++] = str[i++];
			space = 1;
		}
	}
}

void	fix_zeroes(int *pow, int *num)
{
	while (*pow > 0)
	{
		*num = *num * 10;
		*pow -= 1;
	}
}

void	rush_atoi(char *str, int *num, int *pow)
{
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32 || \
		((str[i] == '-' || str[i] == '+')))
		i++;
	while (str[i])
	{
		while (str[i] >= '1' && str[i] <= '9')
		{
			*num = *num * 10;
			*num += str[i++] - 48;
		}
		while (str[i] == '0')
		{
			*pow += 1;
			i++;
			if (str[i + 1] >= '1' && str[i + 1] <= '9')
			{
				fix_zeroes(pow, num);
				break ;
			}
		}
		break ;
	}
}

t_dict	*create_next(void)
{
	t_dict	*dict;

	dict = (t_dict *)malloc(sizeof(t_dict));
	dict->num = 0;
	dict->power = 0;
	dict->text = NULL;
	dict->next = NULL;
	return (dict);
}

void	to_struct(t_dict *dict, char **arr)
{
	t_dict	*tmp;
	int		i;

	i = 0;
	tmp = dict;
	while (arr[i])
	{
		rush_atoi(arr[i], &tmp->num, &tmp->power);
		get_dict_text(tmp, arr[i]);
		tmp->next = create_next();
		tmp = tmp->next;
		i++;
	}
	dict->power = 0;
}
