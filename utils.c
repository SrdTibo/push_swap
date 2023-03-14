/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:41:16 by thib              #+#    #+#             */
/*   Updated: 2023/03/14 13:22:00 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	already_sorted(t_tab *stack)
{
	int	i;

	i = 0;
	while (stack->a[i] == -1)
		i++;
	while (i < stack->s_a - 1)
	{
		if ((stack->a[i + 1]) != (stack->a[i] + 1))
			return (0);
		i++;
	}
	return (1);
}
