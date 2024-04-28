/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1702.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8510(t_small_parse_table_array *v)
{
	v->a[170200] = anon_sym_PLUS_PLUS;
	v->a[170201] = anon_sym_DASH_DASH;
	v->a[170202] = actions(7601);
	v->a[170203] = 2;
	v->a[170204] = anon_sym_LT_LT;
	v->a[170205] = anon_sym_GT_GT;
	v->a[170206] = actions(7603);
	v->a[170207] = 2;
	v->a[170208] = anon_sym_PLUS;
	v->a[170209] = anon_sym_DASH;
	v->a[170210] = actions(7605);
	v->a[170211] = 3;
	v->a[170212] = anon_sym_STAR;
	v->a[170213] = anon_sym_SLASH;
	v->a[170214] = anon_sym_PERCENT;
	v->a[170215] = actions(6791);
	v->a[170216] = 6;
	v->a[170217] = anon_sym_EQ;
	v->a[170218] = anon_sym_PIPE;
	v->a[170219] = anon_sym_CARET;
	small_parse_table_8511(v);
}

void	small_parse_table_8511(t_small_parse_table_array *v)
{
	v->a[170220] = anon_sym_AMP;
	v->a[170221] = anon_sym_LT;
	v->a[170222] = anon_sym_GT;
	v->a[170223] = actions(6789);
	v->a[170224] = 20;
	v->a[170225] = sym_test_operator;
	v->a[170226] = anon_sym_PLUS_EQ;
	v->a[170227] = anon_sym_DASH_EQ;
	v->a[170228] = anon_sym_STAR_EQ;
	v->a[170229] = anon_sym_SLASH_EQ;
	v->a[170230] = anon_sym_PERCENT_EQ;
	v->a[170231] = anon_sym_STAR_STAR_EQ;
	v->a[170232] = anon_sym_LT_LT_EQ;
	v->a[170233] = anon_sym_GT_GT_EQ;
	v->a[170234] = anon_sym_AMP_EQ;
	v->a[170235] = anon_sym_CARET_EQ;
	v->a[170236] = anon_sym_PIPE_EQ;
	v->a[170237] = anon_sym_PIPE_PIPE;
	v->a[170238] = anon_sym_AMP_AMP;
	v->a[170239] = anon_sym_EQ_EQ;
	small_parse_table_8512(v);
}

void	small_parse_table_8512(t_small_parse_table_array *v)
{
	v->a[170240] = anon_sym_BANG_EQ;
	v->a[170241] = anon_sym_LT_EQ;
	v->a[170242] = anon_sym_GT_EQ;
	v->a[170243] = anon_sym_EQ_TILDE;
	v->a[170244] = anon_sym_QMARK;
	v->a[170245] = 3;
	v->a[170246] = actions(3);
	v->a[170247] = 1;
	v->a[170248] = sym_comment;
	v->a[170249] = actions(1318);
	v->a[170250] = 5;
	v->a[170251] = sym_file_descriptor;
	v->a[170252] = sym__concat;
	v->a[170253] = sym_test_operator;
	v->a[170254] = sym__brace_start;
	v->a[170255] = aux_sym_heredoc_redirect_token1;
	v->a[170256] = actions(1316);
	v->a[170257] = 31;
	v->a[170258] = anon_sym_LPAREN_LPAREN;
	v->a[170259] = anon_sym_PIPE_PIPE;
	small_parse_table_8513(v);
}

void	small_parse_table_8513(t_small_parse_table_array *v)
{
	v->a[170260] = anon_sym_AMP_AMP;
	v->a[170261] = anon_sym_LT;
	v->a[170262] = anon_sym_GT;
	v->a[170263] = anon_sym_GT_GT;
	v->a[170264] = anon_sym_AMP_GT;
	v->a[170265] = anon_sym_AMP_GT_GT;
	v->a[170266] = anon_sym_LT_AMP;
	v->a[170267] = anon_sym_GT_AMP;
	v->a[170268] = anon_sym_GT_PIPE;
	v->a[170269] = anon_sym_LT_AMP_DASH;
	v->a[170270] = anon_sym_GT_AMP_DASH;
	v->a[170271] = anon_sym_LT_LT_LT;
	v->a[170272] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[170273] = anon_sym_DOLLAR_LBRACK;
	v->a[170274] = aux_sym_concatenation_token1;
	v->a[170275] = anon_sym_DOLLAR;
	v->a[170276] = sym__special_character;
	v->a[170277] = anon_sym_DQUOTE;
	v->a[170278] = sym_raw_string;
	v->a[170279] = sym_ansi_c_string;
	small_parse_table_8514(v);
}

void	small_parse_table_8514(t_small_parse_table_array *v)
{
	v->a[170280] = aux_sym_number_token1;
	v->a[170281] = aux_sym_number_token2;
	v->a[170282] = anon_sym_DOLLAR_LBRACE;
	v->a[170283] = anon_sym_DOLLAR_LPAREN;
	v->a[170284] = anon_sym_BQUOTE;
	v->a[170285] = anon_sym_DOLLAR_BQUOTE;
	v->a[170286] = anon_sym_LT_LPAREN;
	v->a[170287] = anon_sym_GT_LPAREN;
	v->a[170288] = sym_word;
	v->a[170289] = 19;
	v->a[170290] = actions(71);
	v->a[170291] = 1;
	v->a[170292] = sym_comment;
	v->a[170293] = actions(7031);
	v->a[170294] = 1;
	v->a[170295] = anon_sym_RBRACK;
	v->a[170296] = actions(7567);
	v->a[170297] = 1;
	v->a[170298] = anon_sym_EQ;
	v->a[170299] = actions(7573);
	small_parse_table_8515(v);
}

/* EOF small_parse_table_1702.c */
