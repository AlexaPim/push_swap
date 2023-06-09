/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 13:53:49 by ado-prad          #+#    #+#             */
/*   Updated: 2023/06/09 16:42:20 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "../libft/libft.h"
# include <limits.h>
# include <stdio.h>

t_numbers   *ft_init_stack(int argc, char **argv, t_numbers	*stack);
t_numbers   *ft_init_stack( int argc, char **argv, t_numbers *stack);
void    ft_put_index(t_numbers * stack);
void    ft_sorttwo(t_numbers **stack_a);
void    ft_sortthree(t_numbers **stack_a);
void    ft_sortfour(t_numbers **stack_a);
int     valid_numbers(char **argv);
void    ft_push_a(t_numbers **stack_a, t_numbers **stack_b);
void    ft_push_b(t_numbers **stack_a, t_numbers **stack_b);
void    ft_swap_a(t_numbers **stack);
void    ft_swap_b(t_numbers **stack);
void    ft_rotate_a(t_numbers **stack);
void    ft_rotate_b(t_numbers **stack);
void    ft_rotatereverse_a(t_numbers **stack);
void    ft_rotatereverse_b(t_numbers **stack);
void    ft_print_stack(t_numbers * stack);

//radix
void	ft_radix(t_numbers **stack_a, t_numbers **stack_b, int stack_pos);

//test
void	aux_main(t_numbers *stack_a);
void	free_list(t_numbers *stack);
void	insert_number(t_numbers **stack, int number);

#endif
