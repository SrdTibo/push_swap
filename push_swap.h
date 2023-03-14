/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 10:07:27 by tserdet           #+#    #+#             */
/*   Updated: 2023/03/14 13:20:32 by tserdet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <memory.h>

typedef struct s_pile
{
	int				content;
	struct s_pile	*next;
}					t_pile;
typedef struct s_control
{
	t_pile			*first;
}					t_control;
typedef struct s_tab{
	int	max_bits;
	int	argm;
	int	s_a;
	int	num;
	int	s_temp;
	int	*a;
	int	*b;
	int	*temp;
}					t_tab;
int			free_end(t_tab *stack);
t_tab		*put_tab_big(int argc, char **argv, t_tab *stack);
t_tab		*put_tab_little(int argc, char **argv, t_tab *stack);
int			check_argv(int argc, char **argv);
int			insertion(t_control *list, int nvNombre);
t_tab		*sort_tab(t_tab *stack);
t_tab		*first_sort(char **argv, t_tab *stack);
int			free_end(t_tab *stack);
t_tab		*argv_big_check(int argc, char **argv, t_tab *stack);
t_tab		*argv_little_check(char **argv, t_tab *stack);
int			nmbr_arg_tab(char **argv);
void		swap(int *a, int *b);
t_tab		*pa(t_tab *stack);
t_tab		*pb(t_tab *stack);
t_tab		*ra(t_tab *stack);
t_tab		*sa(t_tab *stack);
t_tab		*rra(t_tab *stack);
void		big_stack(t_tab *stack);
t_tab		*algo(t_tab *stack);
void		lenght_two(t_tab *stack);
void		lenght_three(t_tab *stack);
void		print_stacks(t_tab *stack);
int			already_sorted(t_tab *stack);
#endif