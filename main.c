/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araminas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 22:55:30 by araminas          #+#    #+#             */
/*   Updated: 2023/12/03 23:34:56 by araminas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "__strstr__.h"
#include "checking.h"
#include "print_2.h"
#include "print.h"

int	main(int argc, char**argv)
{
	char	buffer[1000];

	if (argc == 1 || argc > 3)
	{
		write(1, "Error", 5);
		return (1);
	}
	if (argc == 2)
	{
		if (check_num_arg(argv[1]))
		{
			return (1);
		}
	}
	check_and_swap_args(argv, 0);
	if (argv[1][0] == '0')
	{
		write(1, "Error", 5);
		return (1);
	}
	read(open(argv[2], O_RDONLY), buffer, 1000);
	print_nume_name(argv[1], buffer, stlen(argv[1]));
	close(fd);
	return (0);
}
