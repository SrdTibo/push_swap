/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:30:01 by thib              #+#    #+#             */
/*   Updated: 2023/03/11 17:38:50 by thib             ###   ########.fr       */
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
		sa(stack);
	else if (stack->a[i] > stack->a[i + 1] && stack->a[i + 1] > stack->a[i + 2])
	{
		sa(stack);
		rra(stack);
	}
	else if (stack->a[i] > stack->a[i + 1] && stack->a[i] > stack->a[i + 2])
		ra(stack);
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
	int	temp;
	int	i;

	i = 0;
	temp = stack->a[stack->s_a];
	stack->a[stack->s_a] = -1;
	rra(stack);
	lenght_three(stack);
	while (temp > stack->a[i] )
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