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
	v->a[17400] = actions(73);
	v->a[17401] = 1;
	v->a[17402] = aux_sym_number_token2;
	v->a[17403] = actions(75);
	v->a[17404] = 1;
	v->a[17405] = anon_sym_DOLLAR_LBRACE;
	v->a[17406] = actions(77);
	v->a[17407] = 1;
	v->a[17408] = anon_sym_DOLLAR_LPAREN;
	v->a[17409] = actions(79);
	v->a[17410] = 1;
	v->a[17411] = anon_sym_BQUOTE;
	v->a[17412] = actions(81);
	v->a[17413] = 1;
	v->a[17414] = sym_file_descriptor;
	v->a[17415] = actions(83);
	v->a[17416] = 1;
	v->a[17417] = sym_variable_name;
	v->a[17418] = state(76);
	v->a[17419] = 1;
	small_parse_table_871(v);
}

void	small_parse_table_871(t_small_parse_table_array *v)
{
	v->a[17420] = aux_sym__terminated_statement;
	v->a[17421] = state(190);
	v->a[17422] = 1;
	v->a[17423] = sym_command_name;
	v->a[17424] = state(303);
	v->a[17425] = 1;
	v->a[17426] = sym_variable_assignment;
	v->a[17427] = state(582);
	v->a[17428] = 1;
	v->a[17429] = sym_concatenation;
	v->a[17430] = state(587);
	v->a[17431] = 1;
	v->a[17432] = aux_sym_command_repeat1;
	v->a[17433] = state(718);
	v->a[17434] = 1;
	v->a[17435] = sym_file_redirect;
	v->a[17436] = state(1213);
	v->a[17437] = 1;
	v->a[17438] = aux_sym_redirected_statement_repeat2;
	v->a[17439] = state(1225);
	small_parse_table_872(v);
}

void	small_parse_table_872(t_small_parse_table_array *v)
{
	v->a[17440] = 1;
	v->a[17441] = sym_pipeline;
	v->a[17442] = state(2035);
	v->a[17443] = 1;
	v->a[17444] = sym__statement_not_pipeline;
	v->a[17445] = actions(11);
	v->a[17446] = 2;
	v->a[17447] = anon_sym_while;
	v->a[17448] = anon_sym_until;
	v->a[17449] = actions(61);
	v->a[17450] = 2;
	v->a[17451] = anon_sym_LT_AMP_DASH;
	v->a[17452] = anon_sym_GT_AMP_DASH;
	v->a[17453] = state(397);
	v->a[17454] = 6;
	v->a[17455] = sym_arithmetic_expansion;
	v->a[17456] = sym_string;
	v->a[17457] = sym_number;
	v->a[17458] = sym_simple_expansion;
	v->a[17459] = sym_expansion;
	small_parse_table_873(v);
}

void	small_parse_table_873(t_small_parse_table_array *v)
{
	v->a[17460] = sym_command_substitution;
	v->a[17461] = actions(59);
	v->a[17462] = 8;
	v->a[17463] = anon_sym_LT;
	v->a[17464] = anon_sym_GT;
	v->a[17465] = anon_sym_GT_GT;
	v->a[17466] = anon_sym_AMP_GT;
	v->a[17467] = anon_sym_AMP_GT_GT;
	v->a[17468] = anon_sym_LT_AMP;
	v->a[17469] = anon_sym_GT_AMP;
	v->a[17470] = anon_sym_GT_PIPE;
	v->a[17471] = state(1137);
	v->a[17472] = 12;
	v->a[17473] = sym_redirected_statement;
	v->a[17474] = sym_for_statement;
	v->a[17475] = sym_while_statement;
	v->a[17476] = sym_if_statement;
	v->a[17477] = sym_case_statement;
	v->a[17478] = sym_function_definition;
	v->a[17479] = sym_compound_statement;
	small_parse_table_874(v);
}

void	small_parse_table_874(t_small_parse_table_array *v)
{
	v->a[17480] = sym_subshell;
	v->a[17481] = sym_list;
	v->a[17482] = sym_negated_command;
	v->a[17483] = sym_command;
	v->a[17484] = sym_variable_assignments;
	v->a[17485] = 33;
	v->a[17486] = actions(3);
	v->a[17487] = 1;
	v->a[17488] = sym_comment;
	v->a[17489] = actions(9);
	v->a[17490] = 1;
	v->a[17491] = anon_sym_for;
	v->a[17492] = actions(13);
	v->a[17493] = 1;
	v->a[17494] = anon_sym_if;
	v->a[17495] = actions(15);
	v->a[17496] = 1;
	v->a[17497] = anon_sym_case;
	v->a[17498] = actions(17);
	v->a[17499] = 1;
	small_parse_table_875(v);
}

/* EOF small_parse_table_174.c */
