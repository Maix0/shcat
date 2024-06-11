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
	v->a[15200] = sym__statements;
	v->a[15201] = actions(11);
	v->a[15202] = 2;
	v->a[15203] = anon_sym_while;
	v->a[15204] = anon_sym_until;
	v->a[15205] = actions(226);
	v->a[15206] = 2;
	v->a[15207] = anon_sym_LT_AMP_DASH;
	v->a[15208] = anon_sym_GT_AMP_DASH;
	v->a[15209] = actions(228);
	v->a[15210] = 2;
	v->a[15211] = sym_raw_string;
	v->a[15212] = sym_number;
	v->a[15213] = state(294);
	v->a[15214] = 5;
	v->a[15215] = sym_arithmetic_expansion;
	v->a[15216] = sym_string;
	v->a[15217] = sym_simple_expansion;
	v->a[15218] = sym_expansion;
	v->a[15219] = sym_command_substitution;
	small_parse_table_761(v);
}

void	small_parse_table_761(t_small_parse_table_array *v)
{
	v->a[15220] = actions(224);
	v->a[15221] = 8;
	v->a[15222] = anon_sym_LT;
	v->a[15223] = anon_sym_GT;
	v->a[15224] = anon_sym_GT_GT;
	v->a[15225] = anon_sym_AMP_GT;
	v->a[15226] = anon_sym_AMP_GT_GT;
	v->a[15227] = anon_sym_LT_AMP;
	v->a[15228] = anon_sym_GT_AMP;
	v->a[15229] = anon_sym_GT_PIPE;
	v->a[15230] = state(1188);
	v->a[15231] = 12;
	v->a[15232] = sym_redirected_statement;
	v->a[15233] = sym_for_statement;
	v->a[15234] = sym_while_statement;
	v->a[15235] = sym_if_statement;
	v->a[15236] = sym_case_statement;
	v->a[15237] = sym_function_definition;
	v->a[15238] = sym_compound_statement;
	v->a[15239] = sym_subshell;
	small_parse_table_762(v);
}

void	small_parse_table_762(t_small_parse_table_array *v)
{
	v->a[15240] = sym_list;
	v->a[15241] = sym_negated_command;
	v->a[15242] = sym_command;
	v->a[15243] = sym_variable_assignments;
	v->a[15244] = 32;
	v->a[15245] = actions(3);
	v->a[15246] = 1;
	v->a[15247] = sym_comment;
	v->a[15248] = actions(9);
	v->a[15249] = 1;
	v->a[15250] = anon_sym_for;
	v->a[15251] = actions(13);
	v->a[15252] = 1;
	v->a[15253] = anon_sym_if;
	v->a[15254] = actions(15);
	v->a[15255] = 1;
	v->a[15256] = anon_sym_case;
	v->a[15257] = actions(17);
	v->a[15258] = 1;
	v->a[15259] = anon_sym_LPAREN;
	small_parse_table_763(v);
}

void	small_parse_table_763(t_small_parse_table_array *v)
{
	v->a[15260] = actions(19);
	v->a[15261] = 1;
	v->a[15262] = anon_sym_LBRACE;
	v->a[15263] = actions(59);
	v->a[15264] = 1;
	v->a[15265] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15266] = actions(61);
	v->a[15267] = 1;
	v->a[15268] = anon_sym_DOLLAR;
	v->a[15269] = actions(63);
	v->a[15270] = 1;
	v->a[15271] = anon_sym_DQUOTE;
	v->a[15272] = actions(67);
	v->a[15273] = 1;
	v->a[15274] = anon_sym_DOLLAR_LBRACE;
	v->a[15275] = actions(69);
	v->a[15276] = 1;
	v->a[15277] = anon_sym_DOLLAR_LPAREN;
	v->a[15278] = actions(71);
	v->a[15279] = 1;
	small_parse_table_764(v);
}

void	small_parse_table_764(t_small_parse_table_array *v)
{
	v->a[15280] = anon_sym_BQUOTE;
	v->a[15281] = actions(73);
	v->a[15282] = 1;
	v->a[15283] = sym_file_descriptor;
	v->a[15284] = actions(75);
	v->a[15285] = 1;
	v->a[15286] = sym_variable_name;
	v->a[15287] = actions(236);
	v->a[15288] = 1;
	v->a[15289] = sym_word;
	v->a[15290] = actions(238);
	v->a[15291] = 1;
	v->a[15292] = anon_sym_BANG;
	v->a[15293] = state(140);
	v->a[15294] = 1;
	v->a[15295] = aux_sym__statements_repeat1;
	v->a[15296] = state(189);
	v->a[15297] = 1;
	v->a[15298] = sym_command_name;
	v->a[15299] = state(286);
	small_parse_table_765(v);
}

/* EOF small_parse_table_152.c */
