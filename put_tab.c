/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_tab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:10:29 by tserdet           #+#    #+#             */
/*   Updated: 2023/03/01 12:59:35 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_tab *put_tab(int argc, char **argv)
{
	t_tab	*stack;
	int		i;
	int		j;

	i = 0;
	j = 1;
	stack = malloc(sizeof(t_tab));
	stack->a = malloc(sizeof(int) * argc - 1);
	stack->b = malloc(sizeof(int) * argc - 1);
	if (stack == NULL || stack->a == NULL || stack->b == NULL)
	{
		free(stack);
		return (0);
	}
	while (j < argc)
	{
		stack->a[i] = atoi(argv[j]);
		i++;
		j++;
	}
	return (stack);
}