/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assertions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmelo-da <mmelo-da@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 19:08:10 by mmelo-da          #+#    #+#             */
/*   Updated: 2021/10/28 19:53:15 by mmelo-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core.h"

void	assert_equal_int(int actual, int expected, char *error_msg)
{
	if (actual != expected)
	{
		assertion_fail("Recieved %d but Expected %d, %s\n",
			actual, expected, error_msg);
	}
	else
	{
		assertion_pass();
	}
}

void	assert_equal_char(char actual, char expected, char *error_msg)
{
	if (actual != expected)
	{
		assertion_fail("Recieved '%c' but Expected '%c', %s",
			actual, expected, error_msg);
	}
	else
	{
		assertion_pass();
	}
}
