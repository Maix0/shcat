/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1821.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9105(t_small_parse_table_array *v)
{
	v->a[182100] = actions(7274);
	v->a[182101] = 21;
	v->a[182102] = anon_sym_COMMA;
	v->a[182103] = anon_sym_PLUS_EQ;
	v->a[182104] = anon_sym_DASH_EQ;
	v->a[182105] = anon_sym_STAR_EQ;
	v->a[182106] = anon_sym_SLASH_EQ;
	v->a[182107] = anon_sym_PERCENT_EQ;
	v->a[182108] = anon_sym_STAR_STAR_EQ;
	v->a[182109] = anon_sym_LT_LT_EQ;
	v->a[182110] = anon_sym_GT_GT_EQ;
	v->a[182111] = anon_sym_AMP_EQ;
	v->a[182112] = anon_sym_CARET_EQ;
	v->a[182113] = anon_sym_PIPE_EQ;
	v->a[182114] = anon_sym_PIPE_PIPE;
	v->a[182115] = anon_sym_DASHo;
	v->a[182116] = anon_sym_AMP_AMP;
	v->a[182117] = anon_sym_DASHa;
	v->a[182118] = anon_sym_EQ_EQ;
	v->a[182119] = anon_sym_BANG_EQ;
	small_parse_table_9106(v);
}

void	small_parse_table_9106(t_small_parse_table_array *v)
{
	v->a[182120] = anon_sym_LT_EQ;
	v->a[182121] = anon_sym_GT_EQ;
	v->a[182122] = anon_sym_RPAREN;
	v->a[182123] = 24;
	v->a[182124] = actions(71);
	v->a[182125] = 1;
	v->a[182126] = sym_comment;
	v->a[182127] = actions(6474);
	v->a[182128] = 1;
	v->a[182129] = sym_word;
	v->a[182130] = actions(6480);
	v->a[182131] = 1;
	v->a[182132] = anon_sym_LPAREN;
	v->a[182133] = actions(6488);
	v->a[182134] = 1;
	v->a[182135] = anon_sym_DOLLAR;
	v->a[182136] = actions(6494);
	v->a[182137] = 1;
	v->a[182138] = aux_sym_number_token1;
	v->a[182139] = actions(6496);
	small_parse_table_9107(v);
}

void	small_parse_table_9107(t_small_parse_table_array *v)
{
	v->a[182140] = 1;
	v->a[182141] = aux_sym_number_token2;
	v->a[182142] = actions(6500);
	v->a[182143] = 1;
	v->a[182144] = anon_sym_DOLLAR_LPAREN;
	v->a[182145] = actions(6508);
	v->a[182146] = 1;
	v->a[182147] = sym_test_operator;
	v->a[182148] = actions(6510);
	v->a[182149] = 1;
	v->a[182150] = sym_extglob_pattern;
	v->a[182151] = actions(6512);
	v->a[182152] = 1;
	v->a[182153] = sym__brace_start;
	v->a[182154] = actions(7226);
	v->a[182155] = 1;
	v->a[182156] = anon_sym_DOLLAR_LBRACK;
	v->a[182157] = actions(7228);
	v->a[182158] = 1;
	v->a[182159] = sym__special_character;
	small_parse_table_9108(v);
}

void	small_parse_table_9108(t_small_parse_table_array *v)
{
	v->a[182160] = actions(7230);
	v->a[182161] = 1;
	v->a[182162] = anon_sym_DQUOTE;
	v->a[182163] = actions(7234);
	v->a[182164] = 1;
	v->a[182165] = anon_sym_DOLLAR_LBRACE;
	v->a[182166] = actions(7236);
	v->a[182167] = 1;
	v->a[182168] = anon_sym_BQUOTE;
	v->a[182169] = actions(7238);
	v->a[182170] = 1;
	v->a[182171] = anon_sym_DOLLAR_BQUOTE;
	v->a[182172] = state(6426);
	v->a[182173] = 1;
	v->a[182174] = aux_sym__literal_repeat1;
	v->a[182175] = state(7005);
	v->a[182176] = 1;
	v->a[182177] = sym_last_case_item;
	v->a[182178] = actions(7224);
	v->a[182179] = 2;
	small_parse_table_9109(v);
}

void	small_parse_table_9109(t_small_parse_table_array *v)
{
	v->a[182180] = anon_sym_LPAREN_LPAREN;
	v->a[182181] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[182182] = actions(7232);
	v->a[182183] = 2;
	v->a[182184] = sym_raw_string;
	v->a[182185] = sym_ansi_c_string;
	v->a[182186] = actions(7240);
	v->a[182187] = 2;
	v->a[182188] = anon_sym_LT_LPAREN;
	v->a[182189] = anon_sym_GT_LPAREN;
	v->a[182190] = state(3477);
	v->a[182191] = 2;
	v->a[182192] = sym_case_item;
	v->a[182193] = aux_sym_case_statement_repeat1;
	v->a[182194] = state(6695);
	v->a[182195] = 2;
	v->a[182196] = sym_concatenation;
	v->a[182197] = sym__extglob_blob;
	v->a[182198] = state(6303);
	v->a[182199] = 9;
	small_parse_table_9110(v);
}

/* EOF small_parse_table_1821.c */
