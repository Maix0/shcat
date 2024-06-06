/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_72.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_360(t_parse_actions_entries_array *v)
{
	v->a[7200] = shift_repeat(2230);
	v->a[7201] = entry(2, true);
	v->a[7202] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[7203] = shift_repeat(2230);
	v->a[7204] = entry(2, true);
	v->a[7205] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[7206] = shift_repeat(848);
	v->a[7207] = entry(2, true);
	v->a[7208] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[7209] = shift_repeat(3211);
	v->a[7210] = entry(2, true);
	v->a[7211] = reduce(aux_sym__literal_repeat1, 2, 0, 0);
	v->a[7212] = shift_repeat(2712);
	v->a[7213] = entry(2, false);
	v->a[7214] = reduce(aux_sym__literal_repeat1, 2, 0, 0);
	v->a[7215] = shift_repeat(2706);
	v->a[7216] = entry(1, true);
	v->a[7217] = shift(3211);
	v->a[7218] = entry(2, false);
	v->a[7219] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	parse_actions_entries_361(v);
}

void	parse_actions_entries_361(t_parse_actions_entries_array *v)
{
	v->a[7220] = shift_repeat(239);
	v->a[7221] = entry(1, false);
	v->a[7222] = shift(239);
	v->a[7223] = entry(1, true);
	v->a[7224] = shift(246);
	v->a[7225] = entry(1, true);
	v->a[7226] = shift(2239);
	v->a[7227] = entry(1, true);
	v->a[7228] = shift(358);
	v->a[7229] = entry(1, true);
	v->a[7230] = shift(3903);
	v->a[7231] = entry(1, true);
	v->a[7232] = shift(2485);
	v->a[7233] = entry(1, true);
	v->a[7234] = shift(251);
	v->a[7235] = entry(1, true);
	v->a[7236] = shift(244);
	v->a[7237] = entry(1, true);
	v->a[7238] = shift(2162);
	v->a[7239] = entry(1, true);
	parse_actions_entries_362(v);
}

void	parse_actions_entries_362(t_parse_actions_entries_array *v)
{
	v->a[7240] = shift(440);
	v->a[7241] = entry(1, true);
	v->a[7242] = shift(3966);
	v->a[7243] = entry(1, true);
	v->a[7244] = shift(255);
	v->a[7245] = entry(1, true);
	v->a[7246] = shift(2203);
	v->a[7247] = entry(1, true);
	v->a[7248] = shift(749);
	v->a[7249] = entry(1, true);
	v->a[7250] = shift(2484);
	v->a[7251] = entry(1, true);
	v->a[7252] = shift(250);
	v->a[7253] = entry(1, true);
	v->a[7254] = shift(2280);
	v->a[7255] = entry(1, true);
	v->a[7256] = shift(392);
	v->a[7257] = entry(1, true);
	v->a[7258] = shift(3962);
	v->a[7259] = entry(2, true);
	parse_actions_entries_363(v);
}

void	parse_actions_entries_363(t_parse_actions_entries_array *v)
{
	v->a[7260] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[7261] = shift(256);
	v->a[7262] = entry(2, false);
	v->a[7263] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[7264] = shift_repeat(256);
	v->a[7265] = entry(2, true);
	v->a[7266] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[7267] = shift_repeat(256);
	v->a[7268] = entry(1, false);
	v->a[7269] = shift(256);
	v->a[7270] = entry(1, true);
	v->a[7271] = shift(256);
	v->a[7272] = entry(1, true);
	v->a[7273] = shift(254);
	v->a[7274] = entry(1, true);
	v->a[7275] = shift(2175);
	v->a[7276] = entry(1, true);
	v->a[7277] = shift(433);
	v->a[7278] = entry(1, false);
	v->a[7279] = shift(2392);
	parse_actions_entries_364(v);
}

void	parse_actions_entries_364(t_parse_actions_entries_array *v)
{
	v->a[7280] = entry(1, true);
	v->a[7281] = shift(2392);
	v->a[7282] = entry(1, false);
	v->a[7283] = reduce(aux_sym__heredoc_command, 1, 0, 13);
	v->a[7284] = entry(1, true);
	v->a[7285] = reduce(aux_sym__heredoc_command, 1, 0, 13);
	v->a[7286] = entry(1, true);
	v->a[7287] = shift(253);
	v->a[7288] = entry(1, true);
	v->a[7289] = shift(2177);
	v->a[7290] = entry(1, true);
	v->a[7291] = shift(442);
	v->a[7292] = entry(1, true);
	v->a[7293] = shift(241);
	v->a[7294] = entry(1, true);
	v->a[7295] = shift(2183);
	v->a[7296] = entry(1, true);
	v->a[7297] = shift(468);
	v->a[7298] = entry(1, false);
	v->a[7299] = shift(3263);
	parse_actions_entries_365(v);
}

/* EOF parse_actions_entries_72.c */
