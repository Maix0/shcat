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
	v->a[3100] = aux_sym__statements_repeat1;
	v->a[3101] = state(185);
	v->a[3102] = 1;
	v->a[3103] = sym_command_name;
	v->a[3104] = state(216);
	v->a[3105] = 1;
	v->a[3106] = sym_variable_assignment;
	v->a[3107] = state(411);
	v->a[3108] = 1;
	v->a[3109] = aux_sym_command_repeat1;
	v->a[3110] = state(551);
	v->a[3111] = 1;
	v->a[3112] = sym_file_redirect;
	v->a[3113] = state(555);
	v->a[3114] = 1;
	v->a[3115] = sym_concatenation;
	v->a[3116] = state(991);
	v->a[3117] = 1;
	v->a[3118] = sym_pipeline;
	v->a[3119] = state(1126);
	small_parse_table_156(v);
}

void	small_parse_table_156(t_small_parse_table_array *v)
{
	v->a[3120] = 1;
	v->a[3121] = aux_sym_redirected_statement_repeat2;
	v->a[3122] = state(1561);
	v->a[3123] = 1;
	v->a[3124] = sym__statement_not_pipeline;
	v->a[3125] = state(1614);
	v->a[3126] = 1;
	v->a[3127] = sym__statements;
	v->a[3128] = actions(11);
	v->a[3129] = 2;
	v->a[3130] = anon_sym_while;
	v->a[3131] = anon_sym_until;
	v->a[3132] = actions(59);
	v->a[3133] = 2;
	v->a[3134] = sym_raw_string;
	v->a[3135] = sym_number;
	v->a[3136] = actions(51);
	v->a[3137] = 3;
	v->a[3138] = anon_sym_LT;
	v->a[3139] = anon_sym_GT;
	small_parse_table_157(v);
}

void	small_parse_table_157(t_small_parse_table_array *v)
{
	v->a[3140] = anon_sym_GT_GT;
	v->a[3141] = state(401);
	v->a[3142] = 5;
	v->a[3143] = sym_arithmetic_expansion;
	v->a[3144] = sym_string;
	v->a[3145] = sym_simple_expansion;
	v->a[3146] = sym_expansion;
	v->a[3147] = sym_command_substitution;
	v->a[3148] = state(972);
	v->a[3149] = 12;
	v->a[3150] = sym_redirected_statement;
	v->a[3151] = sym_for_statement;
	v->a[3152] = sym_while_statement;
	v->a[3153] = sym_if_statement;
	v->a[3154] = sym_case_statement;
	v->a[3155] = sym_function_definition;
	v->a[3156] = sym_compound_statement;
	v->a[3157] = sym_subshell;
	v->a[3158] = sym_list;
	v->a[3159] = sym_negated_command;
	small_parse_table_158(v);
}

void	small_parse_table_158(t_small_parse_table_array *v)
{
	v->a[3160] = sym_command;
	v->a[3161] = sym__variable_assignments;
	v->a[3162] = 32;
	v->a[3163] = actions(3);
	v->a[3164] = 1;
	v->a[3165] = sym_comment;
	v->a[3166] = actions(9);
	v->a[3167] = 1;
	v->a[3168] = anon_sym_for;
	v->a[3169] = actions(13);
	v->a[3170] = 1;
	v->a[3171] = anon_sym_if;
	v->a[3172] = actions(15);
	v->a[3173] = 1;
	v->a[3174] = anon_sym_case;
	v->a[3175] = actions(17);
	v->a[3176] = 1;
	v->a[3177] = anon_sym_LPAREN;
	v->a[3178] = actions(19);
	v->a[3179] = 1;
	small_parse_table_159(v);
}

void	small_parse_table_159(t_small_parse_table_array *v)
{
	v->a[3180] = anon_sym_LBRACE;
	v->a[3181] = actions(41);
	v->a[3182] = 1;
	v->a[3183] = sym_word;
	v->a[3184] = actions(49);
	v->a[3185] = 1;
	v->a[3186] = anon_sym_BANG;
	v->a[3187] = actions(53);
	v->a[3188] = 1;
	v->a[3189] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3190] = actions(55);
	v->a[3191] = 1;
	v->a[3192] = anon_sym_DOLLAR;
	v->a[3193] = actions(57);
	v->a[3194] = 1;
	v->a[3195] = anon_sym_DQUOTE;
	v->a[3196] = actions(61);
	v->a[3197] = 1;
	v->a[3198] = anon_sym_DOLLAR_LBRACE;
	v->a[3199] = actions(63);
	small_parse_table_160(v);
}

/* EOF small_parse_table_31.c */
