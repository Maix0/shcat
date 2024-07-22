/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_152.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_760(t_small_parse_table_array *v)
{
	v->a[15200] = state(950);
	v->a[15201] = 1;
	v->a[15202] = sym_for_statement;
	v->a[15203] = state(952);
	v->a[15204] = 1;
	v->a[15205] = sym_while_statement;
	v->a[15206] = state(953);
	v->a[15207] = 1;
	v->a[15208] = sym_negated_command;
	v->a[15209] = state(954);
	v->a[15210] = 1;
	v->a[15211] = sym_command;
	v->a[15212] = state(955);
	v->a[15213] = 1;
	v->a[15214] = sym__variable_assignments;
	v->a[15215] = state(957);
	v->a[15216] = 1;
	v->a[15217] = sym_if_statement;
	v->a[15218] = state(958);
	v->a[15219] = 1;
	small_parse_table_761(v);
}

void	small_parse_table_761(t_small_parse_table_array *v)
{
	v->a[15220] = sym_case_statement;
	v->a[15221] = state(961);
	v->a[15222] = 1;
	v->a[15223] = sym_function_definition;
	v->a[15224] = state(962);
	v->a[15225] = 1;
	v->a[15226] = sym_compound_statement;
	v->a[15227] = state(964);
	v->a[15228] = 1;
	v->a[15229] = sym_subshell;
	v->a[15230] = state(1024);
	v->a[15231] = 1;
	v->a[15232] = sym_list;
	v->a[15233] = state(1076);
	v->a[15234] = 1;
	v->a[15235] = sym_pipeline;
	v->a[15236] = state(1149);
	v->a[15237] = 1;
	v->a[15238] = aux_sym_redirected_statement_repeat2;
	v->a[15239] = state(1922);
	small_parse_table_762(v);
}

void	small_parse_table_762(t_small_parse_table_array *v)
{
	v->a[15240] = 1;
	v->a[15241] = sym__statement_not_pipeline;
	v->a[15242] = actions(11);
	v->a[15243] = 2;
	v->a[15244] = anon_sym_while;
	v->a[15245] = anon_sym_until;
	v->a[15246] = actions(61);
	v->a[15247] = 2;
	v->a[15248] = sym_raw_string;
	v->a[15249] = sym_number;
	v->a[15250] = state(455);
	v->a[15251] = 5;
	v->a[15252] = sym_arithmetic_expansion;
	v->a[15253] = sym_string;
	v->a[15254] = sym_simple_expansion;
	v->a[15255] = sym_expansion;
	v->a[15256] = sym_command_substitution;
	v->a[15257] = actions(53);
	v->a[15258] = 7;
	v->a[15259] = anon_sym_LT;
	small_parse_table_763(v);
}

void	small_parse_table_763(t_small_parse_table_array *v)
{
	v->a[15260] = anon_sym_GT;
	v->a[15261] = anon_sym_GT_GT;
	v->a[15262] = anon_sym_LT_AMP;
	v->a[15263] = anon_sym_GT_AMP;
	v->a[15264] = anon_sym_GT_PIPE;
	v->a[15265] = anon_sym_LT_GT;
	v->a[15266] = 30;
	v->a[15267] = actions(3);
	v->a[15268] = 1;
	v->a[15269] = sym_comment;
	v->a[15270] = actions(9);
	v->a[15271] = 1;
	v->a[15272] = anon_sym_for;
	v->a[15273] = actions(13);
	v->a[15274] = 1;
	v->a[15275] = anon_sym_if;
	v->a[15276] = actions(15);
	v->a[15277] = 1;
	v->a[15278] = anon_sym_case;
	v->a[15279] = actions(17);
	small_parse_table_764(v);
}

void	small_parse_table_764(t_small_parse_table_array *v)
{
	v->a[15280] = 1;
	v->a[15281] = anon_sym_LPAREN;
	v->a[15282] = actions(19);
	v->a[15283] = 1;
	v->a[15284] = anon_sym_LBRACE;
	v->a[15285] = actions(43);
	v->a[15286] = 1;
	v->a[15287] = sym_word;
	v->a[15288] = actions(51);
	v->a[15289] = 1;
	v->a[15290] = anon_sym_BANG;
	v->a[15291] = actions(55);
	v->a[15292] = 1;
	v->a[15293] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15294] = actions(57);
	v->a[15295] = 1;
	v->a[15296] = anon_sym_DOLLAR;
	v->a[15297] = actions(59);
	v->a[15298] = 1;
	v->a[15299] = anon_sym_DQUOTE;
	small_parse_table_765(v);
}

/* EOF small_parse_table_152.c */
