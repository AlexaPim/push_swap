/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 14:01:06 by ado-prad          #+#    #+#             */
/*   Updated: 2023/06/13 15:11:04 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_check_order(t_numbers **stack_a)
{
	t_numbers	*temp_one;
	t_numbers	*temp_two;

	temp_one = *stack_a;
	temp_two = (*stack_a)->next;
	while (temp_one->next != NULL)
	{
		if (temp_one->index > temp_two->index)
			return (1);
		temp_one = temp_one->next;
		temp_two = temp_two->next;
	}
	return (0);
}

int	ft_check_duplicate(t_numbers **stack_a)
{
	t_numbers	*temp_one;
	t_numbers	*temp_two;

	temp_one = *stack_a;
	while (temp_one)
	{
		if (temp_one->number > INT_MAX || temp_one->number < INT_MIN)
			return (1);
		temp_two = temp_one->next;
		while (temp_two)
		{
			if (temp_one->number == temp_two->number)
				return (1);
			temp_two = temp_two->next;
		}
		temp_one = temp_one->next;
	}
	return (0);
}

void	ft_sort_numbers(t_numbers **stack_a, t_numbers **stack_b, int argc)
{
	if (ft_lstsize(*stack_a) == 1)
		return ;
	else if (ft_lstsize(*stack_a) == 2)
		ft_sorttwo(stack_a);
	else if (ft_lstsize(*stack_a) == 3)
		ft_sortthree(stack_a);
	else if (ft_lstsize(*stack_a) > 3 && ft_lstsize(*stack_a) < 6)
		ft_sort_fourfive(stack_a, stack_b, argc - 1);
	else
		ft_radix(argc, stack_a, stack_b);
}

void	rotate_rotate(t_numbers **stack_a, t_numbers **stack_b)
{
	t_numbers	*temp_a;
	t_numbers	*temp_b;

	temp_a = *stack_a;
	temp_b = *stack_b;
	if (stack_a == NULL || stack_b == NULL)
		return ;
	while (temp_a->next != NULL)
		temp_a = temp_a->next;
	if (temp_a->next == NULL)
	{
		temp_a->next = *stack_a;
		(*stack_a) = (*stack_a)->next;
		temp_a->next->next = NULL;
	}
	while (temp_b->next != NULL)
		temp_b = temp_b->next;
	if (temp_b->next == NULL)
	{
		temp_b->next = *stack_b;
		(*stack_b) = (*stack_b)->next;
		temp_b->next->next = NULL;
	}
	ft_printf("rr\n");
}

void	swap_swap(t_numbers **stack_a, t_numbers **stack_b)
{
	t_numbers	*temp_a;
	t_numbers	*temp_b;

	if (stack_a == NULL || stack_b == NULL)
		return ;
	if (stack_a != NULL && (*stack_a)->next != NULL)
	{
		temp_a = (*stack_a)->next;
		(*stack_a)->next = (*stack_a)->next->next;
		temp_a->next = *stack_a;
		*stack_a = temp_a;
	}
	if (stack_b != NULL && (*stack_b)->next != NULL)
	{
		temp_b = (*stack_b)->next;
		(*stack_b)->next = (*stack_b)->next->next;
		temp_b->next = *stack_b;
		*stack_b = temp_b;
	}
	ft_printf("ss\n");
}
