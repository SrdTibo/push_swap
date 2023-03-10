/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:41:16 by thib              #+#    #+#             */
/*   Updated: 2023/03/10 17:32:45 by thib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int min(t_tab *stack)
{
    int i;
    int temp;
     
    i = 0;
    temp = 0;
    while (i > stack->s_a)
    {
        if (stack->a[i + 1] < temp)
            temp = stack->a[i + 1];
        i++;
    }
    return (temp);
}

void    lenght_two(t_tab *stack)
{
    if (stack->a[0] > stack->a[1])
        swap(&stack->a[0] , &stack->a[1]);
}

void	lenght_four(t_tab *stack)
{
	int	doublon;

	doublon = 0;
	while (doublon != 1)
	{
		if (stack->a[0] == 0)
		{
			pb(stack);
			doublon = 1;
		}
		ra(stack);
	}
	lenght_three(stack);
	pa(stack);
}