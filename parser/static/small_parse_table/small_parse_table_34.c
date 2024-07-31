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
	v->a[3400] = actions(85);
	v->a[3401] = 1;
	v->a[3402] = anon_sym_if;
	v->a[3403] = actions(87);
	v->a[3404] = 1;
	v->a[3405] = anon_sym_case;
	v->a[3406] = actions(89);
	v->a[3407] = 1;
	v->a[3408] = anon_sym_LPAREN;
	v->a[3409] = actions(93);
	v->a[3410] = 1;
	v->a[3411] = anon_sym_LBRACE;
	v->a[3412] = actions(95);
	v->a[3413] = 1;
	v->a[3414] = anon_sym_BANG;
	v->a[3415] = actions(99);
	v->a[3416] = 1;
	v->a[3417] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3418] = actions(101);
	v->a[3419] = 1;
	small_parse_table_171(v);
}

void	small_parse_table_171(t_small_parse_table_array *v)
{
	v->a[3420] = anon_sym_DOLLAR;
	v->a[3421] = actions(103);
	v->a[3422] = 1;
	v->a[3423] = anon_sym_DQUOTE;
	v->a[3424] = actions(107);
	v->a[3425] = 1;
	v->a[3426] = anon_sym_DOLLAR_LBRACE;
	v->a[3427] = actions(109);
	v->a[3428] = 1;
	v->a[3429] = anon_sym_DOLLAR_LPAREN;
	v->a[3430] = actions(111);
	v->a[3431] = 1;
	v->a[3432] = anon_sym_BQUOTE;
	v->a[3433] = actions(113);
	v->a[3434] = 1;
	v->a[3435] = sym_variable_name;
	v->a[3436] = actions(192);
	v->a[3437] = 1;
	v->a[3438] = anon_sym_LF;
	v->a[3439] = state(18);
	small_parse_table_172(v);
}

void	small_parse_table_172(t_small_parse_table_array *v)
{
	v->a[3440] = 1;
	v->a[3441] = aux_sym__case_item_last_repeat2;
	v->a[3442] = state(112);
	v->a[3443] = 1;
	v->a[3444] = aux_sym__statements_repeat1;
	v->a[3445] = state(185);
	v->a[3446] = 1;
	v->a[3447] = sym_command_name;
	v->a[3448] = state(255);
	v->a[3449] = 1;
	v->a[3450] = sym_variable_assignment;
	v->a[3451] = state(491);
	v->a[3452] = 1;
	v->a[3453] = aux_sym_command_repeat1;
	v->a[3454] = state(599);
	v->a[3455] = 1;
	v->a[3456] = sym_concatenation;
	v->a[3457] = state(615);
	v->a[3458] = 1;
	v->a[3459] = sym_file_redirect;
	small_parse_table_173(v);
}

void	small_parse_table_173(t_small_parse_table_array *v)
{
	v->a[3460] = state(941);
	v->a[3461] = 1;
	v->a[3462] = sym_pipeline;
	v->a[3463] = state(1015);
	v->a[3464] = 1;
	v->a[3465] = aux_sym_redirected_statement_repeat2;
	v->a[3466] = state(1610);
	v->a[3467] = 1;
	v->a[3468] = sym__statement_not_pipeline;
	v->a[3469] = state(1624);
	v->a[3470] = 1;
	v->a[3471] = sym__statements;
	v->a[3472] = actions(83);
	v->a[3473] = 2;
	v->a[3474] = anon_sym_while;
	v->a[3475] = anon_sym_until;
	v->a[3476] = actions(105);
	v->a[3477] = 2;
	v->a[3478] = sym_raw_string;
	v->a[3479] = sym_number;
	small_parse_table_174(v);
}

void	small_parse_table_174(t_small_parse_table_array *v)
{
	v->a[3480] = state(341);
	v->a[3481] = 5;
	v->a[3482] = sym_arithmetic_expansion;
	v->a[3483] = sym_string;
	v->a[3484] = sym_simple_expansion;
	v->a[3485] = sym_expansion;
	v->a[3486] = sym_command_substitution;
	v->a[3487] = actions(97);
	v->a[3488] = 7;
	v->a[3489] = anon_sym_LT;
	v->a[3490] = anon_sym_GT;
	v->a[3491] = anon_sym_GT_GT;
	v->a[3492] = anon_sym_LT_AMP;
	v->a[3493] = anon_sym_GT_AMP;
	v->a[3494] = anon_sym_GT_PIPE;
	v->a[3495] = anon_sym_LT_GT;
	v->a[3496] = state(819);
	v->a[3497] = 12;
	v->a[3498] = sym_redirected_statement;
	v->a[3499] = sym_for_statement;
	small_parse_table_175(v);
}

/* EOF small_parse_table_34.c */
