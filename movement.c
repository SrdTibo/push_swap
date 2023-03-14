/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 12:15:08 by tserdet           #+#    #+#             */
/*   Updated: 2023/03/14 13:17:33 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_tab	*sa(t_tab *stack)
{
	int	i;

	i = 0;
	while (stack->a[i] == -1)
		i++;
	swap(&stack->a[i], &stack->a[i + 1]);
	ft_printf("sa\n");
	return (stack);
}

t_tab	*pa(t_tab *stack)
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

t_tab	*pb(t_tab *stack)
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

t_tab	*ra(t_tab *stack)
{
	int	i;
	int	temp;

	i = 0;
	temp = 0;
	while (stack->a[i] == -1)
		i++;
	if ((stack->s_a - i) == 2)
	{
		swap(&stack->a[i], &stack->a[i + 1]);
		ft_printf("ra\n");
		return (stack);
	}
	temp = stack->a[i];
	while (i < stack->s_a)
	{
		swap(&stack->a[i], &stack->a[i + 1]);
		i++;
	}
	stack->a[stack->s_a - 1] = temp;
	ft_printf("ra\n");
	return (stack);
}

t_tab	*rra(t_tab *stack)
{
	int	i;
	int	tmp;

	i = 0;
	while (stack->a[i] == -1)
		i++;
	if ((stack->s_a - i) == 2)
	{
		swap(&stack->a[i], &stack->a[i + 1]);
		ft_printf("ra\n");
		return (stack);
	}
	tmp = stack->s_a - i;
	while (tmp > 0)
	{
		swap(&stack->a[tmp], &stack->a[tmp - 1]);
		tmp--;
	}
	ft_printf("rra\n");
	return (stack);
}
