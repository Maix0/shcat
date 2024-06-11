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
	v->a[98200] = actions(3890);
	v->a[98201] = 5;
	v->a[98202] = anon_sym_LT;
	v->a[98203] = anon_sym_GT;
	v->a[98204] = anon_sym_AMP_GT;
	v->a[98205] = anon_sym_LT_AMP;
	v->a[98206] = anon_sym_GT_AMP;
	v->a[98207] = 8;
	v->a[98208] = actions(1094);
	v->a[98209] = 1;
	v->a[98210] = sym_comment;
	v->a[98211] = actions(4284);
	v->a[98212] = 1;
	v->a[98213] = anon_sym_DOLLAR;
	v->a[98214] = actions(4287);
	v->a[98215] = 1;
	v->a[98216] = anon_sym_DOLLAR_LBRACE;
	v->a[98217] = actions(4290);
	v->a[98218] = 1;
	v->a[98219] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4911(v);
}

void	small_parse_table_4911(t_small_parse_table_array *v)
{
	v->a[98220] = actions(4293);
	v->a[98221] = 1;
	v->a[98222] = anon_sym_BQUOTE;
	v->a[98223] = actions(4296);
	v->a[98224] = 1;
	v->a[98225] = sym_heredoc_content;
	v->a[98226] = actions(4299);
	v->a[98227] = 1;
	v->a[98228] = sym_heredoc_end;
	v->a[98229] = state(2091);
	v->a[98230] = 4;
	v->a[98231] = sym_simple_expansion;
	v->a[98232] = sym_expansion;
	v->a[98233] = sym_command_substitution;
	v->a[98234] = aux_sym_heredoc_body_repeat1;
	v->a[98235] = 4;
	v->a[98236] = actions(1094);
	v->a[98237] = 1;
	v->a[98238] = sym_comment;
	v->a[98239] = actions(4305);
	small_parse_table_4912(v);
}

void	small_parse_table_4912(t_small_parse_table_array *v)
{
	v->a[98240] = 2;
	v->a[98241] = anon_sym_LT_AMP_DASH;
	v->a[98242] = anon_sym_GT_AMP_DASH;
	v->a[98243] = actions(4303);
	v->a[98244] = 3;
	v->a[98245] = anon_sym_GT_GT;
	v->a[98246] = anon_sym_AMP_GT_GT;
	v->a[98247] = anon_sym_GT_PIPE;
	v->a[98248] = actions(4301);
	v->a[98249] = 5;
	v->a[98250] = anon_sym_LT;
	v->a[98251] = anon_sym_GT;
	v->a[98252] = anon_sym_AMP_GT;
	v->a[98253] = anon_sym_LT_AMP;
	v->a[98254] = anon_sym_GT_AMP;
	v->a[98255] = 8;
	v->a[98256] = actions(1094);
	v->a[98257] = 1;
	v->a[98258] = sym_comment;
	v->a[98259] = actions(4307);
	small_parse_table_4913(v);
}

void	small_parse_table_4913(t_small_parse_table_array *v)
{
	v->a[98260] = 1;
	v->a[98261] = anon_sym_DOLLAR;
	v->a[98262] = actions(4309);
	v->a[98263] = 1;
	v->a[98264] = anon_sym_DOLLAR_LBRACE;
	v->a[98265] = actions(4311);
	v->a[98266] = 1;
	v->a[98267] = anon_sym_DOLLAR_LPAREN;
	v->a[98268] = actions(4313);
	v->a[98269] = 1;
	v->a[98270] = anon_sym_BQUOTE;
	v->a[98271] = actions(4315);
	v->a[98272] = 1;
	v->a[98273] = sym_heredoc_content;
	v->a[98274] = actions(4317);
	v->a[98275] = 1;
	v->a[98276] = sym_heredoc_end;
	v->a[98277] = state(2091);
	v->a[98278] = 4;
	v->a[98279] = sym_simple_expansion;
	small_parse_table_4914(v);
}

void	small_parse_table_4914(t_small_parse_table_array *v)
{
	v->a[98280] = sym_expansion;
	v->a[98281] = sym_command_substitution;
	v->a[98282] = aux_sym_heredoc_body_repeat1;
	v->a[98283] = 4;
	v->a[98284] = actions(1094);
	v->a[98285] = 1;
	v->a[98286] = sym_comment;
	v->a[98287] = actions(4323);
	v->a[98288] = 2;
	v->a[98289] = anon_sym_LT_AMP_DASH;
	v->a[98290] = anon_sym_GT_AMP_DASH;
	v->a[98291] = actions(4321);
	v->a[98292] = 3;
	v->a[98293] = anon_sym_GT_GT;
	v->a[98294] = anon_sym_AMP_GT_GT;
	v->a[98295] = anon_sym_GT_PIPE;
	v->a[98296] = actions(4319);
	v->a[98297] = 5;
	v->a[98298] = anon_sym_LT;
	v->a[98299] = anon_sym_GT;
	small_parse_table_4915(v);
}

/* EOF small_parse_table_982.c */
