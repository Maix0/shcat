/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_302.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1510(t_small_parse_table_array *v)
{
	v->a[30200] = sym__concat;
	v->a[30201] = state(356);
	v->a[30202] = 1;
	v->a[30203] = aux_sym_concatenation_repeat1;
	v->a[30204] = actions(1132);
	v->a[30205] = 3;
	v->a[30206] = sym_file_descriptor;
	v->a[30207] = sym__bare_dollar;
	v->a[30208] = ts_builtin_sym_end;
	v->a[30209] = actions(1134);
	v->a[30210] = 24;
	v->a[30211] = anon_sym_PIPE;
	v->a[30212] = anon_sym_SEMI_SEMI;
	v->a[30213] = anon_sym_AMP_AMP;
	v->a[30214] = anon_sym_PIPE_PIPE;
	v->a[30215] = anon_sym_LT;
	v->a[30216] = anon_sym_GT;
	v->a[30217] = anon_sym_GT_GT;
	v->a[30218] = anon_sym_LT_AMP;
	v->a[30219] = anon_sym_GT_AMP;
	small_parse_table_1511(v);
}

void	small_parse_table_1511(t_small_parse_table_array *v)
{
	v->a[30220] = anon_sym_GT_PIPE;
	v->a[30221] = anon_sym_LT_GT;
	v->a[30222] = anon_sym_LT_LT;
	v->a[30223] = anon_sym_LT_LT_DASH;
	v->a[30224] = aux_sym_heredoc_redirect_token1;
	v->a[30225] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30226] = anon_sym_DOLLAR;
	v->a[30227] = anon_sym_DQUOTE;
	v->a[30228] = sym_raw_string;
	v->a[30229] = sym_number;
	v->a[30230] = anon_sym_DOLLAR_LBRACE;
	v->a[30231] = anon_sym_DOLLAR_LPAREN;
	v->a[30232] = anon_sym_BQUOTE;
	v->a[30233] = sym_word;
	v->a[30234] = anon_sym_SEMI;
	v->a[30235] = 7;
	v->a[30236] = actions(3);
	v->a[30237] = 1;
	v->a[30238] = sym_comment;
	v->a[30239] = actions(1125);
	small_parse_table_1512(v);
}

void	small_parse_table_1512(t_small_parse_table_array *v)
{
	v->a[30240] = 1;
	v->a[30241] = aux_sym_concatenation_token1;
	v->a[30242] = actions(1141);
	v->a[30243] = 1;
	v->a[30244] = anon_sym_LPAREN;
	v->a[30245] = actions(1144);
	v->a[30246] = 1;
	v->a[30247] = sym__concat;
	v->a[30248] = state(364);
	v->a[30249] = 1;
	v->a[30250] = aux_sym_concatenation_repeat1;
	v->a[30251] = actions(1132);
	v->a[30252] = 2;
	v->a[30253] = sym_file_descriptor;
	v->a[30254] = sym__bare_dollar;
	v->a[30255] = actions(1134);
	v->a[30256] = 25;
	v->a[30257] = anon_sym_PIPE;
	v->a[30258] = anon_sym_RPAREN;
	v->a[30259] = anon_sym_SEMI_SEMI;
	small_parse_table_1513(v);
}

void	small_parse_table_1513(t_small_parse_table_array *v)
{
	v->a[30260] = anon_sym_AMP_AMP;
	v->a[30261] = anon_sym_PIPE_PIPE;
	v->a[30262] = anon_sym_LT;
	v->a[30263] = anon_sym_GT;
	v->a[30264] = anon_sym_GT_GT;
	v->a[30265] = anon_sym_LT_AMP;
	v->a[30266] = anon_sym_GT_AMP;
	v->a[30267] = anon_sym_GT_PIPE;
	v->a[30268] = anon_sym_LT_GT;
	v->a[30269] = anon_sym_LT_LT;
	v->a[30270] = anon_sym_LT_LT_DASH;
	v->a[30271] = aux_sym_heredoc_redirect_token1;
	v->a[30272] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30273] = anon_sym_DOLLAR;
	v->a[30274] = anon_sym_DQUOTE;
	v->a[30275] = sym_raw_string;
	v->a[30276] = sym_number;
	v->a[30277] = anon_sym_DOLLAR_LBRACE;
	v->a[30278] = anon_sym_DOLLAR_LPAREN;
	v->a[30279] = anon_sym_BQUOTE;
	small_parse_table_1514(v);
}

void	small_parse_table_1514(t_small_parse_table_array *v)
{
	v->a[30280] = sym_word;
	v->a[30281] = anon_sym_SEMI;
	v->a[30282] = 14;
	v->a[30283] = actions(3);
	v->a[30284] = 1;
	v->a[30285] = sym_comment;
	v->a[30286] = actions(564);
	v->a[30287] = 1;
	v->a[30288] = sym_file_descriptor;
	v->a[30289] = actions(604);
	v->a[30290] = 1;
	v->a[30291] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30292] = actions(607);
	v->a[30293] = 1;
	v->a[30294] = anon_sym_DOLLAR;
	v->a[30295] = actions(610);
	v->a[30296] = 1;
	v->a[30297] = anon_sym_DQUOTE;
	v->a[30298] = actions(613);
	v->a[30299] = 1;
	small_parse_table_1515(v);
}

/* EOF small_parse_table_302.c */
