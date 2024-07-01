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
	v->a[3100] = anon_sym_GT_AMP;
	v->a[3101] = anon_sym_GT_PIPE;
	v->a[3102] = anon_sym_LT_GT;
	v->a[3103] = state(1005);
	v->a[3104] = 12;
	v->a[3105] = sym_redirected_statement;
	v->a[3106] = sym_for_statement;
	v->a[3107] = sym_while_statement;
	v->a[3108] = sym_if_statement;
	v->a[3109] = sym_case_statement;
	v->a[3110] = sym_function_definition;
	v->a[3111] = sym_compound_statement;
	v->a[3112] = sym_subshell;
	v->a[3113] = sym_list;
	v->a[3114] = sym_negated_command;
	v->a[3115] = sym_command;
	v->a[3116] = sym__variable_assignments;
	v->a[3117] = 31;
	v->a[3118] = actions(3);
	v->a[3119] = 1;
	small_parse_table_156(v);
}

void	small_parse_table_156(t_small_parse_table_array *v)
{
	v->a[3120] = sym_comment;
	v->a[3121] = actions(141);
	v->a[3122] = 1;
	v->a[3123] = sym_word;
	v->a[3124] = actions(144);
	v->a[3125] = 1;
	v->a[3126] = anon_sym_for;
	v->a[3127] = actions(150);
	v->a[3128] = 1;
	v->a[3129] = anon_sym_if;
	v->a[3130] = actions(155);
	v->a[3131] = 1;
	v->a[3132] = anon_sym_case;
	v->a[3133] = actions(158);
	v->a[3134] = 1;
	v->a[3135] = anon_sym_LPAREN;
	v->a[3136] = actions(161);
	v->a[3137] = 1;
	v->a[3138] = anon_sym_LBRACE;
	v->a[3139] = actions(164);
	small_parse_table_157(v);
}

void	small_parse_table_157(t_small_parse_table_array *v)
{
	v->a[3140] = 1;
	v->a[3141] = anon_sym_BANG;
	v->a[3142] = actions(170);
	v->a[3143] = 1;
	v->a[3144] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3145] = actions(173);
	v->a[3146] = 1;
	v->a[3147] = anon_sym_DOLLAR;
	v->a[3148] = actions(176);
	v->a[3149] = 1;
	v->a[3150] = anon_sym_DQUOTE;
	v->a[3151] = actions(182);
	v->a[3152] = 1;
	v->a[3153] = anon_sym_DOLLAR_LBRACE;
	v->a[3154] = actions(185);
	v->a[3155] = 1;
	v->a[3156] = anon_sym_DOLLAR_LPAREN;
	v->a[3157] = actions(188);
	v->a[3158] = 1;
	v->a[3159] = anon_sym_BQUOTE;
	small_parse_table_158(v);
}

void	small_parse_table_158(t_small_parse_table_array *v)
{
	v->a[3160] = actions(191);
	v->a[3161] = 1;
	v->a[3162] = sym_file_descriptor;
	v->a[3163] = actions(194);
	v->a[3164] = 1;
	v->a[3165] = sym_variable_name;
	v->a[3166] = state(27);
	v->a[3167] = 1;
	v->a[3168] = aux_sym__terminated_statement;
	v->a[3169] = state(183);
	v->a[3170] = 1;
	v->a[3171] = sym_command_name;
	v->a[3172] = state(274);
	v->a[3173] = 1;
	v->a[3174] = sym_variable_assignment;
	v->a[3175] = state(603);
	v->a[3176] = 1;
	v->a[3177] = sym_concatenation;
	v->a[3178] = state(639);
	v->a[3179] = 1;
	small_parse_table_159(v);
}

void	small_parse_table_159(t_small_parse_table_array *v)
{
	v->a[3180] = aux_sym_command_repeat1;
	v->a[3181] = state(644);
	v->a[3182] = 1;
	v->a[3183] = sym_file_redirect;
	v->a[3184] = state(1170);
	v->a[3185] = 1;
	v->a[3186] = sym_pipeline;
	v->a[3187] = state(1196);
	v->a[3188] = 1;
	v->a[3189] = aux_sym_redirected_statement_repeat2;
	v->a[3190] = state(1910);
	v->a[3191] = 1;
	v->a[3192] = sym__statement_not_pipeline;
	v->a[3193] = actions(147);
	v->a[3194] = 2;
	v->a[3195] = anon_sym_while;
	v->a[3196] = anon_sym_until;
	v->a[3197] = actions(179);
	v->a[3198] = 2;
	v->a[3199] = sym_raw_string;
	small_parse_table_160(v);
}

/* EOF small_parse_table_31.c */
