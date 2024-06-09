/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_372.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1860(t_small_parse_table_array *v)
{
	v->a[37200] = anon_sym_LT;
	v->a[37201] = anon_sym_GT;
	v->a[37202] = anon_sym_GT_GT;
	v->a[37203] = anon_sym_AMP_GT;
	v->a[37204] = anon_sym_AMP_GT_GT;
	v->a[37205] = anon_sym_LT_AMP;
	v->a[37206] = anon_sym_GT_AMP;
	v->a[37207] = anon_sym_GT_PIPE;
	v->a[37208] = anon_sym_LT_AMP_DASH;
	v->a[37209] = anon_sym_GT_AMP_DASH;
	v->a[37210] = anon_sym_LT_LT;
	v->a[37211] = anon_sym_LT_LT_DASH;
	v->a[37212] = aux_sym_heredoc_redirect_token1;
	v->a[37213] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37214] = anon_sym_AMP;
	v->a[37215] = aux_sym_concatenation_token1;
	v->a[37216] = anon_sym_DOLLAR;
	v->a[37217] = anon_sym_DQUOTE;
	v->a[37218] = sym_raw_string;
	v->a[37219] = aux_sym_number_token1;
	small_parse_table_1861(v);
}

void	small_parse_table_1861(t_small_parse_table_array *v)
{
	v->a[37220] = aux_sym_number_token2;
	v->a[37221] = anon_sym_DOLLAR_LBRACE;
	v->a[37222] = anon_sym_DOLLAR_LPAREN;
	v->a[37223] = anon_sym_BQUOTE;
	v->a[37224] = sym_word;
	v->a[37225] = anon_sym_SEMI;
	v->a[37226] = 3;
	v->a[37227] = actions(3);
	v->a[37228] = 1;
	v->a[37229] = sym_comment;
	v->a[37230] = actions(1315);
	v->a[37231] = 3;
	v->a[37232] = sym_file_descriptor;
	v->a[37233] = sym__concat;
	v->a[37234] = sym_variable_name;
	v->a[37235] = actions(1313);
	v->a[37236] = 31;
	v->a[37237] = anon_sym_PIPE;
	v->a[37238] = anon_sym_RPAREN;
	v->a[37239] = anon_sym_SEMI_SEMI;
	small_parse_table_1862(v);
}

void	small_parse_table_1862(t_small_parse_table_array *v)
{
	v->a[37240] = anon_sym_AMP_AMP;
	v->a[37241] = anon_sym_PIPE_PIPE;
	v->a[37242] = anon_sym_LT;
	v->a[37243] = anon_sym_GT;
	v->a[37244] = anon_sym_GT_GT;
	v->a[37245] = anon_sym_AMP_GT;
	v->a[37246] = anon_sym_AMP_GT_GT;
	v->a[37247] = anon_sym_LT_AMP;
	v->a[37248] = anon_sym_GT_AMP;
	v->a[37249] = anon_sym_GT_PIPE;
	v->a[37250] = anon_sym_LT_AMP_DASH;
	v->a[37251] = anon_sym_GT_AMP_DASH;
	v->a[37252] = anon_sym_LT_LT;
	v->a[37253] = anon_sym_LT_LT_DASH;
	v->a[37254] = aux_sym_heredoc_redirect_token1;
	v->a[37255] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37256] = anon_sym_AMP;
	v->a[37257] = aux_sym_concatenation_token1;
	v->a[37258] = anon_sym_DOLLAR;
	v->a[37259] = anon_sym_DQUOTE;
	small_parse_table_1863(v);
}

void	small_parse_table_1863(t_small_parse_table_array *v)
{
	v->a[37260] = sym_raw_string;
	v->a[37261] = aux_sym_number_token1;
	v->a[37262] = aux_sym_number_token2;
	v->a[37263] = anon_sym_DOLLAR_LBRACE;
	v->a[37264] = anon_sym_DOLLAR_LPAREN;
	v->a[37265] = anon_sym_BQUOTE;
	v->a[37266] = sym_word;
	v->a[37267] = anon_sym_SEMI;
	v->a[37268] = 7;
	v->a[37269] = actions(1404);
	v->a[37270] = 1;
	v->a[37271] = sym_comment;
	v->a[37272] = actions(1402);
	v->a[37273] = 2;
	v->a[37274] = anon_sym_PLUS_PLUS2;
	v->a[37275] = anon_sym_DASH_DASH2;
	v->a[37276] = actions(1410);
	v->a[37277] = 2;
	v->a[37278] = anon_sym_GT_GT;
	v->a[37279] = anon_sym_LT_LT;
	small_parse_table_1864(v);
}

void	small_parse_table_1864(t_small_parse_table_array *v)
{
	v->a[37280] = actions(1414);
	v->a[37281] = 2;
	v->a[37282] = anon_sym_PLUS;
	v->a[37283] = anon_sym_DASH;
	v->a[37284] = actions(1406);
	v->a[37285] = 3;
	v->a[37286] = anon_sym_STAR;
	v->a[37287] = anon_sym_SLASH;
	v->a[37288] = anon_sym_PERCENT;
	v->a[37289] = actions(1513);
	v->a[37290] = 6;
	v->a[37291] = anon_sym_PIPE;
	v->a[37292] = anon_sym_EQ;
	v->a[37293] = anon_sym_LT;
	v->a[37294] = anon_sym_GT;
	v->a[37295] = anon_sym_CARET;
	v->a[37296] = anon_sym_AMP;
	v->a[37297] = actions(1515);
	v->a[37298] = 19;
	v->a[37299] = anon_sym_AMP_AMP;
	small_parse_table_1865(v);
}

/* EOF small_parse_table_372.c */
