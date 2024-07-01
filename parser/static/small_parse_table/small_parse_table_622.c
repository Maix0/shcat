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
	v->a[62200] = 1;
	v->a[62201] = sym_comment;
	v->a[62202] = actions(682);
	v->a[62203] = 1;
	v->a[62204] = anon_sym_PIPE;
	v->a[62205] = actions(2017);
	v->a[62206] = 1;
	v->a[62207] = aux_sym_heredoc_redirect_token1;
	v->a[62208] = actions(2019);
	v->a[62209] = 1;
	v->a[62210] = sym_file_descriptor;
	v->a[62211] = state(730);
	v->a[62212] = 1;
	v->a[62213] = sym_terminator;
	v->a[62214] = actions(680);
	v->a[62215] = 2;
	v->a[62216] = anon_sym_esac;
	v->a[62217] = anon_sym_SEMI_SEMI;
	v->a[62218] = actions(684);
	v->a[62219] = 2;
	small_parse_table_3111(v);
}

void	small_parse_table_3111(t_small_parse_table_array *v)
{
	v->a[62220] = anon_sym_AMP_AMP;
	v->a[62221] = anon_sym_PIPE_PIPE;
	v->a[62222] = actions(686);
	v->a[62223] = 2;
	v->a[62224] = anon_sym_LT_LT;
	v->a[62225] = anon_sym_LT_LT_DASH;
	v->a[62226] = actions(688);
	v->a[62227] = 2;
	v->a[62228] = anon_sym_AMP;
	v->a[62229] = anon_sym_SEMI;
	v->a[62230] = actions(2015);
	v->a[62231] = 2;
	v->a[62232] = anon_sym_LT_AMP_DASH;
	v->a[62233] = anon_sym_GT_AMP_DASH;
	v->a[62234] = state(1176);
	v->a[62235] = 3;
	v->a[62236] = sym_file_redirect;
	v->a[62237] = sym_heredoc_redirect;
	v->a[62238] = aux_sym_redirected_statement_repeat1;
	v->a[62239] = actions(2013);
	small_parse_table_3112(v);
}

void	small_parse_table_3112(t_small_parse_table_array *v)
{
	v->a[62240] = 6;
	v->a[62241] = anon_sym_LT;
	v->a[62242] = anon_sym_GT;
	v->a[62243] = anon_sym_GT_GT;
	v->a[62244] = anon_sym_LT_AMP;
	v->a[62245] = anon_sym_GT_AMP;
	v->a[62246] = anon_sym_GT_PIPE;
	v->a[62247] = 3;
	v->a[62248] = actions(3);
	v->a[62249] = 1;
	v->a[62250] = sym_comment;
	v->a[62251] = actions(1033);
	v->a[62252] = 4;
	v->a[62253] = sym_file_descriptor;
	v->a[62254] = sym__concat;
	v->a[62255] = ts_builtin_sym_end;
	v->a[62256] = aux_sym_heredoc_redirect_token1;
	v->a[62257] = actions(1031);
	v->a[62258] = 19;
	v->a[62259] = anon_sym_PIPE;
	small_parse_table_3113(v);
}

void	small_parse_table_3113(t_small_parse_table_array *v)
{
	v->a[62260] = anon_sym_RPAREN;
	v->a[62261] = anon_sym_SEMI_SEMI;
	v->a[62262] = anon_sym_AMP_AMP;
	v->a[62263] = anon_sym_PIPE_PIPE;
	v->a[62264] = anon_sym_LT;
	v->a[62265] = anon_sym_GT;
	v->a[62266] = anon_sym_GT_GT;
	v->a[62267] = anon_sym_LT_AMP;
	v->a[62268] = anon_sym_GT_AMP;
	v->a[62269] = anon_sym_GT_PIPE;
	v->a[62270] = anon_sym_LT_AMP_DASH;
	v->a[62271] = anon_sym_GT_AMP_DASH;
	v->a[62272] = anon_sym_LT_LT;
	v->a[62273] = anon_sym_LT_LT_DASH;
	v->a[62274] = anon_sym_AMP;
	v->a[62275] = aux_sym_concatenation_token1;
	v->a[62276] = anon_sym_BQUOTE;
	v->a[62277] = anon_sym_SEMI;
	v->a[62278] = 6;
	v->a[62279] = actions(3);
	small_parse_table_3114(v);
}

void	small_parse_table_3114(t_small_parse_table_array *v)
{
	v->a[62280] = 1;
	v->a[62281] = sym_comment;
	v->a[62282] = actions(2033);
	v->a[62283] = 1;
	v->a[62284] = aux_sym_concatenation_token1;
	v->a[62285] = actions(2047);
	v->a[62286] = 1;
	v->a[62287] = sym__concat;
	v->a[62288] = state(1078);
	v->a[62289] = 1;
	v->a[62290] = aux_sym_concatenation_repeat1;
	v->a[62291] = actions(1085);
	v->a[62292] = 3;
	v->a[62293] = sym_file_descriptor;
	v->a[62294] = sym_variable_name;
	v->a[62295] = aux_sym_heredoc_redirect_token1;
	v->a[62296] = actions(1081);
	v->a[62297] = 17;
	v->a[62298] = anon_sym_esac;
	v->a[62299] = anon_sym_PIPE;
	small_parse_table_3115(v);
}

/* EOF small_parse_table_622.c */
