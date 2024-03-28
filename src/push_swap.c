/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdessoy- <fdessoy-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 09:58:09 by fdessoy-          #+#    #+#             */
/*   Updated: 2024/03/25 09:58:10 by fdessoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* push_swap will have to take care of the instructions.
Right now I don't know how to deal with different number
of inputs. But apparently it was suggested that I should
take care of inputs as in 3 and 5 above. */

/*TO DO:
1. Need to get the number of elements into a variable
2. Sort instructions*/

void	push_swap(char **argv, t_stack **stack)
{
	int		i;

	i = 0;
	while(argv[i])
	{
		if (!add_node(stack, ft_atoi(argv[i++])))
			error_handling(stack, 1);
	}
	(*stack)->len = gimme_length(*stack);
	ft_printf("Length: %i\n", (*stack)->len);
	instructions(stack);
	retrieve_stack(*stack);
	free_ll(stack); // not necessary, just for leaks
}

void	instructions(t_stack **stack)
{
	if ((*stack)->len <= 3)
	{
		
	}
	if ((*stack)->len <= 5)
	{

	}
//	else // for one number

}

void    retrieve_stack(t_stack *stack)//DELETE BEFORE SUBMIT
{
    t_stack    *ptr;

    if (stack == NULL)
        return ;
    ptr = stack;
    while (ptr)
    {
        ft_printf("%d\n", ptr->nb);
        ptr = ptr->next;
    }
}
