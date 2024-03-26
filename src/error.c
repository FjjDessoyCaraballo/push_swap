/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdessoy- <fdessoy-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:33:47 by fdessoy-          #+#    #+#             */
/*   Updated: 2024/03/25 13:33:50 by fdessoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_handling(t_stack **stack, int num)
{
	if (num == 1)
		ft_putstr_fd(ERR_MAL, 2);
	free_ll(stack);
	exit(1);
}
