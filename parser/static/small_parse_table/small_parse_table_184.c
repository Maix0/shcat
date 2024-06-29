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
	v->a[18400] = anon_sym_GT_PIPE;
	v->a[18401] = state(1170);
	v->a[18402] = 13;
	v->a[18403] = sym__statement_not_pipeline;
	v->a[18404] = sym_redirected_statement;
	v->a[18405] = sym_for_statement;
	v->a[18406] = sym_while_statement;
	v->a[18407] = sym_if_statement;
	v->a[18408] = sym_case_statement;
	v->a[18409] = sym_function_definition;
	v->a[18410] = sym_compound_statement;
	v->a[18411] = sym_subshell;
	v->a[18412] = sym_list;
	v->a[18413] = sym_negated_command;
	v->a[18414] = sym_command;
	v->a[18415] = sym__variable_assignments;
	v->a[18416] = 29;
	v->a[18417] = actions(3);
	v->a[18418] = 1;
	v->a[18419] = sym_comment;
	small_parse_table_921(v);
}

void	small_parse_table_921(t_small_parse_table_array *v)
{
	v->a[18420] = actions(9);
	v->a[18421] = 1;
	v->a[18422] = anon_sym_for;
	v->a[18423] = actions(13);
	v->a[18424] = 1;
	v->a[18425] = anon_sym_if;
	v->a[18426] = actions(15);
	v->a[18427] = 1;
	v->a[18428] = anon_sym_case;
	v->a[18429] = actions(17);
	v->a[18430] = 1;
	v->a[18431] = anon_sym_LPAREN;
	v->a[18432] = actions(19);
	v->a[18433] = 1;
	v->a[18434] = anon_sym_LBRACE;
	v->a[18435] = actions(59);
	v->a[18436] = 1;
	v->a[18437] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18438] = actions(61);
	v->a[18439] = 1;
	small_parse_table_922(v);
}

void	small_parse_table_922(t_small_parse_table_array *v)
{
	v->a[18440] = anon_sym_DOLLAR;
	v->a[18441] = actions(63);
	v->a[18442] = 1;
	v->a[18443] = anon_sym_DQUOTE;
	v->a[18444] = actions(67);
	v->a[18445] = 1;
	v->a[18446] = anon_sym_DOLLAR_LBRACE;
	v->a[18447] = actions(69);
	v->a[18448] = 1;
	v->a[18449] = anon_sym_DOLLAR_LPAREN;
	v->a[18450] = actions(71);
	v->a[18451] = 1;
	v->a[18452] = anon_sym_BQUOTE;
	v->a[18453] = actions(363);
	v->a[18454] = 1;
	v->a[18455] = sym_word;
	v->a[18456] = actions(365);
	v->a[18457] = 1;
	v->a[18458] = anon_sym_BANG;
	v->a[18459] = actions(373);
	small_parse_table_923(v);
}

void	small_parse_table_923(t_small_parse_table_array *v)
{
	v->a[18460] = 1;
	v->a[18461] = sym_file_descriptor;
	v->a[18462] = actions(375);
	v->a[18463] = 1;
	v->a[18464] = sym_variable_name;
	v->a[18465] = state(259);
	v->a[18466] = 1;
	v->a[18467] = sym_command_name;
	v->a[18468] = state(619);
	v->a[18469] = 1;
	v->a[18470] = sym_variable_assignment;
	v->a[18471] = state(624);
	v->a[18472] = 1;
	v->a[18473] = sym_concatenation;
	v->a[18474] = state(713);
	v->a[18475] = 1;
	v->a[18476] = aux_sym_command_repeat1;
	v->a[18477] = state(726);
	v->a[18478] = 1;
	v->a[18479] = sym_file_redirect;
	small_parse_table_924(v);
}

void	small_parse_table_924(t_small_parse_table_array *v)
{
	v->a[18480] = state(1420);
	v->a[18481] = 1;
	v->a[18482] = aux_sym_redirected_statement_repeat2;
	v->a[18483] = state(1447);
	v->a[18484] = 1;
	v->a[18485] = sym_pipeline;
	v->a[18486] = actions(11);
	v->a[18487] = 2;
	v->a[18488] = anon_sym_while;
	v->a[18489] = anon_sym_until;
	v->a[18490] = actions(369);
	v->a[18491] = 2;
	v->a[18492] = anon_sym_LT_AMP_DASH;
	v->a[18493] = anon_sym_GT_AMP_DASH;
	v->a[18494] = actions(371);
	v->a[18495] = 2;
	v->a[18496] = sym_raw_string;
	v->a[18497] = sym_number;
	v->a[18498] = state(734);
	v->a[18499] = 5;
	small_parse_table_925(v);
}

/* EOF small_parse_table_184.c */
