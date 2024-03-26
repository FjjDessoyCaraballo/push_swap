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

void	push_swap(int argc, char **argv, t_stack **stack)
{
	int		i;
	bool	split;

	split = false;
	if (argc == 2)
	{	
		argv = ft_split(argv[1], ' ');
		split = true;
		if (!argv)
		{
			free_array(argv);
			exit(1);
		}
	}
	else
		argv = argv + 1;
	i = 0;
	while(argv[i])
	{
		if (!add_node(stack, ft_atoi(argv[i++])))
			error_handling(stack, 1);
	}
	parse_args(argv);
	retrieve_stack(*stack);
	if (split == true)
		free_array(argv);
	free_ll(stack); // not necessary, just for leaks
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