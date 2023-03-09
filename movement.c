/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 12:15:08 by tserdet           #+#    #+#             */
/*   Updated: 2023/03/09 13:44:06 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_tab *pa(t_tab *stack)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (stack->b[i] == -1)
		i++;
	while (stack->a[j] == -1)
		j++;
	stack->a[j - 1] = stack->b[i];
	stack->b[i] = -1;
	ft_printf("pa\n");
	return (stack);
}

t_tab *pb(t_tab *stack)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (stack->a[i] == -1)
		i++;
	while (stack->b[j] == -1)
		j++;


	stack->b[j - 1] = stack->a[i];
	stack->a[i] = -1;
	ft_printf("pb\n");
	return (stack);
}

t_tab *ra(t_tab *stack)
{
	int	i;
	int	temp;

	i = 0;
	temp = 0;
	while (stack->a[i] == -1)
		i++;
	temp = stack->a[i];
	while (i < stack->s_a)
	{
		swap(&stack->a[i], &stack->a[i - 1]);
		i++;
	}
	stack->a[stack->s_a - 1] = temp;
	ft_printf("ra\n");
	return (stack);
}