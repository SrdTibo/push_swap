/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 10:07:11 by tserdet           #+#    #+#             */
/*   Updated: 2023/03/03 13:28:51 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	if (check_argv(argc, argv) == 0)
		return (0);
	if (check_double(argc, argv) == 0)
		return (0);
	// if (put_list(argc, argv) == 0)
	// {
	// 	printf("Problem converting to linked list");
	// 	return (0);
	// }
	algo(argc, argv);
	return (1);
}