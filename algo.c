/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 14:43:28 by thib              #+#    #+#             */
/*   Updated: 2023/03/09 19:47:35 by thib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int top_a(t_tab *stack)
{
    int	i;

	i = 0;
	while (stack->a[i] == -1)
		i++;
	return (i);
}

void	empty_b(t_tab *stack)
{
	int	i;

	i = 0;
	while (stack->b[i] == -1)
		i++;
	while (i < stack->s_a)
	{
		pa(stack);
		i++;
	}
}

void	algo(t_tab *stack)
{
    int i;
    int j;
    int max_num;
    int max_bits;

    max_bits = 0;
    i = 0;
    j = 0;
    stack->num = top_a(stack);
    max_num = (stack->s_a) - 1;
    while ((max_num >> max_bits) != 0)
        max_bits++;
    while (i < max_bits)
    {
        while (j < stack->s_a)
        {
			if ((stack->num >> i) & (1 == 1))
				ra(stack);
			else
				pb(stack);
            j++;
        }
		i++;
    }
	empty_b(stack);
}
