/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1920.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9600(t_small_parse_table_array *v)
{
	v->a[192000] = anon_sym_LPAREN_LPAREN;
	v->a[192001] = anon_sym_GT_GT;
	v->a[192002] = anon_sym_AMP_GT_GT;
	v->a[192003] = anon_sym_GT_PIPE;
	v->a[192004] = anon_sym_LT_AMP_DASH;
	v->a[192005] = anon_sym_GT_AMP_DASH;
	v->a[192006] = anon_sym_LT_LT_LT;
	v->a[192007] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[192008] = anon_sym_DOLLAR_LBRACK;
	v->a[192009] = anon_sym_DQUOTE;
	v->a[192010] = sym_raw_string;
	v->a[192011] = sym_ansi_c_string;
	v->a[192012] = anon_sym_DOLLAR_LBRACE;
	v->a[192013] = anon_sym_BQUOTE;
	v->a[192014] = anon_sym_DOLLAR_BQUOTE;
	v->a[192015] = anon_sym_LT_LPAREN;
	v->a[192016] = anon_sym_GT_LPAREN;
	v->a[192017] = 5;
	v->a[192018] = actions(71);
	v->a[192019] = 1;
	small_parse_table_9601(v);
}

void	small_parse_table_9601(t_small_parse_table_array *v)
{
	v->a[192020] = sym_comment;
	v->a[192021] = actions(8552);
	v->a[192022] = 1;
	v->a[192023] = sym__special_character;
	v->a[192024] = state(3544);
	v->a[192025] = 1;
	v->a[192026] = aux_sym__literal_repeat1;
	v->a[192027] = actions(4467);
	v->a[192028] = 10;
	v->a[192029] = anon_sym_LT;
	v->a[192030] = anon_sym_GT;
	v->a[192031] = anon_sym_AMP_GT;
	v->a[192032] = anon_sym_LT_AMP;
	v->a[192033] = anon_sym_GT_AMP;
	v->a[192034] = anon_sym_DOLLAR;
	v->a[192035] = aux_sym_number_token1;
	v->a[192036] = aux_sym_number_token2;
	v->a[192037] = anon_sym_DOLLAR_LPAREN;
	v->a[192038] = sym_word;
	v->a[192039] = actions(4469);
	small_parse_table_9602(v);
}

void	small_parse_table_9602(t_small_parse_table_array *v)
{
	v->a[192040] = 21;
	v->a[192041] = sym_file_descriptor;
	v->a[192042] = sym_variable_name;
	v->a[192043] = sym_test_operator;
	v->a[192044] = sym__brace_start;
	v->a[192045] = anon_sym_LPAREN_LPAREN;
	v->a[192046] = anon_sym_GT_GT;
	v->a[192047] = anon_sym_AMP_GT_GT;
	v->a[192048] = anon_sym_GT_PIPE;
	v->a[192049] = anon_sym_LT_AMP_DASH;
	v->a[192050] = anon_sym_GT_AMP_DASH;
	v->a[192051] = anon_sym_LT_LT_LT;
	v->a[192052] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[192053] = anon_sym_DOLLAR_LBRACK;
	v->a[192054] = anon_sym_DQUOTE;
	v->a[192055] = sym_raw_string;
	v->a[192056] = sym_ansi_c_string;
	v->a[192057] = anon_sym_DOLLAR_LBRACE;
	v->a[192058] = anon_sym_BQUOTE;
	v->a[192059] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_9603(v);
}

void	small_parse_table_9603(t_small_parse_table_array *v)
{
	v->a[192060] = anon_sym_LT_LPAREN;
	v->a[192061] = anon_sym_GT_LPAREN;
	v->a[192062] = 5;
	v->a[192063] = actions(71);
	v->a[192064] = 1;
	v->a[192065] = sym_comment;
	v->a[192066] = actions(8552);
	v->a[192067] = 1;
	v->a[192068] = sym__special_character;
	v->a[192069] = state(3544);
	v->a[192070] = 1;
	v->a[192071] = aux_sym__literal_repeat1;
	v->a[192072] = actions(5393);
	v->a[192073] = 10;
	v->a[192074] = anon_sym_LT;
	v->a[192075] = anon_sym_GT;
	v->a[192076] = anon_sym_AMP_GT;
	v->a[192077] = anon_sym_LT_AMP;
	v->a[192078] = anon_sym_GT_AMP;
	v->a[192079] = anon_sym_DOLLAR;
	small_parse_table_9604(v);
}

void	small_parse_table_9604(t_small_parse_table_array *v)
{
	v->a[192080] = aux_sym_number_token1;
	v->a[192081] = aux_sym_number_token2;
	v->a[192082] = anon_sym_DOLLAR_LPAREN;
	v->a[192083] = sym_word;
	v->a[192084] = actions(5395);
	v->a[192085] = 21;
	v->a[192086] = sym_file_descriptor;
	v->a[192087] = sym_variable_name;
	v->a[192088] = sym_test_operator;
	v->a[192089] = sym__brace_start;
	v->a[192090] = anon_sym_LPAREN_LPAREN;
	v->a[192091] = anon_sym_GT_GT;
	v->a[192092] = anon_sym_AMP_GT_GT;
	v->a[192093] = anon_sym_GT_PIPE;
	v->a[192094] = anon_sym_LT_AMP_DASH;
	v->a[192095] = anon_sym_GT_AMP_DASH;
	v->a[192096] = anon_sym_LT_LT_LT;
	v->a[192097] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[192098] = anon_sym_DOLLAR_LBRACK;
	v->a[192099] = anon_sym_DQUOTE;
	small_parse_table_9605(v);
}

/* EOF small_parse_table_1920.c */
