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
	v->a[3300] = sym_file_redirect;
	v->a[3301] = state(1141);
	v->a[3302] = 1;
	v->a[3303] = sym_pipeline;
	v->a[3304] = state(1198);
	v->a[3305] = 1;
	v->a[3306] = aux_sym_redirected_statement_repeat2;
	v->a[3307] = state(1901);
	v->a[3308] = 1;
	v->a[3309] = sym__statement_not_pipeline;
	v->a[3310] = state(2030);
	v->a[3311] = 1;
	v->a[3312] = sym__statements;
	v->a[3313] = actions(11);
	v->a[3314] = 2;
	v->a[3315] = anon_sym_while;
	v->a[3316] = anon_sym_until;
	v->a[3317] = actions(61);
	v->a[3318] = 2;
	v->a[3319] = sym_raw_string;
	small_parse_table_166(v);
}

void	small_parse_table_166(t_small_parse_table_array *v)
{
	v->a[3320] = sym_number;
	v->a[3321] = state(455);
	v->a[3322] = 5;
	v->a[3323] = sym_arithmetic_expansion;
	v->a[3324] = sym_string;
	v->a[3325] = sym_simple_expansion;
	v->a[3326] = sym_expansion;
	v->a[3327] = sym_command_substitution;
	v->a[3328] = actions(53);
	v->a[3329] = 7;
	v->a[3330] = anon_sym_LT;
	v->a[3331] = anon_sym_GT;
	v->a[3332] = anon_sym_GT_GT;
	v->a[3333] = anon_sym_LT_AMP;
	v->a[3334] = anon_sym_GT_AMP;
	v->a[3335] = anon_sym_GT_PIPE;
	v->a[3336] = anon_sym_LT_GT;
	v->a[3337] = state(1091);
	v->a[3338] = 12;
	v->a[3339] = sym_redirected_statement;
	small_parse_table_167(v);
}

void	small_parse_table_167(t_small_parse_table_array *v)
{
	v->a[3340] = sym_for_statement;
	v->a[3341] = sym_while_statement;
	v->a[3342] = sym_if_statement;
	v->a[3343] = sym_case_statement;
	v->a[3344] = sym_function_definition;
	v->a[3345] = sym_compound_statement;
	v->a[3346] = sym_subshell;
	v->a[3347] = sym_list;
	v->a[3348] = sym_negated_command;
	v->a[3349] = sym_command;
	v->a[3350] = sym__variable_assignments;
	v->a[3351] = 33;
	v->a[3352] = actions(3);
	v->a[3353] = 1;
	v->a[3354] = sym_comment;
	v->a[3355] = actions(87);
	v->a[3356] = 1;
	v->a[3357] = sym_word;
	v->a[3358] = actions(89);
	v->a[3359] = 1;
	small_parse_table_168(v);
}

void	small_parse_table_168(t_small_parse_table_array *v)
{
	v->a[3360] = anon_sym_for;
	v->a[3361] = actions(93);
	v->a[3362] = 1;
	v->a[3363] = anon_sym_if;
	v->a[3364] = actions(95);
	v->a[3365] = 1;
	v->a[3366] = anon_sym_case;
	v->a[3367] = actions(97);
	v->a[3368] = 1;
	v->a[3369] = anon_sym_LPAREN;
	v->a[3370] = actions(101);
	v->a[3371] = 1;
	v->a[3372] = anon_sym_LBRACE;
	v->a[3373] = actions(103);
	v->a[3374] = 1;
	v->a[3375] = anon_sym_BANG;
	v->a[3376] = actions(107);
	v->a[3377] = 1;
	v->a[3378] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3379] = actions(109);
	small_parse_table_169(v);
}

void	small_parse_table_169(t_small_parse_table_array *v)
{
	v->a[3380] = 1;
	v->a[3381] = anon_sym_DOLLAR;
	v->a[3382] = actions(111);
	v->a[3383] = 1;
	v->a[3384] = anon_sym_DQUOTE;
	v->a[3385] = actions(115);
	v->a[3386] = 1;
	v->a[3387] = anon_sym_DOLLAR_LBRACE;
	v->a[3388] = actions(117);
	v->a[3389] = 1;
	v->a[3390] = anon_sym_DOLLAR_LPAREN;
	v->a[3391] = actions(119);
	v->a[3392] = 1;
	v->a[3393] = anon_sym_BQUOTE;
	v->a[3394] = actions(121);
	v->a[3395] = 1;
	v->a[3396] = sym_file_descriptor;
	v->a[3397] = actions(123);
	v->a[3398] = 1;
	v->a[3399] = sym_variable_name;
	small_parse_table_170(v);
}

/* EOF small_parse_table_33.c */
