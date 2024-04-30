/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vemichal <vemichal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:50:21 by vemichal          #+#    #+#             */
/*   Updated: 2024/04/28 18:50:27 by vemichal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

void	free_arr(char **arr)
{
	int	i;

	i = -1;
	while (arr[++i])
		free(arr[i]);
	free(arr);
}

void	free_dict(t_dict *dict)
{
	t_dict	*tmp;

	while (dict)
	{
		tmp = dict;
		free(dict->text);
		dict = dict->next;
		free(tmp);
	}
}
