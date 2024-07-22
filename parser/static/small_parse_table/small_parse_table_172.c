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
	v->a[17200] = actions(59);
	v->a[17201] = 1;
	v->a[17202] = anon_sym_DQUOTE;
	v->a[17203] = actions(63);
	v->a[17204] = 1;
	v->a[17205] = anon_sym_DOLLAR_LBRACE;
	v->a[17206] = actions(65);
	v->a[17207] = 1;
	v->a[17208] = anon_sym_DOLLAR_LPAREN;
	v->a[17209] = actions(67);
	v->a[17210] = 1;
	v->a[17211] = anon_sym_BQUOTE;
	v->a[17212] = actions(347);
	v->a[17213] = 1;
	v->a[17214] = sym_word;
	v->a[17215] = actions(349);
	v->a[17216] = 1;
	v->a[17217] = anon_sym_BANG;
	v->a[17218] = actions(355);
	v->a[17219] = 1;
	small_parse_table_861(v);
}

void	small_parse_table_861(t_small_parse_table_array *v)
{
	v->a[17220] = sym_file_descriptor;
	v->a[17221] = actions(357);
	v->a[17222] = 1;
	v->a[17223] = sym_variable_name;
	v->a[17224] = state(315);
	v->a[17225] = 1;
	v->a[17226] = sym_command_name;
	v->a[17227] = state(487);
	v->a[17228] = 1;
	v->a[17229] = sym_variable_assignment;
	v->a[17230] = state(622);
	v->a[17231] = 1;
	v->a[17232] = aux_sym_command_repeat1;
	v->a[17233] = state(661);
	v->a[17234] = 1;
	v->a[17235] = sym_concatenation;
	v->a[17236] = state(665);
	v->a[17237] = 1;
	v->a[17238] = sym_file_redirect;
	v->a[17239] = state(1389);
	small_parse_table_862(v);
}

void	small_parse_table_862(t_small_parse_table_array *v)
{
	v->a[17240] = 1;
	v->a[17241] = aux_sym_redirected_statement_repeat2;
	v->a[17242] = state(1440);
	v->a[17243] = 1;
	v->a[17244] = sym_pipeline;
	v->a[17245] = actions(11);
	v->a[17246] = 2;
	v->a[17247] = anon_sym_while;
	v->a[17248] = anon_sym_until;
	v->a[17249] = actions(353);
	v->a[17250] = 2;
	v->a[17251] = sym_raw_string;
	v->a[17252] = sym_number;
	v->a[17253] = state(620);
	v->a[17254] = 5;
	v->a[17255] = sym_arithmetic_expansion;
	v->a[17256] = sym_string;
	v->a[17257] = sym_simple_expansion;
	v->a[17258] = sym_expansion;
	v->a[17259] = sym_command_substitution;
	small_parse_table_863(v);
}

void	small_parse_table_863(t_small_parse_table_array *v)
{
	v->a[17260] = actions(351);
	v->a[17261] = 7;
	v->a[17262] = anon_sym_LT;
	v->a[17263] = anon_sym_GT;
	v->a[17264] = anon_sym_GT_GT;
	v->a[17265] = anon_sym_LT_AMP;
	v->a[17266] = anon_sym_GT_AMP;
	v->a[17267] = anon_sym_GT_PIPE;
	v->a[17268] = anon_sym_LT_GT;
	v->a[17269] = state(1096);
	v->a[17270] = 13;
	v->a[17271] = sym__statement_not_pipeline;
	v->a[17272] = sym_redirected_statement;
	v->a[17273] = sym_for_statement;
	v->a[17274] = sym_while_statement;
	v->a[17275] = sym_if_statement;
	v->a[17276] = sym_case_statement;
	v->a[17277] = sym_function_definition;
	v->a[17278] = sym_compound_statement;
	v->a[17279] = sym_subshell;
	small_parse_table_864(v);
}

void	small_parse_table_864(t_small_parse_table_array *v)
{
	v->a[17280] = sym_list;
	v->a[17281] = sym_negated_command;
	v->a[17282] = sym_command;
	v->a[17283] = sym__variable_assignments;
	v->a[17284] = 29;
	v->a[17285] = actions(3);
	v->a[17286] = 1;
	v->a[17287] = sym_comment;
	v->a[17288] = actions(9);
	v->a[17289] = 1;
	v->a[17290] = anon_sym_for;
	v->a[17291] = actions(13);
	v->a[17292] = 1;
	v->a[17293] = anon_sym_if;
	v->a[17294] = actions(15);
	v->a[17295] = 1;
	v->a[17296] = anon_sym_case;
	v->a[17297] = actions(17);
	v->a[17298] = 1;
	v->a[17299] = anon_sym_LPAREN;
	small_parse_table_865(v);
}

/* EOF small_parse_table_172.c */
