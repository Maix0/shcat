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
	v->a[3400] = sym_file_descriptor;
	v->a[3401] = actions(71);
	v->a[3402] = 1;
	v->a[3403] = sym_variable_name;
	v->a[3404] = state(19);
	v->a[3405] = 1;
	v->a[3406] = aux_sym__terminated_statement;
	v->a[3407] = state(182);
	v->a[3408] = 1;
	v->a[3409] = sym_command_name;
	v->a[3410] = state(342);
	v->a[3411] = 1;
	v->a[3412] = sym_variable_assignment;
	v->a[3413] = state(584);
	v->a[3414] = 1;
	v->a[3415] = sym_concatenation;
	v->a[3416] = state(620);
	v->a[3417] = 1;
	v->a[3418] = sym_file_redirect;
	v->a[3419] = state(623);
	small_parse_table_171(v);
}

void	small_parse_table_171(t_small_parse_table_array *v)
{
	v->a[3420] = 1;
	v->a[3421] = aux_sym_command_repeat1;
	v->a[3422] = state(1122);
	v->a[3423] = 1;
	v->a[3424] = sym_pipeline;
	v->a[3425] = state(1201);
	v->a[3426] = 1;
	v->a[3427] = aux_sym_redirected_statement_repeat2;
	v->a[3428] = state(1911);
	v->a[3429] = 1;
	v->a[3430] = sym__statement_not_pipeline;
	v->a[3431] = actions(11);
	v->a[3432] = 2;
	v->a[3433] = anon_sym_while;
	v->a[3434] = anon_sym_until;
	v->a[3435] = actions(61);
	v->a[3436] = 2;
	v->a[3437] = sym_raw_string;
	v->a[3438] = sym_number;
	v->a[3439] = actions(197);
	small_parse_table_172(v);
}

void	small_parse_table_172(t_small_parse_table_array *v)
{
	v->a[3440] = 3;
	v->a[3441] = anon_sym_fi;
	v->a[3442] = anon_sym_elif;
	v->a[3443] = anon_sym_else;
	v->a[3444] = state(433);
	v->a[3445] = 5;
	v->a[3446] = sym_arithmetic_expansion;
	v->a[3447] = sym_string;
	v->a[3448] = sym_simple_expansion;
	v->a[3449] = sym_expansion;
	v->a[3450] = sym_command_substitution;
	v->a[3451] = actions(53);
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
	v->a[3460] = state(1090);
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
