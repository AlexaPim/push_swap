/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 13:53:55 by ado-prad          #+#    #+#             */
/*   Updated: 2023/06/09 14:20:40 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_print_stack(t_numbers *stack)
{
	while (stack)
	{
		ft_printf("%i\n", stack->number);
		ft_printf("%i\n", stack->index);
		stack = stack->next;
	}
}

int	main(int argc, char **argv)
{
	t_numbers	*stack_a;
	t_numbers	*stack_b;

	stack_a = NULL;
	if (argc < 3)
		return (1);
	if (valid_numbers(argv) != 0)
	{
		ft_putstr_fd("error\n", 2);
		return (0);
	}
	stack_a = ft_init_stack(argc, argv, stack_a);
	stack_b = NULL;
	if (ft_lstsize(stack_a) == 2)
		ft_sorttwo(&stack_a);
	if (ft_lstsize(stack_a) == 3)
		ft_sortthree(&stack_a);
//	if (ft_lstsize(stack_a) == 4)
//		ft_sortfour(&stack_a, &stack_b);
	ft_print_stack(stack_a);
	ft_printf("\n");
	return (0);
}
