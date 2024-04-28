/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2082.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10410(t_small_parse_table_array *v)
{
	v->a[208200] = sym__special_character;
	v->a[208201] = actions(9744);
	v->a[208202] = 3;
	v->a[208203] = sym__bare_dollar;
	v->a[208204] = sym_raw_string;
	v->a[208205] = sym_ansi_c_string;
	v->a[208206] = state(2004);
	v->a[208207] = 9;
	v->a[208208] = sym_arithmetic_expansion;
	v->a[208209] = sym_brace_expression;
	v->a[208210] = sym_string;
	v->a[208211] = sym_translated_string;
	v->a[208212] = sym_number;
	v->a[208213] = sym_simple_expansion;
	v->a[208214] = sym_expansion;
	v->a[208215] = sym_command_substitution;
	v->a[208216] = sym_process_substitution;
	v->a[208217] = 20;
	v->a[208218] = actions(71);
	v->a[208219] = 1;
	small_parse_table_10411(v);
}

void	small_parse_table_10411(t_small_parse_table_array *v)
{
	v->a[208220] = sym_comment;
	v->a[208221] = actions(8102);
	v->a[208222] = 1;
	v->a[208223] = anon_sym_DOLLAR_LBRACK;
	v->a[208224] = actions(8104);
	v->a[208225] = 1;
	v->a[208226] = anon_sym_DOLLAR;
	v->a[208227] = actions(8106);
	v->a[208228] = 1;
	v->a[208229] = sym__special_character;
	v->a[208230] = actions(8108);
	v->a[208231] = 1;
	v->a[208232] = anon_sym_DQUOTE;
	v->a[208233] = actions(8112);
	v->a[208234] = 1;
	v->a[208235] = aux_sym_number_token1;
	v->a[208236] = actions(8114);
	v->a[208237] = 1;
	v->a[208238] = aux_sym_number_token2;
	v->a[208239] = actions(8116);
	small_parse_table_10412(v);
}

void	small_parse_table_10412(t_small_parse_table_array *v)
{
	v->a[208240] = 1;
	v->a[208241] = anon_sym_DOLLAR_LBRACE;
	v->a[208242] = actions(8118);
	v->a[208243] = 1;
	v->a[208244] = anon_sym_DOLLAR_LPAREN;
	v->a[208245] = actions(8120);
	v->a[208246] = 1;
	v->a[208247] = anon_sym_BQUOTE;
	v->a[208248] = actions(8122);
	v->a[208249] = 1;
	v->a[208250] = anon_sym_DOLLAR_BQUOTE;
	v->a[208251] = actions(8132);
	v->a[208252] = 1;
	v->a[208253] = sym__brace_start;
	v->a[208254] = actions(9748);
	v->a[208255] = 1;
	v->a[208256] = sym_word;
	v->a[208257] = actions(9752);
	v->a[208258] = 1;
	v->a[208259] = sym_test_operator;
	small_parse_table_10413(v);
}

void	small_parse_table_10413(t_small_parse_table_array *v)
{
	v->a[208260] = state(1349);
	v->a[208261] = 1;
	v->a[208262] = aux_sym__literal_repeat1;
	v->a[208263] = state(1639);
	v->a[208264] = 1;
	v->a[208265] = sym_concatenation;
	v->a[208266] = actions(8098);
	v->a[208267] = 2;
	v->a[208268] = anon_sym_LPAREN_LPAREN;
	v->a[208269] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[208270] = actions(8124);
	v->a[208271] = 2;
	v->a[208272] = anon_sym_LT_LPAREN;
	v->a[208273] = anon_sym_GT_LPAREN;
	v->a[208274] = actions(9750);
	v->a[208275] = 2;
	v->a[208276] = sym_raw_string;
	v->a[208277] = sym_ansi_c_string;
	v->a[208278] = state(1127);
	v->a[208279] = 9;
	small_parse_table_10414(v);
}

void	small_parse_table_10414(t_small_parse_table_array *v)
{
	v->a[208280] = sym_arithmetic_expansion;
	v->a[208281] = sym_brace_expression;
	v->a[208282] = sym_string;
	v->a[208283] = sym_translated_string;
	v->a[208284] = sym_number;
	v->a[208285] = sym_simple_expansion;
	v->a[208286] = sym_expansion;
	v->a[208287] = sym_command_substitution;
	v->a[208288] = sym_process_substitution;
	v->a[208289] = 18;
	v->a[208290] = actions(3);
	v->a[208291] = 1;
	v->a[208292] = sym_comment;
	v->a[208293] = actions(9754);
	v->a[208294] = 1;
	v->a[208295] = sym_word;
	v->a[208296] = actions(9758);
	v->a[208297] = 1;
	v->a[208298] = anon_sym_DOLLAR_LBRACK;
	v->a[208299] = actions(9760);
	small_parse_table_10415(v);
}

/* EOF small_parse_table_2082.c */
