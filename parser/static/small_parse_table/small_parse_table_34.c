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
	v->a[3401] = anon_sym_DOLLAR_LPAREN;
	v->a[3402] = actions(121);
	v->a[3403] = 1;
	v->a[3404] = anon_sym_BQUOTE;
	v->a[3405] = actions(123);
	v->a[3406] = 1;
	v->a[3407] = sym_file_descriptor;
	v->a[3408] = actions(125);
	v->a[3409] = 1;
	v->a[3410] = sym_variable_name;
	v->a[3411] = actions(204);
	v->a[3412] = 1;
	v->a[3413] = anon_sym_LF;
	v->a[3414] = state(21);
	v->a[3415] = 1;
	v->a[3416] = aux_sym__case_item_last_repeat2;
	v->a[3417] = state(134);
	v->a[3418] = 1;
	v->a[3419] = aux_sym__statements_repeat1;
	small_parse_table_171(v);
}

void	small_parse_table_171(t_small_parse_table_array *v)
{
	v->a[3420] = state(184);
	v->a[3421] = 1;
	v->a[3422] = sym_command_name;
	v->a[3423] = state(229);
	v->a[3424] = 1;
	v->a[3425] = sym_variable_assignment;
	v->a[3426] = state(622);
	v->a[3427] = 1;
	v->a[3428] = sym_concatenation;
	v->a[3429] = state(727);
	v->a[3430] = 1;
	v->a[3431] = aux_sym_command_repeat1;
	v->a[3432] = state(744);
	v->a[3433] = 1;
	v->a[3434] = sym_file_redirect;
	v->a[3435] = state(1096);
	v->a[3436] = 1;
	v->a[3437] = sym_pipeline;
	v->a[3438] = state(1215);
	v->a[3439] = 1;
	small_parse_table_172(v);
}

void	small_parse_table_172(t_small_parse_table_array *v)
{
	v->a[3440] = aux_sym_redirected_statement_repeat2;
	v->a[3441] = state(2107);
	v->a[3442] = 1;
	v->a[3443] = sym__statements;
	v->a[3444] = state(2122);
	v->a[3445] = 1;
	v->a[3446] = sym__statement_not_pipeline;
	v->a[3447] = actions(91);
	v->a[3448] = 2;
	v->a[3449] = anon_sym_while;
	v->a[3450] = anon_sym_until;
	v->a[3451] = actions(107);
	v->a[3452] = 2;
	v->a[3453] = anon_sym_LT_AMP_DASH;
	v->a[3454] = anon_sym_GT_AMP_DASH;
	v->a[3455] = actions(115);
	v->a[3456] = 2;
	v->a[3457] = sym_raw_string;
	v->a[3458] = sym_number;
	v->a[3459] = state(289);
	small_parse_table_173(v);
}

void	small_parse_table_173(t_small_parse_table_array *v)
{
	v->a[3460] = 5;
	v->a[3461] = sym_arithmetic_expansion;
	v->a[3462] = sym_string;
	v->a[3463] = sym_simple_expansion;
	v->a[3464] = sym_expansion;
	v->a[3465] = sym_command_substitution;
	v->a[3466] = actions(105);
	v->a[3467] = 8;
	v->a[3468] = anon_sym_LT;
	v->a[3469] = anon_sym_GT;
	v->a[3470] = anon_sym_GT_GT;
	v->a[3471] = anon_sym_AMP_GT;
	v->a[3472] = anon_sym_AMP_GT_GT;
	v->a[3473] = anon_sym_LT_AMP;
	v->a[3474] = anon_sym_GT_AMP;
	v->a[3475] = anon_sym_GT_PIPE;
	v->a[3476] = state(1086);
	v->a[3477] = 12;
	v->a[3478] = sym_redirected_statement;
	v->a[3479] = sym_for_statement;
	small_parse_table_174(v);
}

void	small_parse_table_174(t_small_parse_table_array *v)
{
	v->a[3480] = sym_while_statement;
	v->a[3481] = sym_if_statement;
	v->a[3482] = sym_case_statement;
	v->a[3483] = sym_function_definition;
	v->a[3484] = sym_compound_statement;
	v->a[3485] = sym_subshell;
	v->a[3486] = sym_list;
	v->a[3487] = sym_negated_command;
	v->a[3488] = sym_command;
	v->a[3489] = sym__variable_assignments;
	v->a[3490] = 34;
	v->a[3491] = actions(3);
	v->a[3492] = 1;
	v->a[3493] = sym_comment;
	v->a[3494] = actions(87);
	v->a[3495] = 1;
	v->a[3496] = sym_word;
	v->a[3497] = actions(89);
	v->a[3498] = 1;
	v->a[3499] = anon_sym_for;
	small_parse_table_175(v);
}

/* EOF small_parse_table_34.c */
