/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vemichal <vemichal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:48:52 by vemichal          #+#    #+#             */
/*   Updated: 2024/04/28 19:05:15 by vemichal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

int	find_size(int size, char *src)
{
	int		fd;
	char	*buffer;
	int		byte_read;

	byte_read = 1;
	fd = open(src, O_RDONLY);
	buffer = (char *)malloc(sizeof(char) * 10);
	while (byte_read > 0)
	{
		byte_read = read(fd, buffer, 10);
		if (byte_read > 0)
		{
			size += byte_read;
		}
	}
	close(fd);
	free(buffer);
	return (size);
}

int	count_lines(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str == '\n')
			i++;
		str++;
	}
	return (i);
}

int	line_size(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n')
		i++;
	return (i + 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}
