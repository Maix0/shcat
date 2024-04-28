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
	v->a[3300] = 3;
	v->a[3301] = sym_variable_assignment;
	v->a[3302] = sym_concatenation;
	v->a[3303] = aux_sym_declaration_command_repeat1;
	v->a[3304] = state(1171);
	v->a[3305] = 9;
	v->a[3306] = sym_arithmetic_expansion;
	v->a[3307] = sym_brace_expression;
	v->a[3308] = sym_string;
	v->a[3309] = sym_translated_string;
	v->a[3310] = sym_number;
	v->a[3311] = sym_simple_expansion;
	v->a[3312] = sym_expansion;
	v->a[3313] = sym_command_substitution;
	v->a[3314] = sym_process_substitution;
	v->a[3315] = actions(1797);
	v->a[3316] = 21;
	v->a[3317] = anon_sym_SEMI;
	v->a[3318] = anon_sym_PIPE_PIPE;
	v->a[3319] = anon_sym_AMP_AMP;
	small_parse_table_166(v);
}

void	small_parse_table_166(t_small_parse_table_array *v)
{
	v->a[3320] = anon_sym_PIPE;
	v->a[3321] = anon_sym_AMP;
	v->a[3322] = anon_sym_LT;
	v->a[3323] = anon_sym_GT;
	v->a[3324] = anon_sym_LT_LT;
	v->a[3325] = anon_sym_GT_GT;
	v->a[3326] = anon_sym_SEMI_SEMI;
	v->a[3327] = anon_sym_SEMI_AMP;
	v->a[3328] = anon_sym_SEMI_SEMI_AMP;
	v->a[3329] = anon_sym_PIPE_AMP;
	v->a[3330] = anon_sym_AMP_GT;
	v->a[3331] = anon_sym_AMP_GT_GT;
	v->a[3332] = anon_sym_LT_AMP;
	v->a[3333] = anon_sym_GT_AMP;
	v->a[3334] = anon_sym_GT_PIPE;
	v->a[3335] = anon_sym_LT_AMP_DASH;
	v->a[3336] = anon_sym_GT_AMP_DASH;
	v->a[3337] = anon_sym_LT_LT_DASH;
	v->a[3338] = 26;
	v->a[3339] = actions(3);
	small_parse_table_167(v);
}

void	small_parse_table_167(t_small_parse_table_array *v)
{
	v->a[3340] = 1;
	v->a[3341] = sym_comment;
	v->a[3342] = actions(1583);
	v->a[3343] = 1;
	v->a[3344] = anon_sym_LT_LT_LT;
	v->a[3345] = actions(1585);
	v->a[3346] = 1;
	v->a[3347] = anon_sym_DOLLAR_LBRACK;
	v->a[3348] = actions(1587);
	v->a[3349] = 1;
	v->a[3350] = anon_sym_DOLLAR;
	v->a[3351] = actions(1589);
	v->a[3352] = 1;
	v->a[3353] = sym__special_character;
	v->a[3354] = actions(1591);
	v->a[3355] = 1;
	v->a[3356] = anon_sym_DQUOTE;
	v->a[3357] = actions(1593);
	v->a[3358] = 1;
	v->a[3359] = aux_sym_number_token1;
	small_parse_table_168(v);
}

void	small_parse_table_168(t_small_parse_table_array *v)
{
	v->a[3360] = actions(1595);
	v->a[3361] = 1;
	v->a[3362] = aux_sym_number_token2;
	v->a[3363] = actions(1597);
	v->a[3364] = 1;
	v->a[3365] = anon_sym_DOLLAR_LBRACE;
	v->a[3366] = actions(1599);
	v->a[3367] = 1;
	v->a[3368] = anon_sym_DOLLAR_LPAREN;
	v->a[3369] = actions(1601);
	v->a[3370] = 1;
	v->a[3371] = anon_sym_BQUOTE;
	v->a[3372] = actions(1603);
	v->a[3373] = 1;
	v->a[3374] = anon_sym_DOLLAR_BQUOTE;
	v->a[3375] = actions(1607);
	v->a[3376] = 1;
	v->a[3377] = sym_test_operator;
	v->a[3378] = actions(1609);
	v->a[3379] = 1;
	small_parse_table_169(v);
}

void	small_parse_table_169(t_small_parse_table_array *v)
{
	v->a[3380] = sym__bare_dollar;
	v->a[3381] = actions(1611);
	v->a[3382] = 1;
	v->a[3383] = sym__brace_start;
	v->a[3384] = state(569);
	v->a[3385] = 1;
	v->a[3386] = aux_sym_command_repeat2;
	v->a[3387] = state(1431);
	v->a[3388] = 1;
	v->a[3389] = aux_sym__literal_repeat1;
	v->a[3390] = state(1521);
	v->a[3391] = 1;
	v->a[3392] = sym_concatenation;
	v->a[3393] = state(1552);
	v->a[3394] = 1;
	v->a[3395] = sym_herestring_redirect;
	v->a[3396] = actions(1579);
	v->a[3397] = 2;
	v->a[3398] = anon_sym_LPAREN_LPAREN;
	v->a[3399] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_170(v);
}

/* EOF small_parse_table_33.c */
