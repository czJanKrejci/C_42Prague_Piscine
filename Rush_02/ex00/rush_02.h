/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_02.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vemichal <vemichal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 19:05:30 by vemichal          #+#    #+#             */
/*   Updated: 2024/04/28 19:07:37 by vemichal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_02_H
# define RUSH_02_H

# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct t_dict
{
	char			*text;
	struct t_dict	*next;
	int				num;
	int				power;
}	t_dict;

void	to_struct(t_dict *dict, char **arr);
int		ft_strlen(char *str);
int		find_size(int size, char *src);
char	*save_dict(int size, char *src);
int		count_lines(char *str);
int		line_size(char *str);
char	**split_lines(char **arr, char *str, int lines);
char	*ft_reading(char *dict_src, char *dest);
void	free_arr(char **arr);
char	**main_reading(int argc, char **argv);
void	main_process(char *nbr, t_dict *dict);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	do_hundred(char *nbr, int i, t_dict *dict, int len);
void	do_tens(char *nbr, int i, t_dict *dict, int len);
void	do_ones(char *nbr, int i, t_dict *dict, int len);
t_dict	*create_next(void);
void	free_dict(t_dict *dict);
void	find_list(int num, int pow, t_dict *dict);

#endif