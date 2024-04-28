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
	v->a[3400] = actions(1581);
	v->a[3401] = 2;
	v->a[3402] = anon_sym_EQ_EQ;
	v->a[3403] = anon_sym_EQ_TILDE;
	v->a[3404] = actions(1605);
	v->a[3405] = 2;
	v->a[3406] = anon_sym_LT_LPAREN;
	v->a[3407] = anon_sym_GT_LPAREN;
	v->a[3408] = actions(1577);
	v->a[3409] = 3;
	v->a[3410] = sym_raw_string;
	v->a[3411] = sym_ansi_c_string;
	v->a[3412] = sym_word;
	v->a[3413] = actions(1615);
	v->a[3414] = 3;
	v->a[3415] = sym_file_descriptor;
	v->a[3416] = ts_builtin_sym_end;
	v->a[3417] = aux_sym_heredoc_redirect_token1;
	v->a[3418] = state(1093);
	v->a[3419] = 9;
	small_parse_table_171(v);
}

void	small_parse_table_171(t_small_parse_table_array *v)
{
	v->a[3420] = sym_arithmetic_expansion;
	v->a[3421] = sym_brace_expression;
	v->a[3422] = sym_string;
	v->a[3423] = sym_translated_string;
	v->a[3424] = sym_number;
	v->a[3425] = sym_simple_expansion;
	v->a[3426] = sym_expansion;
	v->a[3427] = sym_command_substitution;
	v->a[3428] = sym_process_substitution;
	v->a[3429] = actions(1613);
	v->a[3430] = 19;
	v->a[3431] = anon_sym_SEMI;
	v->a[3432] = anon_sym_PIPE_PIPE;
	v->a[3433] = anon_sym_AMP_AMP;
	v->a[3434] = anon_sym_PIPE;
	v->a[3435] = anon_sym_AMP;
	v->a[3436] = anon_sym_LT;
	v->a[3437] = anon_sym_GT;
	v->a[3438] = anon_sym_LT_LT;
	v->a[3439] = anon_sym_GT_GT;
	small_parse_table_172(v);
}

void	small_parse_table_172(t_small_parse_table_array *v)
{
	v->a[3440] = anon_sym_SEMI_SEMI;
	v->a[3441] = anon_sym_PIPE_AMP;
	v->a[3442] = anon_sym_AMP_GT;
	v->a[3443] = anon_sym_AMP_GT_GT;
	v->a[3444] = anon_sym_LT_AMP;
	v->a[3445] = anon_sym_GT_AMP;
	v->a[3446] = anon_sym_GT_PIPE;
	v->a[3447] = anon_sym_LT_AMP_DASH;
	v->a[3448] = anon_sym_GT_AMP_DASH;
	v->a[3449] = anon_sym_LT_LT_DASH;
	v->a[3450] = 26;
	v->a[3451] = actions(3);
	v->a[3452] = 1;
	v->a[3453] = sym_comment;
	v->a[3454] = actions(1547);
	v->a[3455] = 1;
	v->a[3456] = anon_sym_LT_LT_LT;
	v->a[3457] = actions(1549);
	v->a[3458] = 1;
	v->a[3459] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_173(v);
}

void	small_parse_table_173(t_small_parse_table_array *v)
{
	v->a[3460] = actions(1551);
	v->a[3461] = 1;
	v->a[3462] = anon_sym_DOLLAR;
	v->a[3463] = actions(1553);
	v->a[3464] = 1;
	v->a[3465] = sym__special_character;
	v->a[3466] = actions(1555);
	v->a[3467] = 1;
	v->a[3468] = anon_sym_DQUOTE;
	v->a[3469] = actions(1557);
	v->a[3470] = 1;
	v->a[3471] = aux_sym_number_token1;
	v->a[3472] = actions(1559);
	v->a[3473] = 1;
	v->a[3474] = aux_sym_number_token2;
	v->a[3475] = actions(1561);
	v->a[3476] = 1;
	v->a[3477] = anon_sym_DOLLAR_LBRACE;
	v->a[3478] = actions(1563);
	v->a[3479] = 1;
	small_parse_table_174(v);
}

void	small_parse_table_174(t_small_parse_table_array *v)
{
	v->a[3480] = anon_sym_DOLLAR_LPAREN;
	v->a[3481] = actions(1565);
	v->a[3482] = 1;
	v->a[3483] = anon_sym_BQUOTE;
	v->a[3484] = actions(1567);
	v->a[3485] = 1;
	v->a[3486] = anon_sym_DOLLAR_BQUOTE;
	v->a[3487] = actions(1571);
	v->a[3488] = 1;
	v->a[3489] = sym_test_operator;
	v->a[3490] = actions(1573);
	v->a[3491] = 1;
	v->a[3492] = sym__bare_dollar;
	v->a[3493] = actions(1575);
	v->a[3494] = 1;
	v->a[3495] = sym__brace_start;
	v->a[3496] = state(562);
	v->a[3497] = 1;
	v->a[3498] = aux_sym_command_repeat2;
	v->a[3499] = state(1321);
	small_parse_table_175(v);
}

/* EOF small_parse_table_34.c */
