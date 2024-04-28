/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_331.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1655(t_small_parse_table_array *v)
{
	v->a[33100] = sym__bare_dollar;
	v->a[33101] = sym__brace_start;
	v->a[33102] = ts_builtin_sym_end;
	v->a[33103] = aux_sym_heredoc_redirect_token1;
	v->a[33104] = actions(1271);
	v->a[33105] = 39;
	v->a[33106] = anon_sym_LPAREN_LPAREN;
	v->a[33107] = anon_sym_SEMI;
	v->a[33108] = anon_sym_PIPE_PIPE;
	v->a[33109] = anon_sym_AMP_AMP;
	v->a[33110] = anon_sym_PIPE;
	v->a[33111] = anon_sym_AMP;
	v->a[33112] = anon_sym_EQ_EQ;
	v->a[33113] = anon_sym_LT;
	v->a[33114] = anon_sym_GT;
	v->a[33115] = anon_sym_LT_LT;
	v->a[33116] = anon_sym_GT_GT;
	v->a[33117] = anon_sym_SEMI_SEMI;
	v->a[33118] = anon_sym_PIPE_AMP;
	v->a[33119] = anon_sym_EQ_TILDE;
	small_parse_table_1656(v);
}

void	small_parse_table_1656(t_small_parse_table_array *v)
{
	v->a[33120] = anon_sym_AMP_GT;
	v->a[33121] = anon_sym_AMP_GT_GT;
	v->a[33122] = anon_sym_LT_AMP;
	v->a[33123] = anon_sym_GT_AMP;
	v->a[33124] = anon_sym_GT_PIPE;
	v->a[33125] = anon_sym_LT_AMP_DASH;
	v->a[33126] = anon_sym_GT_AMP_DASH;
	v->a[33127] = anon_sym_LT_LT_DASH;
	v->a[33128] = anon_sym_LT_LT_LT;
	v->a[33129] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33130] = anon_sym_DOLLAR_LBRACK;
	v->a[33131] = anon_sym_DOLLAR;
	v->a[33132] = sym__special_character;
	v->a[33133] = anon_sym_DQUOTE;
	v->a[33134] = sym_raw_string;
	v->a[33135] = sym_ansi_c_string;
	v->a[33136] = aux_sym_number_token1;
	v->a[33137] = aux_sym_number_token2;
	v->a[33138] = anon_sym_DOLLAR_LBRACE;
	v->a[33139] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1657(v);
}

void	small_parse_table_1657(t_small_parse_table_array *v)
{
	v->a[33140] = anon_sym_BQUOTE;
	v->a[33141] = anon_sym_DOLLAR_BQUOTE;
	v->a[33142] = anon_sym_LT_LPAREN;
	v->a[33143] = anon_sym_GT_LPAREN;
	v->a[33144] = sym_word;
	v->a[33145] = 21;
	v->a[33146] = actions(3);
	v->a[33147] = 1;
	v->a[33148] = sym_comment;
	v->a[33149] = actions(3785);
	v->a[33150] = 1;
	v->a[33151] = anon_sym_DOLLAR_LBRACK;
	v->a[33152] = actions(3787);
	v->a[33153] = 1;
	v->a[33154] = anon_sym_DOLLAR;
	v->a[33155] = actions(3791);
	v->a[33156] = 1;
	v->a[33157] = anon_sym_DQUOTE;
	v->a[33158] = actions(3793);
	v->a[33159] = 1;
	small_parse_table_1658(v);
}

void	small_parse_table_1658(t_small_parse_table_array *v)
{
	v->a[33160] = aux_sym_number_token1;
	v->a[33161] = actions(3795);
	v->a[33162] = 1;
	v->a[33163] = aux_sym_number_token2;
	v->a[33164] = actions(3797);
	v->a[33165] = 1;
	v->a[33166] = anon_sym_DOLLAR_LBRACE;
	v->a[33167] = actions(3799);
	v->a[33168] = 1;
	v->a[33169] = anon_sym_DOLLAR_LPAREN;
	v->a[33170] = actions(3801);
	v->a[33171] = 1;
	v->a[33172] = anon_sym_BQUOTE;
	v->a[33173] = actions(3803);
	v->a[33174] = 1;
	v->a[33175] = anon_sym_DOLLAR_BQUOTE;
	v->a[33176] = actions(3809);
	v->a[33177] = 1;
	v->a[33178] = sym__brace_start;
	v->a[33179] = actions(4678);
	small_parse_table_1659(v);
}

void	small_parse_table_1659(t_small_parse_table_array *v)
{
	v->a[33180] = 1;
	v->a[33181] = sym__special_character;
	v->a[33182] = actions(4680);
	v->a[33183] = 1;
	v->a[33184] = sym_test_operator;
	v->a[33185] = state(4277);
	v->a[33186] = 1;
	v->a[33187] = aux_sym__literal_repeat1;
	v->a[33188] = state(4782);
	v->a[33189] = 1;
	v->a[33190] = sym_concatenation;
	v->a[33191] = actions(2496);
	v->a[33192] = 2;
	v->a[33193] = sym_file_descriptor;
	v->a[33194] = aux_sym_heredoc_redirect_token1;
	v->a[33195] = actions(3783);
	v->a[33196] = 2;
	v->a[33197] = anon_sym_LPAREN_LPAREN;
	v->a[33198] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33199] = actions(3805);
	small_parse_table_1660(v);
}

/* EOF small_parse_table_331.c */
