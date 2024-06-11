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
	v->a[3301] = sym_concatenation;
	v->a[3302] = state(736);
	v->a[3303] = 1;
	v->a[3304] = aux_sym_command_repeat1;
	v->a[3305] = state(738);
	v->a[3306] = 1;
	v->a[3307] = sym_file_redirect;
	v->a[3308] = state(767);
	v->a[3309] = 1;
	v->a[3310] = aux_sym__case_item_last_repeat2;
	v->a[3311] = state(1450);
	v->a[3312] = 1;
	v->a[3313] = sym_pipeline;
	v->a[3314] = state(1460);
	v->a[3315] = 1;
	v->a[3316] = aux_sym_redirected_statement_repeat2;
	v->a[3317] = state(2269);
	v->a[3318] = 1;
	v->a[3319] = sym__statement_not_pipeline;
	small_parse_table_166(v);
}

void	small_parse_table_166(t_small_parse_table_array *v)
{
	v->a[3320] = state(2468);
	v->a[3321] = 1;
	v->a[3322] = sym__statements;
	v->a[3323] = actions(11);
	v->a[3324] = 2;
	v->a[3325] = anon_sym_while;
	v->a[3326] = anon_sym_until;
	v->a[3327] = actions(57);
	v->a[3328] = 2;
	v->a[3329] = anon_sym_LT_AMP_DASH;
	v->a[3330] = anon_sym_GT_AMP_DASH;
	v->a[3331] = actions(65);
	v->a[3332] = 2;
	v->a[3333] = sym_raw_string;
	v->a[3334] = sym_number;
	v->a[3335] = state(394);
	v->a[3336] = 5;
	v->a[3337] = sym_arithmetic_expansion;
	v->a[3338] = sym_string;
	v->a[3339] = sym_simple_expansion;
	small_parse_table_167(v);
}

void	small_parse_table_167(t_small_parse_table_array *v)
{
	v->a[3340] = sym_expansion;
	v->a[3341] = sym_command_substitution;
	v->a[3342] = actions(55);
	v->a[3343] = 8;
	v->a[3344] = anon_sym_LT;
	v->a[3345] = anon_sym_GT;
	v->a[3346] = anon_sym_GT_GT;
	v->a[3347] = anon_sym_AMP_GT;
	v->a[3348] = anon_sym_AMP_GT_GT;
	v->a[3349] = anon_sym_LT_AMP;
	v->a[3350] = anon_sym_GT_AMP;
	v->a[3351] = anon_sym_GT_PIPE;
	v->a[3352] = state(1434);
	v->a[3353] = 12;
	v->a[3354] = sym_redirected_statement;
	v->a[3355] = sym_for_statement;
	v->a[3356] = sym_while_statement;
	v->a[3357] = sym_if_statement;
	v->a[3358] = sym_case_statement;
	v->a[3359] = sym_function_definition;
	small_parse_table_168(v);
}

void	small_parse_table_168(t_small_parse_table_array *v)
{
	v->a[3360] = sym_compound_statement;
	v->a[3361] = sym_subshell;
	v->a[3362] = sym_list;
	v->a[3363] = sym_negated_command;
	v->a[3364] = sym_command;
	v->a[3365] = sym_variable_assignments;
	v->a[3366] = 34;
	v->a[3367] = actions(3);
	v->a[3368] = 1;
	v->a[3369] = sym_comment;
	v->a[3370] = actions(9);
	v->a[3371] = 1;
	v->a[3372] = anon_sym_for;
	v->a[3373] = actions(13);
	v->a[3374] = 1;
	v->a[3375] = anon_sym_if;
	v->a[3376] = actions(15);
	v->a[3377] = 1;
	v->a[3378] = anon_sym_case;
	v->a[3379] = actions(17);
	small_parse_table_169(v);
}

void	small_parse_table_169(t_small_parse_table_array *v)
{
	v->a[3380] = 1;
	v->a[3381] = anon_sym_LPAREN;
	v->a[3382] = actions(19);
	v->a[3383] = 1;
	v->a[3384] = anon_sym_LBRACE;
	v->a[3385] = actions(45);
	v->a[3386] = 1;
	v->a[3387] = sym_word;
	v->a[3388] = actions(53);
	v->a[3389] = 1;
	v->a[3390] = anon_sym_BANG;
	v->a[3391] = actions(59);
	v->a[3392] = 1;
	v->a[3393] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3394] = actions(61);
	v->a[3395] = 1;
	v->a[3396] = anon_sym_DOLLAR;
	v->a[3397] = actions(63);
	v->a[3398] = 1;
	v->a[3399] = anon_sym_DQUOTE;
	small_parse_table_170(v);
}

/* EOF small_parse_table_33.c */
