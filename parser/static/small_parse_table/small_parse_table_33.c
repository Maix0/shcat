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
	v->a[3301] = sym_file_redirect;
	v->a[3302] = state(733);
	v->a[3303] = 1;
	v->a[3304] = aux_sym_command_repeat1;
	v->a[3305] = state(1223);
	v->a[3306] = 1;
	v->a[3307] = sym_pipeline;
	v->a[3308] = state(1307);
	v->a[3309] = 1;
	v->a[3310] = aux_sym_redirected_statement_repeat2;
	v->a[3311] = state(2117);
	v->a[3312] = 1;
	v->a[3313] = sym__statement_not_pipeline;
	v->a[3314] = actions(11);
	v->a[3315] = 2;
	v->a[3316] = anon_sym_while;
	v->a[3317] = anon_sym_until;
	v->a[3318] = actions(57);
	v->a[3319] = 2;
	small_parse_table_166(v);
}

void	small_parse_table_166(t_small_parse_table_array *v)
{
	v->a[3320] = anon_sym_LT_AMP_DASH;
	v->a[3321] = anon_sym_GT_AMP_DASH;
	v->a[3322] = actions(65);
	v->a[3323] = 2;
	v->a[3324] = sym_raw_string;
	v->a[3325] = sym_number;
	v->a[3326] = actions(202);
	v->a[3327] = 3;
	v->a[3328] = anon_sym_fi;
	v->a[3329] = anon_sym_elif;
	v->a[3330] = anon_sym_else;
	v->a[3331] = state(420);
	v->a[3332] = 5;
	v->a[3333] = sym_arithmetic_expansion;
	v->a[3334] = sym_string;
	v->a[3335] = sym_simple_expansion;
	v->a[3336] = sym_expansion;
	v->a[3337] = sym_command_substitution;
	v->a[3338] = actions(55);
	v->a[3339] = 8;
	small_parse_table_167(v);
}

void	small_parse_table_167(t_small_parse_table_array *v)
{
	v->a[3340] = anon_sym_LT;
	v->a[3341] = anon_sym_GT;
	v->a[3342] = anon_sym_GT_GT;
	v->a[3343] = anon_sym_AMP_GT;
	v->a[3344] = anon_sym_AMP_GT_GT;
	v->a[3345] = anon_sym_LT_AMP;
	v->a[3346] = anon_sym_GT_AMP;
	v->a[3347] = anon_sym_GT_PIPE;
	v->a[3348] = state(1140);
	v->a[3349] = 12;
	v->a[3350] = sym_redirected_statement;
	v->a[3351] = sym_for_statement;
	v->a[3352] = sym_while_statement;
	v->a[3353] = sym_if_statement;
	v->a[3354] = sym_case_statement;
	v->a[3355] = sym_function_definition;
	v->a[3356] = sym_compound_statement;
	v->a[3357] = sym_subshell;
	v->a[3358] = sym_list;
	v->a[3359] = sym_negated_command;
	small_parse_table_168(v);
}

void	small_parse_table_168(t_small_parse_table_array *v)
{
	v->a[3360] = sym_command;
	v->a[3361] = sym__variable_assignments;
	v->a[3362] = 34;
	v->a[3363] = actions(3);
	v->a[3364] = 1;
	v->a[3365] = sym_comment;
	v->a[3366] = actions(87);
	v->a[3367] = 1;
	v->a[3368] = sym_word;
	v->a[3369] = actions(89);
	v->a[3370] = 1;
	v->a[3371] = anon_sym_for;
	v->a[3372] = actions(93);
	v->a[3373] = 1;
	v->a[3374] = anon_sym_if;
	v->a[3375] = actions(95);
	v->a[3376] = 1;
	v->a[3377] = anon_sym_case;
	v->a[3378] = actions(97);
	v->a[3379] = 1;
	small_parse_table_169(v);
}

void	small_parse_table_169(t_small_parse_table_array *v)
{
	v->a[3380] = anon_sym_LPAREN;
	v->a[3381] = actions(101);
	v->a[3382] = 1;
	v->a[3383] = anon_sym_LBRACE;
	v->a[3384] = actions(103);
	v->a[3385] = 1;
	v->a[3386] = anon_sym_BANG;
	v->a[3387] = actions(109);
	v->a[3388] = 1;
	v->a[3389] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3390] = actions(111);
	v->a[3391] = 1;
	v->a[3392] = anon_sym_DOLLAR;
	v->a[3393] = actions(113);
	v->a[3394] = 1;
	v->a[3395] = anon_sym_DQUOTE;
	v->a[3396] = actions(117);
	v->a[3397] = 1;
	v->a[3398] = anon_sym_DOLLAR_LBRACE;
	v->a[3399] = actions(119);
	small_parse_table_170(v);
}

/* EOF small_parse_table_33.c */
