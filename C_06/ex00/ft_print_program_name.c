/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrejci <jkrejci@student.42prague.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 11:26:07 by jkrejci           #+#    #+#             */
/*   Updated: 2024/04/21 14:54:19 by jkrejci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_program_name(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
	return ;
}

int	main(int argc, char *argv[])
{
	if (argc > 0)
		ft_print_program_name(argv[0]);
	return (0);
}
