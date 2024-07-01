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
	v->a[17200] = sym_redirected_statement;
	v->a[17201] = sym_for_statement;
	v->a[17202] = sym_while_statement;
	v->a[17203] = sym_if_statement;
	v->a[17204] = sym_case_statement;
	v->a[17205] = sym_function_definition;
	v->a[17206] = sym_compound_statement;
	v->a[17207] = sym_subshell;
	v->a[17208] = sym_list;
	v->a[17209] = sym_negated_command;
	v->a[17210] = sym_command;
	v->a[17211] = sym__variable_assignments;
	v->a[17212] = 30;
	v->a[17213] = actions(3);
	v->a[17214] = 1;
	v->a[17215] = sym_comment;
	v->a[17216] = actions(325);
	v->a[17217] = 1;
	v->a[17218] = sym_word;
	v->a[17219] = actions(327);
	small_parse_table_861(v);
}

void	small_parse_table_861(t_small_parse_table_array *v)
{
	v->a[17220] = 1;
	v->a[17221] = anon_sym_for;
	v->a[17222] = actions(331);
	v->a[17223] = 1;
	v->a[17224] = anon_sym_if;
	v->a[17225] = actions(333);
	v->a[17226] = 1;
	v->a[17227] = anon_sym_case;
	v->a[17228] = actions(335);
	v->a[17229] = 1;
	v->a[17230] = anon_sym_LPAREN;
	v->a[17231] = actions(337);
	v->a[17232] = 1;
	v->a[17233] = anon_sym_LBRACE;
	v->a[17234] = actions(339);
	v->a[17235] = 1;
	v->a[17236] = anon_sym_BANG;
	v->a[17237] = actions(345);
	v->a[17238] = 1;
	v->a[17239] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_862(v);
}

void	small_parse_table_862(t_small_parse_table_array *v)
{
	v->a[17240] = actions(347);
	v->a[17241] = 1;
	v->a[17242] = anon_sym_DOLLAR;
	v->a[17243] = actions(349);
	v->a[17244] = 1;
	v->a[17245] = anon_sym_DQUOTE;
	v->a[17246] = actions(353);
	v->a[17247] = 1;
	v->a[17248] = anon_sym_DOLLAR_LBRACE;
	v->a[17249] = actions(355);
	v->a[17250] = 1;
	v->a[17251] = anon_sym_DOLLAR_LPAREN;
	v->a[17252] = actions(357);
	v->a[17253] = 1;
	v->a[17254] = anon_sym_BQUOTE;
	v->a[17255] = actions(359);
	v->a[17256] = 1;
	v->a[17257] = sym_file_descriptor;
	v->a[17258] = actions(361);
	v->a[17259] = 1;
	small_parse_table_863(v);
}

void	small_parse_table_863(t_small_parse_table_array *v)
{
	v->a[17260] = sym_variable_name;
	v->a[17261] = state(387);
	v->a[17262] = 1;
	v->a[17263] = sym_command_name;
	v->a[17264] = state(708);
	v->a[17265] = 1;
	v->a[17266] = sym_variable_assignment;
	v->a[17267] = state(737);
	v->a[17268] = 1;
	v->a[17269] = aux_sym_command_repeat1;
	v->a[17270] = state(975);
	v->a[17271] = 1;
	v->a[17272] = sym_concatenation;
	v->a[17273] = state(991);
	v->a[17274] = 1;
	v->a[17275] = sym_file_redirect;
	v->a[17276] = state(1537);
	v->a[17277] = 1;
	v->a[17278] = sym_pipeline;
	v->a[17279] = state(1551);
	small_parse_table_864(v);
}

void	small_parse_table_864(t_small_parse_table_array *v)
{
	v->a[17280] = 1;
	v->a[17281] = aux_sym_redirected_statement_repeat2;
	v->a[17282] = state(2112);
	v->a[17283] = 1;
	v->a[17284] = sym__statement_not_pipeline;
	v->a[17285] = actions(329);
	v->a[17286] = 2;
	v->a[17287] = anon_sym_while;
	v->a[17288] = anon_sym_until;
	v->a[17289] = actions(343);
	v->a[17290] = 2;
	v->a[17291] = anon_sym_LT_AMP_DASH;
	v->a[17292] = anon_sym_GT_AMP_DASH;
	v->a[17293] = actions(351);
	v->a[17294] = 2;
	v->a[17295] = sym_raw_string;
	v->a[17296] = sym_number;
	v->a[17297] = state(785);
	v->a[17298] = 5;
	v->a[17299] = sym_arithmetic_expansion;
	small_parse_table_865(v);
}

/* EOF small_parse_table_172.c */
