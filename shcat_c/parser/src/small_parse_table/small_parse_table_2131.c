/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2131.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10655(t_small_parse_table_array *v)
{
	v->a[213100] = sym_arithmetic_expansion;
	v->a[213101] = sym_brace_expression;
	v->a[213102] = sym_string;
	v->a[213103] = sym_translated_string;
	v->a[213104] = sym_number;
	v->a[213105] = sym_simple_expansion;
	v->a[213106] = sym_expansion;
	v->a[213107] = sym_command_substitution;
	v->a[213108] = sym_process_substitution;
	v->a[213109] = 18;
	v->a[213110] = actions(3);
	v->a[213111] = 1;
	v->a[213112] = sym_comment;
	v->a[213113] = actions(7958);
	v->a[213114] = 1;
	v->a[213115] = anon_sym_DOLLAR_LBRACK;
	v->a[213116] = actions(7964);
	v->a[213117] = 1;
	v->a[213118] = anon_sym_DQUOTE;
	v->a[213119] = actions(7968);
	small_parse_table_10656(v);
}

void	small_parse_table_10656(t_small_parse_table_array *v)
{
	v->a[213120] = 1;
	v->a[213121] = aux_sym_number_token1;
	v->a[213122] = actions(7970);
	v->a[213123] = 1;
	v->a[213124] = aux_sym_number_token2;
	v->a[213125] = actions(7972);
	v->a[213126] = 1;
	v->a[213127] = anon_sym_DOLLAR_LBRACE;
	v->a[213128] = actions(7974);
	v->a[213129] = 1;
	v->a[213130] = anon_sym_DOLLAR_LPAREN;
	v->a[213131] = actions(7976);
	v->a[213132] = 1;
	v->a[213133] = anon_sym_BQUOTE;
	v->a[213134] = actions(7978);
	v->a[213135] = 1;
	v->a[213136] = anon_sym_DOLLAR_BQUOTE;
	v->a[213137] = actions(7988);
	v->a[213138] = 1;
	v->a[213139] = sym__brace_start;
	small_parse_table_10657(v);
}

void	small_parse_table_10657(t_small_parse_table_array *v)
{
	v->a[213140] = actions(9860);
	v->a[213141] = 1;
	v->a[213142] = sym_word;
	v->a[213143] = actions(9868);
	v->a[213144] = 1;
	v->a[213145] = sym__comment_word;
	v->a[213146] = actions(10158);
	v->a[213147] = 1;
	v->a[213148] = anon_sym_DOLLAR;
	v->a[213149] = actions(7954);
	v->a[213150] = 2;
	v->a[213151] = anon_sym_LPAREN_LPAREN;
	v->a[213152] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[213153] = actions(7980);
	v->a[213154] = 2;
	v->a[213155] = anon_sym_LT_LPAREN;
	v->a[213156] = anon_sym_GT_LPAREN;
	v->a[213157] = actions(9864);
	v->a[213158] = 2;
	v->a[213159] = sym_test_operator;
	small_parse_table_10658(v);
}

void	small_parse_table_10658(t_small_parse_table_array *v)
{
	v->a[213160] = sym__special_character;
	v->a[213161] = actions(9866);
	v->a[213162] = 3;
	v->a[213163] = sym__bare_dollar;
	v->a[213164] = sym_raw_string;
	v->a[213165] = sym_ansi_c_string;
	v->a[213166] = state(4357);
	v->a[213167] = 9;
	v->a[213168] = sym_arithmetic_expansion;
	v->a[213169] = sym_brace_expression;
	v->a[213170] = sym_string;
	v->a[213171] = sym_translated_string;
	v->a[213172] = sym_number;
	v->a[213173] = sym_simple_expansion;
	v->a[213174] = sym_expansion;
	v->a[213175] = sym_command_substitution;
	v->a[213176] = sym_process_substitution;
	v->a[213177] = 18;
	v->a[213178] = actions(3);
	v->a[213179] = 1;
	small_parse_table_10659(v);
}

void	small_parse_table_10659(t_small_parse_table_array *v)
{
	v->a[213180] = sym_comment;
	v->a[213181] = actions(7958);
	v->a[213182] = 1;
	v->a[213183] = anon_sym_DOLLAR_LBRACK;
	v->a[213184] = actions(7964);
	v->a[213185] = 1;
	v->a[213186] = anon_sym_DQUOTE;
	v->a[213187] = actions(7968);
	v->a[213188] = 1;
	v->a[213189] = aux_sym_number_token1;
	v->a[213190] = actions(7970);
	v->a[213191] = 1;
	v->a[213192] = aux_sym_number_token2;
	v->a[213193] = actions(7972);
	v->a[213194] = 1;
	v->a[213195] = anon_sym_DOLLAR_LBRACE;
	v->a[213196] = actions(7974);
	v->a[213197] = 1;
	v->a[213198] = anon_sym_DOLLAR_LPAREN;
	v->a[213199] = actions(7976);
	small_parse_table_10660(v);
}

/* EOF small_parse_table_2131.c */
