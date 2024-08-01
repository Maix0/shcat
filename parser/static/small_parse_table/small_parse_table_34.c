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
	v->a[3400] = sym_word;
	v->a[3401] = actions(81);
	v->a[3402] = 1;
	v->a[3403] = anon_sym_for;
	v->a[3404] = actions(85);
	v->a[3405] = 1;
	v->a[3406] = anon_sym_if;
	v->a[3407] = actions(87);
	v->a[3408] = 1;
	v->a[3409] = anon_sym_case;
	v->a[3410] = actions(89);
	v->a[3411] = 1;
	v->a[3412] = anon_sym_LPAREN;
	v->a[3413] = actions(93);
	v->a[3414] = 1;
	v->a[3415] = anon_sym_LBRACE;
	v->a[3416] = actions(95);
	v->a[3417] = 1;
	v->a[3418] = anon_sym_BANG;
	v->a[3419] = actions(99);
	small_parse_table_171(v);
}

void	small_parse_table_171(t_small_parse_table_array *v)
{
	v->a[3420] = 1;
	v->a[3421] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3422] = actions(101);
	v->a[3423] = 1;
	v->a[3424] = anon_sym_DOLLAR;
	v->a[3425] = actions(103);
	v->a[3426] = 1;
	v->a[3427] = anon_sym_DQUOTE;
	v->a[3428] = actions(107);
	v->a[3429] = 1;
	v->a[3430] = anon_sym_DOLLAR_LBRACE;
	v->a[3431] = actions(109);
	v->a[3432] = 1;
	v->a[3433] = anon_sym_DOLLAR_LPAREN;
	v->a[3434] = actions(111);
	v->a[3435] = 1;
	v->a[3436] = anon_sym_BQUOTE;
	v->a[3437] = actions(113);
	v->a[3438] = 1;
	v->a[3439] = sym_variable_name;
	small_parse_table_172(v);
}

void	small_parse_table_172(t_small_parse_table_array *v)
{
	v->a[3440] = actions(115);
	v->a[3441] = 1;
	v->a[3442] = anon_sym_LF;
	v->a[3443] = state(104);
	v->a[3444] = 1;
	v->a[3445] = aux_sym__statements_repeat1;
	v->a[3446] = state(170);
	v->a[3447] = 1;
	v->a[3448] = sym_command_name;
	v->a[3449] = state(177);
	v->a[3450] = 1;
	v->a[3451] = sym_variable_assignment;
	v->a[3452] = state(326);
	v->a[3453] = 1;
	v->a[3454] = aux_sym__case_item_last_repeat2;
	v->a[3455] = state(408);
	v->a[3456] = 1;
	v->a[3457] = aux_sym_command_repeat1;
	v->a[3458] = state(541);
	v->a[3459] = 1;
	small_parse_table_173(v);
}

void	small_parse_table_173(t_small_parse_table_array *v)
{
	v->a[3460] = sym_file_redirect;
	v->a[3461] = state(546);
	v->a[3462] = 1;
	v->a[3463] = sym_concatenation;
	v->a[3464] = state(913);
	v->a[3465] = 1;
	v->a[3466] = sym_pipeline;
	v->a[3467] = state(990);
	v->a[3468] = 1;
	v->a[3469] = aux_sym_redirected_statement_repeat2;
	v->a[3470] = state(1555);
	v->a[3471] = 1;
	v->a[3472] = sym__statements;
	v->a[3473] = state(1564);
	v->a[3474] = 1;
	v->a[3475] = sym__statement_not_pipeline;
	v->a[3476] = actions(83);
	v->a[3477] = 2;
	v->a[3478] = anon_sym_while;
	v->a[3479] = anon_sym_until;
	small_parse_table_174(v);
}

void	small_parse_table_174(t_small_parse_table_array *v)
{
	v->a[3480] = actions(105);
	v->a[3481] = 2;
	v->a[3482] = sym_raw_string;
	v->a[3483] = sym_number;
	v->a[3484] = actions(97);
	v->a[3485] = 3;
	v->a[3486] = anon_sym_LT;
	v->a[3487] = anon_sym_GT;
	v->a[3488] = anon_sym_GT_GT;
	v->a[3489] = state(276);
	v->a[3490] = 5;
	v->a[3491] = sym_arithmetic_expansion;
	v->a[3492] = sym_string;
	v->a[3493] = sym_simple_expansion;
	v->a[3494] = sym_expansion;
	v->a[3495] = sym_command_substitution;
	v->a[3496] = state(867);
	v->a[3497] = 12;
	v->a[3498] = sym_redirected_statement;
	v->a[3499] = sym_for_statement;
	small_parse_table_175(v);
}

/* EOF small_parse_table_34.c */
