/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_31.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_155(t_small_parse_table_array *v)
{
	v->a[3100] = sym_subshell;
	v->a[3101] = sym_list;
	v->a[3102] = sym_negated_command;
	v->a[3103] = sym_command;
	v->a[3104] = sym__variable_assignments;
	v->a[3105] = 33;
	v->a[3106] = actions(3);
	v->a[3107] = 1;
	v->a[3108] = sym_comment;
	v->a[3109] = actions(87);
	v->a[3110] = 1;
	v->a[3111] = sym_word;
	v->a[3112] = actions(89);
	v->a[3113] = 1;
	v->a[3114] = anon_sym_for;
	v->a[3115] = actions(93);
	v->a[3116] = 1;
	v->a[3117] = anon_sym_if;
	v->a[3118] = actions(95);
	v->a[3119] = 1;
	small_parse_table_156(v);
}

void	small_parse_table_156(t_small_parse_table_array *v)
{
	v->a[3120] = anon_sym_case;
	v->a[3121] = actions(97);
	v->a[3122] = 1;
	v->a[3123] = anon_sym_LPAREN;
	v->a[3124] = actions(101);
	v->a[3125] = 1;
	v->a[3126] = anon_sym_LBRACE;
	v->a[3127] = actions(103);
	v->a[3128] = 1;
	v->a[3129] = anon_sym_BANG;
	v->a[3130] = actions(107);
	v->a[3131] = 1;
	v->a[3132] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3133] = actions(109);
	v->a[3134] = 1;
	v->a[3135] = anon_sym_DOLLAR;
	v->a[3136] = actions(111);
	v->a[3137] = 1;
	v->a[3138] = anon_sym_DQUOTE;
	v->a[3139] = actions(115);
	small_parse_table_157(v);
}

void	small_parse_table_157(t_small_parse_table_array *v)
{
	v->a[3140] = 1;
	v->a[3141] = anon_sym_DOLLAR_LBRACE;
	v->a[3142] = actions(117);
	v->a[3143] = 1;
	v->a[3144] = anon_sym_DOLLAR_LPAREN;
	v->a[3145] = actions(119);
	v->a[3146] = 1;
	v->a[3147] = anon_sym_BQUOTE;
	v->a[3148] = actions(121);
	v->a[3149] = 1;
	v->a[3150] = sym_file_descriptor;
	v->a[3151] = actions(123);
	v->a[3152] = 1;
	v->a[3153] = sym_variable_name;
	v->a[3154] = actions(125);
	v->a[3155] = 1;
	v->a[3156] = anon_sym_LF;
	v->a[3157] = state(131);
	v->a[3158] = 1;
	v->a[3159] = aux_sym__statements_repeat1;
	small_parse_table_158(v);
}

void	small_parse_table_158(t_small_parse_table_array *v)
{
	v->a[3160] = state(173);
	v->a[3161] = 1;
	v->a[3162] = sym_command_name;
	v->a[3163] = state(263);
	v->a[3164] = 1;
	v->a[3165] = sym_variable_assignment;
	v->a[3166] = state(584);
	v->a[3167] = 1;
	v->a[3168] = aux_sym__case_item_last_repeat2;
	v->a[3169] = state(597);
	v->a[3170] = 1;
	v->a[3171] = aux_sym_command_repeat1;
	v->a[3172] = state(598);
	v->a[3173] = 1;
	v->a[3174] = sym_concatenation;
	v->a[3175] = state(714);
	v->a[3176] = 1;
	v->a[3177] = sym_file_redirect;
	v->a[3178] = state(1063);
	v->a[3179] = 1;
	small_parse_table_159(v);
}

void	small_parse_table_159(t_small_parse_table_array *v)
{
	v->a[3180] = sym_pipeline;
	v->a[3181] = state(1123);
	v->a[3182] = 1;
	v->a[3183] = aux_sym_redirected_statement_repeat2;
	v->a[3184] = state(1903);
	v->a[3185] = 1;
	v->a[3186] = sym__statement_not_pipeline;
	v->a[3187] = state(1905);
	v->a[3188] = 1;
	v->a[3189] = sym__statements;
	v->a[3190] = actions(91);
	v->a[3191] = 2;
	v->a[3192] = anon_sym_while;
	v->a[3193] = anon_sym_until;
	v->a[3194] = actions(113);
	v->a[3195] = 2;
	v->a[3196] = sym_raw_string;
	v->a[3197] = sym_number;
	v->a[3198] = state(378);
	v->a[3199] = 5;
	small_parse_table_160(v);
}

/* EOF small_parse_table_31.c */
