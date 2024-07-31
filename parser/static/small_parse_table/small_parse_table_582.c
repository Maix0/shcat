/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_582.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2910(t_small_parse_table_array *v)
{
	v->a[58200] = anon_sym_LT;
	v->a[58201] = anon_sym_GT;
	v->a[58202] = anon_sym_GT_GT;
	v->a[58203] = anon_sym_LT_AMP;
	v->a[58204] = anon_sym_GT_AMP;
	v->a[58205] = anon_sym_GT_PIPE;
	v->a[58206] = anon_sym_LT_GT;
	v->a[58207] = anon_sym_LT_LT;
	v->a[58208] = anon_sym_LT_LT_DASH;
	v->a[58209] = 10;
	v->a[58210] = actions(3);
	v->a[58211] = 1;
	v->a[58212] = sym_comment;
	v->a[58213] = actions(2015);
	v->a[58214] = 1;
	v->a[58215] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58216] = actions(2017);
	v->a[58217] = 1;
	v->a[58218] = anon_sym_DOLLAR;
	v->a[58219] = actions(2019);
	small_parse_table_2911(v);
}

void	small_parse_table_2911(t_small_parse_table_array *v)
{
	v->a[58220] = 1;
	v->a[58221] = anon_sym_DQUOTE;
	v->a[58222] = actions(2021);
	v->a[58223] = 1;
	v->a[58224] = anon_sym_DOLLAR_LBRACE;
	v->a[58225] = actions(2023);
	v->a[58226] = 1;
	v->a[58227] = anon_sym_DOLLAR_LPAREN;
	v->a[58228] = actions(2025);
	v->a[58229] = 1;
	v->a[58230] = anon_sym_BQUOTE;
	v->a[58231] = state(182);
	v->a[58232] = 2;
	v->a[58233] = sym_concatenation;
	v->a[58234] = aux_sym_for_statement_repeat1;
	v->a[58235] = actions(2325);
	v->a[58236] = 3;
	v->a[58237] = sym_raw_string;
	v->a[58238] = sym_number;
	v->a[58239] = sym_word;
	small_parse_table_2912(v);
}

void	small_parse_table_2912(t_small_parse_table_array *v)
{
	v->a[58240] = state(360);
	v->a[58241] = 5;
	v->a[58242] = sym_arithmetic_expansion;
	v->a[58243] = sym_string;
	v->a[58244] = sym_simple_expansion;
	v->a[58245] = sym_expansion;
	v->a[58246] = sym_command_substitution;
	v->a[58247] = 4;
	v->a[58248] = actions(3);
	v->a[58249] = 1;
	v->a[58250] = sym_comment;
	v->a[58251] = actions(942);
	v->a[58252] = 1;
	v->a[58253] = aux_sym_heredoc_redirect_token1;
	v->a[58254] = state(1185);
	v->a[58255] = 3;
	v->a[58256] = sym_file_redirect;
	v->a[58257] = sym_heredoc_redirect;
	v->a[58258] = aux_sym_redirected_statement_repeat1;
	v->a[58259] = actions(916);
	small_parse_table_2913(v);
}

void	small_parse_table_2913(t_small_parse_table_array *v)
{
	v->a[58260] = 12;
	v->a[58261] = anon_sym_PIPE;
	v->a[58262] = anon_sym_AMP_AMP;
	v->a[58263] = anon_sym_PIPE_PIPE;
	v->a[58264] = anon_sym_LT;
	v->a[58265] = anon_sym_GT;
	v->a[58266] = anon_sym_GT_GT;
	v->a[58267] = anon_sym_LT_AMP;
	v->a[58268] = anon_sym_GT_AMP;
	v->a[58269] = anon_sym_GT_PIPE;
	v->a[58270] = anon_sym_LT_GT;
	v->a[58271] = anon_sym_LT_LT;
	v->a[58272] = anon_sym_LT_LT_DASH;
	v->a[58273] = 6;
	v->a[58274] = actions(3);
	v->a[58275] = 1;
	v->a[58276] = sym_comment;
	v->a[58277] = actions(1686);
	v->a[58278] = 1;
	v->a[58279] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2914(v);
}

void	small_parse_table_2914(t_small_parse_table_array *v)
{
	v->a[58280] = actions(1683);
	v->a[58281] = 2;
	v->a[58282] = anon_sym_LT_LT;
	v->a[58283] = anon_sym_LT_LT_DASH;
	v->a[58284] = actions(1678);
	v->a[58285] = 3;
	v->a[58286] = anon_sym_PIPE;
	v->a[58287] = anon_sym_AMP_AMP;
	v->a[58288] = anon_sym_PIPE_PIPE;
	v->a[58289] = state(1192);
	v->a[58290] = 3;
	v->a[58291] = sym_file_redirect;
	v->a[58292] = sym_heredoc_redirect;
	v->a[58293] = aux_sym_redirected_statement_repeat1;
	v->a[58294] = actions(2327);
	v->a[58295] = 7;
	v->a[58296] = anon_sym_LT;
	v->a[58297] = anon_sym_GT;
	v->a[58298] = anon_sym_GT_GT;
	v->a[58299] = anon_sym_LT_AMP;
	small_parse_table_2915(v);
}

/* EOF small_parse_table_582.c */
