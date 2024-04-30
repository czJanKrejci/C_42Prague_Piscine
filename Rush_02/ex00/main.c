/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vemichal <vemichal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:45:04 by vemichal          #+#    #+#             */
/*   Updated: 2024/04/28 19:12:00 by vemichal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

void	return_error(void)
{
	write(1, "Error\n", 6);
	exit (0);
}

void	check_input(char *cl_input)
{
	while (*cl_input)
	{
		if (!((*cl_input >= 48) && (*cl_input <= 57)))
			return_error();
		cl_input++;
	}
}

void	first_step(char *nbr, t_dict *dict)
{
	int	len;
	int	i;

	len = ft_strlen(nbr);
	if (len == 1 && nbr[0] == '0')
		find_list(0, 0, dict);
	i = -1;
	while (nbr[++i])
	{
		if ((len - i) % 3 == 0 && nbr[i] != '0')
			do_hundred(nbr, i, dict, len);
		else if ((len - i) % 3 == 2 && nbr[i] != '0')
		{
			do_tens(nbr, i, dict, len);
			if (nbr[i] == '1')
				i++;
		}
		else if ((len - i) % 3 == 1 && nbr[i] != '0')
			do_ones(nbr, i, dict, len);
		if (nbr[i + 1] && nbr[i] != '0')
			write(1, " ", 1);
	}
}

void	main_process(char *nbr, t_dict *dict)
{
	first_step(nbr, dict);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	t_dict	*dict;
	char	**arr;

	if (argc == 2 || argc == 3)
		check_input(argv[1]);
	else
		return_error();
	dict = create_next();
	arr = main_reading(argc, argv);
	to_struct(dict, arr);
	free_arr(arr);
	first_step(argv[1], dict);
	write(1, "\n", 1);
	free_dict(dict);
	return (0);
}
