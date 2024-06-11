/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_30.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_150(t_parse_actions_entries_array *v)
{
	v->a[3000] = entry(1, true);
	v->a[3001] = reduce(sym__heredoc_expression, 2, 0, 49);
	v->a[3002] = entry(1, true);
	v->a[3003] = reduce(sym__heredoc_pipeline, 2, 0, 0);
	v->a[3004] = entry(2, false);
	v->a[3005] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[3006] = shift_repeat(1816);
	v->a[3007] = entry(2, false);
	v->a[3008] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[3009] = shift_repeat(613);
	v->a[3010] = entry(2, true);
	v->a[3011] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[3012] = shift_repeat(2054);
	v->a[3013] = entry(1, true);
	v->a[3014] = shift(1627);
	v->a[3015] = entry(1, false);
	v->a[3016] = shift(1777);
	v->a[3017] = entry(1, true);
	v->a[3018] = shift(1777);
	v->a[3019] = entry(1, true);
	parse_actions_entries_151(v);
}

void	parse_actions_entries_151(t_parse_actions_entries_array *v)
{
	v->a[3020] = shift(754);
	v->a[3021] = entry(1, false);
	v->a[3022] = shift(2350);
	v->a[3023] = entry(1, true);
	v->a[3024] = shift(2350);
	v->a[3025] = entry(1, true);
	v->a[3026] = shift(2009);
	v->a[3027] = entry(1, true);
	v->a[3028] = shift(2087);
	v->a[3029] = entry(2, false);
	v->a[3030] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[3031] = shift_repeat(1816);
	v->a[3032] = entry(2, false);
	v->a[3033] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[3034] = shift_repeat(613);
	v->a[3035] = entry(2, true);
	v->a[3036] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[3037] = shift_repeat(2087);
	v->a[3038] = entry(2, true);
	v->a[3039] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	parse_actions_entries_152(v);
}

void	parse_actions_entries_152(t_parse_actions_entries_array *v)
{
	v->a[3040] = shift_repeat(1627);
	v->a[3041] = entry(2, false);
	v->a[3042] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[3043] = shift_repeat(1777);
	v->a[3044] = entry(2, true);
	v->a[3045] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[3046] = shift_repeat(1777);
	v->a[3047] = entry(2, true);
	v->a[3048] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[3049] = shift_repeat(754);
	v->a[3050] = entry(2, false);
	v->a[3051] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[3052] = shift_repeat(2350);
	v->a[3053] = entry(2, true);
	v->a[3054] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[3055] = shift_repeat(2350);
	v->a[3056] = entry(2, true);
	v->a[3057] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[3058] = shift_repeat(2009);
	v->a[3059] = entry(1, true);
	parse_actions_entries_153(v);
}

void	parse_actions_entries_153(t_parse_actions_entries_array *v)
{
	v->a[3060] = shift(1637);
	v->a[3061] = entry(2, true);
	v->a[3062] = reduce(aux_sym_variable_assignments_repeat1, 2, 0, 0);
	v->a[3063] = shift_repeat(2291);
	v->a[3064] = entry(1, true);
	v->a[3065] = shift(2291);
	v->a[3066] = entry(1, true);
	v->a[3067] = shift(2084);
	v->a[3068] = entry(1, true);
	v->a[3069] = shift(145);
	v->a[3070] = entry(1, true);
	v->a[3071] = shift(150);
	v->a[3072] = entry(1, true);
	v->a[3073] = shift(1821);
	v->a[3074] = entry(1, true);
	v->a[3075] = shift(287);
	v->a[3076] = entry(1, true);
	v->a[3077] = shift(2379);
	v->a[3078] = entry(1, false);
	v->a[3079] = shift(147);
	parse_actions_entries_154(v);
}

void	parse_actions_entries_154(t_parse_actions_entries_array *v)
{
	v->a[3080] = entry(1, true);
	v->a[3081] = shift(143);
	v->a[3082] = entry(1, true);
	v->a[3083] = shift(1781);
	v->a[3084] = entry(1, true);
	v->a[3085] = shift(244);
	v->a[3086] = entry(1, true);
	v->a[3087] = shift(149);
	v->a[3088] = entry(1, true);
	v->a[3089] = shift(1740);
	v->a[3090] = entry(1, true);
	v->a[3091] = shift(250);
	v->a[3092] = entry(1, true);
	v->a[3093] = shift(2400);
	v->a[3094] = entry(1, true);
	v->a[3095] = shift(151);
	v->a[3096] = entry(1, true);
	v->a[3097] = shift(1783);
	v->a[3098] = entry(1, true);
	v->a[3099] = shift(264);
	parse_actions_entries_155(v);
}

/* EOF parse_actions_entries_30.c */
