/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 20:58:33 by mmendes-          #+#    #+#             */
/*   Updated: 2022/09/24 16:23:41 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main( int argc, char **argv)
{
	char	*str;

	str = argv[0];
	while (*str != '\0' && argc)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
	return (0);
}
