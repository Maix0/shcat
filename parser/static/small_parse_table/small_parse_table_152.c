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
	v->a[15200] = sym_variable_name;
	v->a[15201] = state(52);
	v->a[15202] = 1;
	v->a[15203] = aux_sym__terminated_statement;
	v->a[15204] = state(183);
	v->a[15205] = 1;
	v->a[15206] = sym_command_name;
	v->a[15207] = state(320);
	v->a[15208] = 1;
	v->a[15209] = sym_variable_assignment;
	v->a[15210] = state(603);
	v->a[15211] = 1;
	v->a[15212] = sym_concatenation;
	v->a[15213] = state(639);
	v->a[15214] = 1;
	v->a[15215] = aux_sym_command_repeat1;
	v->a[15216] = state(644);
	v->a[15217] = 1;
	v->a[15218] = sym_file_redirect;
	v->a[15219] = state(1160);
	small_parse_table_761(v);
}

void	small_parse_table_761(t_small_parse_table_array *v)
{
	v->a[15220] = 1;
	v->a[15221] = sym_pipeline;
	v->a[15222] = state(1196);
	v->a[15223] = 1;
	v->a[15224] = aux_sym_redirected_statement_repeat2;
	v->a[15225] = state(1910);
	v->a[15226] = 1;
	v->a[15227] = sym__statement_not_pipeline;
	v->a[15228] = actions(11);
	v->a[15229] = 2;
	v->a[15230] = anon_sym_while;
	v->a[15231] = anon_sym_until;
	v->a[15232] = actions(61);
	v->a[15233] = 2;
	v->a[15234] = sym_raw_string;
	v->a[15235] = sym_number;
	v->a[15236] = state(436);
	v->a[15237] = 5;
	v->a[15238] = sym_arithmetic_expansion;
	v->a[15239] = sym_string;
	small_parse_table_762(v);
}

void	small_parse_table_762(t_small_parse_table_array *v)
{
	v->a[15240] = sym_simple_expansion;
	v->a[15241] = sym_expansion;
	v->a[15242] = sym_command_substitution;
	v->a[15243] = actions(53);
	v->a[15244] = 7;
	v->a[15245] = anon_sym_LT;
	v->a[15246] = anon_sym_GT;
	v->a[15247] = anon_sym_GT_GT;
	v->a[15248] = anon_sym_LT_AMP;
	v->a[15249] = anon_sym_GT_AMP;
	v->a[15250] = anon_sym_GT_PIPE;
	v->a[15251] = anon_sym_LT_GT;
	v->a[15252] = state(1053);
	v->a[15253] = 12;
	v->a[15254] = sym_redirected_statement;
	v->a[15255] = sym_for_statement;
	v->a[15256] = sym_while_statement;
	v->a[15257] = sym_if_statement;
	v->a[15258] = sym_case_statement;
	v->a[15259] = sym_function_definition;
	small_parse_table_763(v);
}

void	small_parse_table_763(t_small_parse_table_array *v)
{
	v->a[15260] = sym_compound_statement;
	v->a[15261] = sym_subshell;
	v->a[15262] = sym_list;
	v->a[15263] = sym_negated_command;
	v->a[15264] = sym_command;
	v->a[15265] = sym__variable_assignments;
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
