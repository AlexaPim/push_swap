/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 14:01:06 by ado-prad          #+#    #+#             */
/*   Updated: 2023/06/12 14:57:46 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int valid_order(t_numbers **stack_a)
{
	t_numbers *aux;

	aux = *stack_a;//primeiro elemento da lista e enq n for nulo
	while (aux != NULL)
	{
		if (aux->number > aux->next->number)
			return (0);
		if (aux->next == NULL)
			break ;
		aux = aux->next; 
	}
	return (1);
}

int have_duplicate(t_numbers **stack_a)
{
	t_numbers *n1;
	t_numbers *n2;

	n1 = *stack_a;
	while (n1 != NULL)
	{
		n2 = n1->next;
		while (n2 != NULL)
		{
			if (n2->number == n1->number)
			{
				return (1);
			}
			n2 = n2->next;
			
		}
		n1 = n1->next;
	}
	return (0);
}

int	aux_for_norm(t_numbers **stack_a, t_numbers **stack_b, int argc)
{
	if (ft_lstsize(*stack_a) == 1)
		return (0);
	else if (ft_lstsize(*stack_a) == 2)
		ft_sorttwo(&*stack_a);
	else if (ft_lstsize(*stack_a) == 3)
		ft_sortthree(&*stack_a);
	else if (ft_lstsize(*stack_a) > 3 && ft_lstsize(*stack_a) < 6)
		ft_sort_fourfive(&*stack_a, &*stack_b, argc - 1);
	else
		ft_radix(argc, &*stack_a, &*stack_b);
	return (0);
}
