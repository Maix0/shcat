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
	v->a[17201] = sym_subshell;
	v->a[17202] = state(1246);
	v->a[17203] = 1;
	v->a[17204] = sym_compound_statement;
	v->a[17205] = state(1251);
	v->a[17206] = 1;
	v->a[17207] = sym_function_definition;
	v->a[17208] = state(1252);
	v->a[17209] = 1;
	v->a[17210] = sym_case_statement;
	v->a[17211] = state(1253);
	v->a[17212] = 1;
	v->a[17213] = sym_if_statement;
	v->a[17214] = state(1254);
	v->a[17215] = 1;
	v->a[17216] = sym_while_statement;
	v->a[17217] = state(1255);
	v->a[17218] = 1;
	v->a[17219] = sym_for_statement;
	small_parse_table_861(v);
}

void	small_parse_table_861(t_small_parse_table_array *v)
{
	v->a[17220] = state(1256);
	v->a[17221] = 1;
	v->a[17222] = sym_redirected_statement;
	v->a[17223] = state(1400);
	v->a[17224] = 1;
	v->a[17225] = sym_pipeline;
	v->a[17226] = state(1429);
	v->a[17227] = 1;
	v->a[17228] = aux_sym_redirected_statement_repeat2;
	v->a[17229] = state(2271);
	v->a[17230] = 1;
	v->a[17231] = sym__statement_not_pipeline;
	v->a[17232] = actions(11);
	v->a[17233] = 2;
	v->a[17234] = anon_sym_while;
	v->a[17235] = anon_sym_until;
	v->a[17236] = actions(57);
	v->a[17237] = 2;
	v->a[17238] = anon_sym_LT_AMP_DASH;
	v->a[17239] = anon_sym_GT_AMP_DASH;
	small_parse_table_862(v);
}

void	small_parse_table_862(t_small_parse_table_array *v)
{
	v->a[17240] = actions(65);
	v->a[17241] = 2;
	v->a[17242] = sym_raw_string;
	v->a[17243] = sym_number;
	v->a[17244] = state(394);
	v->a[17245] = 5;
	v->a[17246] = sym_arithmetic_expansion;
	v->a[17247] = sym_string;
	v->a[17248] = sym_simple_expansion;
	v->a[17249] = sym_expansion;
	v->a[17250] = sym_command_substitution;
	v->a[17251] = actions(55);
	v->a[17252] = 8;
	v->a[17253] = anon_sym_LT;
	v->a[17254] = anon_sym_GT;
	v->a[17255] = anon_sym_GT_GT;
	v->a[17256] = anon_sym_AMP_GT;
	v->a[17257] = anon_sym_AMP_GT_GT;
	v->a[17258] = anon_sym_LT_AMP;
	v->a[17259] = anon_sym_GT_AMP;
	small_parse_table_863(v);
}

void	small_parse_table_863(t_small_parse_table_array *v)
{
	v->a[17260] = anon_sym_GT_PIPE;
	v->a[17261] = 31;
	v->a[17262] = actions(3);
	v->a[17263] = 1;
	v->a[17264] = sym_comment;
	v->a[17265] = actions(9);
	v->a[17266] = 1;
	v->a[17267] = anon_sym_for;
	v->a[17268] = actions(13);
	v->a[17269] = 1;
	v->a[17270] = anon_sym_if;
	v->a[17271] = actions(15);
	v->a[17272] = 1;
	v->a[17273] = anon_sym_case;
	v->a[17274] = actions(17);
	v->a[17275] = 1;
	v->a[17276] = anon_sym_LPAREN;
	v->a[17277] = actions(19);
	v->a[17278] = 1;
	v->a[17279] = anon_sym_LBRACE;
	small_parse_table_864(v);
}

void	small_parse_table_864(t_small_parse_table_array *v)
{
	v->a[17280] = actions(45);
	v->a[17281] = 1;
	v->a[17282] = sym_word;
	v->a[17283] = actions(53);
	v->a[17284] = 1;
	v->a[17285] = anon_sym_BANG;
	v->a[17286] = actions(59);
	v->a[17287] = 1;
	v->a[17288] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17289] = actions(61);
	v->a[17290] = 1;
	v->a[17291] = anon_sym_DOLLAR;
	v->a[17292] = actions(63);
	v->a[17293] = 1;
	v->a[17294] = anon_sym_DQUOTE;
	v->a[17295] = actions(67);
	v->a[17296] = 1;
	v->a[17297] = anon_sym_DOLLAR_LBRACE;
	v->a[17298] = actions(69);
	v->a[17299] = 1;
	small_parse_table_865(v);
}

/* EOF small_parse_table_172.c */
