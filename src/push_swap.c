/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdessoy- <fdessoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 09:58:09 by fdessoy-          #+#    #+#             */
/*   Updated: 2024/04/04 16:46:24 by fdessoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(char **argv, t_stack **stack)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (!add_node(stack, ft_atoi(argv[i++])))
			error_handling(stack, 1);
	}
	(*stack)->len = gimme_length(*stack);
	(*stack)->min = find_min(stack);
	(*stack)->max = find_max(stack);
	gimme_median(*stack);
	// ft_printf("before sorting:\n");
	// retrieve_stack(*stack);
	instructions(stack);
	free_ll(stack);
}

void	instructions(t_stack **stack)
{
	if ((*stack)->len == 1 || stack_order(stack))
		error_handling(stack, 99);
	else if ((*stack)->len == 2)
		sa(stack);
	else if ((*stack)->len <= 3)
		sort_three(stack);
	else if ((*stack)->len <= 10)
	{
		sort_faux(stack);
		retrieve_stack(*stack);
	}
	else
		ft_printf("\n");
}

void    retrieve_stack(t_stack *stack)
{
    t_stack    *ptr;

    if (stack == NULL)
        return ;
    ptr = stack;
    while (ptr)
    {
        ft_printf("number: %d\n", ptr->nb);
		ft_printf("target of number: %d\n", ptr->target);
        ptr = ptr->next;
    }
}

// void    retrieve_stack_rev(t_stack *stack)
// {
//     t_stack    *ptr;

//     if (stack == NULL)
//         return ;
//     ptr = stack;
// 	while (ptr->next != NULL)
// 		ptr = ptr->next;
// 	while (ptr != NULL)
//     {
//         ft_printf("%d\n", ptr->nb);
//         ptr = ptr->prev;
//     }
// }