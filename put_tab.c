/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_tab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:10:29 by tserdet           #+#    #+#             */
/*   Updated: 2023/03/09 20:19:29 by thib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_tab *put_tab_big(int argc, char **argv, t_tab *stack)
{
	int		i;
	int		j;

	i = 0;
	j = 1;

	stack->a = malloc(sizeof(int) * argc - 1);
	stack->b = malloc(sizeof(int) * argc - 1);
	stack->temp = malloc(sizeof(int) * argc - 1);
	if (!stack->a || !stack->b || !stack->temp)
	{
		free_end(stack);
		return (0);
	}
	while (j < argc)
	{
		stack->a[i] = ft_atoi(argv[j]);
		stack->temp[i] = ft_atoi(argv[j]);
		stack->s_temp++;
		i++;
		j++;
	}
	stack->argm = i;
	stack->s_a = i;
	return (stack);
}

t_tab *put_tab_little(int argc, char **argv, t_tab *stack)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	stack->a = malloc(sizeof(int) * argc );
	stack->b = malloc(sizeof(int) * argc);
	stack->temp = malloc(sizeof(int) * argc);
	if (!stack->a || !stack->b || !stack->temp)
	{
		free_end(stack);
		return (0);
	}
	while (j < argc)
	{
		stack->a[i] = ft_atoi(argv[j]);
		stack->temp[i] = ft_atoi(argv[j]);
		stack->s_temp++;
		i++;
		j++;
	}
	stack->argm = i;
	stack->s_a = i;
	return (stack);
}