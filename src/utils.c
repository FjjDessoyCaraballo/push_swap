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
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
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
