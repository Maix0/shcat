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
	v->a[3100] = 12;
	v->a[3101] = sym_redirected_statement;
	v->a[3102] = sym_for_statement;
	v->a[3103] = sym_while_statement;
	v->a[3104] = sym_if_statement;
	v->a[3105] = sym_case_statement;
	v->a[3106] = sym_function_definition;
	v->a[3107] = sym_compound_statement;
	v->a[3108] = sym_subshell;
	v->a[3109] = sym_list;
	v->a[3110] = sym_negated_command;
	v->a[3111] = sym_command;
	v->a[3112] = sym__variable_assignments;
	v->a[3113] = 33;
	v->a[3114] = actions(3);
	v->a[3115] = 1;
	v->a[3116] = sym_comment;
	v->a[3117] = actions(83);
	v->a[3118] = 1;
	v->a[3119] = sym_word;
	small_parse_table_156(v);
}

void	small_parse_table_156(t_small_parse_table_array *v)
{
	v->a[3120] = actions(85);
	v->a[3121] = 1;
	v->a[3122] = anon_sym_for;
	v->a[3123] = actions(89);
	v->a[3124] = 1;
	v->a[3125] = anon_sym_if;
	v->a[3126] = actions(91);
	v->a[3127] = 1;
	v->a[3128] = anon_sym_case;
	v->a[3129] = actions(93);
	v->a[3130] = 1;
	v->a[3131] = anon_sym_LPAREN;
	v->a[3132] = actions(97);
	v->a[3133] = 1;
	v->a[3134] = anon_sym_LBRACE;
	v->a[3135] = actions(99);
	v->a[3136] = 1;
	v->a[3137] = anon_sym_BANG;
	v->a[3138] = actions(103);
	v->a[3139] = 1;
	small_parse_table_157(v);
}

void	small_parse_table_157(t_small_parse_table_array *v)
{
	v->a[3140] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3141] = actions(105);
	v->a[3142] = 1;
	v->a[3143] = anon_sym_DOLLAR;
	v->a[3144] = actions(107);
	v->a[3145] = 1;
	v->a[3146] = anon_sym_DQUOTE;
	v->a[3147] = actions(111);
	v->a[3148] = 1;
	v->a[3149] = anon_sym_DOLLAR_LBRACE;
	v->a[3150] = actions(113);
	v->a[3151] = 1;
	v->a[3152] = anon_sym_DOLLAR_LPAREN;
	v->a[3153] = actions(115);
	v->a[3154] = 1;
	v->a[3155] = anon_sym_BQUOTE;
	v->a[3156] = actions(117);
	v->a[3157] = 1;
	v->a[3158] = sym_file_descriptor;
	v->a[3159] = actions(119);
	small_parse_table_158(v);
}

void	small_parse_table_158(t_small_parse_table_array *v)
{
	v->a[3160] = 1;
	v->a[3161] = sym_variable_name;
	v->a[3162] = actions(139);
	v->a[3163] = 1;
	v->a[3164] = anon_sym_LF;
	v->a[3165] = state(13);
	v->a[3166] = 1;
	v->a[3167] = aux_sym__case_item_last_repeat2;
	v->a[3168] = state(122);
	v->a[3169] = 1;
	v->a[3170] = aux_sym__statements_repeat1;
	v->a[3171] = state(172);
	v->a[3172] = 1;
	v->a[3173] = sym_command_name;
	v->a[3174] = state(234);
	v->a[3175] = 1;
	v->a[3176] = sym_variable_assignment;
	v->a[3177] = state(567);
	v->a[3178] = 1;
	v->a[3179] = sym_concatenation;
	small_parse_table_159(v);
}

void	small_parse_table_159(t_small_parse_table_array *v)
{
	v->a[3180] = state(634);
	v->a[3181] = 1;
	v->a[3182] = sym_file_redirect;
	v->a[3183] = state(670);
	v->a[3184] = 1;
	v->a[3185] = aux_sym_command_repeat1;
	v->a[3186] = state(1014);
	v->a[3187] = 1;
	v->a[3188] = sym_pipeline;
	v->a[3189] = state(1157);
	v->a[3190] = 1;
	v->a[3191] = aux_sym_redirected_statement_repeat2;
	v->a[3192] = state(1901);
	v->a[3193] = 1;
	v->a[3194] = sym__statement_not_pipeline;
	v->a[3195] = state(1905);
	v->a[3196] = 1;
	v->a[3197] = sym__statements;
	v->a[3198] = actions(87);
	v->a[3199] = 2;
	small_parse_table_160(v);
}

/* EOF small_parse_table_31.c */
