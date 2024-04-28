/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1512.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7560(t_small_parse_table_array *v)
{
	v->a[151200] = anon_sym_LT;
	v->a[151201] = anon_sym_GT;
	v->a[151202] = actions(6903);
	v->a[151203] = 2;
	v->a[151204] = anon_sym_LT_EQ;
	v->a[151205] = anon_sym_GT_EQ;
	v->a[151206] = actions(6905);
	v->a[151207] = 2;
	v->a[151208] = anon_sym_LT_LT;
	v->a[151209] = anon_sym_GT_GT;
	v->a[151210] = actions(6907);
	v->a[151211] = 2;
	v->a[151212] = anon_sym_PLUS;
	v->a[151213] = anon_sym_DASH;
	v->a[151214] = actions(6909);
	v->a[151215] = 3;
	v->a[151216] = anon_sym_STAR;
	v->a[151217] = anon_sym_SLASH;
	v->a[151218] = anon_sym_PERCENT;
	v->a[151219] = actions(6887);
	small_parse_table_7561(v);
}

void	small_parse_table_7561(t_small_parse_table_array *v)
{
	v->a[151220] = 11;
	v->a[151221] = anon_sym_PLUS_EQ;
	v->a[151222] = anon_sym_DASH_EQ;
	v->a[151223] = anon_sym_STAR_EQ;
	v->a[151224] = anon_sym_SLASH_EQ;
	v->a[151225] = anon_sym_PERCENT_EQ;
	v->a[151226] = anon_sym_STAR_STAR_EQ;
	v->a[151227] = anon_sym_LT_LT_EQ;
	v->a[151228] = anon_sym_GT_GT_EQ;
	v->a[151229] = anon_sym_AMP_EQ;
	v->a[151230] = anon_sym_CARET_EQ;
	v->a[151231] = anon_sym_PIPE_EQ;
	v->a[151232] = 3;
	v->a[151233] = actions(71);
	v->a[151234] = 1;
	v->a[151235] = sym_comment;
	v->a[151236] = actions(1332);
	v->a[151237] = 13;
	v->a[151238] = anon_sym_PIPE;
	v->a[151239] = anon_sym_LT;
	small_parse_table_7562(v);
}

void	small_parse_table_7562(t_small_parse_table_array *v)
{
	v->a[151240] = anon_sym_GT;
	v->a[151241] = anon_sym_LT_LT;
	v->a[151242] = anon_sym_AMP_GT;
	v->a[151243] = anon_sym_LT_AMP;
	v->a[151244] = anon_sym_GT_AMP;
	v->a[151245] = anon_sym_DOLLAR;
	v->a[151246] = aux_sym_number_token1;
	v->a[151247] = aux_sym_number_token2;
	v->a[151248] = anon_sym_DOLLAR_LPAREN;
	v->a[151249] = anon_sym_BQUOTE;
	v->a[151250] = sym_word;
	v->a[151251] = actions(1334);
	v->a[151252] = 25;
	v->a[151253] = sym_file_descriptor;
	v->a[151254] = sym__concat;
	v->a[151255] = sym_test_operator;
	v->a[151256] = sym__brace_start;
	v->a[151257] = anon_sym_LPAREN_LPAREN;
	v->a[151258] = anon_sym_PIPE_PIPE;
	v->a[151259] = anon_sym_AMP_AMP;
	small_parse_table_7563(v);
}

void	small_parse_table_7563(t_small_parse_table_array *v)
{
	v->a[151260] = anon_sym_GT_GT;
	v->a[151261] = anon_sym_PIPE_AMP;
	v->a[151262] = anon_sym_AMP_GT_GT;
	v->a[151263] = anon_sym_GT_PIPE;
	v->a[151264] = anon_sym_LT_AMP_DASH;
	v->a[151265] = anon_sym_GT_AMP_DASH;
	v->a[151266] = anon_sym_LT_LT_DASH;
	v->a[151267] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[151268] = anon_sym_DOLLAR_LBRACK;
	v->a[151269] = aux_sym_concatenation_token1;
	v->a[151270] = sym__special_character;
	v->a[151271] = anon_sym_DQUOTE;
	v->a[151272] = sym_raw_string;
	v->a[151273] = sym_ansi_c_string;
	v->a[151274] = anon_sym_DOLLAR_LBRACE;
	v->a[151275] = anon_sym_DOLLAR_BQUOTE;
	v->a[151276] = anon_sym_LT_LPAREN;
	v->a[151277] = anon_sym_GT_LPAREN;
	v->a[151278] = 3;
	v->a[151279] = actions(71);
	small_parse_table_7564(v);
}

void	small_parse_table_7564(t_small_parse_table_array *v)
{
	v->a[151280] = 1;
	v->a[151281] = sym_comment;
	v->a[151282] = actions(7114);
	v->a[151283] = 14;
	v->a[151284] = anon_sym_EQ;
	v->a[151285] = anon_sym_PIPE;
	v->a[151286] = anon_sym_CARET;
	v->a[151287] = anon_sym_AMP;
	v->a[151288] = anon_sym_LT;
	v->a[151289] = anon_sym_GT;
	v->a[151290] = anon_sym_LT_LT;
	v->a[151291] = anon_sym_GT_GT;
	v->a[151292] = anon_sym_PLUS;
	v->a[151293] = anon_sym_DASH;
	v->a[151294] = anon_sym_STAR;
	v->a[151295] = anon_sym_SLASH;
	v->a[151296] = anon_sym_PERCENT;
	v->a[151297] = anon_sym_STAR_STAR;
	v->a[151298] = actions(7112);
	v->a[151299] = 24;
	small_parse_table_7565(v);
}

/* EOF small_parse_table_1512.c */
