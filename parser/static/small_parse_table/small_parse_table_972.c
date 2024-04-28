/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_972.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4860(t_small_parse_table_array *v)
{
	v->a[97200] = actions(6015);
	v->a[97201] = 1;
	v->a[97202] = sym__concat;
	v->a[97203] = state(2067);
	v->a[97204] = 1;
	v->a[97205] = aux_sym_concatenation_repeat1;
	v->a[97206] = actions(5395);
	v->a[97207] = 4;
	v->a[97208] = sym_file_descriptor;
	v->a[97209] = sym_test_operator;
	v->a[97210] = sym__brace_start;
	v->a[97211] = aux_sym_heredoc_redirect_token1;
	v->a[97212] = actions(5393);
	v->a[97213] = 36;
	v->a[97214] = anon_sym_LPAREN_LPAREN;
	v->a[97215] = anon_sym_SEMI;
	v->a[97216] = anon_sym_PIPE_PIPE;
	v->a[97217] = anon_sym_AMP_AMP;
	v->a[97218] = anon_sym_PIPE;
	v->a[97219] = anon_sym_AMP;
	small_parse_table_4861(v);
}

void	small_parse_table_4861(t_small_parse_table_array *v)
{
	v->a[97220] = anon_sym_LT;
	v->a[97221] = anon_sym_GT;
	v->a[97222] = anon_sym_LT_LT;
	v->a[97223] = anon_sym_GT_GT;
	v->a[97224] = anon_sym_SEMI_SEMI;
	v->a[97225] = anon_sym_PIPE_AMP;
	v->a[97226] = anon_sym_AMP_GT;
	v->a[97227] = anon_sym_AMP_GT_GT;
	v->a[97228] = anon_sym_LT_AMP;
	v->a[97229] = anon_sym_GT_AMP;
	v->a[97230] = anon_sym_GT_PIPE;
	v->a[97231] = anon_sym_LT_AMP_DASH;
	v->a[97232] = anon_sym_GT_AMP_DASH;
	v->a[97233] = anon_sym_LT_LT_DASH;
	v->a[97234] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[97235] = anon_sym_DOLLAR_LBRACK;
	v->a[97236] = anon_sym_DOLLAR;
	v->a[97237] = sym__special_character;
	v->a[97238] = anon_sym_DQUOTE;
	v->a[97239] = sym_raw_string;
	small_parse_table_4862(v);
}

void	small_parse_table_4862(t_small_parse_table_array *v)
{
	v->a[97240] = sym_ansi_c_string;
	v->a[97241] = aux_sym_number_token1;
	v->a[97242] = aux_sym_number_token2;
	v->a[97243] = anon_sym_DOLLAR_LBRACE;
	v->a[97244] = anon_sym_DOLLAR_LPAREN;
	v->a[97245] = anon_sym_BQUOTE;
	v->a[97246] = anon_sym_DOLLAR_BQUOTE;
	v->a[97247] = anon_sym_LT_LPAREN;
	v->a[97248] = anon_sym_GT_LPAREN;
	v->a[97249] = sym_word;
	v->a[97250] = 3;
	v->a[97251] = actions(71);
	v->a[97252] = 1;
	v->a[97253] = sym_comment;
	v->a[97254] = actions(1320);
	v->a[97255] = 16;
	v->a[97256] = anon_sym_PIPE;
	v->a[97257] = anon_sym_EQ_EQ;
	v->a[97258] = anon_sym_LT;
	v->a[97259] = anon_sym_GT;
	small_parse_table_4863(v);
}

void	small_parse_table_4863(t_small_parse_table_array *v)
{
	v->a[97260] = anon_sym_LT_LT;
	v->a[97261] = anon_sym_LPAREN;
	v->a[97262] = anon_sym_EQ_TILDE;
	v->a[97263] = anon_sym_AMP_GT;
	v->a[97264] = anon_sym_LT_AMP;
	v->a[97265] = anon_sym_GT_AMP;
	v->a[97266] = anon_sym_DOLLAR;
	v->a[97267] = aux_sym_number_token1;
	v->a[97268] = aux_sym_number_token2;
	v->a[97269] = anon_sym_DOLLAR_LPAREN;
	v->a[97270] = anon_sym_BQUOTE;
	v->a[97271] = sym_word;
	v->a[97272] = actions(1322);
	v->a[97273] = 27;
	v->a[97274] = sym_file_descriptor;
	v->a[97275] = sym__concat;
	v->a[97276] = sym_test_operator;
	v->a[97277] = sym__bare_dollar;
	v->a[97278] = sym__brace_start;
	v->a[97279] = anon_sym_LPAREN_LPAREN;
	small_parse_table_4864(v);
}

void	small_parse_table_4864(t_small_parse_table_array *v)
{
	v->a[97280] = anon_sym_PIPE_PIPE;
	v->a[97281] = anon_sym_AMP_AMP;
	v->a[97282] = anon_sym_GT_GT;
	v->a[97283] = anon_sym_PIPE_AMP;
	v->a[97284] = anon_sym_AMP_GT_GT;
	v->a[97285] = anon_sym_GT_PIPE;
	v->a[97286] = anon_sym_LT_AMP_DASH;
	v->a[97287] = anon_sym_GT_AMP_DASH;
	v->a[97288] = anon_sym_LT_LT_DASH;
	v->a[97289] = anon_sym_LT_LT_LT;
	v->a[97290] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[97291] = anon_sym_DOLLAR_LBRACK;
	v->a[97292] = aux_sym_concatenation_token1;
	v->a[97293] = sym__special_character;
	v->a[97294] = anon_sym_DQUOTE;
	v->a[97295] = sym_raw_string;
	v->a[97296] = sym_ansi_c_string;
	v->a[97297] = anon_sym_DOLLAR_LBRACE;
	v->a[97298] = anon_sym_DOLLAR_BQUOTE;
	v->a[97299] = anon_sym_LT_LPAREN;
	small_parse_table_4865(v);
}

/* EOF small_parse_table_972.c */
