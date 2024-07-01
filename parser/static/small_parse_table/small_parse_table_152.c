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
	v->a[15200] = anon_sym_LT_AMP_DASH;
	v->a[15201] = anon_sym_GT_AMP_DASH;
	v->a[15202] = actions(65);
	v->a[15203] = 2;
	v->a[15204] = sym_raw_string;
	v->a[15205] = sym_number;
	v->a[15206] = state(443);
	v->a[15207] = 5;
	v->a[15208] = sym_arithmetic_expansion;
	v->a[15209] = sym_string;
	v->a[15210] = sym_simple_expansion;
	v->a[15211] = sym_expansion;
	v->a[15212] = sym_command_substitution;
	v->a[15213] = actions(55);
	v->a[15214] = 6;
	v->a[15215] = anon_sym_LT;
	v->a[15216] = anon_sym_GT;
	v->a[15217] = anon_sym_GT_GT;
	v->a[15218] = anon_sym_LT_AMP;
	v->a[15219] = anon_sym_GT_AMP;
	small_parse_table_761(v);
}

void	small_parse_table_761(t_small_parse_table_array *v)
{
	v->a[15220] = anon_sym_GT_PIPE;
	v->a[15221] = state(1094);
	v->a[15222] = 12;
	v->a[15223] = sym_redirected_statement;
	v->a[15224] = sym_for_statement;
	v->a[15225] = sym_while_statement;
	v->a[15226] = sym_if_statement;
	v->a[15227] = sym_case_statement;
	v->a[15228] = sym_function_definition;
	v->a[15229] = sym_compound_statement;
	v->a[15230] = sym_subshell;
	v->a[15231] = sym_list;
	v->a[15232] = sym_negated_command;
	v->a[15233] = sym_command;
	v->a[15234] = sym__variable_assignments;
	v->a[15235] = 31;
	v->a[15236] = actions(3);
	v->a[15237] = 1;
	v->a[15238] = sym_comment;
	v->a[15239] = actions(9);
	small_parse_table_762(v);
}

void	small_parse_table_762(t_small_parse_table_array *v)
{
	v->a[15240] = 1;
	v->a[15241] = anon_sym_for;
	v->a[15242] = actions(13);
	v->a[15243] = 1;
	v->a[15244] = anon_sym_if;
	v->a[15245] = actions(15);
	v->a[15246] = 1;
	v->a[15247] = anon_sym_case;
	v->a[15248] = actions(17);
	v->a[15249] = 1;
	v->a[15250] = anon_sym_LPAREN;
	v->a[15251] = actions(19);
	v->a[15252] = 1;
	v->a[15253] = anon_sym_LBRACE;
	v->a[15254] = actions(45);
	v->a[15255] = 1;
	v->a[15256] = sym_word;
	v->a[15257] = actions(53);
	v->a[15258] = 1;
	v->a[15259] = anon_sym_BANG;
	small_parse_table_763(v);
}

void	small_parse_table_763(t_small_parse_table_array *v)
{
	v->a[15260] = actions(59);
	v->a[15261] = 1;
	v->a[15262] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15263] = actions(61);
	v->a[15264] = 1;
	v->a[15265] = anon_sym_DOLLAR;
	v->a[15266] = actions(63);
	v->a[15267] = 1;
	v->a[15268] = anon_sym_DQUOTE;
	v->a[15269] = actions(67);
	v->a[15270] = 1;
	v->a[15271] = anon_sym_DOLLAR_LBRACE;
	v->a[15272] = actions(69);
	v->a[15273] = 1;
	v->a[15274] = anon_sym_DOLLAR_LPAREN;
	v->a[15275] = actions(71);
	v->a[15276] = 1;
	v->a[15277] = anon_sym_BQUOTE;
	v->a[15278] = actions(73);
	v->a[15279] = 1;
	small_parse_table_764(v);
}

void	small_parse_table_764(t_small_parse_table_array *v)
{
	v->a[15280] = sym_file_descriptor;
	v->a[15281] = actions(75);
	v->a[15282] = 1;
	v->a[15283] = sym_variable_name;
	v->a[15284] = state(45);
	v->a[15285] = 1;
	v->a[15286] = aux_sym__terminated_statement;
	v->a[15287] = state(189);
	v->a[15288] = 1;
	v->a[15289] = sym_command_name;
	v->a[15290] = state(291);
	v->a[15291] = 1;
	v->a[15292] = sym_variable_assignment;
	v->a[15293] = state(650);
	v->a[15294] = 1;
	v->a[15295] = sym_concatenation;
	v->a[15296] = state(712);
	v->a[15297] = 1;
	v->a[15298] = sym_file_redirect;
	v->a[15299] = state(713);
	small_parse_table_765(v);
}

/* EOF small_parse_table_152.c */
