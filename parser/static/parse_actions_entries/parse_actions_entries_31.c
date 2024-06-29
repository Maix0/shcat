/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_31.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_155(t_parse_actions_entries_array *v)
{
	v->a[3100] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[3101] = shift_repeat(1564);
	v->a[3102] = entry(1, false);
	v->a[3103] = shift(985);
	v->a[3104] = entry(1, false);
	v->a[3105] = shift(1873);
	v->a[3106] = entry(1, false);
	v->a[3107] = shift(322);
	v->a[3108] = entry(2, false);
	v->a[3109] = reduce(aux_sym__heredoc_command, 2, 0, 31);
	v->a[3110] = shift_repeat(1788);
	v->a[3111] = entry(1, false);
	v->a[3112] = reduce(aux_sym__heredoc_command, 2, 0, 31);
	v->a[3113] = entry(2, false);
	v->a[3114] = reduce(aux_sym__heredoc_command, 2, 0, 31);
	v->a[3115] = shift_repeat(910);
	v->a[3116] = entry(2, false);
	v->a[3117] = reduce(aux_sym__heredoc_command, 2, 0, 31);
	v->a[3118] = shift_repeat(1810);
	v->a[3119] = entry(2, false);
	parse_actions_entries_156(v);
}

void	parse_actions_entries_156(t_parse_actions_entries_array *v)
{
	v->a[3120] = reduce(aux_sym__heredoc_command, 2, 0, 31);
	v->a[3121] = shift_repeat(1811);
	v->a[3122] = entry(2, false);
	v->a[3123] = reduce(aux_sym__heredoc_command, 2, 0, 31);
	v->a[3124] = shift_repeat(1798);
	v->a[3125] = entry(2, false);
	v->a[3126] = reduce(aux_sym__heredoc_command, 2, 0, 31);
	v->a[3127] = shift_repeat(74);
	v->a[3128] = entry(2, false);
	v->a[3129] = reduce(aux_sym__heredoc_command, 2, 0, 31);
	v->a[3130] = shift_repeat(51);
	v->a[3131] = entry(2, false);
	v->a[3132] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[3133] = shift_repeat(1540);
	v->a[3134] = entry(2, true);
	v->a[3135] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[3136] = shift_repeat(1540);
	v->a[3137] = entry(1, false);
	v->a[3138] = shift(377);
	v->a[3139] = entry(1, false);
	parse_actions_entries_157(v);
}

void	parse_actions_entries_157(t_parse_actions_entries_array *v)
{
	v->a[3140] = shift(458);
	v->a[3141] = entry(1, false);
	v->a[3142] = shift(1540);
	v->a[3143] = entry(1, true);
	v->a[3144] = shift(1523);
	v->a[3145] = entry(1, false);
	v->a[3146] = shift(1109);
	v->a[3147] = entry(1, false);
	v->a[3148] = shift(795);
	v->a[3149] = entry(1, false);
	v->a[3150] = shift(339);
	v->a[3151] = entry(2, false);
	v->a[3152] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[3153] = shift_repeat(1600);
	v->a[3154] = entry(2, false);
	v->a[3155] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[3156] = shift_repeat(846);
	v->a[3157] = entry(2, true);
	v->a[3158] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[3159] = shift_repeat(1936);
	parse_actions_entries_158(v);
}

void	parse_actions_entries_158(t_parse_actions_entries_array *v)
{
	v->a[3160] = entry(1, true);
	v->a[3161] = shift(1540);
	v->a[3162] = entry(1, false);
	v->a[3163] = shift(828);
	v->a[3164] = entry(1, false);
	v->a[3165] = shift(361);
	v->a[3166] = entry(1, false);
	v->a[3167] = shift(1954);
	v->a[3168] = entry(1, false);
	v->a[3169] = shift(1956);
	v->a[3170] = entry(1, false);
	v->a[3171] = shift(2073);
	v->a[3172] = entry(1, false);
	v->a[3173] = reduce(sym_expansion_expression, 1, 0, 1);
	v->a[3174] = entry(1, true);
	v->a[3175] = shift(2077);
	v->a[3176] = entry(1, true);
	v->a[3177] = shift(2073);
	v->a[3178] = entry(1, true);
	v->a[3179] = reduce(sym__expansion_body, 1, 0, 9);
	parse_actions_entries_159(v);
}

void	parse_actions_entries_159(t_parse_actions_entries_array *v)
{
	v->a[3180] = entry(1, false);
	v->a[3181] = shift(1971);
	v->a[3182] = entry(1, true);
	v->a[3183] = shift(1971);
	v->a[3184] = entry(1, true);
	v->a[3185] = shift(1697);
	v->a[3186] = entry(1, true);
	v->a[3187] = reduce(sym__expansion_body, 1, 0, 4);
	v->a[3188] = entry(1, false);
	v->a[3189] = shift(1957);
	v->a[3190] = entry(1, false);
	v->a[3191] = shift(1966);
	v->a[3192] = entry(1, false);
	v->a[3193] = shift(906);
	v->a[3194] = entry(1, false);
	v->a[3195] = shift(1960);
	v->a[3196] = entry(1, false);
	v->a[3197] = shift(1964);
	v->a[3198] = entry(1, true);
	v->a[3199] = shift(1964);
	parse_actions_entries_160(v);
}

/* EOF parse_actions_entries_31.c */
