/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mona <mona@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/05 14:06:52 by mona          #+#    #+#                 */
/*   Updated: 2024/06/05 15:10:48 by mona          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <errno.h>

typedef struct s_stack_node
{
	int		value;
	int		current_position;
	struct s_stack_node *target_node;
	struct s_stack_node *next;
	struct s_stack_node *prev;
}	t_stack_node;


#endif