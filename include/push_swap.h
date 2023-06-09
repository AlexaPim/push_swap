/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 13:53:49 by ado-prad          #+#    #+#             */
/*   Updated: 2023/06/09 14:31:49 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "../libft/libft.h"
# include <limits.h>
# include <stdio.h>

t_numbers*ft_init_stack(int argc, char **argv, t_numbers	*stack);
t_numbers*ft_init_stack( int argc, char **argv, t_numbers *stack);
voidft_put_index(t_numbers * stack);
voidft_sorttwo(t_numbers **stack_a);
voidft_sortthree(t_numbers **stack_a);
voidft_sortfour(t_numbers **stack_a, t_numbers **stack_b);
intvalid_numbers(char **argv);
voidft_push_a(t_numbers **stack_a, t_numbers **stack_b);
voidft_push_b(t_numbers **stack_a, t_numbers **stack_b);
voidft_swap_a(t_numbers **stack);
voidft_swap_b(t_numbers **stack);
voidft_rotate_a(t_numbers **stack);
voidft_rotate_b(t_numbers **stack);
voidft_rotatereverse_a(t_numbers **stack);
voidft_rotatereverse_b(t_numbers **stack);
voidft_print_stack(t_numbers * stack);

#endif
