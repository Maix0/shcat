/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_172.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_860(t_small_parse_table_array *v)
{
	v->a[17200] = 1;
	v->a[17201] = anon_sym_BANG;
	v->a[17202] = actions(55);
	v->a[17203] = 1;
	v->a[17204] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17205] = actions(57);
	v->a[17206] = 1;
	v->a[17207] = anon_sym_DOLLAR;
	v->a[17208] = actions(59);
	v->a[17209] = 1;
	v->a[17210] = anon_sym_DQUOTE;
	v->a[17211] = actions(63);
	v->a[17212] = 1;
	v->a[17213] = anon_sym_DOLLAR_LBRACE;
	v->a[17214] = actions(65);
	v->a[17215] = 1;
	v->a[17216] = anon_sym_DOLLAR_LPAREN;
	v->a[17217] = actions(67);
	v->a[17218] = 1;
	v->a[17219] = anon_sym_BQUOTE;
	small_parse_table_861(v);
}

void	small_parse_table_861(t_small_parse_table_array *v)
{
	v->a[17220] = actions(69);
	v->a[17221] = 1;
	v->a[17222] = sym_file_descriptor;
	v->a[17223] = actions(71);
	v->a[17224] = 1;
	v->a[17225] = sym_variable_name;
	v->a[17226] = state(182);
	v->a[17227] = 1;
	v->a[17228] = sym_command_name;
	v->a[17229] = state(351);
	v->a[17230] = 1;
	v->a[17231] = sym_variable_assignment;
	v->a[17232] = state(584);
	v->a[17233] = 1;
	v->a[17234] = sym_concatenation;
	v->a[17235] = state(620);
	v->a[17236] = 1;
	v->a[17237] = sym_file_redirect;
	v->a[17238] = state(623);
	v->a[17239] = 1;
	small_parse_table_862(v);
}

void	small_parse_table_862(t_small_parse_table_array *v)
{
	v->a[17240] = aux_sym_command_repeat1;
	v->a[17241] = state(1139);
	v->a[17242] = 1;
	v->a[17243] = sym_pipeline;
	v->a[17244] = state(1201);
	v->a[17245] = 1;
	v->a[17246] = aux_sym_redirected_statement_repeat2;
	v->a[17247] = state(1911);
	v->a[17248] = 1;
	v->a[17249] = sym__statement_not_pipeline;
	v->a[17250] = actions(11);
	v->a[17251] = 2;
	v->a[17252] = anon_sym_while;
	v->a[17253] = anon_sym_until;
	v->a[17254] = actions(61);
	v->a[17255] = 2;
	v->a[17256] = sym_raw_string;
	v->a[17257] = sym_number;
	v->a[17258] = state(433);
	v->a[17259] = 5;
	small_parse_table_863(v);
}

void	small_parse_table_863(t_small_parse_table_array *v)
{
	v->a[17260] = sym_arithmetic_expansion;
	v->a[17261] = sym_string;
	v->a[17262] = sym_simple_expansion;
	v->a[17263] = sym_expansion;
	v->a[17264] = sym_command_substitution;
	v->a[17265] = actions(53);
	v->a[17266] = 7;
	v->a[17267] = anon_sym_LT;
	v->a[17268] = anon_sym_GT;
	v->a[17269] = anon_sym_GT_GT;
	v->a[17270] = anon_sym_LT_AMP;
	v->a[17271] = anon_sym_GT_AMP;
	v->a[17272] = anon_sym_GT_PIPE;
	v->a[17273] = anon_sym_LT_GT;
	v->a[17274] = state(1137);
	v->a[17275] = 12;
	v->a[17276] = sym_redirected_statement;
	v->a[17277] = sym_for_statement;
	v->a[17278] = sym_while_statement;
	v->a[17279] = sym_if_statement;
	small_parse_table_864(v);
}

void	small_parse_table_864(t_small_parse_table_array *v)
{
	v->a[17280] = sym_case_statement;
	v->a[17281] = sym_function_definition;
	v->a[17282] = sym_compound_statement;
	v->a[17283] = sym_subshell;
	v->a[17284] = sym_list;
	v->a[17285] = sym_negated_command;
	v->a[17286] = sym_command;
	v->a[17287] = sym__variable_assignments;
	v->a[17288] = 28;
	v->a[17289] = actions(3);
	v->a[17290] = 1;
	v->a[17291] = sym_comment;
	v->a[17292] = actions(9);
	v->a[17293] = 1;
	v->a[17294] = anon_sym_for;
	v->a[17295] = actions(13);
	v->a[17296] = 1;
	v->a[17297] = anon_sym_if;
	v->a[17298] = actions(15);
	v->a[17299] = 1;
	small_parse_table_865(v);
}

/* EOF small_parse_table_172.c */
