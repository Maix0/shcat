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
	v->a[18400] = anon_sym_BANG;
	v->a[18401] = actions(256);
	v->a[18402] = 1;
	v->a[18403] = sym_raw_string;
	v->a[18404] = actions(258);
	v->a[18405] = 1;
	v->a[18406] = sym_file_descriptor;
	v->a[18407] = actions(260);
	v->a[18408] = 1;
	v->a[18409] = sym_variable_name;
	v->a[18410] = state(175);
	v->a[18411] = 1;
	v->a[18412] = sym_command_name;
	v->a[18413] = state(259);
	v->a[18414] = 1;
	v->a[18415] = sym_variable_assignment;
	v->a[18416] = state(567);
	v->a[18417] = 1;
	v->a[18418] = aux_sym_command_repeat1;
	v->a[18419] = state(582);
	small_parse_table_921(v);
}

void	small_parse_table_921(t_small_parse_table_array *v)
{
	v->a[18420] = 1;
	v->a[18421] = sym_concatenation;
	v->a[18422] = state(718);
	v->a[18423] = 1;
	v->a[18424] = sym_file_redirect;
	v->a[18425] = state(1054);
	v->a[18426] = 1;
	v->a[18427] = sym_pipeline;
	v->a[18428] = state(1196);
	v->a[18429] = 1;
	v->a[18430] = aux_sym_redirected_statement_repeat2;
	v->a[18431] = state(2037);
	v->a[18432] = 1;
	v->a[18433] = sym__statement_not_pipeline;
	v->a[18434] = actions(11);
	v->a[18435] = 2;
	v->a[18436] = anon_sym_while;
	v->a[18437] = anon_sym_until;
	v->a[18438] = actions(254);
	v->a[18439] = 2;
	small_parse_table_922(v);
}

void	small_parse_table_922(t_small_parse_table_array *v)
{
	v->a[18440] = anon_sym_LT_AMP_DASH;
	v->a[18441] = anon_sym_GT_AMP_DASH;
	v->a[18442] = state(295);
	v->a[18443] = 6;
	v->a[18444] = sym_arithmetic_expansion;
	v->a[18445] = sym_string;
	v->a[18446] = sym_number;
	v->a[18447] = sym_simple_expansion;
	v->a[18448] = sym_expansion;
	v->a[18449] = sym_command_substitution;
	v->a[18450] = actions(252);
	v->a[18451] = 8;
	v->a[18452] = anon_sym_LT;
	v->a[18453] = anon_sym_GT;
	v->a[18454] = anon_sym_GT_GT;
	v->a[18455] = anon_sym_AMP_GT;
	v->a[18456] = anon_sym_AMP_GT_GT;
	v->a[18457] = anon_sym_LT_AMP;
	v->a[18458] = anon_sym_GT_AMP;
	v->a[18459] = anon_sym_GT_PIPE;
	small_parse_table_923(v);
}

void	small_parse_table_923(t_small_parse_table_array *v)
{
	v->a[18460] = state(1053);
	v->a[18461] = 12;
	v->a[18462] = sym_redirected_statement;
	v->a[18463] = sym_for_statement;
	v->a[18464] = sym_while_statement;
	v->a[18465] = sym_if_statement;
	v->a[18466] = sym_case_statement;
	v->a[18467] = sym_function_definition;
	v->a[18468] = sym_compound_statement;
	v->a[18469] = sym_subshell;
	v->a[18470] = sym_list;
	v->a[18471] = sym_negated_command;
	v->a[18472] = sym_command;
	v->a[18473] = sym_variable_assignments;
	v->a[18474] = 31;
	v->a[18475] = actions(3);
	v->a[18476] = 1;
	v->a[18477] = sym_comment;
	v->a[18478] = actions(95);
	v->a[18479] = 1;
	small_parse_table_924(v);
}

void	small_parse_table_924(t_small_parse_table_array *v)
{
	v->a[18480] = sym_word;
	v->a[18481] = actions(97);
	v->a[18482] = 1;
	v->a[18483] = anon_sym_for;
	v->a[18484] = actions(101);
	v->a[18485] = 1;
	v->a[18486] = anon_sym_if;
	v->a[18487] = actions(103);
	v->a[18488] = 1;
	v->a[18489] = anon_sym_case;
	v->a[18490] = actions(105);
	v->a[18491] = 1;
	v->a[18492] = anon_sym_LPAREN;
	v->a[18493] = actions(109);
	v->a[18494] = 1;
	v->a[18495] = anon_sym_LBRACE;
	v->a[18496] = actions(111);
	v->a[18497] = 1;
	v->a[18498] = anon_sym_BANG;
	v->a[18499] = actions(117);
	small_parse_table_925(v);
}

/* EOF small_parse_table_184.c */
