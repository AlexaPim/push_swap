/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 14:05:13 by ado-prad          #+#    #+#             */
/*   Updated: 2023/06/13 15:01:36 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_numbers	*ft_lstnew(char	*argv)
{
	t_numbers	*list_a;

	list_a = (t_numbers *)ft_calloc(1, sizeof(t_numbers));
	if (list_a == NULL)
		return (NULL);
	list_a->number = ft_atol(argv);
	list_a->next = NULL;
	return (list_a);
}
