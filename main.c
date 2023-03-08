/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 10:07:11 by tserdet           #+#    #+#             */
/*   Updated: 2023/03/08 11:07:35 by thib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_tab *stack;

	stack = malloc(sizeof(t_tab));
	if (argc <= 1)
		return (0);
	if (argc == 2)
	{
		if (argv_little_check(argv, stack) == 0)
			return (0);
	}
	else if (argc > 2)
	{
		if (argv_big_check(argc, argv, stack) == 0)
			return (0);
	}
	if (first_sort(argv, stack) == 0)
		return (0);
	free_end(stack);
	return (1);
}