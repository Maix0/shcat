/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2322.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11610(t_small_parse_table_array *v)
{
	v->a[232200] = actions(8192);
	v->a[232201] = 1;
	v->a[232202] = anon_sym_DOLLAR_LBRACE;
	v->a[232203] = actions(8194);
	v->a[232204] = 1;
	v->a[232205] = anon_sym_DOLLAR_LPAREN;
	v->a[232206] = actions(8196);
	v->a[232207] = 1;
	v->a[232208] = anon_sym_BQUOTE;
	v->a[232209] = actions(8198);
	v->a[232210] = 1;
	v->a[232211] = anon_sym_DOLLAR_BQUOTE;
	v->a[232212] = actions(8208);
	v->a[232213] = 1;
	v->a[232214] = sym__brace_start;
	v->a[232215] = actions(8220);
	v->a[232216] = 1;
	v->a[232217] = sym__special_character;
	v->a[232218] = actions(10980);
	v->a[232219] = 1;
	small_parse_table_11611(v);
}

void	small_parse_table_11611(t_small_parse_table_array *v)
{
	v->a[232220] = sym_word;
	v->a[232221] = actions(10984);
	v->a[232222] = 1;
	v->a[232223] = sym_test_operator;
	v->a[232224] = state(1738);
	v->a[232225] = 1;
	v->a[232226] = aux_sym__literal_repeat1;
	v->a[232227] = state(1952);
	v->a[232228] = 1;
	v->a[232229] = sym_concatenation;
	v->a[232230] = actions(8174);
	v->a[232231] = 2;
	v->a[232232] = anon_sym_LPAREN_LPAREN;
	v->a[232233] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[232234] = actions(8200);
	v->a[232235] = 2;
	v->a[232236] = anon_sym_LT_LPAREN;
	v->a[232237] = anon_sym_GT_LPAREN;
	v->a[232238] = actions(10982);
	v->a[232239] = 2;
	small_parse_table_11612(v);
}

void	small_parse_table_11612(t_small_parse_table_array *v)
{
	v->a[232240] = sym_raw_string;
	v->a[232241] = sym_ansi_c_string;
	v->a[232242] = state(1330);
	v->a[232243] = 9;
	v->a[232244] = sym_arithmetic_expansion;
	v->a[232245] = sym_brace_expression;
	v->a[232246] = sym_string;
	v->a[232247] = sym_translated_string;
	v->a[232248] = sym_number;
	v->a[232249] = sym_simple_expansion;
	v->a[232250] = sym_expansion;
	v->a[232251] = sym_command_substitution;
	v->a[232252] = sym_process_substitution;
	v->a[232253] = 18;
	v->a[232254] = actions(3);
	v->a[232255] = 1;
	v->a[232256] = sym_comment;
	v->a[232257] = actions(1141);
	v->a[232258] = 1;
	v->a[232259] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_11613(v);
}

void	small_parse_table_11613(t_small_parse_table_array *v)
{
	v->a[232260] = actions(1149);
	v->a[232261] = 1;
	v->a[232262] = anon_sym_DQUOTE;
	v->a[232263] = actions(1153);
	v->a[232264] = 1;
	v->a[232265] = aux_sym_number_token1;
	v->a[232266] = actions(1155);
	v->a[232267] = 1;
	v->a[232268] = aux_sym_number_token2;
	v->a[232269] = actions(1157);
	v->a[232270] = 1;
	v->a[232271] = anon_sym_DOLLAR_LBRACE;
	v->a[232272] = actions(1159);
	v->a[232273] = 1;
	v->a[232274] = anon_sym_DOLLAR_LPAREN;
	v->a[232275] = actions(1163);
	v->a[232276] = 1;
	v->a[232277] = anon_sym_DOLLAR_BQUOTE;
	v->a[232278] = actions(1169);
	v->a[232279] = 1;
	small_parse_table_11614(v);
}

void	small_parse_table_11614(t_small_parse_table_array *v)
{
	v->a[232280] = sym__brace_start;
	v->a[232281] = actions(3060);
	v->a[232282] = 1;
	v->a[232283] = anon_sym_BQUOTE;
	v->a[232284] = actions(10188);
	v->a[232285] = 1;
	v->a[232286] = sym_word;
	v->a[232287] = actions(10196);
	v->a[232288] = 1;
	v->a[232289] = sym__comment_word;
	v->a[232290] = actions(10986);
	v->a[232291] = 1;
	v->a[232292] = anon_sym_DOLLAR;
	v->a[232293] = actions(1129);
	v->a[232294] = 2;
	v->a[232295] = anon_sym_LPAREN_LPAREN;
	v->a[232296] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[232297] = actions(1165);
	v->a[232298] = 2;
	v->a[232299] = anon_sym_LT_LPAREN;
	small_parse_table_11615(v);
}

/* EOF small_parse_table_2322.c */
