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
	v->a[30200] = anon_sym_LPAREN;
	v->a[30201] = anon_sym_PIPE;
	v->a[30202] = anon_sym_SEMI_SEMI;
	v->a[30203] = anon_sym_AMP_AMP;
	v->a[30204] = anon_sym_PIPE_PIPE;
	v->a[30205] = anon_sym_LT;
	v->a[30206] = anon_sym_GT;
	v->a[30207] = anon_sym_GT_GT;
	v->a[30208] = anon_sym_AMP_GT;
	v->a[30209] = anon_sym_AMP_GT_GT;
	v->a[30210] = anon_sym_LT_AMP;
	v->a[30211] = anon_sym_GT_AMP;
	v->a[30212] = anon_sym_GT_PIPE;
	v->a[30213] = anon_sym_LT_AMP_DASH;
	v->a[30214] = anon_sym_GT_AMP_DASH;
	v->a[30215] = anon_sym_LT_LT;
	v->a[30216] = anon_sym_LT_LT_DASH;
	v->a[30217] = aux_sym_heredoc_redirect_token1;
	v->a[30218] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30219] = anon_sym_AMP;
	small_parse_table_1511(v);
}

void	small_parse_table_1511(t_small_parse_table_array *v)
{
	v->a[30220] = aux_sym_concatenation_token1;
	v->a[30221] = anon_sym_DOLLAR;
	v->a[30222] = anon_sym_DQUOTE;
	v->a[30223] = sym_raw_string;
	v->a[30224] = sym_number;
	v->a[30225] = anon_sym_DOLLAR_LBRACE;
	v->a[30226] = anon_sym_DOLLAR_LPAREN;
	v->a[30227] = anon_sym_BQUOTE;
	v->a[30228] = sym_word;
	v->a[30229] = anon_sym_SEMI;
	v->a[30230] = 3;
	v->a[30231] = actions(3);
	v->a[30232] = 1;
	v->a[30233] = sym_comment;
	v->a[30234] = actions(1153);
	v->a[30235] = 4;
	v->a[30236] = sym_file_descriptor;
	v->a[30237] = sym__concat;
	v->a[30238] = sym__bare_dollar;
	v->a[30239] = ts_builtin_sym_end;
	small_parse_table_1512(v);
}

void	small_parse_table_1512(t_small_parse_table_array *v)
{
	v->a[30240] = actions(1151);
	v->a[30241] = 30;
	v->a[30242] = anon_sym_LPAREN;
	v->a[30243] = anon_sym_PIPE;
	v->a[30244] = anon_sym_SEMI_SEMI;
	v->a[30245] = anon_sym_AMP_AMP;
	v->a[30246] = anon_sym_PIPE_PIPE;
	v->a[30247] = anon_sym_LT;
	v->a[30248] = anon_sym_GT;
	v->a[30249] = anon_sym_GT_GT;
	v->a[30250] = anon_sym_AMP_GT;
	v->a[30251] = anon_sym_AMP_GT_GT;
	v->a[30252] = anon_sym_LT_AMP;
	v->a[30253] = anon_sym_GT_AMP;
	v->a[30254] = anon_sym_GT_PIPE;
	v->a[30255] = anon_sym_LT_AMP_DASH;
	v->a[30256] = anon_sym_GT_AMP_DASH;
	v->a[30257] = anon_sym_LT_LT;
	v->a[30258] = anon_sym_LT_LT_DASH;
	v->a[30259] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1513(v);
}

void	small_parse_table_1513(t_small_parse_table_array *v)
{
	v->a[30260] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30261] = anon_sym_AMP;
	v->a[30262] = aux_sym_concatenation_token1;
	v->a[30263] = anon_sym_DOLLAR;
	v->a[30264] = anon_sym_DQUOTE;
	v->a[30265] = sym_raw_string;
	v->a[30266] = sym_number;
	v->a[30267] = anon_sym_DOLLAR_LBRACE;
	v->a[30268] = anon_sym_DOLLAR_LPAREN;
	v->a[30269] = anon_sym_BQUOTE;
	v->a[30270] = sym_word;
	v->a[30271] = anon_sym_SEMI;
	v->a[30272] = 6;
	v->a[30273] = actions(3);
	v->a[30274] = 1;
	v->a[30275] = sym_comment;
	v->a[30276] = actions(1096);
	v->a[30277] = 1;
	v->a[30278] = aux_sym_concatenation_token1;
	v->a[30279] = actions(1195);
	small_parse_table_1514(v);
}

void	small_parse_table_1514(t_small_parse_table_array *v)
{
	v->a[30280] = 1;
	v->a[30281] = sym__concat;
	v->a[30282] = state(380);
	v->a[30283] = 1;
	v->a[30284] = aux_sym_concatenation_repeat1;
	v->a[30285] = actions(972);
	v->a[30286] = 3;
	v->a[30287] = sym_file_descriptor;
	v->a[30288] = sym_variable_name;
	v->a[30289] = ts_builtin_sym_end;
	v->a[30290] = actions(974);
	v->a[30291] = 28;
	v->a[30292] = anon_sym_PIPE;
	v->a[30293] = anon_sym_SEMI_SEMI;
	v->a[30294] = anon_sym_AMP_AMP;
	v->a[30295] = anon_sym_PIPE_PIPE;
	v->a[30296] = anon_sym_LT;
	v->a[30297] = anon_sym_GT;
	v->a[30298] = anon_sym_GT_GT;
	v->a[30299] = anon_sym_AMP_GT;
	small_parse_table_1515(v);
}

/* EOF small_parse_table_302.c */
