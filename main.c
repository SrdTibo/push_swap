/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 10:07:11 by tserdet           #+#    #+#             */
/*   Updated: 2023/03/14 13:28:46 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stacks(t_tab *stack)
{
	int	i;

	i = 0;
	ft_printf("|A|");
	while (i < stack->s_a)
	{
		ft_printf("%d|", stack->a[i]);
		i++;
	}
	ft_printf("\n");
	ft_printf("|B|");
	i = 0;
	while (i < stack->s_a)
	{
		ft_printf("%d|", stack->b[i]);
		i++;
	}
	ft_printf("\n");
}

int	verif(int argc, char **argv, t_tab *stack)
{
	if (argc <= 1)
	{
		free_end(stack);
		return (0);
	}
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
	return (1);
}

int	main(int argc, char **argv)
{
	t_tab	*stack;

	stack = malloc(sizeof(t_tab));
	if (!stack)
	{
		free_end(stack);
		return (0);
	}
	if (verif(argc, argv, stack) == 0)
		return (0);
	if (first_sort(argv, stack) == 0)
		return (0);
	if (already_sorted(stack) == 1)
		return (0);
	algo(stack);
	free_end(stack);
	return (1);
}
