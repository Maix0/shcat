/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_622.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3110(t_small_parse_table_array *v)
{
	v->a[62200] = state(1194);
	v->a[62201] = 3;
	v->a[62202] = sym_file_redirect;
	v->a[62203] = sym_heredoc_redirect;
	v->a[62204] = aux_sym_redirected_statement_repeat1;
	v->a[62205] = actions(1887);
	v->a[62206] = 7;
	v->a[62207] = anon_sym_LT;
	v->a[62208] = anon_sym_GT;
	v->a[62209] = anon_sym_GT_GT;
	v->a[62210] = anon_sym_LT_AMP;
	v->a[62211] = anon_sym_GT_AMP;
	v->a[62212] = anon_sym_GT_PIPE;
	v->a[62213] = anon_sym_LT_GT;
	v->a[62214] = 3;
	v->a[62215] = actions(3);
	v->a[62216] = 1;
	v->a[62217] = sym_comment;
	v->a[62218] = actions(895);
	v->a[62219] = 3;
	small_parse_table_3111(v);
}

void	small_parse_table_3111(t_small_parse_table_array *v)
{
	v->a[62220] = sym_file_descriptor;
	v->a[62221] = sym__concat;
	v->a[62222] = sym_variable_name;
	v->a[62223] = actions(893);
	v->a[62224] = 17;
	v->a[62225] = anon_sym_LT;
	v->a[62226] = anon_sym_GT;
	v->a[62227] = anon_sym_GT_GT;
	v->a[62228] = anon_sym_LT_AMP;
	v->a[62229] = anon_sym_GT_AMP;
	v->a[62230] = anon_sym_GT_PIPE;
	v->a[62231] = anon_sym_LT_GT;
	v->a[62232] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62233] = aux_sym_concatenation_token1;
	v->a[62234] = anon_sym_DOLLAR;
	v->a[62235] = anon_sym_DQUOTE;
	v->a[62236] = sym_raw_string;
	v->a[62237] = sym_number;
	v->a[62238] = anon_sym_DOLLAR_LBRACE;
	v->a[62239] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3112(v);
}

void	small_parse_table_3112(t_small_parse_table_array *v)
{
	v->a[62240] = anon_sym_BQUOTE;
	v->a[62241] = sym_word;
	v->a[62242] = 9;
	v->a[62243] = actions(3);
	v->a[62244] = 1;
	v->a[62245] = sym_comment;
	v->a[62246] = actions(1889);
	v->a[62247] = 1;
	v->a[62248] = sym_file_descriptor;
	v->a[62249] = actions(1989);
	v->a[62250] = 1;
	v->a[62251] = aux_sym_heredoc_redirect_token1;
	v->a[62252] = state(744);
	v->a[62253] = 1;
	v->a[62254] = sym_terminator;
	v->a[62255] = actions(744);
	v->a[62256] = 2;
	v->a[62257] = anon_sym_LT_LT;
	v->a[62258] = anon_sym_LT_LT_DASH;
	v->a[62259] = actions(955);
	small_parse_table_3113(v);
}

void	small_parse_table_3113(t_small_parse_table_array *v)
{
	v->a[62260] = 2;
	v->a[62261] = anon_sym_AMP_AMP;
	v->a[62262] = anon_sym_PIPE_PIPE;
	v->a[62263] = actions(976);
	v->a[62264] = 3;
	v->a[62265] = anon_sym_SEMI_SEMI;
	v->a[62266] = anon_sym_AMP;
	v->a[62267] = anon_sym_SEMI;
	v->a[62268] = state(1194);
	v->a[62269] = 3;
	v->a[62270] = sym_file_redirect;
	v->a[62271] = sym_heredoc_redirect;
	v->a[62272] = aux_sym_redirected_statement_repeat1;
	v->a[62273] = actions(1887);
	v->a[62274] = 7;
	v->a[62275] = anon_sym_LT;
	v->a[62276] = anon_sym_GT;
	v->a[62277] = anon_sym_GT_GT;
	v->a[62278] = anon_sym_LT_AMP;
	v->a[62279] = anon_sym_GT_AMP;
	small_parse_table_3114(v);
}

void	small_parse_table_3114(t_small_parse_table_array *v)
{
	v->a[62280] = anon_sym_GT_PIPE;
	v->a[62281] = anon_sym_LT_GT;
	v->a[62282] = 3;
	v->a[62283] = actions(3);
	v->a[62284] = 1;
	v->a[62285] = sym_comment;
	v->a[62286] = actions(802);
	v->a[62287] = 3;
	v->a[62288] = sym_file_descriptor;
	v->a[62289] = sym__concat;
	v->a[62290] = sym_variable_name;
	v->a[62291] = actions(800);
	v->a[62292] = 17;
	v->a[62293] = anon_sym_LT;
	v->a[62294] = anon_sym_GT;
	v->a[62295] = anon_sym_GT_GT;
	v->a[62296] = anon_sym_LT_AMP;
	v->a[62297] = anon_sym_GT_AMP;
	v->a[62298] = anon_sym_GT_PIPE;
	v->a[62299] = anon_sym_LT_GT;
	small_parse_table_3115(v);
}

/* EOF small_parse_table_622.c */
