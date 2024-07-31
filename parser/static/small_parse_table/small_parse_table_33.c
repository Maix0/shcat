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
	v->a[3300] = anon_sym_DOLLAR;
	v->a[3301] = actions(57);
	v->a[3302] = 1;
	v->a[3303] = anon_sym_DQUOTE;
	v->a[3304] = actions(61);
	v->a[3305] = 1;
	v->a[3306] = anon_sym_DOLLAR_LBRACE;
	v->a[3307] = actions(63);
	v->a[3308] = 1;
	v->a[3309] = anon_sym_DOLLAR_LPAREN;
	v->a[3310] = actions(65);
	v->a[3311] = 1;
	v->a[3312] = anon_sym_BQUOTE;
	v->a[3313] = actions(67);
	v->a[3314] = 1;
	v->a[3315] = sym_variable_name;
	v->a[3316] = actions(115);
	v->a[3317] = 1;
	v->a[3318] = anon_sym_LF;
	v->a[3319] = state(117);
	small_parse_table_166(v);
}

void	small_parse_table_166(t_small_parse_table_array *v)
{
	v->a[3320] = 1;
	v->a[3321] = aux_sym__statements_repeat1;
	v->a[3322] = state(271);
	v->a[3323] = 1;
	v->a[3324] = sym_command_name;
	v->a[3325] = state(288);
	v->a[3326] = 1;
	v->a[3327] = sym_variable_assignment;
	v->a[3328] = state(482);
	v->a[3329] = 1;
	v->a[3330] = aux_sym_command_repeat1;
	v->a[3331] = state(511);
	v->a[3332] = 1;
	v->a[3333] = aux_sym__case_item_last_repeat2;
	v->a[3334] = state(600);
	v->a[3335] = 1;
	v->a[3336] = sym_file_redirect;
	v->a[3337] = state(602);
	v->a[3338] = 1;
	v->a[3339] = sym_concatenation;
	small_parse_table_167(v);
}

void	small_parse_table_167(t_small_parse_table_array *v)
{
	v->a[3340] = state(1014);
	v->a[3341] = 1;
	v->a[3342] = sym_pipeline;
	v->a[3343] = state(1068);
	v->a[3344] = 1;
	v->a[3345] = aux_sym_redirected_statement_repeat2;
	v->a[3346] = state(1609);
	v->a[3347] = 1;
	v->a[3348] = sym__statement_not_pipeline;
	v->a[3349] = state(1748);
	v->a[3350] = 1;
	v->a[3351] = sym__statements;
	v->a[3352] = actions(11);
	v->a[3353] = 2;
	v->a[3354] = anon_sym_while;
	v->a[3355] = anon_sym_until;
	v->a[3356] = actions(59);
	v->a[3357] = 2;
	v->a[3358] = sym_raw_string;
	v->a[3359] = sym_number;
	small_parse_table_168(v);
}

void	small_parse_table_168(t_small_parse_table_array *v)
{
	v->a[3360] = state(425);
	v->a[3361] = 5;
	v->a[3362] = sym_arithmetic_expansion;
	v->a[3363] = sym_string;
	v->a[3364] = sym_simple_expansion;
	v->a[3365] = sym_expansion;
	v->a[3366] = sym_command_substitution;
	v->a[3367] = actions(51);
	v->a[3368] = 7;
	v->a[3369] = anon_sym_LT;
	v->a[3370] = anon_sym_GT;
	v->a[3371] = anon_sym_GT_GT;
	v->a[3372] = anon_sym_LT_AMP;
	v->a[3373] = anon_sym_GT_AMP;
	v->a[3374] = anon_sym_GT_PIPE;
	v->a[3375] = anon_sym_LT_GT;
	v->a[3376] = state(936);
	v->a[3377] = 12;
	v->a[3378] = sym_redirected_statement;
	v->a[3379] = sym_for_statement;
	small_parse_table_169(v);
}

void	small_parse_table_169(t_small_parse_table_array *v)
{
	v->a[3380] = sym_while_statement;
	v->a[3381] = sym_if_statement;
	v->a[3382] = sym_case_statement;
	v->a[3383] = sym_function_definition;
	v->a[3384] = sym_compound_statement;
	v->a[3385] = sym_subshell;
	v->a[3386] = sym_list;
	v->a[3387] = sym_negated_command;
	v->a[3388] = sym_command;
	v->a[3389] = sym__variable_assignments;
	v->a[3390] = 32;
	v->a[3391] = actions(3);
	v->a[3392] = 1;
	v->a[3393] = sym_comment;
	v->a[3394] = actions(79);
	v->a[3395] = 1;
	v->a[3396] = sym_word;
	v->a[3397] = actions(81);
	v->a[3398] = 1;
	v->a[3399] = anon_sym_for;
	small_parse_table_170(v);
}

/* EOF small_parse_table_33.c */
