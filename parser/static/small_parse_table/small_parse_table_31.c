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
	v->a[3100] = 1;
	v->a[3101] = anon_sym_DOLLAR_LPAREN;
	v->a[3102] = actions(188);
	v->a[3103] = 1;
	v->a[3104] = anon_sym_BQUOTE;
	v->a[3105] = actions(190);
	v->a[3106] = 1;
	v->a[3107] = sym_file_descriptor;
	v->a[3108] = actions(192);
	v->a[3109] = 1;
	v->a[3110] = sym_variable_name;
	v->a[3111] = actions(200);
	v->a[3112] = 1;
	v->a[3113] = anon_sym_LF;
	v->a[3114] = state(30);
	v->a[3115] = 1;
	v->a[3116] = aux_sym__case_item_last_repeat2;
	v->a[3117] = state(140);
	v->a[3118] = 1;
	v->a[3119] = aux_sym__statements_repeat1;
	small_parse_table_156(v);
}

void	small_parse_table_156(t_small_parse_table_array *v)
{
	v->a[3120] = state(186);
	v->a[3121] = 1;
	v->a[3122] = sym_command_name;
	v->a[3123] = state(213);
	v->a[3124] = 1;
	v->a[3125] = sym_variable_assignment;
	v->a[3126] = state(636);
	v->a[3127] = 1;
	v->a[3128] = sym_concatenation;
	v->a[3129] = state(677);
	v->a[3130] = 1;
	v->a[3131] = sym_file_redirect;
	v->a[3132] = state(752);
	v->a[3133] = 1;
	v->a[3134] = aux_sym_command_repeat1;
	v->a[3135] = state(1133);
	v->a[3136] = 1;
	v->a[3137] = sym_pipeline;
	v->a[3138] = state(1226);
	v->a[3139] = 1;
	small_parse_table_157(v);
}

void	small_parse_table_157(t_small_parse_table_array *v)
{
	v->a[3140] = aux_sym_redirected_statement_repeat2;
	v->a[3141] = state(2111);
	v->a[3142] = 1;
	v->a[3143] = sym__statement_not_pipeline;
	v->a[3144] = state(2118);
	v->a[3145] = 1;
	v->a[3146] = sym__statements;
	v->a[3147] = actions(160);
	v->a[3148] = 2;
	v->a[3149] = anon_sym_while;
	v->a[3150] = anon_sym_until;
	v->a[3151] = actions(174);
	v->a[3152] = 2;
	v->a[3153] = anon_sym_LT_AMP_DASH;
	v->a[3154] = anon_sym_GT_AMP_DASH;
	v->a[3155] = actions(182);
	v->a[3156] = 2;
	v->a[3157] = sym_raw_string;
	v->a[3158] = sym_number;
	v->a[3159] = state(385);
	small_parse_table_158(v);
}

void	small_parse_table_158(t_small_parse_table_array *v)
{
	v->a[3160] = 5;
	v->a[3161] = sym_arithmetic_expansion;
	v->a[3162] = sym_string;
	v->a[3163] = sym_simple_expansion;
	v->a[3164] = sym_expansion;
	v->a[3165] = sym_command_substitution;
	v->a[3166] = actions(172);
	v->a[3167] = 6;
	v->a[3168] = anon_sym_LT;
	v->a[3169] = anon_sym_GT;
	v->a[3170] = anon_sym_GT_GT;
	v->a[3171] = anon_sym_LT_AMP;
	v->a[3172] = anon_sym_GT_AMP;
	v->a[3173] = anon_sym_GT_PIPE;
	v->a[3174] = state(1075);
	v->a[3175] = 12;
	v->a[3176] = sym_redirected_statement;
	v->a[3177] = sym_for_statement;
	v->a[3178] = sym_while_statement;
	v->a[3179] = sym_if_statement;
	small_parse_table_159(v);
}

void	small_parse_table_159(t_small_parse_table_array *v)
{
	v->a[3180] = sym_case_statement;
	v->a[3181] = sym_function_definition;
	v->a[3182] = sym_compound_statement;
	v->a[3183] = sym_subshell;
	v->a[3184] = sym_list;
	v->a[3185] = sym_negated_command;
	v->a[3186] = sym_command;
	v->a[3187] = sym__variable_assignments;
	v->a[3188] = 34;
	v->a[3189] = actions(3);
	v->a[3190] = 1;
	v->a[3191] = sym_comment;
	v->a[3192] = actions(156);
	v->a[3193] = 1;
	v->a[3194] = sym_word;
	v->a[3195] = actions(158);
	v->a[3196] = 1;
	v->a[3197] = anon_sym_for;
	v->a[3198] = actions(162);
	v->a[3199] = 1;
	small_parse_table_160(v);
}

/* EOF small_parse_table_31.c */
