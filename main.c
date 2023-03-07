/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 10:07:11 by tserdet           #+#    #+#             */
/*   Updated: 2023/03/07 15:27:26 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	if (argc <= 1)
		return (0);
	if (argc == 2)
	{
		if (argv_little_check(argv) == 0)
			return (0);
	}
	else if (argc > 2)
	{
		if (argv_big_check(argc, argv) == 0)
			return (0);
	}
	// algo(argc, argv);
	return (1);
}