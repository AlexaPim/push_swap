/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 13:54:23 by ado-prad          #+#    #+#             */
/*   Updated: 2023/06/12 12:59:22 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_push_b(t_numbers	**stack_a, t_numbers	**stack_b)
{
	t_numbers	*temp;

	if (!(*stack_a))
		return ;
	temp = *stack_a;
	(*stack_a) = (*stack_a)->next;
	temp->next = *stack_b;
	(*stack_b) = temp;
	ft_printf("pb\n");
}

void	ft_swap_b(t_numbers	**stack)
{
	t_numbers	*temp;

	if (stack == NULL)
		return ;
	if (stack != NULL && (*stack)->next != NULL)
	{
		temp = (*stack)->next;
		(*stack)->next = (*stack)->next->next;
		temp->next = *stack;
		*stack = temp;
		ft_printf("sb\n");
	}
	else
		return ;
}

void	ft_rotate_b(t_numbers	**stack)
{
	t_numbers	*temp;

	temp = *stack;
	while (temp->next != NULL)
		temp = temp->next;
	if (temp->next == NULL)
	{
		temp->next = *stack;
		(*stack) = (*stack)->next;
		temp->next->next = NULL;
		ft_printf("rb\n");
	}
}

void	ft_rotatereverse_b(t_numbers **stack)
{
	t_numbers	*temp;
	t_numbers	*last;

	temp = *stack;
	while (temp->next->next != NULL)
		temp = temp->next;
	if (temp->next->next == NULL)
	{
		last = temp->next;
		temp->next = NULL;
		last->next = *stack;
		*stack = last;
		ft_printf("rrb\n");
	}
	return ;
}
