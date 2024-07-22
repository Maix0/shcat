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
	v->a[58200] = anon_sym_LT_AMP;
	v->a[58201] = anon_sym_GT_AMP;
	v->a[58202] = anon_sym_GT_PIPE;
	v->a[58203] = anon_sym_LT_GT;
	v->a[58204] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58205] = anon_sym_DOLLAR;
	v->a[58206] = anon_sym_DQUOTE;
	v->a[58207] = sym_raw_string;
	v->a[58208] = sym_number;
	v->a[58209] = anon_sym_DOLLAR_LBRACE;
	v->a[58210] = anon_sym_DOLLAR_LPAREN;
	v->a[58211] = anon_sym_BQUOTE;
	v->a[58212] = sym_word;
	v->a[58213] = 3;
	v->a[58214] = actions(3);
	v->a[58215] = 1;
	v->a[58216] = sym_comment;
	v->a[58217] = actions(1162);
	v->a[58218] = 3;
	v->a[58219] = sym_file_descriptor;
	small_parse_table_2911(v);
}

void	small_parse_table_2911(t_small_parse_table_array *v)
{
	v->a[58220] = sym__concat;
	v->a[58221] = sym_variable_name;
	v->a[58222] = actions(1160);
	v->a[58223] = 17;
	v->a[58224] = anon_sym_LT;
	v->a[58225] = anon_sym_GT;
	v->a[58226] = anon_sym_GT_GT;
	v->a[58227] = anon_sym_LT_AMP;
	v->a[58228] = anon_sym_GT_AMP;
	v->a[58229] = anon_sym_GT_PIPE;
	v->a[58230] = anon_sym_LT_GT;
	v->a[58231] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58232] = aux_sym_concatenation_token1;
	v->a[58233] = anon_sym_DOLLAR;
	v->a[58234] = anon_sym_DQUOTE;
	v->a[58235] = sym_raw_string;
	v->a[58236] = sym_number;
	v->a[58237] = anon_sym_DOLLAR_LBRACE;
	v->a[58238] = anon_sym_DOLLAR_LPAREN;
	v->a[58239] = anon_sym_BQUOTE;
	small_parse_table_2912(v);
}

void	small_parse_table_2912(t_small_parse_table_array *v)
{
	v->a[58240] = sym_word;
	v->a[58241] = 7;
	v->a[58242] = actions(3);
	v->a[58243] = 1;
	v->a[58244] = sym_comment;
	v->a[58245] = actions(1884);
	v->a[58246] = 1;
	v->a[58247] = sym_file_descriptor;
	v->a[58248] = actions(790);
	v->a[58249] = 2;
	v->a[58250] = anon_sym_LT_LT;
	v->a[58251] = anon_sym_LT_LT_DASH;
	v->a[58252] = actions(1951);
	v->a[58253] = 2;
	v->a[58254] = ts_builtin_sym_end;
	v->a[58255] = aux_sym_heredoc_redirect_token1;
	v->a[58256] = state(1102);
	v->a[58257] = 3;
	v->a[58258] = sym_file_redirect;
	v->a[58259] = sym_heredoc_redirect;
	small_parse_table_2913(v);
}

void	small_parse_table_2913(t_small_parse_table_array *v)
{
	v->a[58260] = aux_sym_redirected_statement_repeat1;
	v->a[58261] = actions(1949);
	v->a[58262] = 5;
	v->a[58263] = anon_sym_PIPE;
	v->a[58264] = anon_sym_SEMI_SEMI;
	v->a[58265] = anon_sym_AMP_AMP;
	v->a[58266] = anon_sym_PIPE_PIPE;
	v->a[58267] = anon_sym_SEMI;
	v->a[58268] = actions(1880);
	v->a[58269] = 7;
	v->a[58270] = anon_sym_LT;
	v->a[58271] = anon_sym_GT;
	v->a[58272] = anon_sym_GT_GT;
	v->a[58273] = anon_sym_LT_AMP;
	v->a[58274] = anon_sym_GT_AMP;
	v->a[58275] = anon_sym_GT_PIPE;
	v->a[58276] = anon_sym_LT_GT;
	v->a[58277] = 12;
	v->a[58278] = actions(3);
	v->a[58279] = 1;
	small_parse_table_2914(v);
}

void	small_parse_table_2914(t_small_parse_table_array *v)
{
	v->a[58280] = sym_comment;
	v->a[58281] = actions(1012);
	v->a[58282] = 1;
	v->a[58283] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58284] = actions(1014);
	v->a[58285] = 1;
	v->a[58286] = anon_sym_DOLLAR;
	v->a[58287] = actions(1016);
	v->a[58288] = 1;
	v->a[58289] = anon_sym_DQUOTE;
	v->a[58290] = actions(1018);
	v->a[58291] = 1;
	v->a[58292] = anon_sym_DOLLAR_LBRACE;
	v->a[58293] = actions(1020);
	v->a[58294] = 1;
	v->a[58295] = anon_sym_DOLLAR_LPAREN;
	v->a[58296] = actions(1022);
	v->a[58297] = 1;
	v->a[58298] = anon_sym_BQUOTE;
	v->a[58299] = state(1921);
	small_parse_table_2915(v);
}

/* EOF small_parse_table_582.c */
