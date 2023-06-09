/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 13:54:01 by ado-prad          #+#    #+#             */
/*   Updated: 2023/06/09 16:35:03 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_sorttwo(t_numbers	**stack_a)
{
	if ((*stack_a)->number > (*stack_a)->next->number)
		ft_swap_a(&*stack_a);
	else
		return ;
}

void	ft_sortthree(t_numbers **stack_a)
{
	if ((*stack_a)->number < ((*stack_a)->next->number)
		&& (*stack_a)->next->number < ((*stack_a)->next->next->number))
		return ;
	if ((*stack_a)->number > ((*stack_a)->next->number)
		&& (*stack_a)->next->number > ((*stack_a)->next->next->number))
	{
		ft_swap_a(&*stack_a);
		ft_rotatereverse_a(&*stack_a);
	}
	while (!((*stack_a)->number < ((*stack_a)->next->number)
			&& (*stack_a)->next->number < ((*stack_a)->next->next->number)))
	{
		if ((*stack_a)->number > (*stack_a)->next->number
			&& (*stack_a)->number < (*stack_a)->next->next->number)
			ft_rotatereverse_a(&*stack_a);
		if ((*stack_a)->number > (*stack_a)->next->number
			&& (*stack_a)->next->number < (*stack_a)->next->next->number)
			ft_rotate_a(stack_a);
	}
}

void	ft_sortfour(t_numbers **stack_a)
{
	if ((*stack_a)->number < (*stack_a)->next->number
		&& (*stack_a)->next->number < (*stack_a)->next->next->number
		&& (*stack_a)->next->next->number < (*stack_a)->next->next->next->number)
		return ;
	if ((*stack_a)->number > (*stack_a)->next->number
		&& (*stack_a)->next->number > (*stack_a)->next->next->number
		&& (*stack_a)->next->next->number > (*stack_a)->next->next->next->number)
	{
		ft_swap_a(stack_a);
		ft_rotatereverse_a(stack_a);
	}
	while (!((*stack_a)->number < (*stack_a)->next->number
			&& (*stack_a)->next->number < (*stack_a)->next->next->number
			&& (*stack_a)->next->next->number < (*stack_a)->next->next->next->number))
	{
		if ((*stack_a)->number > (*stack_a)->next->number
			&& (*stack_a)->number < (*stack_a)->next->next->number
			&& (*stack_a)->number < (*stack_a)->next->next->next->number)
			ft_rotatereverse_a(stack_a);
		if ((*stack_a)->number > (*stack_a)->next->number
			&& (*stack_a)->next->number < (*stack_a)->next->next->number
			&& (*stack_a)->next->number < (*stack_a)->next->next->next->number)
			ft_rotate_a(stack_a);
	}
}
