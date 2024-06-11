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
	v->a[3400] = actions(67);
	v->a[3401] = 1;
	v->a[3402] = anon_sym_DOLLAR_LBRACE;
	v->a[3403] = actions(69);
	v->a[3404] = 1;
	v->a[3405] = anon_sym_DOLLAR_LPAREN;
	v->a[3406] = actions(71);
	v->a[3407] = 1;
	v->a[3408] = anon_sym_BQUOTE;
	v->a[3409] = actions(73);
	v->a[3410] = 1;
	v->a[3411] = sym_file_descriptor;
	v->a[3412] = actions(75);
	v->a[3413] = 1;
	v->a[3414] = sym_variable_name;
	v->a[3415] = actions(87);
	v->a[3416] = 1;
	v->a[3417] = anon_sym_LF;
	v->a[3418] = state(136);
	v->a[3419] = 1;
	small_parse_table_171(v);
}

void	small_parse_table_171(t_small_parse_table_array *v)
{
	v->a[3420] = aux_sym__statements_repeat1;
	v->a[3421] = state(187);
	v->a[3422] = 1;
	v->a[3423] = sym_command_name;
	v->a[3424] = state(275);
	v->a[3425] = 1;
	v->a[3426] = sym_variable_assignment;
	v->a[3427] = state(647);
	v->a[3428] = 1;
	v->a[3429] = sym_concatenation;
	v->a[3430] = state(736);
	v->a[3431] = 1;
	v->a[3432] = aux_sym_command_repeat1;
	v->a[3433] = state(738);
	v->a[3434] = 1;
	v->a[3435] = sym_file_redirect;
	v->a[3436] = state(767);
	v->a[3437] = 1;
	v->a[3438] = aux_sym__case_item_last_repeat2;
	v->a[3439] = state(1450);
	small_parse_table_172(v);
}

void	small_parse_table_172(t_small_parse_table_array *v)
{
	v->a[3440] = 1;
	v->a[3441] = sym_pipeline;
	v->a[3442] = state(1460);
	v->a[3443] = 1;
	v->a[3444] = aux_sym_redirected_statement_repeat2;
	v->a[3445] = state(2269);
	v->a[3446] = 1;
	v->a[3447] = sym__statement_not_pipeline;
	v->a[3448] = state(2408);
	v->a[3449] = 1;
	v->a[3450] = sym__statements;
	v->a[3451] = actions(11);
	v->a[3452] = 2;
	v->a[3453] = anon_sym_while;
	v->a[3454] = anon_sym_until;
	v->a[3455] = actions(57);
	v->a[3456] = 2;
	v->a[3457] = anon_sym_LT_AMP_DASH;
	v->a[3458] = anon_sym_GT_AMP_DASH;
	v->a[3459] = actions(65);
	small_parse_table_173(v);
}

void	small_parse_table_173(t_small_parse_table_array *v)
{
	v->a[3460] = 2;
	v->a[3461] = sym_raw_string;
	v->a[3462] = sym_number;
	v->a[3463] = state(394);
	v->a[3464] = 5;
	v->a[3465] = sym_arithmetic_expansion;
	v->a[3466] = sym_string;
	v->a[3467] = sym_simple_expansion;
	v->a[3468] = sym_expansion;
	v->a[3469] = sym_command_substitution;
	v->a[3470] = actions(55);
	v->a[3471] = 8;
	v->a[3472] = anon_sym_LT;
	v->a[3473] = anon_sym_GT;
	v->a[3474] = anon_sym_GT_GT;
	v->a[3475] = anon_sym_AMP_GT;
	v->a[3476] = anon_sym_AMP_GT_GT;
	v->a[3477] = anon_sym_LT_AMP;
	v->a[3478] = anon_sym_GT_AMP;
	v->a[3479] = anon_sym_GT_PIPE;
	small_parse_table_174(v);
}

void	small_parse_table_174(t_small_parse_table_array *v)
{
	v->a[3480] = state(1434);
	v->a[3481] = 12;
	v->a[3482] = sym_redirected_statement;
	v->a[3483] = sym_for_statement;
	v->a[3484] = sym_while_statement;
	v->a[3485] = sym_if_statement;
	v->a[3486] = sym_case_statement;
	v->a[3487] = sym_function_definition;
	v->a[3488] = sym_compound_statement;
	v->a[3489] = sym_subshell;
	v->a[3490] = sym_list;
	v->a[3491] = sym_negated_command;
	v->a[3492] = sym_command;
	v->a[3493] = sym_variable_assignments;
	v->a[3494] = 34;
	v->a[3495] = actions(3);
	v->a[3496] = 1;
	v->a[3497] = sym_comment;
	v->a[3498] = actions(9);
	v->a[3499] = 1;
	small_parse_table_175(v);
}

/* EOF small_parse_table_34.c */
