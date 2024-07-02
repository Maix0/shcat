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
	v->a[62200] = anon_sym_PIPE;
	v->a[62201] = anon_sym_RPAREN;
	v->a[62202] = anon_sym_SEMI_SEMI;
	v->a[62203] = anon_sym_AMP_AMP;
	v->a[62204] = anon_sym_PIPE_PIPE;
	v->a[62205] = anon_sym_LT;
	v->a[62206] = anon_sym_GT;
	v->a[62207] = anon_sym_GT_GT;
	v->a[62208] = anon_sym_LT_AMP;
	v->a[62209] = anon_sym_GT_AMP;
	v->a[62210] = anon_sym_GT_PIPE;
	v->a[62211] = anon_sym_LT_GT;
	v->a[62212] = anon_sym_LT_LT;
	v->a[62213] = anon_sym_LT_LT_DASH;
	v->a[62214] = anon_sym_AMP;
	v->a[62215] = anon_sym_BQUOTE;
	v->a[62216] = anon_sym_SEMI;
	v->a[62217] = 3;
	v->a[62218] = actions(3);
	v->a[62219] = 1;
	small_parse_table_3111(v);
}

void	small_parse_table_3111(t_small_parse_table_array *v)
{
	v->a[62220] = sym_comment;
	v->a[62221] = actions(2171);
	v->a[62222] = 3;
	v->a[62223] = sym_file_descriptor;
	v->a[62224] = ts_builtin_sym_end;
	v->a[62225] = aux_sym_heredoc_redirect_token1;
	v->a[62226] = actions(2173);
	v->a[62227] = 17;
	v->a[62228] = anon_sym_PIPE;
	v->a[62229] = anon_sym_RPAREN;
	v->a[62230] = anon_sym_SEMI_SEMI;
	v->a[62231] = anon_sym_AMP_AMP;
	v->a[62232] = anon_sym_PIPE_PIPE;
	v->a[62233] = anon_sym_LT;
	v->a[62234] = anon_sym_GT;
	v->a[62235] = anon_sym_GT_GT;
	v->a[62236] = anon_sym_LT_AMP;
	v->a[62237] = anon_sym_GT_AMP;
	v->a[62238] = anon_sym_GT_PIPE;
	v->a[62239] = anon_sym_LT_GT;
	small_parse_table_3112(v);
}

void	small_parse_table_3112(t_small_parse_table_array *v)
{
	v->a[62240] = anon_sym_LT_LT;
	v->a[62241] = anon_sym_LT_LT_DASH;
	v->a[62242] = anon_sym_AMP;
	v->a[62243] = anon_sym_BQUOTE;
	v->a[62244] = anon_sym_SEMI;
	v->a[62245] = 3;
	v->a[62246] = actions(3);
	v->a[62247] = 1;
	v->a[62248] = sym_comment;
	v->a[62249] = actions(2175);
	v->a[62250] = 3;
	v->a[62251] = sym_file_descriptor;
	v->a[62252] = ts_builtin_sym_end;
	v->a[62253] = aux_sym_heredoc_redirect_token1;
	v->a[62254] = actions(2177);
	v->a[62255] = 17;
	v->a[62256] = anon_sym_PIPE;
	v->a[62257] = anon_sym_RPAREN;
	v->a[62258] = anon_sym_SEMI_SEMI;
	v->a[62259] = anon_sym_AMP_AMP;
	small_parse_table_3113(v);
}

void	small_parse_table_3113(t_small_parse_table_array *v)
{
	v->a[62260] = anon_sym_PIPE_PIPE;
	v->a[62261] = anon_sym_LT;
	v->a[62262] = anon_sym_GT;
	v->a[62263] = anon_sym_GT_GT;
	v->a[62264] = anon_sym_LT_AMP;
	v->a[62265] = anon_sym_GT_AMP;
	v->a[62266] = anon_sym_GT_PIPE;
	v->a[62267] = anon_sym_LT_GT;
	v->a[62268] = anon_sym_LT_LT;
	v->a[62269] = anon_sym_LT_LT_DASH;
	v->a[62270] = anon_sym_AMP;
	v->a[62271] = anon_sym_BQUOTE;
	v->a[62272] = anon_sym_SEMI;
	v->a[62273] = 7;
	v->a[62274] = actions(3);
	v->a[62275] = 1;
	v->a[62276] = sym_comment;
	v->a[62277] = actions(1937);
	v->a[62278] = 1;
	v->a[62279] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3114(v);
}

void	small_parse_table_3114(t_small_parse_table_array *v)
{
	v->a[62280] = actions(2182);
	v->a[62281] = 1;
	v->a[62282] = sym_file_descriptor;
	v->a[62283] = actions(1934);
	v->a[62284] = 2;
	v->a[62285] = anon_sym_LT_LT;
	v->a[62286] = anon_sym_LT_LT_DASH;
	v->a[62287] = state(1150);
	v->a[62288] = 3;
	v->a[62289] = sym_file_redirect;
	v->a[62290] = sym_heredoc_redirect;
	v->a[62291] = aux_sym_redirected_statement_repeat1;
	v->a[62292] = actions(1929);
	v->a[62293] = 6;
	v->a[62294] = anon_sym_PIPE;
	v->a[62295] = anon_sym_SEMI_SEMI;
	v->a[62296] = anon_sym_AMP_AMP;
	v->a[62297] = anon_sym_PIPE_PIPE;
	v->a[62298] = anon_sym_AMP;
	v->a[62299] = anon_sym_SEMI;
	small_parse_table_3115(v);
}

/* EOF small_parse_table_622.c */
