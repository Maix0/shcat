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
	v->a[3300] = actions(95);
	v->a[3301] = 1;
	v->a[3302] = anon_sym_BANG;
	v->a[3303] = actions(99);
	v->a[3304] = 1;
	v->a[3305] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3306] = actions(101);
	v->a[3307] = 1;
	v->a[3308] = anon_sym_DOLLAR;
	v->a[3309] = actions(103);
	v->a[3310] = 1;
	v->a[3311] = anon_sym_DQUOTE;
	v->a[3312] = actions(107);
	v->a[3313] = 1;
	v->a[3314] = anon_sym_DOLLAR_LBRACE;
	v->a[3315] = actions(109);
	v->a[3316] = 1;
	v->a[3317] = anon_sym_DOLLAR_LPAREN;
	v->a[3318] = actions(111);
	v->a[3319] = 1;
	small_parse_table_166(v);
}

void	small_parse_table_166(t_small_parse_table_array *v)
{
	v->a[3320] = anon_sym_BQUOTE;
	v->a[3321] = actions(113);
	v->a[3322] = 1;
	v->a[3323] = sym_variable_name;
	v->a[3324] = actions(190);
	v->a[3325] = 1;
	v->a[3326] = anon_sym_LF;
	v->a[3327] = state(12);
	v->a[3328] = 1;
	v->a[3329] = aux_sym__case_item_last_repeat2;
	v->a[3330] = state(104);
	v->a[3331] = 1;
	v->a[3332] = aux_sym__statements_repeat1;
	v->a[3333] = state(170);
	v->a[3334] = 1;
	v->a[3335] = sym_command_name;
	v->a[3336] = state(177);
	v->a[3337] = 1;
	v->a[3338] = sym_variable_assignment;
	v->a[3339] = state(408);
	small_parse_table_167(v);
}

void	small_parse_table_167(t_small_parse_table_array *v)
{
	v->a[3340] = 1;
	v->a[3341] = aux_sym_command_repeat1;
	v->a[3342] = state(541);
	v->a[3343] = 1;
	v->a[3344] = sym_file_redirect;
	v->a[3345] = state(546);
	v->a[3346] = 1;
	v->a[3347] = sym_concatenation;
	v->a[3348] = state(913);
	v->a[3349] = 1;
	v->a[3350] = sym_pipeline;
	v->a[3351] = state(990);
	v->a[3352] = 1;
	v->a[3353] = aux_sym_redirected_statement_repeat2;
	v->a[3354] = state(1564);
	v->a[3355] = 1;
	v->a[3356] = sym__statement_not_pipeline;
	v->a[3357] = state(1574);
	v->a[3358] = 1;
	v->a[3359] = sym__statements;
	small_parse_table_168(v);
}

void	small_parse_table_168(t_small_parse_table_array *v)
{
	v->a[3360] = actions(83);
	v->a[3361] = 2;
	v->a[3362] = anon_sym_while;
	v->a[3363] = anon_sym_until;
	v->a[3364] = actions(105);
	v->a[3365] = 2;
	v->a[3366] = sym_raw_string;
	v->a[3367] = sym_number;
	v->a[3368] = actions(97);
	v->a[3369] = 3;
	v->a[3370] = anon_sym_LT;
	v->a[3371] = anon_sym_GT;
	v->a[3372] = anon_sym_GT_GT;
	v->a[3373] = state(276);
	v->a[3374] = 5;
	v->a[3375] = sym_arithmetic_expansion;
	v->a[3376] = sym_string;
	v->a[3377] = sym_simple_expansion;
	v->a[3378] = sym_expansion;
	v->a[3379] = sym_command_substitution;
	small_parse_table_169(v);
}

void	small_parse_table_169(t_small_parse_table_array *v)
{
	v->a[3380] = state(867);
	v->a[3381] = 12;
	v->a[3382] = sym_redirected_statement;
	v->a[3383] = sym_for_statement;
	v->a[3384] = sym_while_statement;
	v->a[3385] = sym_if_statement;
	v->a[3386] = sym_case_statement;
	v->a[3387] = sym_function_definition;
	v->a[3388] = sym_compound_statement;
	v->a[3389] = sym_subshell;
	v->a[3390] = sym_list;
	v->a[3391] = sym_negated_command;
	v->a[3392] = sym_command;
	v->a[3393] = sym__variable_assignments;
	v->a[3394] = 32;
	v->a[3395] = actions(3);
	v->a[3396] = 1;
	v->a[3397] = sym_comment;
	v->a[3398] = actions(79);
	v->a[3399] = 1;
	small_parse_table_170(v);
}

/* EOF small_parse_table_33.c */
