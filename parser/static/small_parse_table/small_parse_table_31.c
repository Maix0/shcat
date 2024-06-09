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
	v->a[3100] = sym_redirected_statement;
	v->a[3101] = sym_for_statement;
	v->a[3102] = sym_while_statement;
	v->a[3103] = sym_if_statement;
	v->a[3104] = sym_case_statement;
	v->a[3105] = sym_function_definition;
	v->a[3106] = sym_compound_statement;
	v->a[3107] = sym_subshell;
	v->a[3108] = sym_list;
	v->a[3109] = sym_negated_command;
	v->a[3110] = sym_command;
	v->a[3111] = sym_variable_assignments;
	v->a[3112] = 36;
	v->a[3113] = actions(3);
	v->a[3114] = 1;
	v->a[3115] = sym_comment;
	v->a[3116] = actions(95);
	v->a[3117] = 1;
	v->a[3118] = sym_word;
	v->a[3119] = actions(97);
	small_parse_table_156(v);
}

void	small_parse_table_156(t_small_parse_table_array *v)
{
	v->a[3120] = 1;
	v->a[3121] = anon_sym_for;
	v->a[3122] = actions(101);
	v->a[3123] = 1;
	v->a[3124] = anon_sym_if;
	v->a[3125] = actions(103);
	v->a[3126] = 1;
	v->a[3127] = anon_sym_case;
	v->a[3128] = actions(105);
	v->a[3129] = 1;
	v->a[3130] = anon_sym_LPAREN;
	v->a[3131] = actions(109);
	v->a[3132] = 1;
	v->a[3133] = anon_sym_LBRACE;
	v->a[3134] = actions(111);
	v->a[3135] = 1;
	v->a[3136] = anon_sym_BANG;
	v->a[3137] = actions(117);
	v->a[3138] = 1;
	v->a[3139] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_157(v);
}

void	small_parse_table_157(t_small_parse_table_array *v)
{
	v->a[3140] = actions(119);
	v->a[3141] = 1;
	v->a[3142] = anon_sym_DOLLAR;
	v->a[3143] = actions(121);
	v->a[3144] = 1;
	v->a[3145] = anon_sym_DQUOTE;
	v->a[3146] = actions(123);
	v->a[3147] = 1;
	v->a[3148] = sym_raw_string;
	v->a[3149] = actions(125);
	v->a[3150] = 1;
	v->a[3151] = aux_sym_number_token1;
	v->a[3152] = actions(127);
	v->a[3153] = 1;
	v->a[3154] = aux_sym_number_token2;
	v->a[3155] = actions(129);
	v->a[3156] = 1;
	v->a[3157] = anon_sym_DOLLAR_LBRACE;
	v->a[3158] = actions(131);
	v->a[3159] = 1;
	small_parse_table_158(v);
}

void	small_parse_table_158(t_small_parse_table_array *v)
{
	v->a[3160] = anon_sym_DOLLAR_LPAREN;
	v->a[3161] = actions(133);
	v->a[3162] = 1;
	v->a[3163] = anon_sym_BQUOTE;
	v->a[3164] = actions(135);
	v->a[3165] = 1;
	v->a[3166] = sym_file_descriptor;
	v->a[3167] = actions(137);
	v->a[3168] = 1;
	v->a[3169] = sym_variable_name;
	v->a[3170] = actions(141);
	v->a[3171] = 1;
	v->a[3172] = anon_sym_LF;
	v->a[3173] = state(139);
	v->a[3174] = 1;
	v->a[3175] = aux_sym__statements_repeat1;
	v->a[3176] = state(173);
	v->a[3177] = 1;
	v->a[3178] = sym_command_name;
	v->a[3179] = state(269);
	small_parse_table_159(v);
}

void	small_parse_table_159(t_small_parse_table_array *v)
{
	v->a[3180] = 1;
	v->a[3181] = sym_variable_assignment;
	v->a[3182] = state(663);
	v->a[3183] = 1;
	v->a[3184] = aux_sym_command_repeat1;
	v->a[3185] = state(665);
	v->a[3186] = 1;
	v->a[3187] = sym_concatenation;
	v->a[3188] = state(689);
	v->a[3189] = 1;
	v->a[3190] = aux_sym__case_item_last_repeat2;
	v->a[3191] = state(749);
	v->a[3192] = 1;
	v->a[3193] = sym_file_redirect;
	v->a[3194] = state(1145);
	v->a[3195] = 1;
	v->a[3196] = aux_sym_redirected_statement_repeat2;
	v->a[3197] = state(1190);
	v->a[3198] = 1;
	v->a[3199] = sym_pipeline;
	small_parse_table_160(v);
}

/* EOF small_parse_table_31.c */
