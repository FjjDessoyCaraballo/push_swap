/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdessoy- <fdessoy-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:31:45 by fdessoy-          #+#    #+#             */
/*   Updated: 2024/04/02 12:31:46 by fdessoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack **stack)
{
	if ((*stack)->nb > (*stack)->next->nb && (*stack)->nb > (*stack)->next->next->nb)
	{
		if ((*stack)->next->nb < (*stack)->next->next->nb)
			ra(stack);
		else
		{
			ra(stack);
			sa(stack);
		}
	}
	else if ((*stack)->nb < (*stack)->next->nb && (*stack)->nb > (*stack)->next->next->nb)
		rra(stack);
	else if ((*stack)->nb > (*stack)->next->nb && (*stack)->nb < (*stack)->next->next->nb)
		sa(stack);
	else
	{
		sa(stack);
		ra(stack);
	}
}