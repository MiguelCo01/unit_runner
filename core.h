/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmelo-da <mmelo-da@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:47:39 by mmelo-da          #+#    #+#             */
/*   Updated: 2021/10/29 10:56:03 by mmelo-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CORE_H
# define CORE_H
# include "stdio.h"
# include "stdarg.h"
# define ASSERTION_BEGIN ----

enum e_run_mode {normal_run, debug_run};
enum e_it_status {it_fail, it_pass, it_not_started};

void	assert_equal_int(int actual, int expected, char *error_msg);
void	assert_not_equal_int(int actual, int expected, char *error_msg);
void	assert_equal_char(char actual, char expected, char *error_msg);
void	describe(char *suite_name);
void	it(char *test_name);
void	assertion_fail(char *error_msg, ...);
void	assertion_pass(void);
void	end_test(void);
#endif
