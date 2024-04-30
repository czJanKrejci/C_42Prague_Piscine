/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reading1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vemichal <vemichal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:48:08 by vemichal          #+#    #+#             */
/*   Updated: 2024/04/28 19:11:58 by vemichal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

char	*save_dict(int size, char *src)
{
	int		fd;
	char	*buffer;
	int		byte_read;

	fd = open(src, O_RDONLY);
	buffer = (char *)malloc(sizeof(char) * size);
	byte_read = read(fd, buffer, size);
	if (byte_read < 1)
		return (NULL);
	close(fd);
	return (buffer);
}

char	**split_lines(char **arr, char *str, int lines)
{
	int	i;
	int	j;

	i = 0;
	while (i < lines)
	{
		arr[i] = (char *)malloc(sizeof(char) * line_size(str));
		j = 0;
		while (*str)
		{
			if (*str == 10)
			{
				arr[i][j] = '\0';
				i++;
				str++;
				break ;
			}
			arr[i][j] = *str;
			j++;
			str++;
		}
	}
	arr[i] = (char *)malloc(sizeof(char *) * 1);
	arr[i][0] = '\0';
	return (arr);
}

char	*ft_reading(char *dict_src, char *dest)
{
	int	size;

	size = find_size(0, dict_src);
	dest = save_dict(size, dict_src);
	return (dest);
}

char	**main_reading(int argc, char **argv)
{
	char	**arr;
	char	*dict;

	dict = NULL;
	if (argc == 2)
		dict = ft_reading("numbers.dict", dict);
	else if (argc == 3)
		dict = ft_reading(argv[2], dict);
	else
	{
		write(1, "Incorrect number of arguments.\n", 31);
		return (0);
	}
	arr = (char **)malloc((count_lines(dict) + 1) * sizeof(char *));
	split_lines(arr, dict, count_lines(dict));
	free(dict);
	return (arr);
}
