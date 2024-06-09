/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_332.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1660(t_small_parse_table_array *v)
{
	v->a[33200] = anon_sym_DQUOTE;
	v->a[33201] = sym_raw_string;
	v->a[33202] = aux_sym_number_token1;
	v->a[33203] = aux_sym_number_token2;
	v->a[33204] = anon_sym_DOLLAR_LBRACE;
	v->a[33205] = anon_sym_DOLLAR_LPAREN;
	v->a[33206] = anon_sym_BQUOTE;
	v->a[33207] = sym_word;
	v->a[33208] = anon_sym_SEMI;
	v->a[33209] = 3;
	v->a[33210] = actions(3);
	v->a[33211] = 1;
	v->a[33212] = sym_comment;
	v->a[33213] = actions(1329);
	v->a[33214] = 4;
	v->a[33215] = sym_file_descriptor;
	v->a[33216] = sym__concat;
	v->a[33217] = sym__bare_dollar;
	v->a[33218] = ts_builtin_sym_end;
	v->a[33219] = actions(1327);
	small_parse_table_1661(v);
}

void	small_parse_table_1661(t_small_parse_table_array *v)
{
	v->a[33220] = 31;
	v->a[33221] = anon_sym_LPAREN;
	v->a[33222] = anon_sym_PIPE;
	v->a[33223] = anon_sym_SEMI_SEMI;
	v->a[33224] = anon_sym_AMP_AMP;
	v->a[33225] = anon_sym_PIPE_PIPE;
	v->a[33226] = anon_sym_LT;
	v->a[33227] = anon_sym_GT;
	v->a[33228] = anon_sym_GT_GT;
	v->a[33229] = anon_sym_AMP_GT;
	v->a[33230] = anon_sym_AMP_GT_GT;
	v->a[33231] = anon_sym_LT_AMP;
	v->a[33232] = anon_sym_GT_AMP;
	v->a[33233] = anon_sym_GT_PIPE;
	v->a[33234] = anon_sym_LT_AMP_DASH;
	v->a[33235] = anon_sym_GT_AMP_DASH;
	v->a[33236] = anon_sym_LT_LT;
	v->a[33237] = anon_sym_LT_LT_DASH;
	v->a[33238] = aux_sym_heredoc_redirect_token1;
	v->a[33239] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1662(v);
}

void	small_parse_table_1662(t_small_parse_table_array *v)
{
	v->a[33240] = anon_sym_AMP;
	v->a[33241] = aux_sym_concatenation_token1;
	v->a[33242] = anon_sym_DOLLAR;
	v->a[33243] = anon_sym_DQUOTE;
	v->a[33244] = sym_raw_string;
	v->a[33245] = aux_sym_number_token1;
	v->a[33246] = aux_sym_number_token2;
	v->a[33247] = anon_sym_DOLLAR_LBRACE;
	v->a[33248] = anon_sym_DOLLAR_LPAREN;
	v->a[33249] = anon_sym_BQUOTE;
	v->a[33250] = sym_word;
	v->a[33251] = anon_sym_SEMI;
	v->a[33252] = 6;
	v->a[33253] = actions(3);
	v->a[33254] = 1;
	v->a[33255] = sym_comment;
	v->a[33256] = actions(1200);
	v->a[33257] = 1;
	v->a[33258] = aux_sym_concatenation_token1;
	v->a[33259] = actions(1204);
	small_parse_table_1663(v);
}

void	small_parse_table_1663(t_small_parse_table_array *v)
{
	v->a[33260] = 1;
	v->a[33261] = sym__concat;
	v->a[33262] = state(379);
	v->a[33263] = 1;
	v->a[33264] = aux_sym_concatenation_repeat1;
	v->a[33265] = actions(565);
	v->a[33266] = 2;
	v->a[33267] = sym_file_descriptor;
	v->a[33268] = sym_variable_name;
	v->a[33269] = actions(567);
	v->a[33270] = 30;
	v->a[33271] = anon_sym_esac;
	v->a[33272] = anon_sym_PIPE;
	v->a[33273] = anon_sym_SEMI_SEMI;
	v->a[33274] = anon_sym_AMP_AMP;
	v->a[33275] = anon_sym_PIPE_PIPE;
	v->a[33276] = anon_sym_LT;
	v->a[33277] = anon_sym_GT;
	v->a[33278] = anon_sym_GT_GT;
	v->a[33279] = anon_sym_AMP_GT;
	small_parse_table_1664(v);
}

void	small_parse_table_1664(t_small_parse_table_array *v)
{
	v->a[33280] = anon_sym_AMP_GT_GT;
	v->a[33281] = anon_sym_LT_AMP;
	v->a[33282] = anon_sym_GT_AMP;
	v->a[33283] = anon_sym_GT_PIPE;
	v->a[33284] = anon_sym_LT_AMP_DASH;
	v->a[33285] = anon_sym_GT_AMP_DASH;
	v->a[33286] = anon_sym_LT_LT;
	v->a[33287] = anon_sym_LT_LT_DASH;
	v->a[33288] = aux_sym_heredoc_redirect_token1;
	v->a[33289] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33290] = anon_sym_AMP;
	v->a[33291] = anon_sym_DOLLAR;
	v->a[33292] = anon_sym_DQUOTE;
	v->a[33293] = sym_raw_string;
	v->a[33294] = aux_sym_number_token1;
	v->a[33295] = aux_sym_number_token2;
	v->a[33296] = anon_sym_DOLLAR_LBRACE;
	v->a[33297] = anon_sym_DOLLAR_LPAREN;
	v->a[33298] = anon_sym_BQUOTE;
	v->a[33299] = sym_word;
	small_parse_table_1665(v);
}

/* EOF small_parse_table_332.c */
