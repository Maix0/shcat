/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_144.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_720(t_small_parse_table_array *v)
{
	v->a[14400] = anon_sym_DOLLAR_LPAREN;
	v->a[14401] = actions(2504);
	v->a[14402] = 1;
	v->a[14403] = anon_sym_BQUOTE;
	v->a[14404] = actions(2506);
	v->a[14405] = 1;
	v->a[14406] = anon_sym_DOLLAR_BQUOTE;
	v->a[14407] = actions(2508);
	v->a[14408] = 1;
	v->a[14409] = sym__bare_dollar;
	v->a[14410] = actions(2510);
	v->a[14411] = 1;
	v->a[14412] = sym__brace_start;
	v->a[14413] = state(552);
	v->a[14414] = 1;
	v->a[14415] = aux_sym_command_repeat2;
	v->a[14416] = state(1645);
	v->a[14417] = 1;
	v->a[14418] = aux_sym__literal_repeat1;
	v->a[14419] = state(1676);
	small_parse_table_721(v);
}

void	small_parse_table_721(t_small_parse_table_array *v)
{
	v->a[14420] = 1;
	v->a[14421] = sym_concatenation;
	v->a[14422] = state(2740);
	v->a[14423] = 1;
	v->a[14424] = sym_subshell;
	v->a[14425] = actions(2494);
	v->a[14426] = 2;
	v->a[14427] = sym_test_operator;
	v->a[14428] = sym_raw_string;
	v->a[14429] = actions(691);
	v->a[14430] = 7;
	v->a[14431] = anon_sym_PIPE;
	v->a[14432] = anon_sym_LT;
	v->a[14433] = anon_sym_GT;
	v->a[14434] = anon_sym_AMP_GT;
	v->a[14435] = anon_sym_LT_AMP;
	v->a[14436] = anon_sym_GT_AMP;
	v->a[14437] = anon_sym_LT_LT;
	v->a[14438] = state(1452);
	v->a[14439] = 7;
	small_parse_table_722(v);
}

void	small_parse_table_722(t_small_parse_table_array *v)
{
	v->a[14440] = sym_arithmetic_expansion;
	v->a[14441] = sym_brace_expression;
	v->a[14442] = sym_string;
	v->a[14443] = sym_number;
	v->a[14444] = sym_simple_expansion;
	v->a[14445] = sym_expansion;
	v->a[14446] = sym_command_substitution;
	v->a[14447] = actions(695);
	v->a[14448] = 10;
	v->a[14449] = sym_file_descriptor;
	v->a[14450] = anon_sym_PIPE_AMP;
	v->a[14451] = anon_sym_AMP_AMP;
	v->a[14452] = anon_sym_PIPE_PIPE;
	v->a[14453] = anon_sym_GT_GT;
	v->a[14454] = anon_sym_AMP_GT_GT;
	v->a[14455] = anon_sym_GT_PIPE;
	v->a[14456] = anon_sym_LT_AMP_DASH;
	v->a[14457] = anon_sym_GT_AMP_DASH;
	v->a[14458] = anon_sym_LT_LT_DASH;
	v->a[14459] = 12;
	small_parse_table_723(v);
}

void	small_parse_table_723(t_small_parse_table_array *v)
{
	v->a[14460] = actions(3);
	v->a[14461] = 1;
	v->a[14462] = sym_comment;
	v->a[14463] = actions(2522);
	v->a[14464] = 1;
	v->a[14465] = aux_sym_heredoc_redirect_token1;
	v->a[14466] = actions(2528);
	v->a[14467] = 1;
	v->a[14468] = sym_variable_name;
	v->a[14469] = actions(2516);
	v->a[14470] = 2;
	v->a[14471] = anon_sym_PIPE;
	v->a[14472] = anon_sym_PIPE_AMP;
	v->a[14473] = actions(2518);
	v->a[14474] = 2;
	v->a[14475] = anon_sym_AMP_AMP;
	v->a[14476] = anon_sym_PIPE_PIPE;
	v->a[14477] = actions(2520);
	v->a[14478] = 2;
	v->a[14479] = anon_sym_LT_LT;
	small_parse_table_724(v);
}

void	small_parse_table_724(t_small_parse_table_array *v)
{
	v->a[14480] = anon_sym_LT_LT_DASH;
	v->a[14481] = actions(2524);
	v->a[14482] = 2;
	v->a[14483] = anon_sym_AMP;
	v->a[14484] = anon_sym_SEMI;
	v->a[14485] = state(1886);
	v->a[14486] = 2;
	v->a[14487] = sym_variable_assignment;
	v->a[14488] = aux_sym_variable_assignments_repeat1;
	v->a[14489] = actions(2526);
	v->a[14490] = 3;
	v->a[14491] = sym_file_descriptor;
	v->a[14492] = sym_test_operator;
	v->a[14493] = sym__brace_start;
	v->a[14494] = state(1894);
	v->a[14495] = 3;
	v->a[14496] = sym_file_redirect;
	v->a[14497] = sym_heredoc_redirect;
	v->a[14498] = aux_sym_redirected_statement_repeat1;
	v->a[14499] = actions(2514);
	small_parse_table_725(v);
}

/* EOF small_parse_table_144.c */
