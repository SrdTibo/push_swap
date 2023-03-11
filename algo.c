/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:30:01 by thib              #+#    #+#             */
/*   Updated: 2023/03/11 11:20:40 by thib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lenght_three(t_tab *stack)
{
	if (stack->a[0] > stack->a[1] && stack->a[0] < stack->a[2])
		sa(stack);
	else if (stack->a[0] > stack->a[1] && stack->a[1] > stack->a[2])
	{
		sa(stack);
		rra(stack);
	}
	else if (stack->a[0] > stack->a[1] && stack->a[0] > stack->a[2])
		ra(stack);
	else if (stack->a[0] < stack->a[1] && stack->a[0] < stack->a[2])
	{
		sa(stack);
		ra(stack);
	}
	else
		rra(stack);
}

void	lenght_two(t_tab *stack)
{
	if (stack->a[0] > stack->a[1])
		ra(stack);
}

t_tab *algo(t_tab* stack)
{
    printf("s_a = %d\n", stack->s_a);
	if (stack->s_a > 5)
		big_stack(stack);
    if (stack->s_a == 3)
        lenght_three(stack);
    if (stack->s_a == 2)
        lenght_two(stack);
    return (stack);
}