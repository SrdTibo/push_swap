/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_end.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thib <thib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 12:59:16 by tserdet           #+#    #+#             */
/*   Updated: 2023/03/08 11:08:27 by thib             ###   ########.fr       */
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