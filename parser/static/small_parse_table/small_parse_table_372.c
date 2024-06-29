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
	v->a[37200] = 3;
	v->a[37201] = actions(1074);
	v->a[37202] = 1;
	v->a[37203] = sym_comment;
	v->a[37204] = actions(1112);
	v->a[37205] = 13;
	v->a[37206] = anon_sym_PIPE;
	v->a[37207] = anon_sym_EQ;
	v->a[37208] = anon_sym_LT;
	v->a[37209] = anon_sym_GT;
	v->a[37210] = anon_sym_GT_GT;
	v->a[37211] = anon_sym_LT_LT;
	v->a[37212] = anon_sym_CARET;
	v->a[37213] = anon_sym_AMP;
	v->a[37214] = anon_sym_PLUS;
	v->a[37215] = anon_sym_DASH;
	v->a[37216] = anon_sym_STAR;
	v->a[37217] = anon_sym_SLASH;
	v->a[37218] = anon_sym_PERCENT;
	v->a[37219] = actions(1114);
	small_parse_table_1861(v);
}

void	small_parse_table_1861(t_small_parse_table_array *v)
{
	v->a[37220] = 20;
	v->a[37221] = anon_sym_RPAREN;
	v->a[37222] = anon_sym_AMP_AMP;
	v->a[37223] = anon_sym_PIPE_PIPE;
	v->a[37224] = anon_sym_PLUS_EQ;
	v->a[37225] = anon_sym_DASH_EQ;
	v->a[37226] = anon_sym_STAR_EQ;
	v->a[37227] = anon_sym_SLASH_EQ;
	v->a[37228] = anon_sym_PERCENT_EQ;
	v->a[37229] = anon_sym_LT_LT_EQ;
	v->a[37230] = anon_sym_GT_GT_EQ;
	v->a[37231] = anon_sym_AMP_EQ;
	v->a[37232] = anon_sym_CARET_EQ;
	v->a[37233] = anon_sym_PIPE_EQ;
	v->a[37234] = anon_sym_EQ_EQ;
	v->a[37235] = anon_sym_BANG_EQ;
	v->a[37236] = anon_sym_LT_EQ;
	v->a[37237] = anon_sym_GT_EQ;
	v->a[37238] = anon_sym_QMARK;
	v->a[37239] = anon_sym_PLUS_PLUS2;
	small_parse_table_1862(v);
}

void	small_parse_table_1862(t_small_parse_table_array *v)
{
	v->a[37240] = anon_sym_DASH_DASH2;
	v->a[37241] = 14;
	v->a[37242] = actions(3);
	v->a[37243] = 1;
	v->a[37244] = sym_comment;
	v->a[37245] = actions(577);
	v->a[37246] = 1;
	v->a[37247] = sym_file_descriptor;
	v->a[37248] = actions(1363);
	v->a[37249] = 1;
	v->a[37250] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37251] = actions(1366);
	v->a[37252] = 1;
	v->a[37253] = anon_sym_DOLLAR;
	v->a[37254] = actions(1369);
	v->a[37255] = 1;
	v->a[37256] = anon_sym_DQUOTE;
	v->a[37257] = actions(1372);
	v->a[37258] = 1;
	v->a[37259] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1863(v);
}

void	small_parse_table_1863(t_small_parse_table_array *v)
{
	v->a[37260] = actions(1375);
	v->a[37261] = 1;
	v->a[37262] = anon_sym_DOLLAR_LPAREN;
	v->a[37263] = actions(1378);
	v->a[37264] = 1;
	v->a[37265] = anon_sym_BQUOTE;
	v->a[37266] = actions(1381);
	v->a[37267] = 1;
	v->a[37268] = sym__bare_dollar;
	v->a[37269] = state(487);
	v->a[37270] = 1;
	v->a[37271] = aux_sym_command_repeat2;
	v->a[37272] = state(949);
	v->a[37273] = 1;
	v->a[37274] = sym_concatenation;
	v->a[37275] = actions(1360);
	v->a[37276] = 3;
	v->a[37277] = sym_raw_string;
	v->a[37278] = sym_number;
	v->a[37279] = sym_word;
	small_parse_table_1864(v);
}

void	small_parse_table_1864(t_small_parse_table_array *v)
{
	v->a[37280] = state(830);
	v->a[37281] = 5;
	v->a[37282] = sym_arithmetic_expansion;
	v->a[37283] = sym_string;
	v->a[37284] = sym_simple_expansion;
	v->a[37285] = sym_expansion;
	v->a[37286] = sym_command_substitution;
	v->a[37287] = actions(557);
	v->a[37288] = 15;
	v->a[37289] = anon_sym_PIPE;
	v->a[37290] = anon_sym_AMP_AMP;
	v->a[37291] = anon_sym_PIPE_PIPE;
	v->a[37292] = anon_sym_LT;
	v->a[37293] = anon_sym_GT;
	v->a[37294] = anon_sym_GT_GT;
	v->a[37295] = anon_sym_AMP_GT;
	v->a[37296] = anon_sym_AMP_GT_GT;
	v->a[37297] = anon_sym_LT_AMP;
	v->a[37298] = anon_sym_GT_AMP;
	v->a[37299] = anon_sym_GT_PIPE;
	small_parse_table_1865(v);
}

/* EOF small_parse_table_372.c */
