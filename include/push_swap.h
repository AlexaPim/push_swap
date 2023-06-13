/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 13:53:49 by ado-prad          #+#    #+#             */
/*   Updated: 2023/06/13 14:58:17 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "../libft/libft.h"
# include <limits.h>
# include <stdio.h>
# include <strings.h>
# include <stdio.h>

int			valid_numbers(char **argv);
t_numbers	*ft_init_stack(int argc, char **argv, t_numbers	*stack);
void		ft_put_index(t_numbers *stack);
void		ft_sorttwo(t_numbers	**stack_a);
void		ft_sortthree(t_numbers **stack_a);
void		ft_sort_fourfive(t_numbers	**stack_a, t_numbers **stack_b, int ac);
int			ft_check_stack(t_numbers **stack_a);
void		ft_push_a(t_numbers	**stack_a, t_numbers	**stack_b);
void		ft_push_b(t_numbers	**stack_a, t_numbers	**stack_b);
void		ft_swap_a(t_numbers **stack);
void		ft_swap_b(t_numbers **stack);
void		ft_rotate_a(t_numbers	**stack);
void		ft_rotate_b(t_numbers	**stack);
void		ft_rotatereverse_a(t_numbers **stack);
void		ft_rotatereverse_b(t_numbers **stack);
void		ft_print_stack(t_numbers *stack);
void		ft_radix(int argc, t_numbers **stack_a, t_numbers **stack_b);
void		ft_push_back(t_numbers **stack_a, t_numbers **stack_b);
int			ft_count_digit(int argc);
void		ft_free(t_numbers **stack);
int         ft_check_duplicate(t_numbers **stack_a);
int         ft_check_order(t_numbers **stack_a);
void        ft_sort_numbers(t_numbers **stack_a, t_numbers **stack_b, int argc);
void        swap_swap(t_numbers **stack_a, t_numbers **stack_b);
void        rotate_rotate(t_numbers **stack_a, t_numbers **stack_b);

#endif
