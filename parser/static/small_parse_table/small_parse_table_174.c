/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_174.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_870(t_small_parse_table_array *v)
{
	v->a[17400] = sym_comment;
	v->a[17401] = actions(311);
	v->a[17402] = 1;
	v->a[17403] = sym_word;
	v->a[17404] = actions(313);
	v->a[17405] = 1;
	v->a[17406] = anon_sym_for;
	v->a[17407] = actions(317);
	v->a[17408] = 1;
	v->a[17409] = anon_sym_if;
	v->a[17410] = actions(319);
	v->a[17411] = 1;
	v->a[17412] = anon_sym_case;
	v->a[17413] = actions(321);
	v->a[17414] = 1;
	v->a[17415] = anon_sym_LPAREN;
	v->a[17416] = actions(323);
	v->a[17417] = 1;
	v->a[17418] = anon_sym_LBRACE;
	v->a[17419] = actions(325);
	small_parse_table_871(v);
}

void	small_parse_table_871(t_small_parse_table_array *v)
{
	v->a[17420] = 1;
	v->a[17421] = anon_sym_BANG;
	v->a[17422] = actions(329);
	v->a[17423] = 1;
	v->a[17424] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17425] = actions(331);
	v->a[17426] = 1;
	v->a[17427] = anon_sym_DOLLAR;
	v->a[17428] = actions(333);
	v->a[17429] = 1;
	v->a[17430] = anon_sym_DQUOTE;
	v->a[17431] = actions(337);
	v->a[17432] = 1;
	v->a[17433] = anon_sym_DOLLAR_LBRACE;
	v->a[17434] = actions(339);
	v->a[17435] = 1;
	v->a[17436] = anon_sym_DOLLAR_LPAREN;
	v->a[17437] = actions(341);
	v->a[17438] = 1;
	v->a[17439] = anon_sym_BQUOTE;
	small_parse_table_872(v);
}

void	small_parse_table_872(t_small_parse_table_array *v)
{
	v->a[17440] = actions(343);
	v->a[17441] = 1;
	v->a[17442] = sym_file_descriptor;
	v->a[17443] = actions(345);
	v->a[17444] = 1;
	v->a[17445] = sym_variable_name;
	v->a[17446] = state(361);
	v->a[17447] = 1;
	v->a[17448] = sym_command_name;
	v->a[17449] = state(643);
	v->a[17450] = 1;
	v->a[17451] = aux_sym_command_repeat1;
	v->a[17452] = state(659);
	v->a[17453] = 1;
	v->a[17454] = sym_variable_assignment;
	v->a[17455] = state(888);
	v->a[17456] = 1;
	v->a[17457] = sym_concatenation;
	v->a[17458] = state(906);
	v->a[17459] = 1;
	small_parse_table_873(v);
}

void	small_parse_table_873(t_small_parse_table_array *v)
{
	v->a[17460] = sym_file_redirect;
	v->a[17461] = state(1429);
	v->a[17462] = 1;
	v->a[17463] = sym_pipeline;
	v->a[17464] = state(1431);
	v->a[17465] = 1;
	v->a[17466] = aux_sym_redirected_statement_repeat2;
	v->a[17467] = actions(315);
	v->a[17468] = 2;
	v->a[17469] = anon_sym_while;
	v->a[17470] = anon_sym_until;
	v->a[17471] = actions(335);
	v->a[17472] = 2;
	v->a[17473] = sym_raw_string;
	v->a[17474] = sym_number;
	v->a[17475] = state(721);
	v->a[17476] = 5;
	v->a[17477] = sym_arithmetic_expansion;
	v->a[17478] = sym_string;
	v->a[17479] = sym_simple_expansion;
	small_parse_table_874(v);
}

void	small_parse_table_874(t_small_parse_table_array *v)
{
	v->a[17480] = sym_expansion;
	v->a[17481] = sym_command_substitution;
	v->a[17482] = actions(327);
	v->a[17483] = 7;
	v->a[17484] = anon_sym_LT;
	v->a[17485] = anon_sym_GT;
	v->a[17486] = anon_sym_GT_GT;
	v->a[17487] = anon_sym_LT_AMP;
	v->a[17488] = anon_sym_GT_AMP;
	v->a[17489] = anon_sym_GT_PIPE;
	v->a[17490] = anon_sym_LT_GT;
	v->a[17491] = state(1501);
	v->a[17492] = 13;
	v->a[17493] = sym__statement_not_pipeline;
	v->a[17494] = sym_redirected_statement;
	v->a[17495] = sym_for_statement;
	v->a[17496] = sym_while_statement;
	v->a[17497] = sym_if_statement;
	v->a[17498] = sym_case_statement;
	v->a[17499] = sym_function_definition;
	small_parse_table_875(v);
}

/* EOF small_parse_table_174.c */
