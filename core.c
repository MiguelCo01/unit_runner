/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmelo-da <mmelo-da@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:45:49 by mmelo-da          #+#    #+#             */
/*   Updated: 2021/10/28 20:03:49 by mmelo-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core.h"

static enum e_run_mode		g_mode = debug_run;
static enum e_it_status		g_it_status = it_not_started;
static char					*g_cur_it;
static enum e_it_status		g_suite_status = it_pass;

void	describe(char *suite_name)
{
	printf("%s\t:", suite_name);
}

void	it(char *test_name)
{
	g_cur_it = test_name;
	g_it_status = it_pass;
}

void	assertion_fail(char *error_msg, ...)
{
	va_list	valist;

	if (g_it_status == it_pass)
	{
		printf("\n-- %s:", g_cur_it);
		g_it_status = it_fail;
		g_suite_status = it_fail;
	}
	if (g_mode == debug_run)
	{
		va_start(valist, error_msg);
		printf("\n  -- [NOK] ");
		vprintf(error_msg, valist);
		va_end(valist);
	}
}

void	assertion_pass(void)
{
	return ;
}

void	end_test(void)
{
	if (g_suite_status == it_pass)
		printf(" [OK] ");
	printf("\n");
}
