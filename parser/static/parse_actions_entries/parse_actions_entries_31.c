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
	v->a[3100] = entry(1, true);
	v->a[3101] = shift(148);
	v->a[3102] = entry(1, true);
	v->a[3103] = shift(1816);
	v->a[3104] = entry(1, true);
	v->a[3105] = shift(613);
	v->a[3106] = entry(2, false);
	v->a[3107] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[3108] = shift_repeat(1777);
	v->a[3109] = entry(2, true);
	v->a[3110] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[3111] = shift_repeat(1777);
	v->a[3112] = entry(2, true);
	v->a[3113] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[3114] = shift_repeat(754);
	v->a[3115] = entry(2, true);
	v->a[3116] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[3117] = shift_repeat(2084);
	v->a[3118] = entry(2, false);
	v->a[3119] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	parse_actions_entries_156(v);
}

void	parse_actions_entries_156(t_parse_actions_entries_array *v)
{
	v->a[3120] = shift_repeat(147);
	v->a[3121] = entry(1, true);
	v->a[3122] = shift(156);
	v->a[3123] = entry(1, true);
	v->a[3124] = shift(1809);
	v->a[3125] = entry(1, true);
	v->a[3126] = shift(273);
	v->a[3127] = entry(2, false);
	v->a[3128] = reduce(aux_sym__heredoc_command, 2, 0, 31);
	v->a[3129] = shift_repeat(1944);
	v->a[3130] = entry(1, false);
	v->a[3131] = reduce(aux_sym__heredoc_command, 2, 0, 31);
	v->a[3132] = entry(2, false);
	v->a[3133] = reduce(aux_sym__heredoc_command, 2, 0, 31);
	v->a[3134] = shift_repeat(1037);
	v->a[3135] = entry(2, false);
	v->a[3136] = reduce(aux_sym__heredoc_command, 2, 0, 31);
	v->a[3137] = shift_repeat(1957);
	v->a[3138] = entry(2, false);
	v->a[3139] = reduce(aux_sym__heredoc_command, 2, 0, 31);
	parse_actions_entries_157(v);
}

void	parse_actions_entries_157(t_parse_actions_entries_array *v)
{
	v->a[3140] = shift_repeat(1958);
	v->a[3141] = entry(2, false);
	v->a[3142] = reduce(aux_sym__heredoc_command, 2, 0, 31);
	v->a[3143] = shift_repeat(1952);
	v->a[3144] = entry(2, false);
	v->a[3145] = reduce(aux_sym__heredoc_command, 2, 0, 31);
	v->a[3146] = shift_repeat(74);
	v->a[3147] = entry(2, false);
	v->a[3148] = reduce(aux_sym__heredoc_command, 2, 0, 31);
	v->a[3149] = shift_repeat(75);
	v->a[3150] = entry(1, false);
	v->a[3151] = shift(326);
	v->a[3152] = entry(1, true);
	v->a[3153] = shift(326);
	v->a[3154] = entry(1, false);
	v->a[3155] = shift(1113);
	v->a[3156] = entry(1, false);
	v->a[3157] = shift(1048);
	v->a[3158] = entry(1, false);
	v->a[3159] = shift(455);
	parse_actions_entries_158(v);
}

void	parse_actions_entries_158(t_parse_actions_entries_array *v)
{
	v->a[3160] = entry(1, false);
	v->a[3161] = shift(1999);
	v->a[3162] = entry(1, false);
	v->a[3163] = shift(1941);
	v->a[3164] = entry(1, false);
	v->a[3165] = shift(80);
	v->a[3166] = entry(1, false);
	v->a[3167] = shift(81);
	v->a[3168] = entry(1, true);
	v->a[3169] = shift(1113);
	v->a[3170] = entry(1, false);
	v->a[3171] = shift(544);
	v->a[3172] = entry(1, false);
	v->a[3173] = shift(1049);
	v->a[3174] = entry(1, false);
	v->a[3175] = shift(1959);
	v->a[3176] = entry(1, false);
	v->a[3177] = shift(1956);
	v->a[3178] = entry(1, false);
	v->a[3179] = shift(1928);
	parse_actions_entries_159(v);
}

void	parse_actions_entries_159(t_parse_actions_entries_array *v)
{
	v->a[3180] = entry(1, false);
	v->a[3181] = shift(62);
	v->a[3182] = entry(1, false);
	v->a[3183] = shift(63);
	v->a[3184] = entry(1, false);
	v->a[3185] = shift(696);
	v->a[3186] = entry(1, true);
	v->a[3187] = shift(696);
	v->a[3188] = entry(1, false);
	v->a[3189] = shift(1026);
	v->a[3190] = entry(1, true);
	v->a[3191] = shift(1026);
	v->a[3192] = entry(1, false);
	v->a[3193] = shift(982);
	v->a[3194] = entry(1, false);
	v->a[3195] = shift(195);
	v->a[3196] = entry(1, true);
	v->a[3197] = shift(982);
	v->a[3198] = entry(1, false);
	v->a[3199] = shift(1001);
	parse_actions_entries_160(v);
}

/* EOF parse_actions_entries_31.c */
