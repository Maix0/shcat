/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_34.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_170(t_small_parse_table_array *v)
{
	v->a[3400] = actions(199);
	v->a[3401] = 1;
	v->a[3402] = anon_sym_LF;
	v->a[3403] = state(11);
	v->a[3404] = 1;
	v->a[3405] = aux_sym__case_item_last_repeat2;
	v->a[3406] = state(131);
	v->a[3407] = 1;
	v->a[3408] = aux_sym__statements_repeat1;
	v->a[3409] = state(173);
	v->a[3410] = 1;
	v->a[3411] = sym_command_name;
	v->a[3412] = state(263);
	v->a[3413] = 1;
	v->a[3414] = sym_variable_assignment;
	v->a[3415] = state(597);
	v->a[3416] = 1;
	v->a[3417] = aux_sym_command_repeat1;
	v->a[3418] = state(598);
	v->a[3419] = 1;
	small_parse_table_171(v);
}

void	small_parse_table_171(t_small_parse_table_array *v)
{
	v->a[3420] = sym_concatenation;
	v->a[3421] = state(714);
	v->a[3422] = 1;
	v->a[3423] = sym_file_redirect;
	v->a[3424] = state(1063);
	v->a[3425] = 1;
	v->a[3426] = sym_pipeline;
	v->a[3427] = state(1123);
	v->a[3428] = 1;
	v->a[3429] = aux_sym_redirected_statement_repeat2;
	v->a[3430] = state(1903);
	v->a[3431] = 1;
	v->a[3432] = sym__statement_not_pipeline;
	v->a[3433] = state(1911);
	v->a[3434] = 1;
	v->a[3435] = sym__statements;
	v->a[3436] = actions(91);
	v->a[3437] = 2;
	v->a[3438] = anon_sym_while;
	v->a[3439] = anon_sym_until;
	small_parse_table_172(v);
}

void	small_parse_table_172(t_small_parse_table_array *v)
{
	v->a[3440] = actions(113);
	v->a[3441] = 2;
	v->a[3442] = sym_raw_string;
	v->a[3443] = sym_number;
	v->a[3444] = state(378);
	v->a[3445] = 5;
	v->a[3446] = sym_arithmetic_expansion;
	v->a[3447] = sym_string;
	v->a[3448] = sym_simple_expansion;
	v->a[3449] = sym_expansion;
	v->a[3450] = sym_command_substitution;
	v->a[3451] = actions(105);
	v->a[3452] = 7;
	v->a[3453] = anon_sym_LT;
	v->a[3454] = anon_sym_GT;
	v->a[3455] = anon_sym_GT_GT;
	v->a[3456] = anon_sym_LT_AMP;
	v->a[3457] = anon_sym_GT_AMP;
	v->a[3458] = anon_sym_GT_PIPE;
	v->a[3459] = anon_sym_LT_GT;
	small_parse_table_173(v);
}

void	small_parse_table_173(t_small_parse_table_array *v)
{
	v->a[3460] = state(987);
	v->a[3461] = 12;
	v->a[3462] = sym_redirected_statement;
	v->a[3463] = sym_for_statement;
	v->a[3464] = sym_while_statement;
	v->a[3465] = sym_if_statement;
	v->a[3466] = sym_case_statement;
	v->a[3467] = sym_function_definition;
	v->a[3468] = sym_compound_statement;
	v->a[3469] = sym_subshell;
	v->a[3470] = sym_list;
	v->a[3471] = sym_negated_command;
	v->a[3472] = sym_command;
	v->a[3473] = sym__variable_assignments;
	v->a[3474] = 33;
	v->a[3475] = actions(3);
	v->a[3476] = 1;
	v->a[3477] = sym_comment;
	v->a[3478] = actions(9);
	v->a[3479] = 1;
	small_parse_table_174(v);
}

void	small_parse_table_174(t_small_parse_table_array *v)
{
	v->a[3480] = anon_sym_for;
	v->a[3481] = actions(13);
	v->a[3482] = 1;
	v->a[3483] = anon_sym_if;
	v->a[3484] = actions(15);
	v->a[3485] = 1;
	v->a[3486] = anon_sym_case;
	v->a[3487] = actions(17);
	v->a[3488] = 1;
	v->a[3489] = anon_sym_LPAREN;
	v->a[3490] = actions(19);
	v->a[3491] = 1;
	v->a[3492] = anon_sym_LBRACE;
	v->a[3493] = actions(43);
	v->a[3494] = 1;
	v->a[3495] = sym_word;
	v->a[3496] = actions(51);
	v->a[3497] = 1;
	v->a[3498] = anon_sym_BANG;
	v->a[3499] = actions(55);
	small_parse_table_175(v);
}

/* EOF small_parse_table_34.c */
