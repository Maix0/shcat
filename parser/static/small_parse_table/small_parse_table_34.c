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
	v->a[3400] = 1;
	v->a[3401] = sym_word;
	v->a[3402] = actions(57);
	v->a[3403] = 1;
	v->a[3404] = anon_sym_BANG;
	v->a[3405] = actions(63);
	v->a[3406] = 1;
	v->a[3407] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3408] = actions(65);
	v->a[3409] = 1;
	v->a[3410] = anon_sym_DOLLAR;
	v->a[3411] = actions(67);
	v->a[3412] = 1;
	v->a[3413] = anon_sym_DQUOTE;
	v->a[3414] = actions(69);
	v->a[3415] = 1;
	v->a[3416] = sym_raw_string;
	v->a[3417] = actions(71);
	v->a[3418] = 1;
	v->a[3419] = aux_sym_number_token1;
	small_parse_table_171(v);
}

void	small_parse_table_171(t_small_parse_table_array *v)
{
	v->a[3420] = actions(73);
	v->a[3421] = 1;
	v->a[3422] = aux_sym_number_token2;
	v->a[3423] = actions(75);
	v->a[3424] = 1;
	v->a[3425] = anon_sym_DOLLAR_LBRACE;
	v->a[3426] = actions(77);
	v->a[3427] = 1;
	v->a[3428] = anon_sym_DOLLAR_LPAREN;
	v->a[3429] = actions(79);
	v->a[3430] = 1;
	v->a[3431] = anon_sym_BQUOTE;
	v->a[3432] = actions(81);
	v->a[3433] = 1;
	v->a[3434] = sym_file_descriptor;
	v->a[3435] = actions(83);
	v->a[3436] = 1;
	v->a[3437] = sym_variable_name;
	v->a[3438] = actions(220);
	v->a[3439] = 1;
	small_parse_table_172(v);
}

void	small_parse_table_172(t_small_parse_table_array *v)
{
	v->a[3440] = anon_sym_LF;
	v->a[3441] = state(29);
	v->a[3442] = 1;
	v->a[3443] = aux_sym__case_item_last_repeat2;
	v->a[3444] = state(131);
	v->a[3445] = 1;
	v->a[3446] = aux_sym__statements_repeat1;
	v->a[3447] = state(190);
	v->a[3448] = 1;
	v->a[3449] = sym_command_name;
	v->a[3450] = state(314);
	v->a[3451] = 1;
	v->a[3452] = sym_variable_assignment;
	v->a[3453] = state(582);
	v->a[3454] = 1;
	v->a[3455] = sym_concatenation;
	v->a[3456] = state(587);
	v->a[3457] = 1;
	v->a[3458] = aux_sym_command_repeat1;
	v->a[3459] = state(718);
	small_parse_table_173(v);
}

void	small_parse_table_173(t_small_parse_table_array *v)
{
	v->a[3460] = 1;
	v->a[3461] = sym_file_redirect;
	v->a[3462] = state(1211);
	v->a[3463] = 1;
	v->a[3464] = sym_pipeline;
	v->a[3465] = state(1213);
	v->a[3466] = 1;
	v->a[3467] = aux_sym_redirected_statement_repeat2;
	v->a[3468] = state(2035);
	v->a[3469] = 1;
	v->a[3470] = sym__statement_not_pipeline;
	v->a[3471] = state(2076);
	v->a[3472] = 1;
	v->a[3473] = sym__statements;
	v->a[3474] = actions(11);
	v->a[3475] = 2;
	v->a[3476] = anon_sym_while;
	v->a[3477] = anon_sym_until;
	v->a[3478] = actions(61);
	v->a[3479] = 2;
	small_parse_table_174(v);
}

void	small_parse_table_174(t_small_parse_table_array *v)
{
	v->a[3480] = anon_sym_LT_AMP_DASH;
	v->a[3481] = anon_sym_GT_AMP_DASH;
	v->a[3482] = state(397);
	v->a[3483] = 6;
	v->a[3484] = sym_arithmetic_expansion;
	v->a[3485] = sym_string;
	v->a[3486] = sym_number;
	v->a[3487] = sym_simple_expansion;
	v->a[3488] = sym_expansion;
	v->a[3489] = sym_command_substitution;
	v->a[3490] = actions(59);
	v->a[3491] = 8;
	v->a[3492] = anon_sym_LT;
	v->a[3493] = anon_sym_GT;
	v->a[3494] = anon_sym_GT_GT;
	v->a[3495] = anon_sym_AMP_GT;
	v->a[3496] = anon_sym_AMP_GT_GT;
	v->a[3497] = anon_sym_LT_AMP;
	v->a[3498] = anon_sym_GT_AMP;
	v->a[3499] = anon_sym_GT_PIPE;
	small_parse_table_175(v);
}

/* EOF small_parse_table_34.c */
