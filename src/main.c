/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdessoy- <fdessoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 09:58:16 by fdessoy-          #+#    #+#             */
/*   Updated: 2024/04/12 10:03:38 by fdessoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack;
	bool	split;

	split = false;
	stack = NULL;
	if (argc == 2)
		split = true;
	argv = check_arg(argv, split);
	parse_args(argv);
	push_swap(argv, &stack);
	if (split == true)
		free_array(argv);
	free_ll(&stack);
	return (0);
}
