/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_982.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4910(t_small_parse_table_array *v)
{
	v->a[98200] = ts_builtin_sym_end;
	v->a[98201] = aux_sym_heredoc_redirect_token1;
	v->a[98202] = actions(3032);
	v->a[98203] = 22;
	v->a[98204] = anon_sym_PIPE;
	v->a[98205] = anon_sym_RPAREN;
	v->a[98206] = anon_sym_SEMI_SEMI;
	v->a[98207] = anon_sym_PIPE_AMP;
	v->a[98208] = anon_sym_AMP_AMP;
	v->a[98209] = anon_sym_PIPE_PIPE;
	v->a[98210] = anon_sym_LT;
	v->a[98211] = anon_sym_GT;
	v->a[98212] = anon_sym_GT_GT;
	v->a[98213] = anon_sym_AMP_GT;
	v->a[98214] = anon_sym_AMP_GT_GT;
	v->a[98215] = anon_sym_LT_AMP;
	v->a[98216] = anon_sym_GT_AMP;
	v->a[98217] = anon_sym_GT_PIPE;
	v->a[98218] = anon_sym_LT_AMP_DASH;
	v->a[98219] = anon_sym_GT_AMP_DASH;
	small_parse_table_4911(v);
}

void	small_parse_table_4911(t_small_parse_table_array *v)
{
	v->a[98220] = anon_sym_LT_LT;
	v->a[98221] = anon_sym_LT_LT_DASH;
	v->a[98222] = anon_sym_AMP;
	v->a[98223] = aux_sym_concatenation_token1;
	v->a[98224] = anon_sym_BQUOTE;
	v->a[98225] = anon_sym_SEMI;
	v->a[98226] = 3;
	v->a[98227] = actions(3);
	v->a[98228] = 1;
	v->a[98229] = sym_comment;
	v->a[98230] = actions(2828);
	v->a[98231] = 4;
	v->a[98232] = sym_file_descriptor;
	v->a[98233] = sym__concat;
	v->a[98234] = ts_builtin_sym_end;
	v->a[98235] = aux_sym_heredoc_redirect_token1;
	v->a[98236] = actions(2826);
	v->a[98237] = 22;
	v->a[98238] = anon_sym_PIPE;
	v->a[98239] = anon_sym_RPAREN;
	small_parse_table_4912(v);
}

void	small_parse_table_4912(t_small_parse_table_array *v)
{
	v->a[98240] = anon_sym_SEMI_SEMI;
	v->a[98241] = anon_sym_PIPE_AMP;
	v->a[98242] = anon_sym_AMP_AMP;
	v->a[98243] = anon_sym_PIPE_PIPE;
	v->a[98244] = anon_sym_LT;
	v->a[98245] = anon_sym_GT;
	v->a[98246] = anon_sym_GT_GT;
	v->a[98247] = anon_sym_AMP_GT;
	v->a[98248] = anon_sym_AMP_GT_GT;
	v->a[98249] = anon_sym_LT_AMP;
	v->a[98250] = anon_sym_GT_AMP;
	v->a[98251] = anon_sym_GT_PIPE;
	v->a[98252] = anon_sym_LT_AMP_DASH;
	v->a[98253] = anon_sym_GT_AMP_DASH;
	v->a[98254] = anon_sym_LT_LT;
	v->a[98255] = anon_sym_LT_LT_DASH;
	v->a[98256] = anon_sym_AMP;
	v->a[98257] = aux_sym_concatenation_token1;
	v->a[98258] = anon_sym_BQUOTE;
	v->a[98259] = anon_sym_SEMI;
	small_parse_table_4913(v);
}

void	small_parse_table_4913(t_small_parse_table_array *v)
{
	v->a[98260] = 8;
	v->a[98261] = actions(3);
	v->a[98262] = 1;
	v->a[98263] = sym_comment;
	v->a[98264] = actions(5176);
	v->a[98265] = 1;
	v->a[98266] = aux_sym_heredoc_redirect_token1;
	v->a[98267] = actions(5329);
	v->a[98268] = 1;
	v->a[98269] = sym_file_descriptor;
	v->a[98270] = actions(5323);
	v->a[98271] = 2;
	v->a[98272] = anon_sym_LT_AMP_DASH;
	v->a[98273] = anon_sym_GT_AMP_DASH;
	v->a[98274] = actions(5326);
	v->a[98275] = 2;
	v->a[98276] = anon_sym_LT_LT;
	v->a[98277] = anon_sym_LT_LT_DASH;
	v->a[98278] = state(2046);
	v->a[98279] = 3;
	small_parse_table_4914(v);
}

void	small_parse_table_4914(t_small_parse_table_array *v)
{
	v->a[98280] = sym_file_redirect;
	v->a[98281] = sym_heredoc_redirect;
	v->a[98282] = aux_sym_redirected_statement_repeat1;
	v->a[98283] = actions(5165);
	v->a[98284] = 8;
	v->a[98285] = anon_sym_PIPE;
	v->a[98286] = anon_sym_RPAREN;
	v->a[98287] = anon_sym_SEMI_SEMI;
	v->a[98288] = anon_sym_PIPE_AMP;
	v->a[98289] = anon_sym_AMP_AMP;
	v->a[98290] = anon_sym_PIPE_PIPE;
	v->a[98291] = anon_sym_AMP;
	v->a[98292] = anon_sym_SEMI;
	v->a[98293] = actions(5320);
	v->a[98294] = 8;
	v->a[98295] = anon_sym_LT;
	v->a[98296] = anon_sym_GT;
	v->a[98297] = anon_sym_GT_GT;
	v->a[98298] = anon_sym_AMP_GT;
	v->a[98299] = anon_sym_AMP_GT_GT;
	small_parse_table_4915(v);
}

/* EOF small_parse_table_982.c */
