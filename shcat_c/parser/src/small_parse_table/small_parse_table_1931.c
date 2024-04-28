/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1931.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9655(t_small_parse_table_array *v)
{
	v->a[193100] = anon_sym_DASH;
	v->a[193101] = anon_sym_STAR;
	v->a[193102] = anon_sym_BANG;
	v->a[193103] = anon_sym_QMARK;
	v->a[193104] = anon_sym_DOLLAR;
	v->a[193105] = anon_sym_POUND;
	v->a[193106] = anon_sym_AT2;
	v->a[193107] = anon_sym_0;
	v->a[193108] = anon_sym__;
	v->a[193109] = actions(1227);
	v->a[193110] = 16;
	v->a[193111] = anon_sym_LPAREN_LPAREN;
	v->a[193112] = anon_sym_RPAREN;
	v->a[193113] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[193114] = anon_sym_DOLLAR_LBRACK;
	v->a[193115] = sym__special_character;
	v->a[193116] = sym_raw_string;
	v->a[193117] = sym_ansi_c_string;
	v->a[193118] = aux_sym_number_token1;
	v->a[193119] = aux_sym_number_token2;
	small_parse_table_9656(v);
}

void	small_parse_table_9656(t_small_parse_table_array *v)
{
	v->a[193120] = anon_sym_DOLLAR_LBRACE;
	v->a[193121] = anon_sym_DOLLAR_LPAREN;
	v->a[193122] = anon_sym_BQUOTE;
	v->a[193123] = anon_sym_DOLLAR_BQUOTE;
	v->a[193124] = anon_sym_LT_LPAREN;
	v->a[193125] = anon_sym_GT_LPAREN;
	v->a[193126] = sym_word;
	v->a[193127] = 8;
	v->a[193128] = actions(3);
	v->a[193129] = 1;
	v->a[193130] = sym_comment;
	v->a[193131] = actions(8623);
	v->a[193132] = 1;
	v->a[193133] = anon_sym_DQUOTE;
	v->a[193134] = actions(8627);
	v->a[193135] = 1;
	v->a[193136] = sym_variable_name;
	v->a[193137] = state(5204);
	v->a[193138] = 1;
	v->a[193139] = sym_string;
	small_parse_table_9657(v);
}

void	small_parse_table_9657(t_small_parse_table_array *v)
{
	v->a[193140] = actions(1241);
	v->a[193141] = 2;
	v->a[193142] = sym_test_operator;
	v->a[193143] = sym__brace_start;
	v->a[193144] = actions(8625);
	v->a[193145] = 2;
	v->a[193146] = aux_sym__simple_variable_name_token1;
	v->a[193147] = aux_sym__multiline_variable_name_token1;
	v->a[193148] = actions(8621);
	v->a[193149] = 9;
	v->a[193150] = anon_sym_DASH;
	v->a[193151] = anon_sym_STAR;
	v->a[193152] = anon_sym_BANG;
	v->a[193153] = anon_sym_QMARK;
	v->a[193154] = anon_sym_DOLLAR;
	v->a[193155] = anon_sym_POUND;
	v->a[193156] = anon_sym_AT2;
	v->a[193157] = anon_sym_0;
	v->a[193158] = anon_sym__;
	v->a[193159] = actions(1239);
	small_parse_table_9658(v);
}

void	small_parse_table_9658(t_small_parse_table_array *v)
{
	v->a[193160] = 16;
	v->a[193161] = anon_sym_LPAREN_LPAREN;
	v->a[193162] = anon_sym_RPAREN;
	v->a[193163] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[193164] = anon_sym_DOLLAR_LBRACK;
	v->a[193165] = sym__special_character;
	v->a[193166] = sym_raw_string;
	v->a[193167] = sym_ansi_c_string;
	v->a[193168] = aux_sym_number_token1;
	v->a[193169] = aux_sym_number_token2;
	v->a[193170] = anon_sym_DOLLAR_LBRACE;
	v->a[193171] = anon_sym_DOLLAR_LPAREN;
	v->a[193172] = anon_sym_BQUOTE;
	v->a[193173] = anon_sym_DOLLAR_BQUOTE;
	v->a[193174] = anon_sym_LT_LPAREN;
	v->a[193175] = anon_sym_GT_LPAREN;
	v->a[193176] = sym_word;
	v->a[193177] = 21;
	v->a[193178] = actions(71);
	v->a[193179] = 1;
	small_parse_table_9659(v);
}

void	small_parse_table_9659(t_small_parse_table_array *v)
{
	v->a[193180] = sym_comment;
	v->a[193181] = actions(8565);
	v->a[193182] = 1;
	v->a[193183] = sym_word;
	v->a[193184] = actions(8571);
	v->a[193185] = 1;
	v->a[193186] = anon_sym_DOLLAR_LBRACK;
	v->a[193187] = actions(8573);
	v->a[193188] = 1;
	v->a[193189] = anon_sym_DOLLAR;
	v->a[193190] = actions(8575);
	v->a[193191] = 1;
	v->a[193192] = sym__special_character;
	v->a[193193] = actions(8577);
	v->a[193194] = 1;
	v->a[193195] = anon_sym_DQUOTE;
	v->a[193196] = actions(8581);
	v->a[193197] = 1;
	v->a[193198] = aux_sym_number_token1;
	v->a[193199] = actions(8583);
	small_parse_table_9660(v);
}

/* EOF small_parse_table_1931.c */
