/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2132.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10660(t_small_parse_table_array *v)
{
	v->a[213200] = 1;
	v->a[213201] = anon_sym_BQUOTE;
	v->a[213202] = actions(7978);
	v->a[213203] = 1;
	v->a[213204] = anon_sym_DOLLAR_BQUOTE;
	v->a[213205] = actions(7988);
	v->a[213206] = 1;
	v->a[213207] = sym__brace_start;
	v->a[213208] = actions(9860);
	v->a[213209] = 1;
	v->a[213210] = sym_word;
	v->a[213211] = actions(9868);
	v->a[213212] = 1;
	v->a[213213] = sym__comment_word;
	v->a[213214] = actions(10160);
	v->a[213215] = 1;
	v->a[213216] = anon_sym_DOLLAR;
	v->a[213217] = actions(7954);
	v->a[213218] = 2;
	v->a[213219] = anon_sym_LPAREN_LPAREN;
	small_parse_table_10661(v);
}

void	small_parse_table_10661(t_small_parse_table_array *v)
{
	v->a[213220] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[213221] = actions(7980);
	v->a[213222] = 2;
	v->a[213223] = anon_sym_LT_LPAREN;
	v->a[213224] = anon_sym_GT_LPAREN;
	v->a[213225] = actions(9864);
	v->a[213226] = 2;
	v->a[213227] = sym_test_operator;
	v->a[213228] = sym__special_character;
	v->a[213229] = actions(9866);
	v->a[213230] = 3;
	v->a[213231] = sym__bare_dollar;
	v->a[213232] = sym_raw_string;
	v->a[213233] = sym_ansi_c_string;
	v->a[213234] = state(4357);
	v->a[213235] = 9;
	v->a[213236] = sym_arithmetic_expansion;
	v->a[213237] = sym_brace_expression;
	v->a[213238] = sym_string;
	v->a[213239] = sym_translated_string;
	small_parse_table_10662(v);
}

void	small_parse_table_10662(t_small_parse_table_array *v)
{
	v->a[213240] = sym_number;
	v->a[213241] = sym_simple_expansion;
	v->a[213242] = sym_expansion;
	v->a[213243] = sym_command_substitution;
	v->a[213244] = sym_process_substitution;
	v->a[213245] = 18;
	v->a[213246] = actions(3);
	v->a[213247] = 1;
	v->a[213248] = sym_comment;
	v->a[213249] = actions(3793);
	v->a[213250] = 1;
	v->a[213251] = aux_sym_number_token1;
	v->a[213252] = actions(3795);
	v->a[213253] = 1;
	v->a[213254] = aux_sym_number_token2;
	v->a[213255] = actions(3799);
	v->a[213256] = 1;
	v->a[213257] = anon_sym_DOLLAR_LPAREN;
	v->a[213258] = actions(3809);
	v->a[213259] = 1;
	small_parse_table_10663(v);
}

void	small_parse_table_10663(t_small_parse_table_array *v)
{
	v->a[213260] = sym__brace_start;
	v->a[213261] = actions(9636);
	v->a[213262] = 1;
	v->a[213263] = anon_sym_DOLLAR_LBRACK;
	v->a[213264] = actions(9640);
	v->a[213265] = 1;
	v->a[213266] = anon_sym_DQUOTE;
	v->a[213267] = actions(9644);
	v->a[213268] = 1;
	v->a[213269] = anon_sym_DOLLAR_LBRACE;
	v->a[213270] = actions(9646);
	v->a[213271] = 1;
	v->a[213272] = anon_sym_BQUOTE;
	v->a[213273] = actions(9648);
	v->a[213274] = 1;
	v->a[213275] = anon_sym_DOLLAR_BQUOTE;
	v->a[213276] = actions(9872);
	v->a[213277] = 1;
	v->a[213278] = sym_word;
	v->a[213279] = actions(9880);
	small_parse_table_10664(v);
}

void	small_parse_table_10664(t_small_parse_table_array *v)
{
	v->a[213280] = 1;
	v->a[213281] = sym__comment_word;
	v->a[213282] = actions(10162);
	v->a[213283] = 1;
	v->a[213284] = anon_sym_DOLLAR;
	v->a[213285] = actions(9634);
	v->a[213286] = 2;
	v->a[213287] = anon_sym_LPAREN_LPAREN;
	v->a[213288] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[213289] = actions(9650);
	v->a[213290] = 2;
	v->a[213291] = anon_sym_LT_LPAREN;
	v->a[213292] = anon_sym_GT_LPAREN;
	v->a[213293] = actions(9876);
	v->a[213294] = 2;
	v->a[213295] = sym_test_operator;
	v->a[213296] = sym__special_character;
	v->a[213297] = actions(9878);
	v->a[213298] = 3;
	v->a[213299] = sym__bare_dollar;
	small_parse_table_10665(v);
}

/* EOF small_parse_table_2132.c */
