/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserdet <tserdet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 10:07:27 by tserdet           #+#    #+#             */
/*   Updated: 2023/03/03 14:26:54 by tserdet          ###   ########.fr       */
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
	struct	s_pile	*next;
}					t_pile;
typedef struct s_control
{
	t_pile			*first;
}					t_control;
typedef struct s_tab{
	int	size;
	int	*a;
	int	*b;
	int	*temp;
}					t_tab;
int	free_end(t_tab *stack);
t_control	*put_list(int argc, char **argv);
t_control	*initialisation();
t_tab *put_tab(int argc, char **argv);
int	check_argv(int argc, char **argv);
int	check_double(int argc, char **argv);
// int afficherListe(t_control *list);
int insertion(t_control *list, int nvNombre);
t_tab *sort_tab(t_tab *stack, int n);
t_tab *algo(int argc, char **argv);
int	free_end(t_tab *stack);
#endif