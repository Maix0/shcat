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
	v->a[3400] = sym_raw_string;
	v->a[3401] = sym_number;
	v->a[3402] = actions(204);
	v->a[3403] = 3;
	v->a[3404] = anon_sym_fi;
	v->a[3405] = anon_sym_elif;
	v->a[3406] = anon_sym_else;
	v->a[3407] = state(443);
	v->a[3408] = 5;
	v->a[3409] = sym_arithmetic_expansion;
	v->a[3410] = sym_string;
	v->a[3411] = sym_simple_expansion;
	v->a[3412] = sym_expansion;
	v->a[3413] = sym_command_substitution;
	v->a[3414] = actions(55);
	v->a[3415] = 6;
	v->a[3416] = anon_sym_LT;
	v->a[3417] = anon_sym_GT;
	v->a[3418] = anon_sym_GT_GT;
	v->a[3419] = anon_sym_LT_AMP;
	small_parse_table_171(v);
}

void	small_parse_table_171(t_small_parse_table_array *v)
{
	v->a[3420] = anon_sym_GT_AMP;
	v->a[3421] = anon_sym_GT_PIPE;
	v->a[3422] = state(1187);
	v->a[3423] = 12;
	v->a[3424] = sym_redirected_statement;
	v->a[3425] = sym_for_statement;
	v->a[3426] = sym_while_statement;
	v->a[3427] = sym_if_statement;
	v->a[3428] = sym_case_statement;
	v->a[3429] = sym_function_definition;
	v->a[3430] = sym_compound_statement;
	v->a[3431] = sym_subshell;
	v->a[3432] = sym_list;
	v->a[3433] = sym_negated_command;
	v->a[3434] = sym_command;
	v->a[3435] = sym__variable_assignments;
	v->a[3436] = 34;
	v->a[3437] = actions(3);
	v->a[3438] = 1;
	v->a[3439] = sym_comment;
	small_parse_table_172(v);
}

void	small_parse_table_172(t_small_parse_table_array *v)
{
	v->a[3440] = actions(156);
	v->a[3441] = 1;
	v->a[3442] = sym_word;
	v->a[3443] = actions(158);
	v->a[3444] = 1;
	v->a[3445] = anon_sym_for;
	v->a[3446] = actions(162);
	v->a[3447] = 1;
	v->a[3448] = anon_sym_if;
	v->a[3449] = actions(164);
	v->a[3450] = 1;
	v->a[3451] = anon_sym_case;
	v->a[3452] = actions(166);
	v->a[3453] = 1;
	v->a[3454] = anon_sym_LPAREN;
	v->a[3455] = actions(168);
	v->a[3456] = 1;
	v->a[3457] = anon_sym_LBRACE;
	v->a[3458] = actions(170);
	v->a[3459] = 1;
	small_parse_table_173(v);
}

void	small_parse_table_173(t_small_parse_table_array *v)
{
	v->a[3460] = anon_sym_BANG;
	v->a[3461] = actions(176);
	v->a[3462] = 1;
	v->a[3463] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3464] = actions(178);
	v->a[3465] = 1;
	v->a[3466] = anon_sym_DOLLAR;
	v->a[3467] = actions(180);
	v->a[3468] = 1;
	v->a[3469] = anon_sym_DQUOTE;
	v->a[3470] = actions(184);
	v->a[3471] = 1;
	v->a[3472] = anon_sym_DOLLAR_LBRACE;
	v->a[3473] = actions(186);
	v->a[3474] = 1;
	v->a[3475] = anon_sym_DOLLAR_LPAREN;
	v->a[3476] = actions(188);
	v->a[3477] = 1;
	v->a[3478] = anon_sym_BQUOTE;
	v->a[3479] = actions(190);
	small_parse_table_174(v);
}

void	small_parse_table_174(t_small_parse_table_array *v)
{
	v->a[3480] = 1;
	v->a[3481] = sym_file_descriptor;
	v->a[3482] = actions(192);
	v->a[3483] = 1;
	v->a[3484] = sym_variable_name;
	v->a[3485] = actions(206);
	v->a[3486] = 1;
	v->a[3487] = anon_sym_LF;
	v->a[3488] = state(24);
	v->a[3489] = 1;
	v->a[3490] = aux_sym__case_item_last_repeat2;
	v->a[3491] = state(140);
	v->a[3492] = 1;
	v->a[3493] = aux_sym__statements_repeat1;
	v->a[3494] = state(186);
	v->a[3495] = 1;
	v->a[3496] = sym_command_name;
	v->a[3497] = state(213);
	v->a[3498] = 1;
	v->a[3499] = sym_variable_assignment;
	small_parse_table_175(v);
}

/* EOF small_parse_table_34.c */
