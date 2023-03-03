/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_end.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 12:59:16 by tserdet           #+#    #+#             */
/*   Updated: 2023/03/03 14:29:14 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	free_end(t_tab *stack)
{
	free(stack->a);
	free(stack->b);
	free(stack->temp);
	free(stack);
	return (0);
}