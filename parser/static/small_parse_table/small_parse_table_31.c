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
	v->a[3100] = state(1014);
	v->a[3101] = 1;
	v->a[3102] = sym_pipeline;
	v->a[3103] = state(1068);
	v->a[3104] = 1;
	v->a[3105] = aux_sym_redirected_statement_repeat2;
	v->a[3106] = state(1609);
	v->a[3107] = 1;
	v->a[3108] = sym__statement_not_pipeline;
	v->a[3109] = state(1632);
	v->a[3110] = 1;
	v->a[3111] = sym__statements;
	v->a[3112] = actions(11);
	v->a[3113] = 2;
	v->a[3114] = anon_sym_while;
	v->a[3115] = anon_sym_until;
	v->a[3116] = actions(59);
	v->a[3117] = 2;
	v->a[3118] = sym_raw_string;
	v->a[3119] = sym_number;
	small_parse_table_156(v);
}

void	small_parse_table_156(t_small_parse_table_array *v)
{
	v->a[3120] = state(425);
	v->a[3121] = 5;
	v->a[3122] = sym_arithmetic_expansion;
	v->a[3123] = sym_string;
	v->a[3124] = sym_simple_expansion;
	v->a[3125] = sym_expansion;
	v->a[3126] = sym_command_substitution;
	v->a[3127] = actions(51);
	v->a[3128] = 7;
	v->a[3129] = anon_sym_LT;
	v->a[3130] = anon_sym_GT;
	v->a[3131] = anon_sym_GT_GT;
	v->a[3132] = anon_sym_LT_AMP;
	v->a[3133] = anon_sym_GT_AMP;
	v->a[3134] = anon_sym_GT_PIPE;
	v->a[3135] = anon_sym_LT_GT;
	v->a[3136] = state(936);
	v->a[3137] = 12;
	v->a[3138] = sym_redirected_statement;
	v->a[3139] = sym_for_statement;
	small_parse_table_157(v);
}

void	small_parse_table_157(t_small_parse_table_array *v)
{
	v->a[3140] = sym_while_statement;
	v->a[3141] = sym_if_statement;
	v->a[3142] = sym_case_statement;
	v->a[3143] = sym_function_definition;
	v->a[3144] = sym_compound_statement;
	v->a[3145] = sym_subshell;
	v->a[3146] = sym_list;
	v->a[3147] = sym_negated_command;
	v->a[3148] = sym_command;
	v->a[3149] = sym__variable_assignments;
	v->a[3150] = 32;
	v->a[3151] = actions(3);
	v->a[3152] = 1;
	v->a[3153] = sym_comment;
	v->a[3154] = actions(9);
	v->a[3155] = 1;
	v->a[3156] = anon_sym_for;
	v->a[3157] = actions(13);
	v->a[3158] = 1;
	v->a[3159] = anon_sym_if;
	small_parse_table_158(v);
}

void	small_parse_table_158(t_small_parse_table_array *v)
{
	v->a[3160] = actions(15);
	v->a[3161] = 1;
	v->a[3162] = anon_sym_case;
	v->a[3163] = actions(17);
	v->a[3164] = 1;
	v->a[3165] = anon_sym_LPAREN;
	v->a[3166] = actions(19);
	v->a[3167] = 1;
	v->a[3168] = anon_sym_LBRACE;
	v->a[3169] = actions(41);
	v->a[3170] = 1;
	v->a[3171] = sym_word;
	v->a[3172] = actions(49);
	v->a[3173] = 1;
	v->a[3174] = anon_sym_BANG;
	v->a[3175] = actions(53);
	v->a[3176] = 1;
	v->a[3177] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3178] = actions(55);
	v->a[3179] = 1;
	small_parse_table_159(v);
}

void	small_parse_table_159(t_small_parse_table_array *v)
{
	v->a[3180] = anon_sym_DOLLAR;
	v->a[3181] = actions(57);
	v->a[3182] = 1;
	v->a[3183] = anon_sym_DQUOTE;
	v->a[3184] = actions(61);
	v->a[3185] = 1;
	v->a[3186] = anon_sym_DOLLAR_LBRACE;
	v->a[3187] = actions(63);
	v->a[3188] = 1;
	v->a[3189] = anon_sym_DOLLAR_LPAREN;
	v->a[3190] = actions(65);
	v->a[3191] = 1;
	v->a[3192] = anon_sym_BQUOTE;
	v->a[3193] = actions(67);
	v->a[3194] = 1;
	v->a[3195] = sym_variable_name;
	v->a[3196] = actions(190);
	v->a[3197] = 1;
	v->a[3198] = anon_sym_LF;
	v->a[3199] = state(17);
	small_parse_table_160(v);
}

/* EOF small_parse_table_31.c */
