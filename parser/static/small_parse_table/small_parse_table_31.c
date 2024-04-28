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
	v->a[3100] = actions(1579);
	v->a[3101] = 2;
	v->a[3102] = anon_sym_LPAREN_LPAREN;
	v->a[3103] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3104] = actions(1581);
	v->a[3105] = 2;
	v->a[3106] = anon_sym_EQ_EQ;
	v->a[3107] = anon_sym_EQ_TILDE;
	v->a[3108] = actions(1605);
	v->a[3109] = 2;
	v->a[3110] = anon_sym_LT_LPAREN;
	v->a[3111] = anon_sym_GT_LPAREN;
	v->a[3112] = actions(1577);
	v->a[3113] = 3;
	v->a[3114] = sym_raw_string;
	v->a[3115] = sym_ansi_c_string;
	v->a[3116] = sym_word;
	v->a[3117] = actions(1627);
	v->a[3118] = 3;
	v->a[3119] = sym_file_descriptor;
	small_parse_table_156(v);
}

void	small_parse_table_156(t_small_parse_table_array *v)
{
	v->a[3120] = ts_builtin_sym_end;
	v->a[3121] = aux_sym_heredoc_redirect_token1;
	v->a[3122] = state(1093);
	v->a[3123] = 9;
	v->a[3124] = sym_arithmetic_expansion;
	v->a[3125] = sym_brace_expression;
	v->a[3126] = sym_string;
	v->a[3127] = sym_translated_string;
	v->a[3128] = sym_number;
	v->a[3129] = sym_simple_expansion;
	v->a[3130] = sym_expansion;
	v->a[3131] = sym_command_substitution;
	v->a[3132] = sym_process_substitution;
	v->a[3133] = actions(1625);
	v->a[3134] = 19;
	v->a[3135] = anon_sym_SEMI;
	v->a[3136] = anon_sym_PIPE_PIPE;
	v->a[3137] = anon_sym_AMP_AMP;
	v->a[3138] = anon_sym_PIPE;
	v->a[3139] = anon_sym_AMP;
	small_parse_table_157(v);
}

void	small_parse_table_157(t_small_parse_table_array *v)
{
	v->a[3140] = anon_sym_LT;
	v->a[3141] = anon_sym_GT;
	v->a[3142] = anon_sym_LT_LT;
	v->a[3143] = anon_sym_GT_GT;
	v->a[3144] = anon_sym_SEMI_SEMI;
	v->a[3145] = anon_sym_PIPE_AMP;
	v->a[3146] = anon_sym_AMP_GT;
	v->a[3147] = anon_sym_AMP_GT_GT;
	v->a[3148] = anon_sym_LT_AMP;
	v->a[3149] = anon_sym_GT_AMP;
	v->a[3150] = anon_sym_GT_PIPE;
	v->a[3151] = anon_sym_LT_AMP_DASH;
	v->a[3152] = anon_sym_GT_AMP_DASH;
	v->a[3153] = anon_sym_LT_LT_DASH;
	v->a[3154] = 8;
	v->a[3155] = actions(3);
	v->a[3156] = 1;
	v->a[3157] = sym_comment;
	v->a[3158] = actions(1819);
	v->a[3159] = 1;
	small_parse_table_158(v);
}

void	small_parse_table_158(t_small_parse_table_array *v)
{
	v->a[3160] = anon_sym_DQUOTE;
	v->a[3161] = actions(1823);
	v->a[3162] = 1;
	v->a[3163] = sym_variable_name;
	v->a[3164] = state(1125);
	v->a[3165] = 1;
	v->a[3166] = sym_string;
	v->a[3167] = actions(1821);
	v->a[3168] = 2;
	v->a[3169] = aux_sym__simple_variable_name_token1;
	v->a[3170] = aux_sym__multiline_variable_name_token1;
	v->a[3171] = actions(1235);
	v->a[3172] = 5;
	v->a[3173] = sym_file_descriptor;
	v->a[3174] = sym_test_operator;
	v->a[3175] = sym__bare_dollar;
	v->a[3176] = sym__brace_start;
	v->a[3177] = ts_builtin_sym_end;
	v->a[3178] = actions(1817);
	v->a[3179] = 9;
	small_parse_table_159(v);
}

void	small_parse_table_159(t_small_parse_table_array *v)
{
	v->a[3180] = anon_sym_DASH;
	v->a[3181] = anon_sym_STAR;
	v->a[3182] = anon_sym_BANG;
	v->a[3183] = anon_sym_QMARK;
	v->a[3184] = anon_sym_DOLLAR;
	v->a[3185] = anon_sym_POUND;
	v->a[3186] = anon_sym_AT2;
	v->a[3187] = anon_sym_0;
	v->a[3188] = anon_sym__;
	v->a[3189] = actions(1227);
	v->a[3190] = 39;
	v->a[3191] = anon_sym_LPAREN_LPAREN;
	v->a[3192] = anon_sym_SEMI;
	v->a[3193] = anon_sym_PIPE_PIPE;
	v->a[3194] = anon_sym_AMP_AMP;
	v->a[3195] = anon_sym_PIPE;
	v->a[3196] = anon_sym_AMP;
	v->a[3197] = anon_sym_EQ_EQ;
	v->a[3198] = anon_sym_LT;
	v->a[3199] = anon_sym_GT;
	small_parse_table_160(v);
}

/* EOF small_parse_table_31.c */
