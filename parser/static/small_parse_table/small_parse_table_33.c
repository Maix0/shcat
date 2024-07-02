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
	v->a[3300] = state(623);
	v->a[3301] = 1;
	v->a[3302] = aux_sym_command_repeat1;
	v->a[3303] = state(1122);
	v->a[3304] = 1;
	v->a[3305] = sym_pipeline;
	v->a[3306] = state(1201);
	v->a[3307] = 1;
	v->a[3308] = aux_sym_redirected_statement_repeat2;
	v->a[3309] = state(1911);
	v->a[3310] = 1;
	v->a[3311] = sym__statement_not_pipeline;
	v->a[3312] = actions(147);
	v->a[3313] = 2;
	v->a[3314] = anon_sym_while;
	v->a[3315] = anon_sym_until;
	v->a[3316] = actions(179);
	v->a[3317] = 2;
	v->a[3318] = sym_raw_string;
	v->a[3319] = sym_number;
	small_parse_table_166(v);
}

void	small_parse_table_166(t_small_parse_table_array *v)
{
	v->a[3320] = actions(153);
	v->a[3321] = 3;
	v->a[3322] = anon_sym_fi;
	v->a[3323] = anon_sym_elif;
	v->a[3324] = anon_sym_else;
	v->a[3325] = state(433);
	v->a[3326] = 5;
	v->a[3327] = sym_arithmetic_expansion;
	v->a[3328] = sym_string;
	v->a[3329] = sym_simple_expansion;
	v->a[3330] = sym_expansion;
	v->a[3331] = sym_command_substitution;
	v->a[3332] = actions(167);
	v->a[3333] = 7;
	v->a[3334] = anon_sym_LT;
	v->a[3335] = anon_sym_GT;
	v->a[3336] = anon_sym_GT_GT;
	v->a[3337] = anon_sym_LT_AMP;
	v->a[3338] = anon_sym_GT_AMP;
	v->a[3339] = anon_sym_GT_PIPE;
	small_parse_table_167(v);
}

void	small_parse_table_167(t_small_parse_table_array *v)
{
	v->a[3340] = anon_sym_LT_GT;
	v->a[3341] = state(1090);
	v->a[3342] = 12;
	v->a[3343] = sym_redirected_statement;
	v->a[3344] = sym_for_statement;
	v->a[3345] = sym_while_statement;
	v->a[3346] = sym_if_statement;
	v->a[3347] = sym_case_statement;
	v->a[3348] = sym_function_definition;
	v->a[3349] = sym_compound_statement;
	v->a[3350] = sym_subshell;
	v->a[3351] = sym_list;
	v->a[3352] = sym_negated_command;
	v->a[3353] = sym_command;
	v->a[3354] = sym__variable_assignments;
	v->a[3355] = 31;
	v->a[3356] = actions(3);
	v->a[3357] = 1;
	v->a[3358] = sym_comment;
	v->a[3359] = actions(9);
	small_parse_table_168(v);
}

void	small_parse_table_168(t_small_parse_table_array *v)
{
	v->a[3360] = 1;
	v->a[3361] = anon_sym_for;
	v->a[3362] = actions(13);
	v->a[3363] = 1;
	v->a[3364] = anon_sym_if;
	v->a[3365] = actions(15);
	v->a[3366] = 1;
	v->a[3367] = anon_sym_case;
	v->a[3368] = actions(17);
	v->a[3369] = 1;
	v->a[3370] = anon_sym_LPAREN;
	v->a[3371] = actions(19);
	v->a[3372] = 1;
	v->a[3373] = anon_sym_LBRACE;
	v->a[3374] = actions(43);
	v->a[3375] = 1;
	v->a[3376] = sym_word;
	v->a[3377] = actions(51);
	v->a[3378] = 1;
	v->a[3379] = anon_sym_BANG;
	small_parse_table_169(v);
}

void	small_parse_table_169(t_small_parse_table_array *v)
{
	v->a[3380] = actions(55);
	v->a[3381] = 1;
	v->a[3382] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3383] = actions(57);
	v->a[3384] = 1;
	v->a[3385] = anon_sym_DOLLAR;
	v->a[3386] = actions(59);
	v->a[3387] = 1;
	v->a[3388] = anon_sym_DQUOTE;
	v->a[3389] = actions(63);
	v->a[3390] = 1;
	v->a[3391] = anon_sym_DOLLAR_LBRACE;
	v->a[3392] = actions(65);
	v->a[3393] = 1;
	v->a[3394] = anon_sym_DOLLAR_LPAREN;
	v->a[3395] = actions(67);
	v->a[3396] = 1;
	v->a[3397] = anon_sym_BQUOTE;
	v->a[3398] = actions(69);
	v->a[3399] = 1;
	small_parse_table_170(v);
}

/* EOF small_parse_table_33.c */
