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
	v->a[37200] = sym_file_descriptor;
	v->a[37201] = sym__bare_dollar;
	v->a[37202] = actions(1291);
	v->a[37203] = 26;
	v->a[37204] = anon_sym_PIPE;
	v->a[37205] = anon_sym_SEMI_SEMI;
	v->a[37206] = anon_sym_AMP_AMP;
	v->a[37207] = anon_sym_PIPE_PIPE;
	v->a[37208] = anon_sym_LT;
	v->a[37209] = anon_sym_GT;
	v->a[37210] = anon_sym_GT_GT;
	v->a[37211] = anon_sym_LT_AMP;
	v->a[37212] = anon_sym_GT_AMP;
	v->a[37213] = anon_sym_GT_PIPE;
	v->a[37214] = anon_sym_LT_AMP_DASH;
	v->a[37215] = anon_sym_GT_AMP_DASH;
	v->a[37216] = anon_sym_LT_LT;
	v->a[37217] = anon_sym_LT_LT_DASH;
	v->a[37218] = aux_sym_heredoc_redirect_token1;
	v->a[37219] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1861(v);
}

void	small_parse_table_1861(t_small_parse_table_array *v)
{
	v->a[37220] = anon_sym_AMP;
	v->a[37221] = anon_sym_DOLLAR;
	v->a[37222] = anon_sym_DQUOTE;
	v->a[37223] = sym_raw_string;
	v->a[37224] = sym_number;
	v->a[37225] = anon_sym_DOLLAR_LBRACE;
	v->a[37226] = anon_sym_DOLLAR_LPAREN;
	v->a[37227] = anon_sym_BQUOTE;
	v->a[37228] = sym_word;
	v->a[37229] = anon_sym_SEMI;
	v->a[37230] = 6;
	v->a[37231] = actions(3);
	v->a[37232] = 1;
	v->a[37233] = sym_comment;
	v->a[37234] = actions(1348);
	v->a[37235] = 1;
	v->a[37236] = aux_sym_concatenation_token1;
	v->a[37237] = actions(1351);
	v->a[37238] = 1;
	v->a[37239] = sym__concat;
	small_parse_table_1862(v);
}

void	small_parse_table_1862(t_small_parse_table_array *v)
{
	v->a[37240] = state(494);
	v->a[37241] = 1;
	v->a[37242] = aux_sym_concatenation_repeat1;
	v->a[37243] = actions(1194);
	v->a[37244] = 2;
	v->a[37245] = sym_file_descriptor;
	v->a[37246] = ts_builtin_sym_end;
	v->a[37247] = actions(1189);
	v->a[37248] = 26;
	v->a[37249] = anon_sym_PIPE;
	v->a[37250] = anon_sym_SEMI_SEMI;
	v->a[37251] = anon_sym_AMP_AMP;
	v->a[37252] = anon_sym_PIPE_PIPE;
	v->a[37253] = anon_sym_LT;
	v->a[37254] = anon_sym_GT;
	v->a[37255] = anon_sym_GT_GT;
	v->a[37256] = anon_sym_LT_AMP;
	v->a[37257] = anon_sym_GT_AMP;
	v->a[37258] = anon_sym_GT_PIPE;
	v->a[37259] = anon_sym_LT_AMP_DASH;
	small_parse_table_1863(v);
}

void	small_parse_table_1863(t_small_parse_table_array *v)
{
	v->a[37260] = anon_sym_GT_AMP_DASH;
	v->a[37261] = anon_sym_LT_LT;
	v->a[37262] = anon_sym_LT_LT_DASH;
	v->a[37263] = aux_sym_heredoc_redirect_token1;
	v->a[37264] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37265] = anon_sym_AMP;
	v->a[37266] = anon_sym_DOLLAR;
	v->a[37267] = anon_sym_DQUOTE;
	v->a[37268] = sym_raw_string;
	v->a[37269] = sym_number;
	v->a[37270] = anon_sym_DOLLAR_LBRACE;
	v->a[37271] = anon_sym_DOLLAR_LPAREN;
	v->a[37272] = anon_sym_BQUOTE;
	v->a[37273] = sym_word;
	v->a[37274] = anon_sym_SEMI;
	v->a[37275] = 12;
	v->a[37276] = actions(3);
	v->a[37277] = 1;
	v->a[37278] = sym_comment;
	v->a[37279] = actions(575);
	small_parse_table_1864(v);
}

void	small_parse_table_1864(t_small_parse_table_array *v)
{
	v->a[37280] = 1;
	v->a[37281] = sym_file_descriptor;
	v->a[37282] = actions(699);
	v->a[37283] = 1;
	v->a[37284] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37285] = actions(701);
	v->a[37286] = 1;
	v->a[37287] = anon_sym_DOLLAR;
	v->a[37288] = actions(703);
	v->a[37289] = 1;
	v->a[37290] = anon_sym_DQUOTE;
	v->a[37291] = actions(705);
	v->a[37292] = 1;
	v->a[37293] = anon_sym_DOLLAR_LBRACE;
	v->a[37294] = actions(707);
	v->a[37295] = 1;
	v->a[37296] = anon_sym_DOLLAR_LPAREN;
	v->a[37297] = actions(709);
	v->a[37298] = 1;
	v->a[37299] = anon_sym_BQUOTE;
	small_parse_table_1865(v);
}

/* EOF small_parse_table_372.c */
