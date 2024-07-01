/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_184.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_920(t_small_parse_table_array *v)
{
	v->a[18400] = 1;
	v->a[18401] = sym_concatenation;
	v->a[18402] = state(749);
	v->a[18403] = 1;
	v->a[18404] = aux_sym_command_repeat1;
	v->a[18405] = state(795);
	v->a[18406] = 1;
	v->a[18407] = sym_file_redirect;
	v->a[18408] = state(1168);
	v->a[18409] = 1;
	v->a[18410] = sym_pipeline;
	v->a[18411] = state(1240);
	v->a[18412] = 1;
	v->a[18413] = aux_sym_redirected_statement_repeat2;
	v->a[18414] = state(2119);
	v->a[18415] = 1;
	v->a[18416] = sym__statement_not_pipeline;
	v->a[18417] = actions(11);
	v->a[18418] = 2;
	v->a[18419] = anon_sym_while;
	small_parse_table_921(v);
}

void	small_parse_table_921(t_small_parse_table_array *v)
{
	v->a[18420] = anon_sym_until;
	v->a[18421] = actions(57);
	v->a[18422] = 2;
	v->a[18423] = anon_sym_LT_AMP_DASH;
	v->a[18424] = anon_sym_GT_AMP_DASH;
	v->a[18425] = actions(65);
	v->a[18426] = 2;
	v->a[18427] = sym_raw_string;
	v->a[18428] = sym_number;
	v->a[18429] = state(443);
	v->a[18430] = 5;
	v->a[18431] = sym_arithmetic_expansion;
	v->a[18432] = sym_string;
	v->a[18433] = sym_simple_expansion;
	v->a[18434] = sym_expansion;
	v->a[18435] = sym_command_substitution;
	v->a[18436] = actions(55);
	v->a[18437] = 6;
	v->a[18438] = anon_sym_LT;
	v->a[18439] = anon_sym_GT;
	small_parse_table_922(v);
}

void	small_parse_table_922(t_small_parse_table_array *v)
{
	v->a[18440] = anon_sym_GT_GT;
	v->a[18441] = anon_sym_LT_AMP;
	v->a[18442] = anon_sym_GT_AMP;
	v->a[18443] = anon_sym_GT_PIPE;
	v->a[18444] = state(1167);
	v->a[18445] = 12;
	v->a[18446] = sym_redirected_statement;
	v->a[18447] = sym_for_statement;
	v->a[18448] = sym_while_statement;
	v->a[18449] = sym_if_statement;
	v->a[18450] = sym_case_statement;
	v->a[18451] = sym_function_definition;
	v->a[18452] = sym_compound_statement;
	v->a[18453] = sym_subshell;
	v->a[18454] = sym_list;
	v->a[18455] = sym_negated_command;
	v->a[18456] = sym_command;
	v->a[18457] = sym__variable_assignments;
	v->a[18458] = 29;
	v->a[18459] = actions(3);
	small_parse_table_923(v);
}

void	small_parse_table_923(t_small_parse_table_array *v)
{
	v->a[18460] = 1;
	v->a[18461] = sym_comment;
	v->a[18462] = actions(7);
	v->a[18463] = 1;
	v->a[18464] = sym_word;
	v->a[18465] = actions(9);
	v->a[18466] = 1;
	v->a[18467] = anon_sym_for;
	v->a[18468] = actions(13);
	v->a[18469] = 1;
	v->a[18470] = anon_sym_if;
	v->a[18471] = actions(15);
	v->a[18472] = 1;
	v->a[18473] = anon_sym_case;
	v->a[18474] = actions(17);
	v->a[18475] = 1;
	v->a[18476] = anon_sym_LPAREN;
	v->a[18477] = actions(19);
	v->a[18478] = 1;
	v->a[18479] = anon_sym_LBRACE;
	small_parse_table_924(v);
}

void	small_parse_table_924(t_small_parse_table_array *v)
{
	v->a[18480] = actions(21);
	v->a[18481] = 1;
	v->a[18482] = anon_sym_BANG;
	v->a[18483] = actions(27);
	v->a[18484] = 1;
	v->a[18485] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18486] = actions(29);
	v->a[18487] = 1;
	v->a[18488] = anon_sym_DOLLAR;
	v->a[18489] = actions(31);
	v->a[18490] = 1;
	v->a[18491] = anon_sym_DQUOTE;
	v->a[18492] = actions(35);
	v->a[18493] = 1;
	v->a[18494] = anon_sym_DOLLAR_LBRACE;
	v->a[18495] = actions(37);
	v->a[18496] = 1;
	v->a[18497] = anon_sym_DOLLAR_LPAREN;
	v->a[18498] = actions(39);
	v->a[18499] = 1;
	small_parse_table_925(v);
}

/* EOF small_parse_table_184.c */
