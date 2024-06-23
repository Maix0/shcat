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
	v->a[17400] = 1;
	v->a[17401] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17402] = actions(61);
	v->a[17403] = 1;
	v->a[17404] = anon_sym_DOLLAR;
	v->a[17405] = actions(63);
	v->a[17406] = 1;
	v->a[17407] = anon_sym_DQUOTE;
	v->a[17408] = actions(67);
	v->a[17409] = 1;
	v->a[17410] = anon_sym_DOLLAR_LBRACE;
	v->a[17411] = actions(69);
	v->a[17412] = 1;
	v->a[17413] = anon_sym_DOLLAR_LPAREN;
	v->a[17414] = actions(71);
	v->a[17415] = 1;
	v->a[17416] = anon_sym_BQUOTE;
	v->a[17417] = actions(73);
	v->a[17418] = 1;
	v->a[17419] = sym_file_descriptor;
	small_parse_table_871(v);
}

void	small_parse_table_871(t_small_parse_table_array *v)
{
	v->a[17420] = actions(75);
	v->a[17421] = 1;
	v->a[17422] = sym_variable_name;
	v->a[17423] = actions(236);
	v->a[17424] = 1;
	v->a[17425] = sym_word;
	v->a[17426] = actions(238);
	v->a[17427] = 1;
	v->a[17428] = anon_sym_BANG;
	v->a[17429] = state(189);
	v->a[17430] = 1;
	v->a[17431] = sym_command_name;
	v->a[17432] = state(290);
	v->a[17433] = 1;
	v->a[17434] = sym_variable_assignment;
	v->a[17435] = state(647);
	v->a[17436] = 1;
	v->a[17437] = sym_concatenation;
	v->a[17438] = state(746);
	v->a[17439] = 1;
	small_parse_table_872(v);
}

void	small_parse_table_872(t_small_parse_table_array *v)
{
	v->a[17440] = aux_sym_command_repeat1;
	v->a[17441] = state(905);
	v->a[17442] = 1;
	v->a[17443] = sym_file_redirect;
	v->a[17444] = state(1429);
	v->a[17445] = 1;
	v->a[17446] = aux_sym_redirected_statement_repeat2;
	v->a[17447] = state(1598);
	v->a[17448] = 1;
	v->a[17449] = sym_pipeline;
	v->a[17450] = actions(11);
	v->a[17451] = 2;
	v->a[17452] = anon_sym_while;
	v->a[17453] = anon_sym_until;
	v->a[17454] = actions(57);
	v->a[17455] = 2;
	v->a[17456] = anon_sym_LT_AMP_DASH;
	v->a[17457] = anon_sym_GT_AMP_DASH;
	v->a[17458] = actions(65);
	v->a[17459] = 2;
	small_parse_table_873(v);
}

void	small_parse_table_873(t_small_parse_table_array *v)
{
	v->a[17460] = sym_raw_string;
	v->a[17461] = sym_number;
	v->a[17462] = state(394);
	v->a[17463] = 5;
	v->a[17464] = sym_arithmetic_expansion;
	v->a[17465] = sym_string;
	v->a[17466] = sym_simple_expansion;
	v->a[17467] = sym_expansion;
	v->a[17468] = sym_command_substitution;
	v->a[17469] = actions(55);
	v->a[17470] = 8;
	v->a[17471] = anon_sym_LT;
	v->a[17472] = anon_sym_GT;
	v->a[17473] = anon_sym_GT_GT;
	v->a[17474] = anon_sym_AMP_GT;
	v->a[17475] = anon_sym_AMP_GT_GT;
	v->a[17476] = anon_sym_LT_AMP;
	v->a[17477] = anon_sym_GT_AMP;
	v->a[17478] = anon_sym_GT_PIPE;
	v->a[17479] = state(1239);
	small_parse_table_874(v);
}

void	small_parse_table_874(t_small_parse_table_array *v)
{
	v->a[17480] = 13;
	v->a[17481] = sym__statement_not_pipeline;
	v->a[17482] = sym_redirected_statement;
	v->a[17483] = sym_for_statement;
	v->a[17484] = sym_while_statement;
	v->a[17485] = sym_if_statement;
	v->a[17486] = sym_case_statement;
	v->a[17487] = sym_function_definition;
	v->a[17488] = sym_compound_statement;
	v->a[17489] = sym_subshell;
	v->a[17490] = sym_list;
	v->a[17491] = sym_negated_command;
	v->a[17492] = sym_command;
	v->a[17493] = sym__variable_assignments;
	v->a[17494] = 30;
	v->a[17495] = actions(3);
	v->a[17496] = 1;
	v->a[17497] = sym_comment;
	v->a[17498] = actions(9);
	v->a[17499] = 1;
	small_parse_table_875(v);
}

/* EOF small_parse_table_174.c */
