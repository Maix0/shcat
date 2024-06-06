/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_33.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_165(t_small_parse_table_array *v)
{
	v->a[3300] = 1;
	v->a[3301] = aux_sym__literal_repeat1;
	v->a[3302] = actions(1282);
	v->a[3303] = 2;
	v->a[3304] = sym_raw_string;
	v->a[3305] = sym_word;
	v->a[3306] = state(297);
	v->a[3307] = 2;
	v->a[3308] = sym_concatenation;
	v->a[3309] = aux_sym_for_statement_repeat1;
	v->a[3310] = actions(1287);
	v->a[3311] = 3;
	v->a[3312] = sym_file_descriptor;
	v->a[3313] = sym_variable_name;
	v->a[3314] = aux_sym_heredoc_redirect_token1;
	v->a[3315] = state(577);
	v->a[3316] = 7;
	v->a[3317] = sym_arithmetic_expansion;
	v->a[3318] = sym_brace_expression;
	v->a[3319] = sym_string;
	small_parse_table_166(v);
}

void	small_parse_table_166(t_small_parse_table_array *v)
{
	v->a[3320] = sym_number;
	v->a[3321] = sym_simple_expansion;
	v->a[3322] = sym_expansion;
	v->a[3323] = sym_command_substitution;
	v->a[3324] = actions(1285);
	v->a[3325] = 22;
	v->a[3326] = anon_sym_esac;
	v->a[3327] = anon_sym_PIPE;
	v->a[3328] = anon_sym_SEMI_SEMI;
	v->a[3329] = anon_sym_SEMI_AMP;
	v->a[3330] = anon_sym_SEMI_SEMI_AMP;
	v->a[3331] = anon_sym_PIPE_AMP;
	v->a[3332] = anon_sym_AMP_AMP;
	v->a[3333] = anon_sym_PIPE_PIPE;
	v->a[3334] = anon_sym_LT;
	v->a[3335] = anon_sym_GT;
	v->a[3336] = anon_sym_GT_GT;
	v->a[3337] = anon_sym_AMP_GT;
	v->a[3338] = anon_sym_AMP_GT_GT;
	v->a[3339] = anon_sym_LT_AMP;
	small_parse_table_167(v);
}

void	small_parse_table_167(t_small_parse_table_array *v)
{
	v->a[3340] = anon_sym_GT_AMP;
	v->a[3341] = anon_sym_GT_PIPE;
	v->a[3342] = anon_sym_LT_AMP_DASH;
	v->a[3343] = anon_sym_GT_AMP_DASH;
	v->a[3344] = anon_sym_LT_LT;
	v->a[3345] = anon_sym_LT_LT_DASH;
	v->a[3346] = anon_sym_AMP;
	v->a[3347] = anon_sym_SEMI;
	v->a[3348] = 6;
	v->a[3349] = actions(3);
	v->a[3350] = 1;
	v->a[3351] = sym_comment;
	v->a[3352] = actions(1329);
	v->a[3353] = 1;
	v->a[3354] = sym_variable_name;
	v->a[3355] = actions(1327);
	v->a[3356] = 2;
	v->a[3357] = aux_sym__simple_variable_name_token1;
	v->a[3358] = aux_sym__multiline_variable_name_token1;
	v->a[3359] = actions(828);
	small_parse_table_168(v);
}

void	small_parse_table_168(t_small_parse_table_array *v)
{
	v->a[3360] = 3;
	v->a[3361] = sym_file_descriptor;
	v->a[3362] = sym_test_operator;
	v->a[3363] = sym__brace_start;
	v->a[3364] = actions(1325);
	v->a[3365] = 9;
	v->a[3366] = anon_sym_BANG;
	v->a[3367] = anon_sym_DASH;
	v->a[3368] = anon_sym_STAR;
	v->a[3369] = anon_sym_QMARK;
	v->a[3370] = anon_sym_DOLLAR;
	v->a[3371] = anon_sym_POUND;
	v->a[3372] = anon_sym_AT;
	v->a[3373] = anon_sym_0;
	v->a[3374] = anon_sym__;
	v->a[3375] = actions(826);
	v->a[3376] = 34;
	v->a[3377] = anon_sym_esac;
	v->a[3378] = anon_sym_PIPE;
	v->a[3379] = anon_sym_SEMI_SEMI;
	small_parse_table_169(v);
}

void	small_parse_table_169(t_small_parse_table_array *v)
{
	v->a[3380] = anon_sym_SEMI_AMP;
	v->a[3381] = anon_sym_SEMI_SEMI_AMP;
	v->a[3382] = anon_sym_PIPE_AMP;
	v->a[3383] = anon_sym_AMP_AMP;
	v->a[3384] = anon_sym_PIPE_PIPE;
	v->a[3385] = anon_sym_LT;
	v->a[3386] = anon_sym_GT;
	v->a[3387] = anon_sym_GT_GT;
	v->a[3388] = anon_sym_AMP_GT;
	v->a[3389] = anon_sym_AMP_GT_GT;
	v->a[3390] = anon_sym_LT_AMP;
	v->a[3391] = anon_sym_GT_AMP;
	v->a[3392] = anon_sym_GT_PIPE;
	v->a[3393] = anon_sym_LT_AMP_DASH;
	v->a[3394] = anon_sym_GT_AMP_DASH;
	v->a[3395] = anon_sym_LT_LT;
	v->a[3396] = anon_sym_LT_LT_DASH;
	v->a[3397] = aux_sym_heredoc_redirect_token1;
	v->a[3398] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3399] = anon_sym_AMP;
	small_parse_table_170(v);
}

/* EOF small_parse_table_33.c */
