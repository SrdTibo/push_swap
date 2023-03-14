/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:30:01 by thib              #+#    #+#             */
/*   Updated: 2023/03/14 12:37:00 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lenght_three(t_tab *stack)
{
	int	i;

	i = 0;
	while (stack->a[i] == -1)
		i++;
	if (stack->a[i] > stack->a[i + 1] && stack->a[i] < stack->a[i + 2])
	{
		sa(stack);
	}
	else if (stack->a[i] > stack->a[i + 1] && stack->a[i + 1] > stack->a[i + 2])
	{
		sa(stack);
		rra(stack);
	}
	else if (stack->a[i] > stack->a[i + 1] && stack->a[i] > stack->a[i + 2])
	{
		ra(stack);
	}
	else if (stack->a[i] < stack->a[i + 1] && stack->a[i] < stack->a[i + 2])
	{
		sa(stack);
		ra(stack);
	}
	else
		rra(stack);
}

void	lenght_four(t_tab *stack)
{
	while (stack->a[0] != 0)
		ra(stack);
	pb(stack);
	if (already_sorted(stack) == 0)
		lenght_three(stack);
	pa(stack);
}

void	lenght_five(t_tab *stack)
{
	while (stack->a[0] != 0)
		ra(stack);
	pb(stack);
	while (stack->a[1] != 1)
		ra(stack);
	pb(stack);
	if (already_sorted(stack) == 0)
		lenght_three(stack);
	pa(stack);
	pa(stack);
}

void	lenght_two(t_tab *stack)
{
	if (stack->a[0] > stack->a[1])
		ra(stack);
}

t_tab	*algo(t_tab *stack)
{
	if (stack->s_a > 5)
		big_stack(stack);
	if (stack->s_a == 5)
		lenght_five(stack);
	if (stack->s_a == 4)
		lenght_four(stack);
	if (stack->s_a == 3)
		lenght_three(stack);
	if (stack->s_a == 2)
		lenght_two(stack);
	return (stack);
}
