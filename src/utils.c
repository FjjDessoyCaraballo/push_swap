/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdessoy- <fdessoy-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:10:17 by fdessoy-          #+#    #+#             */
/*   Updated: 2024/03/25 13:10:19 by fdessoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// we need a new lstlast to take the values
#include "push_swap.h"

// if this works returns 1
int	add_node(t_stack **stack, int value)
{
	t_stack *curr;
	t_stack *end;

	
	curr = (t_stack *)malloc(sizeof(t_stack));
	if (!curr)
		return (0);
	curr->next = NULL;
	curr->nb = value;
	curr->len = 0;
	if (!(*stack))
	{
		curr->prev = NULL;
		*stack = curr;
	}
	else
	{
		end = list_last(*stack);
		end->next = curr;
		curr->prev = end;
	}
	return (1);
}

t_stack	*list_last(t_stack *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

int	gimme_length(t_stack *lst)
{
	size_t	i;

	i = 1;
	while (lst)
	{
		if (!lst->next)
			return (i);
		lst = lst->next;
		i++;
	}
	return (i);
}

void free_ll(t_stack **stack)
{
    t_stack *current;
	t_stack *temp;

	// current = NULL;
	current = *stack;
    while (current != NULL) 
	{
        temp = current;
        current = current->next;
        free(temp); // Free the current node
    }
    *stack = NULL; // Set head to NULL to indicate an empty list
}

int	ft_stack_order(t_stack **stack)
{
	t_stack *tmp;

	tmp = (*stack);
	while (tmp->next != NULL)
	{
		if (tmp->nb > tmp->next->nb)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
