/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:29:46 by ado-prad          #+#    #+#             */
/*   Updated: 2023/06/09 16:42:58 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	get_the_digit(int max_index)
{
	int	digits;

	digits = 0;
	while (max_index)
	{
		max_index /= 2;
		digits++;
	}
	return (digits);
}

void	ft_radix(t_numbers **stack_a, t_numbers **stack_b, int stack_pos)
{
	int			digit;
	int			i;
	int			j;
	t_numbers	*aux;
	int			size;

	aux = *stack_a;
	size = ft_lstsize(aux);
	digit = get_the_digit(stack_pos);
	i = 0;
	while (i < digit)
	{
		j = 0;
		while (j++ < size)
		{
			aux = *stack_a;
			if ((aux->index >> i) & 1)
				ft_rotate_a(stack_a);
			else
				ft_push_a(stack_a, stack_b);
		}
		while (ft_lstsize(*stack_b) != 0)
			ft_push_a(stack_a, stack_b);
		i++;
	}
}
