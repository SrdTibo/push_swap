/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 14:43:28 by thib              #+#    #+#             */
/*   Updated: 2023/03/10 12:33:28 by tserdet          ###   ########.fr       */
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
    max_num = stack->s_a;
    while ((max_num >> max_bits) != 0)
        max_bits++;
    while (i < max_bits)
    {
        while (j < stack->s_a)
        {
			stack->num = stack->a[top_a(stack)];
			if (((stack->num >> i) & 1) == 1)
				ra(stack);
			else
				pb(stack);
            j++;
        }
		empty_b(stack);
		j = 0;
		i++;
    }
}
