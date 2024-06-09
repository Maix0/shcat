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
	v->a[3300] = sym_file_descriptor;
	v->a[3301] = actions(83);
	v->a[3302] = 1;
	v->a[3303] = sym_variable_name;
	v->a[3304] = actions(141);
	v->a[3305] = 1;
	v->a[3306] = anon_sym_LF;
	v->a[3307] = state(131);
	v->a[3308] = 1;
	v->a[3309] = aux_sym__statements_repeat1;
	v->a[3310] = state(190);
	v->a[3311] = 1;
	v->a[3312] = sym_command_name;
	v->a[3313] = state(314);
	v->a[3314] = 1;
	v->a[3315] = sym_variable_assignment;
	v->a[3316] = state(582);
	v->a[3317] = 1;
	v->a[3318] = sym_concatenation;
	v->a[3319] = state(587);
	small_parse_table_166(v);
}

void	small_parse_table_166(t_small_parse_table_array *v)
{
	v->a[3320] = 1;
	v->a[3321] = aux_sym_command_repeat1;
	v->a[3322] = state(689);
	v->a[3323] = 1;
	v->a[3324] = aux_sym__case_item_last_repeat2;
	v->a[3325] = state(718);
	v->a[3326] = 1;
	v->a[3327] = sym_file_redirect;
	v->a[3328] = state(1211);
	v->a[3329] = 1;
	v->a[3330] = sym_pipeline;
	v->a[3331] = state(1213);
	v->a[3332] = 1;
	v->a[3333] = aux_sym_redirected_statement_repeat2;
	v->a[3334] = state(2035);
	v->a[3335] = 1;
	v->a[3336] = sym__statement_not_pipeline;
	v->a[3337] = state(2078);
	v->a[3338] = 1;
	v->a[3339] = sym__statements;
	small_parse_table_167(v);
}

void	small_parse_table_167(t_small_parse_table_array *v)
{
	v->a[3340] = actions(11);
	v->a[3341] = 2;
	v->a[3342] = anon_sym_while;
	v->a[3343] = anon_sym_until;
	v->a[3344] = actions(61);
	v->a[3345] = 2;
	v->a[3346] = anon_sym_LT_AMP_DASH;
	v->a[3347] = anon_sym_GT_AMP_DASH;
	v->a[3348] = state(397);
	v->a[3349] = 6;
	v->a[3350] = sym_arithmetic_expansion;
	v->a[3351] = sym_string;
	v->a[3352] = sym_number;
	v->a[3353] = sym_simple_expansion;
	v->a[3354] = sym_expansion;
	v->a[3355] = sym_command_substitution;
	v->a[3356] = actions(59);
	v->a[3357] = 8;
	v->a[3358] = anon_sym_LT;
	v->a[3359] = anon_sym_GT;
	small_parse_table_168(v);
}

void	small_parse_table_168(t_small_parse_table_array *v)
{
	v->a[3360] = anon_sym_GT_GT;
	v->a[3361] = anon_sym_AMP_GT;
	v->a[3362] = anon_sym_AMP_GT_GT;
	v->a[3363] = anon_sym_LT_AMP;
	v->a[3364] = anon_sym_GT_AMP;
	v->a[3365] = anon_sym_GT_PIPE;
	v->a[3366] = state(1140);
	v->a[3367] = 12;
	v->a[3368] = sym_redirected_statement;
	v->a[3369] = sym_for_statement;
	v->a[3370] = sym_while_statement;
	v->a[3371] = sym_if_statement;
	v->a[3372] = sym_case_statement;
	v->a[3373] = sym_function_definition;
	v->a[3374] = sym_compound_statement;
	v->a[3375] = sym_subshell;
	v->a[3376] = sym_list;
	v->a[3377] = sym_negated_command;
	v->a[3378] = sym_command;
	v->a[3379] = sym_variable_assignments;
	small_parse_table_169(v);
}

void	small_parse_table_169(t_small_parse_table_array *v)
{
	v->a[3380] = 36;
	v->a[3381] = actions(3);
	v->a[3382] = 1;
	v->a[3383] = sym_comment;
	v->a[3384] = actions(9);
	v->a[3385] = 1;
	v->a[3386] = anon_sym_for;
	v->a[3387] = actions(13);
	v->a[3388] = 1;
	v->a[3389] = anon_sym_if;
	v->a[3390] = actions(15);
	v->a[3391] = 1;
	v->a[3392] = anon_sym_case;
	v->a[3393] = actions(17);
	v->a[3394] = 1;
	v->a[3395] = anon_sym_LPAREN;
	v->a[3396] = actions(19);
	v->a[3397] = 1;
	v->a[3398] = anon_sym_LBRACE;
	v->a[3399] = actions(49);
	small_parse_table_170(v);
}

/* EOF small_parse_table_33.c */
