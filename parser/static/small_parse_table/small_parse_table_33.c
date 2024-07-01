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
	v->a[3300] = state(1075);
	v->a[3301] = 12;
	v->a[3302] = sym_redirected_statement;
	v->a[3303] = sym_for_statement;
	v->a[3304] = sym_while_statement;
	v->a[3305] = sym_if_statement;
	v->a[3306] = sym_case_statement;
	v->a[3307] = sym_function_definition;
	v->a[3308] = sym_compound_statement;
	v->a[3309] = sym_subshell;
	v->a[3310] = sym_list;
	v->a[3311] = sym_negated_command;
	v->a[3312] = sym_command;
	v->a[3313] = sym__variable_assignments;
	v->a[3314] = 32;
	v->a[3315] = actions(3);
	v->a[3316] = 1;
	v->a[3317] = sym_comment;
	v->a[3318] = actions(9);
	v->a[3319] = 1;
	small_parse_table_166(v);
}

void	small_parse_table_166(t_small_parse_table_array *v)
{
	v->a[3320] = anon_sym_for;
	v->a[3321] = actions(13);
	v->a[3322] = 1;
	v->a[3323] = anon_sym_if;
	v->a[3324] = actions(15);
	v->a[3325] = 1;
	v->a[3326] = anon_sym_case;
	v->a[3327] = actions(17);
	v->a[3328] = 1;
	v->a[3329] = anon_sym_LPAREN;
	v->a[3330] = actions(19);
	v->a[3331] = 1;
	v->a[3332] = anon_sym_LBRACE;
	v->a[3333] = actions(45);
	v->a[3334] = 1;
	v->a[3335] = sym_word;
	v->a[3336] = actions(53);
	v->a[3337] = 1;
	v->a[3338] = anon_sym_BANG;
	v->a[3339] = actions(59);
	small_parse_table_167(v);
}

void	small_parse_table_167(t_small_parse_table_array *v)
{
	v->a[3340] = 1;
	v->a[3341] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3342] = actions(61);
	v->a[3343] = 1;
	v->a[3344] = anon_sym_DOLLAR;
	v->a[3345] = actions(63);
	v->a[3346] = 1;
	v->a[3347] = anon_sym_DQUOTE;
	v->a[3348] = actions(67);
	v->a[3349] = 1;
	v->a[3350] = anon_sym_DOLLAR_LBRACE;
	v->a[3351] = actions(69);
	v->a[3352] = 1;
	v->a[3353] = anon_sym_DOLLAR_LPAREN;
	v->a[3354] = actions(71);
	v->a[3355] = 1;
	v->a[3356] = anon_sym_BQUOTE;
	v->a[3357] = actions(73);
	v->a[3358] = 1;
	v->a[3359] = sym_file_descriptor;
	small_parse_table_168(v);
}

void	small_parse_table_168(t_small_parse_table_array *v)
{
	v->a[3360] = actions(75);
	v->a[3361] = 1;
	v->a[3362] = sym_variable_name;
	v->a[3363] = state(9);
	v->a[3364] = 1;
	v->a[3365] = aux_sym__terminated_statement;
	v->a[3366] = state(189);
	v->a[3367] = 1;
	v->a[3368] = sym_command_name;
	v->a[3369] = state(273);
	v->a[3370] = 1;
	v->a[3371] = sym_variable_assignment;
	v->a[3372] = state(650);
	v->a[3373] = 1;
	v->a[3374] = sym_concatenation;
	v->a[3375] = state(712);
	v->a[3376] = 1;
	v->a[3377] = sym_file_redirect;
	v->a[3378] = state(713);
	v->a[3379] = 1;
	small_parse_table_169(v);
}

void	small_parse_table_169(t_small_parse_table_array *v)
{
	v->a[3380] = aux_sym_command_repeat1;
	v->a[3381] = state(1196);
	v->a[3382] = 1;
	v->a[3383] = sym_pipeline;
	v->a[3384] = state(1333);
	v->a[3385] = 1;
	v->a[3386] = aux_sym_redirected_statement_repeat2;
	v->a[3387] = state(2103);
	v->a[3388] = 1;
	v->a[3389] = sym__statement_not_pipeline;
	v->a[3390] = actions(11);
	v->a[3391] = 2;
	v->a[3392] = anon_sym_while;
	v->a[3393] = anon_sym_until;
	v->a[3394] = actions(57);
	v->a[3395] = 2;
	v->a[3396] = anon_sym_LT_AMP_DASH;
	v->a[3397] = anon_sym_GT_AMP_DASH;
	v->a[3398] = actions(65);
	v->a[3399] = 2;
	small_parse_table_170(v);
}

/* EOF small_parse_table_33.c */
