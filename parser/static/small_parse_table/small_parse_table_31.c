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
	v->a[3100] = sym_file_descriptor;
	v->a[3101] = ts_builtin_sym_end;
	v->a[3102] = aux_sym_heredoc_redirect_token1;
	v->a[3103] = state(790);
	v->a[3104] = 7;
	v->a[3105] = sym_arithmetic_expansion;
	v->a[3106] = sym_brace_expression;
	v->a[3107] = sym_string;
	v->a[3108] = sym_number;
	v->a[3109] = sym_simple_expansion;
	v->a[3110] = sym_expansion;
	v->a[3111] = sym_command_substitution;
	v->a[3112] = actions(757);
	v->a[3113] = 19;
	v->a[3114] = anon_sym_PIPE;
	v->a[3115] = anon_sym_SEMI_SEMI;
	v->a[3116] = anon_sym_PIPE_AMP;
	v->a[3117] = anon_sym_AMP_AMP;
	v->a[3118] = anon_sym_PIPE_PIPE;
	v->a[3119] = anon_sym_LT;
	small_parse_table_156(v);
}

void	small_parse_table_156(t_small_parse_table_array *v)
{
	v->a[3120] = anon_sym_GT;
	v->a[3121] = anon_sym_GT_GT;
	v->a[3122] = anon_sym_AMP_GT;
	v->a[3123] = anon_sym_AMP_GT_GT;
	v->a[3124] = anon_sym_LT_AMP;
	v->a[3125] = anon_sym_GT_AMP;
	v->a[3126] = anon_sym_GT_PIPE;
	v->a[3127] = anon_sym_LT_AMP_DASH;
	v->a[3128] = anon_sym_GT_AMP_DASH;
	v->a[3129] = anon_sym_LT_LT;
	v->a[3130] = anon_sym_LT_LT_DASH;
	v->a[3131] = anon_sym_AMP;
	v->a[3132] = anon_sym_SEMI;
	v->a[3133] = 6;
	v->a[3134] = actions(3);
	v->a[3135] = 1;
	v->a[3136] = sym_comment;
	v->a[3137] = actions(1188);
	v->a[3138] = 1;
	v->a[3139] = sym_variable_name;
	small_parse_table_157(v);
}

void	small_parse_table_157(t_small_parse_table_array *v)
{
	v->a[3140] = actions(1186);
	v->a[3141] = 2;
	v->a[3142] = aux_sym__simple_variable_name_token1;
	v->a[3143] = aux_sym__multiline_variable_name_token1;
	v->a[3144] = actions(816);
	v->a[3145] = 5;
	v->a[3146] = sym_file_descriptor;
	v->a[3147] = sym_test_operator;
	v->a[3148] = sym__bare_dollar;
	v->a[3149] = sym__brace_start;
	v->a[3150] = ts_builtin_sym_end;
	v->a[3151] = actions(1184);
	v->a[3152] = 9;
	v->a[3153] = anon_sym_BANG;
	v->a[3154] = anon_sym_DASH;
	v->a[3155] = anon_sym_STAR;
	v->a[3156] = anon_sym_QMARK;
	v->a[3157] = anon_sym_DOLLAR;
	v->a[3158] = anon_sym_POUND;
	v->a[3159] = anon_sym_AT;
	small_parse_table_158(v);
}

void	small_parse_table_158(t_small_parse_table_array *v)
{
	v->a[3160] = anon_sym_0;
	v->a[3161] = anon_sym__;
	v->a[3162] = actions(810);
	v->a[3163] = 32;
	v->a[3164] = anon_sym_LPAREN;
	v->a[3165] = anon_sym_PIPE;
	v->a[3166] = anon_sym_SEMI_SEMI;
	v->a[3167] = anon_sym_PIPE_AMP;
	v->a[3168] = anon_sym_AMP_AMP;
	v->a[3169] = anon_sym_PIPE_PIPE;
	v->a[3170] = anon_sym_LT;
	v->a[3171] = anon_sym_GT;
	v->a[3172] = anon_sym_GT_GT;
	v->a[3173] = anon_sym_AMP_GT;
	v->a[3174] = anon_sym_AMP_GT_GT;
	v->a[3175] = anon_sym_LT_AMP;
	v->a[3176] = anon_sym_GT_AMP;
	v->a[3177] = anon_sym_GT_PIPE;
	v->a[3178] = anon_sym_LT_AMP_DASH;
	v->a[3179] = anon_sym_GT_AMP_DASH;
	small_parse_table_159(v);
}

void	small_parse_table_159(t_small_parse_table_array *v)
{
	v->a[3180] = anon_sym_LT_LT;
	v->a[3181] = anon_sym_LT_LT_DASH;
	v->a[3182] = aux_sym_heredoc_redirect_token1;
	v->a[3183] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3184] = anon_sym_AMP;
	v->a[3185] = sym__special_character;
	v->a[3186] = anon_sym_DQUOTE;
	v->a[3187] = sym_raw_string;
	v->a[3188] = aux_sym_number_token1;
	v->a[3189] = aux_sym_number_token2;
	v->a[3190] = anon_sym_DOLLAR_LBRACE;
	v->a[3191] = anon_sym_DOLLAR_LPAREN;
	v->a[3192] = anon_sym_BQUOTE;
	v->a[3193] = anon_sym_DOLLAR_BQUOTE;
	v->a[3194] = sym_word;
	v->a[3195] = anon_sym_SEMI;
	v->a[3196] = 6;
	v->a[3197] = actions(3);
	v->a[3198] = 1;
	v->a[3199] = sym_comment;
	small_parse_table_160(v);
}

/* EOF small_parse_table_31.c */
