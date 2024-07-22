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
	v->a[62200] = 2;
	v->a[62201] = sym_file_redirect;
	v->a[62202] = aux_sym_redirected_statement_repeat2;
	v->a[62203] = actions(1874);
	v->a[62204] = 7;
	v->a[62205] = anon_sym_LT;
	v->a[62206] = anon_sym_GT;
	v->a[62207] = anon_sym_GT_GT;
	v->a[62208] = anon_sym_LT_AMP;
	v->a[62209] = anon_sym_GT_AMP;
	v->a[62210] = anon_sym_GT_PIPE;
	v->a[62211] = anon_sym_LT_GT;
	v->a[62212] = actions(2059);
	v->a[62213] = 8;
	v->a[62214] = anon_sym_esac;
	v->a[62215] = anon_sym_PIPE;
	v->a[62216] = anon_sym_SEMI_SEMI;
	v->a[62217] = anon_sym_AMP_AMP;
	v->a[62218] = anon_sym_PIPE_PIPE;
	v->a[62219] = anon_sym_LT_LT;
	small_parse_table_3111(v);
}

void	small_parse_table_3111(t_small_parse_table_array *v)
{
	v->a[62220] = anon_sym_LT_LT_DASH;
	v->a[62221] = anon_sym_SEMI;
	v->a[62222] = 6;
	v->a[62223] = actions(3);
	v->a[62224] = 1;
	v->a[62225] = sym_comment;
	v->a[62226] = actions(2157);
	v->a[62227] = 1;
	v->a[62228] = aux_sym_heredoc_redirect_token1;
	v->a[62229] = actions(2228);
	v->a[62230] = 1;
	v->a[62231] = sym_file_descriptor;
	v->a[62232] = state(1169);
	v->a[62233] = 2;
	v->a[62234] = sym_file_redirect;
	v->a[62235] = aux_sym_redirected_statement_repeat2;
	v->a[62236] = actions(2225);
	v->a[62237] = 7;
	v->a[62238] = anon_sym_LT;
	v->a[62239] = anon_sym_GT;
	small_parse_table_3112(v);
}

void	small_parse_table_3112(t_small_parse_table_array *v)
{
	v->a[62240] = anon_sym_GT_GT;
	v->a[62241] = anon_sym_LT_AMP;
	v->a[62242] = anon_sym_GT_AMP;
	v->a[62243] = anon_sym_GT_PIPE;
	v->a[62244] = anon_sym_LT_GT;
	v->a[62245] = actions(2159);
	v->a[62246] = 8;
	v->a[62247] = anon_sym_PIPE;
	v->a[62248] = anon_sym_RPAREN;
	v->a[62249] = anon_sym_SEMI_SEMI;
	v->a[62250] = anon_sym_AMP_AMP;
	v->a[62251] = anon_sym_PIPE_PIPE;
	v->a[62252] = anon_sym_LT_LT;
	v->a[62253] = anon_sym_LT_LT_DASH;
	v->a[62254] = anon_sym_SEMI;
	v->a[62255] = 9;
	v->a[62256] = actions(3);
	v->a[62257] = 1;
	v->a[62258] = sym_comment;
	v->a[62259] = actions(1945);
	small_parse_table_3113(v);
}

void	small_parse_table_3113(t_small_parse_table_array *v)
{
	v->a[62260] = 1;
	v->a[62261] = sym_file_descriptor;
	v->a[62262] = actions(2023);
	v->a[62263] = 1;
	v->a[62264] = aux_sym_heredoc_redirect_token1;
	v->a[62265] = state(703);
	v->a[62266] = 1;
	v->a[62267] = sym_terminator;
	v->a[62268] = actions(790);
	v->a[62269] = 2;
	v->a[62270] = anon_sym_LT_LT;
	v->a[62271] = anon_sym_LT_LT_DASH;
	v->a[62272] = actions(1028);
	v->a[62273] = 2;
	v->a[62274] = anon_sym_AMP_AMP;
	v->a[62275] = anon_sym_PIPE_PIPE;
	v->a[62276] = actions(1087);
	v->a[62277] = 2;
	v->a[62278] = anon_sym_SEMI_SEMI;
	v->a[62279] = anon_sym_SEMI;
	small_parse_table_3114(v);
}

void	small_parse_table_3114(t_small_parse_table_array *v)
{
	v->a[62280] = state(1194);
	v->a[62281] = 3;
	v->a[62282] = sym_file_redirect;
	v->a[62283] = sym_heredoc_redirect;
	v->a[62284] = aux_sym_redirected_statement_repeat1;
	v->a[62285] = actions(1941);
	v->a[62286] = 7;
	v->a[62287] = anon_sym_LT;
	v->a[62288] = anon_sym_GT;
	v->a[62289] = anon_sym_GT_GT;
	v->a[62290] = anon_sym_LT_AMP;
	v->a[62291] = anon_sym_GT_AMP;
	v->a[62292] = anon_sym_GT_PIPE;
	v->a[62293] = anon_sym_LT_GT;
	v->a[62294] = 3;
	v->a[62295] = actions(3);
	v->a[62296] = 1;
	v->a[62297] = sym_comment;
	v->a[62298] = actions(1500);
	v->a[62299] = 3;
	small_parse_table_3115(v);
}

/* EOF small_parse_table_622.c */
