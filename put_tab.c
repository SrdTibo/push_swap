/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_tab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:10:29 by tserdet           #+#    #+#             */
/*   Updated: 2023/03/03 14:29:04 by tserdet          ###   ########.fr       */
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
	stack->temp = malloc(sizeof(int) * argc - 1);
	if (!stack || !stack->a || !stack->b || !stack->temp)
	{
		free_end(stack);
		return (0);
	}
	while (j < argc)
		stack->temp[i++] = ft_atoi(argv[j++]);
	return (stack);
}