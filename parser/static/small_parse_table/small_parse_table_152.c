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
	v->a[15200] = aux_sym_command_repeat1;
	v->a[15201] = state(600);
	v->a[15202] = 1;
	v->a[15203] = sym_file_redirect;
	v->a[15204] = state(602);
	v->a[15205] = 1;
	v->a[15206] = sym_concatenation;
	v->a[15207] = state(1068);
	v->a[15208] = 1;
	v->a[15209] = aux_sym_redirected_statement_repeat2;
	v->a[15210] = state(1235);
	v->a[15211] = 1;
	v->a[15212] = sym_pipeline;
	v->a[15213] = actions(11);
	v->a[15214] = 2;
	v->a[15215] = anon_sym_while;
	v->a[15216] = anon_sym_until;
	v->a[15217] = actions(59);
	v->a[15218] = 2;
	v->a[15219] = sym_raw_string;
	small_parse_table_761(v);
}

void	small_parse_table_761(t_small_parse_table_array *v)
{
	v->a[15220] = sym_number;
	v->a[15221] = state(425);
	v->a[15222] = 5;
	v->a[15223] = sym_arithmetic_expansion;
	v->a[15224] = sym_string;
	v->a[15225] = sym_simple_expansion;
	v->a[15226] = sym_expansion;
	v->a[15227] = sym_command_substitution;
	v->a[15228] = actions(51);
	v->a[15229] = 7;
	v->a[15230] = anon_sym_LT;
	v->a[15231] = anon_sym_GT;
	v->a[15232] = anon_sym_GT_GT;
	v->a[15233] = anon_sym_LT_AMP;
	v->a[15234] = anon_sym_GT_AMP;
	v->a[15235] = anon_sym_GT_PIPE;
	v->a[15236] = anon_sym_LT_GT;
	v->a[15237] = state(934);
	v->a[15238] = 13;
	v->a[15239] = sym__statement_not_pipeline;
	small_parse_table_762(v);
}

void	small_parse_table_762(t_small_parse_table_array *v)
{
	v->a[15240] = sym_redirected_statement;
	v->a[15241] = sym_for_statement;
	v->a[15242] = sym_while_statement;
	v->a[15243] = sym_if_statement;
	v->a[15244] = sym_case_statement;
	v->a[15245] = sym_function_definition;
	v->a[15246] = sym_compound_statement;
	v->a[15247] = sym_subshell;
	v->a[15248] = sym_list;
	v->a[15249] = sym_negated_command;
	v->a[15250] = sym_command;
	v->a[15251] = sym__variable_assignments;
	v->a[15252] = 28;
	v->a[15253] = actions(3);
	v->a[15254] = 1;
	v->a[15255] = sym_comment;
	v->a[15256] = actions(9);
	v->a[15257] = 1;
	v->a[15258] = anon_sym_for;
	v->a[15259] = actions(13);
	small_parse_table_763(v);
}

void	small_parse_table_763(t_small_parse_table_array *v)
{
	v->a[15260] = 1;
	v->a[15261] = anon_sym_if;
	v->a[15262] = actions(15);
	v->a[15263] = 1;
	v->a[15264] = anon_sym_case;
	v->a[15265] = actions(17);
	v->a[15266] = 1;
	v->a[15267] = anon_sym_LPAREN;
	v->a[15268] = actions(19);
	v->a[15269] = 1;
	v->a[15270] = anon_sym_LBRACE;
	v->a[15271] = actions(53);
	v->a[15272] = 1;
	v->a[15273] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15274] = actions(55);
	v->a[15275] = 1;
	v->a[15276] = anon_sym_DOLLAR;
	v->a[15277] = actions(57);
	v->a[15278] = 1;
	v->a[15279] = anon_sym_DQUOTE;
	small_parse_table_764(v);
}

void	small_parse_table_764(t_small_parse_table_array *v)
{
	v->a[15280] = actions(61);
	v->a[15281] = 1;
	v->a[15282] = anon_sym_DOLLAR_LBRACE;
	v->a[15283] = actions(63);
	v->a[15284] = 1;
	v->a[15285] = anon_sym_DOLLAR_LPAREN;
	v->a[15286] = actions(65);
	v->a[15287] = 1;
	v->a[15288] = anon_sym_BQUOTE;
	v->a[15289] = actions(297);
	v->a[15290] = 1;
	v->a[15291] = sym_word;
	v->a[15292] = actions(299);
	v->a[15293] = 1;
	v->a[15294] = anon_sym_BANG;
	v->a[15295] = actions(305);
	v->a[15296] = 1;
	v->a[15297] = sym_variable_name;
	v->a[15298] = state(312);
	v->a[15299] = 1;
	small_parse_table_765(v);
}

/* EOF small_parse_table_152.c */
