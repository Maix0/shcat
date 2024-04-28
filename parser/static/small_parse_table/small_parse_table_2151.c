/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2151.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10755(t_small_parse_table_array *v)
{
	v->a[215100] = anon_sym_GT_LPAREN;
	v->a[215101] = actions(10250);
	v->a[215102] = 2;
	v->a[215103] = sym_test_operator;
	v->a[215104] = sym__special_character;
	v->a[215105] = actions(10252);
	v->a[215106] = 3;
	v->a[215107] = sym__bare_dollar;
	v->a[215108] = sym_raw_string;
	v->a[215109] = sym_ansi_c_string;
	v->a[215110] = state(1532);
	v->a[215111] = 9;
	v->a[215112] = sym_arithmetic_expansion;
	v->a[215113] = sym_brace_expression;
	v->a[215114] = sym_string;
	v->a[215115] = sym_translated_string;
	v->a[215116] = sym_number;
	v->a[215117] = sym_simple_expansion;
	v->a[215118] = sym_expansion;
	v->a[215119] = sym_command_substitution;
	small_parse_table_10756(v);
}

void	small_parse_table_10756(t_small_parse_table_array *v)
{
	v->a[215120] = sym_process_substitution;
	v->a[215121] = 18;
	v->a[215122] = actions(3);
	v->a[215123] = 1;
	v->a[215124] = sym_comment;
	v->a[215125] = actions(7958);
	v->a[215126] = 1;
	v->a[215127] = anon_sym_DOLLAR_LBRACK;
	v->a[215128] = actions(7960);
	v->a[215129] = 1;
	v->a[215130] = anon_sym_DOLLAR;
	v->a[215131] = actions(7964);
	v->a[215132] = 1;
	v->a[215133] = anon_sym_DQUOTE;
	v->a[215134] = actions(7968);
	v->a[215135] = 1;
	v->a[215136] = aux_sym_number_token1;
	v->a[215137] = actions(7970);
	v->a[215138] = 1;
	v->a[215139] = aux_sym_number_token2;
	small_parse_table_10757(v);
}

void	small_parse_table_10757(t_small_parse_table_array *v)
{
	v->a[215140] = actions(7972);
	v->a[215141] = 1;
	v->a[215142] = anon_sym_DOLLAR_LBRACE;
	v->a[215143] = actions(7974);
	v->a[215144] = 1;
	v->a[215145] = anon_sym_DOLLAR_LPAREN;
	v->a[215146] = actions(7976);
	v->a[215147] = 1;
	v->a[215148] = anon_sym_BQUOTE;
	v->a[215149] = actions(7978);
	v->a[215150] = 1;
	v->a[215151] = anon_sym_DOLLAR_BQUOTE;
	v->a[215152] = actions(7988);
	v->a[215153] = 1;
	v->a[215154] = sym__brace_start;
	v->a[215155] = actions(9860);
	v->a[215156] = 1;
	v->a[215157] = sym_word;
	v->a[215158] = actions(9868);
	v->a[215159] = 1;
	small_parse_table_10758(v);
}

void	small_parse_table_10758(t_small_parse_table_array *v)
{
	v->a[215160] = sym__comment_word;
	v->a[215161] = actions(7954);
	v->a[215162] = 2;
	v->a[215163] = anon_sym_LPAREN_LPAREN;
	v->a[215164] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[215165] = actions(7980);
	v->a[215166] = 2;
	v->a[215167] = anon_sym_LT_LPAREN;
	v->a[215168] = anon_sym_GT_LPAREN;
	v->a[215169] = actions(9864);
	v->a[215170] = 2;
	v->a[215171] = sym_test_operator;
	v->a[215172] = sym__special_character;
	v->a[215173] = actions(9866);
	v->a[215174] = 3;
	v->a[215175] = sym__bare_dollar;
	v->a[215176] = sym_raw_string;
	v->a[215177] = sym_ansi_c_string;
	v->a[215178] = state(4357);
	v->a[215179] = 9;
	small_parse_table_10759(v);
}

void	small_parse_table_10759(t_small_parse_table_array *v)
{
	v->a[215180] = sym_arithmetic_expansion;
	v->a[215181] = sym_brace_expression;
	v->a[215182] = sym_string;
	v->a[215183] = sym_translated_string;
	v->a[215184] = sym_number;
	v->a[215185] = sym_simple_expansion;
	v->a[215186] = sym_expansion;
	v->a[215187] = sym_command_substitution;
	v->a[215188] = sym_process_substitution;
	v->a[215189] = 21;
	v->a[215190] = actions(71);
	v->a[215191] = 1;
	v->a[215192] = sym_comment;
	v->a[215193] = actions(9364);
	v->a[215194] = 1;
	v->a[215195] = anon_sym_LPAREN;
	v->a[215196] = actions(9366);
	v->a[215197] = 1;
	v->a[215198] = anon_sym_BANG;
	v->a[215199] = actions(9372);
	small_parse_table_10760(v);
}

/* EOF small_parse_table_2151.c */
