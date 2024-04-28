/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1542.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7710(t_small_parse_table_array *v)
{
	v->a[154200] = anon_sym_STAR_STAR;
	v->a[154201] = actions(6885);
	v->a[154202] = 2;
	v->a[154203] = anon_sym_PLUS_PLUS;
	v->a[154204] = anon_sym_DASH_DASH;
	v->a[154205] = actions(6899);
	v->a[154206] = 2;
	v->a[154207] = anon_sym_EQ_EQ;
	v->a[154208] = anon_sym_BANG_EQ;
	v->a[154209] = actions(6901);
	v->a[154210] = 2;
	v->a[154211] = anon_sym_LT;
	v->a[154212] = anon_sym_GT;
	v->a[154213] = actions(6903);
	v->a[154214] = 2;
	v->a[154215] = anon_sym_LT_EQ;
	v->a[154216] = anon_sym_GT_EQ;
	v->a[154217] = actions(6905);
	v->a[154218] = 2;
	v->a[154219] = anon_sym_LT_LT;
	small_parse_table_7711(v);
}

void	small_parse_table_7711(t_small_parse_table_array *v)
{
	v->a[154220] = anon_sym_GT_GT;
	v->a[154221] = actions(6907);
	v->a[154222] = 2;
	v->a[154223] = anon_sym_PLUS;
	v->a[154224] = anon_sym_DASH;
	v->a[154225] = actions(6909);
	v->a[154226] = 3;
	v->a[154227] = anon_sym_STAR;
	v->a[154228] = anon_sym_SLASH;
	v->a[154229] = anon_sym_PERCENT;
	v->a[154230] = actions(7139);
	v->a[154231] = 4;
	v->a[154232] = anon_sym_EQ;
	v->a[154233] = anon_sym_PIPE;
	v->a[154234] = anon_sym_CARET;
	v->a[154235] = anon_sym_AMP;
	v->a[154236] = actions(7137);
	v->a[154237] = 18;
	v->a[154238] = anon_sym_RPAREN_RPAREN;
	v->a[154239] = anon_sym_COMMA;
	small_parse_table_7712(v);
}

void	small_parse_table_7712(t_small_parse_table_array *v)
{
	v->a[154240] = anon_sym_PLUS_EQ;
	v->a[154241] = anon_sym_DASH_EQ;
	v->a[154242] = anon_sym_STAR_EQ;
	v->a[154243] = anon_sym_SLASH_EQ;
	v->a[154244] = anon_sym_PERCENT_EQ;
	v->a[154245] = anon_sym_STAR_STAR_EQ;
	v->a[154246] = anon_sym_LT_LT_EQ;
	v->a[154247] = anon_sym_GT_GT_EQ;
	v->a[154248] = anon_sym_AMP_EQ;
	v->a[154249] = anon_sym_CARET_EQ;
	v->a[154250] = anon_sym_PIPE_EQ;
	v->a[154251] = anon_sym_PIPE_PIPE;
	v->a[154252] = anon_sym_AMP_AMP;
	v->a[154253] = anon_sym_EQ_TILDE;
	v->a[154254] = anon_sym_QMARK;
	v->a[154255] = anon_sym_COLON;
	v->a[154256] = 3;
	v->a[154257] = actions(71);
	v->a[154258] = 1;
	v->a[154259] = sym_comment;
	small_parse_table_7713(v);
}

void	small_parse_table_7713(t_small_parse_table_array *v)
{
	v->a[154260] = actions(1308);
	v->a[154261] = 13;
	v->a[154262] = anon_sym_PIPE;
	v->a[154263] = anon_sym_LT;
	v->a[154264] = anon_sym_GT;
	v->a[154265] = anon_sym_LT_LT;
	v->a[154266] = anon_sym_AMP_GT;
	v->a[154267] = anon_sym_LT_AMP;
	v->a[154268] = anon_sym_GT_AMP;
	v->a[154269] = anon_sym_DOLLAR;
	v->a[154270] = aux_sym_number_token1;
	v->a[154271] = aux_sym_number_token2;
	v->a[154272] = anon_sym_DOLLAR_LPAREN;
	v->a[154273] = anon_sym_BQUOTE;
	v->a[154274] = sym_word;
	v->a[154275] = actions(1310);
	v->a[154276] = 25;
	v->a[154277] = sym_file_descriptor;
	v->a[154278] = sym__concat;
	v->a[154279] = sym_test_operator;
	small_parse_table_7714(v);
}

void	small_parse_table_7714(t_small_parse_table_array *v)
{
	v->a[154280] = sym__brace_start;
	v->a[154281] = anon_sym_LPAREN_LPAREN;
	v->a[154282] = anon_sym_PIPE_PIPE;
	v->a[154283] = anon_sym_AMP_AMP;
	v->a[154284] = anon_sym_GT_GT;
	v->a[154285] = anon_sym_PIPE_AMP;
	v->a[154286] = anon_sym_AMP_GT_GT;
	v->a[154287] = anon_sym_GT_PIPE;
	v->a[154288] = anon_sym_LT_AMP_DASH;
	v->a[154289] = anon_sym_GT_AMP_DASH;
	v->a[154290] = anon_sym_LT_LT_DASH;
	v->a[154291] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[154292] = anon_sym_DOLLAR_LBRACK;
	v->a[154293] = aux_sym_concatenation_token1;
	v->a[154294] = sym__special_character;
	v->a[154295] = anon_sym_DQUOTE;
	v->a[154296] = sym_raw_string;
	v->a[154297] = sym_ansi_c_string;
	v->a[154298] = anon_sym_DOLLAR_LBRACE;
	v->a[154299] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_7715(v);
}

/* EOF small_parse_table_1542.c */
