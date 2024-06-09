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
	v->a[17200] = 2;
	v->a[17201] = anon_sym_LT_AMP_DASH;
	v->a[17202] = anon_sym_GT_AMP_DASH;
	v->a[17203] = state(397);
	v->a[17204] = 6;
	v->a[17205] = sym_arithmetic_expansion;
	v->a[17206] = sym_string;
	v->a[17207] = sym_number;
	v->a[17208] = sym_simple_expansion;
	v->a[17209] = sym_expansion;
	v->a[17210] = sym_command_substitution;
	v->a[17211] = actions(59);
	v->a[17212] = 8;
	v->a[17213] = anon_sym_LT;
	v->a[17214] = anon_sym_GT;
	v->a[17215] = anon_sym_GT_GT;
	v->a[17216] = anon_sym_AMP_GT;
	v->a[17217] = anon_sym_AMP_GT_GT;
	v->a[17218] = anon_sym_LT_AMP;
	v->a[17219] = anon_sym_GT_AMP;
	small_parse_table_861(v);
}

void	small_parse_table_861(t_small_parse_table_array *v)
{
	v->a[17220] = anon_sym_GT_PIPE;
	v->a[17221] = state(1172);
	v->a[17222] = 12;
	v->a[17223] = sym_redirected_statement;
	v->a[17224] = sym_for_statement;
	v->a[17225] = sym_while_statement;
	v->a[17226] = sym_if_statement;
	v->a[17227] = sym_case_statement;
	v->a[17228] = sym_function_definition;
	v->a[17229] = sym_compound_statement;
	v->a[17230] = sym_subshell;
	v->a[17231] = sym_list;
	v->a[17232] = sym_negated_command;
	v->a[17233] = sym_command;
	v->a[17234] = sym_variable_assignments;
	v->a[17235] = 33;
	v->a[17236] = actions(3);
	v->a[17237] = 1;
	v->a[17238] = sym_comment;
	v->a[17239] = actions(286);
	small_parse_table_862(v);
}

void	small_parse_table_862(t_small_parse_table_array *v)
{
	v->a[17240] = 1;
	v->a[17241] = sym_word;
	v->a[17242] = actions(289);
	v->a[17243] = 1;
	v->a[17244] = anon_sym_for;
	v->a[17245] = actions(295);
	v->a[17246] = 1;
	v->a[17247] = anon_sym_if;
	v->a[17248] = actions(298);
	v->a[17249] = 1;
	v->a[17250] = anon_sym_case;
	v->a[17251] = actions(301);
	v->a[17252] = 1;
	v->a[17253] = anon_sym_LPAREN;
	v->a[17254] = actions(304);
	v->a[17255] = 1;
	v->a[17256] = anon_sym_LBRACE;
	v->a[17257] = actions(307);
	v->a[17258] = 1;
	v->a[17259] = anon_sym_BANG;
	small_parse_table_863(v);
}

void	small_parse_table_863(t_small_parse_table_array *v)
{
	v->a[17260] = actions(316);
	v->a[17261] = 1;
	v->a[17262] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17263] = actions(319);
	v->a[17264] = 1;
	v->a[17265] = anon_sym_DOLLAR;
	v->a[17266] = actions(322);
	v->a[17267] = 1;
	v->a[17268] = anon_sym_DQUOTE;
	v->a[17269] = actions(325);
	v->a[17270] = 1;
	v->a[17271] = sym_raw_string;
	v->a[17272] = actions(328);
	v->a[17273] = 1;
	v->a[17274] = aux_sym_number_token1;
	v->a[17275] = actions(331);
	v->a[17276] = 1;
	v->a[17277] = aux_sym_number_token2;
	v->a[17278] = actions(334);
	v->a[17279] = 1;
	small_parse_table_864(v);
}

void	small_parse_table_864(t_small_parse_table_array *v)
{
	v->a[17280] = anon_sym_DOLLAR_LBRACE;
	v->a[17281] = actions(337);
	v->a[17282] = 1;
	v->a[17283] = anon_sym_DOLLAR_LPAREN;
	v->a[17284] = actions(340);
	v->a[17285] = 1;
	v->a[17286] = anon_sym_BQUOTE;
	v->a[17287] = actions(343);
	v->a[17288] = 1;
	v->a[17289] = sym_file_descriptor;
	v->a[17290] = actions(346);
	v->a[17291] = 1;
	v->a[17292] = sym_variable_name;
	v->a[17293] = state(135);
	v->a[17294] = 1;
	v->a[17295] = aux_sym__statements_repeat1;
	v->a[17296] = state(190);
	v->a[17297] = 1;
	v->a[17298] = sym_command_name;
	v->a[17299] = state(302);
	small_parse_table_865(v);
}

/* EOF small_parse_table_172.c */
