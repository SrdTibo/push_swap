/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:30:01 by thib              #+#    #+#             */
/*   Updated: 2023/03/10 16:27:14 by thib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_stack(t_tab *stack)
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

void	length_fivebis_two(t_tab *stack, int posi)
{
	if (posi <= 3)
		ra(stack);
	else
		rra(stack);
}

void	length_fivebis(t_tab *stack)
{
    int    taille;

	taille = stack->s_a;
	if (taille == 1)
	{
		pa(stack);
		return ;
	}
	three_stack(stack);
	pa(stack);
}

void	length_five(t_tab *stack)
{
	int	doublon;
	int	posi;
    int taille;
    
    taille = stack->s_a;

    while (stack->a[posi] == -1)
        posi++;

	while (taille > 3)
	{
		length_fivebis_two(stack, posi);
		if (stack->a[0] == 0)
		{
			pb(stack);
			taille--;
			doublon = 1;
		}
		if (stack->a[0] == 1 && doublon == 1)
		{
			pb(stack);
			taille--;
			doublon = 2;
		}
	}
	length_fivebis(stack);
}

t_tab *algo(t_tab* stack)
{
    if (stack->s_a > 5)
        big_stack(stack);
    if (stack->s_a == 3)
        three_stack(stack);
    return (stack);
}