/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 13:54:09 by ado-prad          #+#    #+#             */
/*   Updated: 2023/06/09 14:18:15 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_put_index(t_numbers *stack)
{
	int			index;
	t_numbers	*temp;
	t_numbers	*aux;

	temp = stack;
	while (temp != NULL)
	{
		index = 0;
		aux = stack;
		while (aux != NULL)
		{
			if (temp->number > aux->number)
				index++;
			aux = aux->next;
		}
		temp->index = index;
		temp = temp->next;
	}
}

int	valid_numbers(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		if (argv[i][j] == ' ' || argv[i][j] == '-' || argv[i][j] == '+')
			j++;
		while (argv[i][j])
		{
			if (ft_isdigit(argv[i][j]) == 0 &&
				(argv[i][j] != ' ' || ft_isdigit(argv[i][j + 1]) == 0))
			{
				ft_printf("not number\n");
				return (1);
			}
			j++;
		}
		ft_printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}

t_numbers	*ft_init_stack(int argc, char **argv, t_numbers	*stack)
{
	t_numbers	*temp;
	int			i;

	i = 1;
	stack = ft_lstnew(argv[i++]);
	temp = stack;
	while (i < (argc))
	{
		temp->next = ft_lstnew(argv[i]);
		temp = temp->next;
		i++;
	}
	ft_put_index(stack);
	return (stack);
}
