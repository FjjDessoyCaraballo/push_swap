/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdessoy- <fdessoy-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 09:58:03 by fdessoy-          #+#    #+#             */
/*   Updated: 2024/03/25 09:58:04 by fdessoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/*************************************************/
/* libft *****************************************/
/*************************************************/
# include "libft.h"

/*************************************************/
/* external libraries ****************************/
/*************************************************/

/* for booleans */
# include <stdbool.h>
/* for read and write */
# include <unistd.h>
/* for malloc, free, and exit */
# include <stdlib.h>

/*************************************************/
/* error macros **********************************/
/*************************************************/
# define ERR_ARG "Error\nIncorrect number of arguments\n"
# define ERR_REP "Error\nDuplicated number\n"
# define ERR_MAL "Error\nMalloc failure\n"
# define ERR_STUPID "Error\nInvalid input, try again\n"

/*************************************************/
/* structs ***************************************/
/*************************************************/
typedef struct s_stack
{
	size_t			i;
	size_t			j;
	int				nb;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

/*************************************************/
/* functions *************************************/
/*************************************************/

/* in push_swap.c */
void		push_swap(int argc, char **argv, t_stack **stack);

/* in parsing.c */
void		parse_args(char **av);
void		repeat_num(char **av);
void		char_in(char **av);

/* in utils.c */
int			add_node(t_stack **stack, int value);
t_stack		*list_last(t_stack *lst);
void 		free_ll(t_stack **stack);

/* in error.c */
void		error_handling(t_stack **stack, int num);


/* extra */
void    	retrieve_stack(t_stack *stack);

#endif
