/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_810.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4050(t_small_parse_table_array *v)
{
	v->a[81000] = anon_sym_AMP_GT;
	v->a[81001] = anon_sym_AMP_GT_GT;
	v->a[81002] = anon_sym_LT_AMP;
	v->a[81003] = anon_sym_GT_AMP;
	v->a[81004] = anon_sym_GT_PIPE;
	v->a[81005] = anon_sym_LT_AMP_DASH;
	v->a[81006] = anon_sym_GT_AMP_DASH;
	v->a[81007] = anon_sym_LT_LT_LT;
	v->a[81008] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81009] = anon_sym_DOLLAR_LBRACK;
	v->a[81010] = anon_sym_DOLLAR;
	v->a[81011] = sym__special_character;
	v->a[81012] = anon_sym_DQUOTE;
	v->a[81013] = sym_raw_string;
	v->a[81014] = sym_ansi_c_string;
	v->a[81015] = aux_sym_number_token1;
	v->a[81016] = aux_sym_number_token2;
	v->a[81017] = anon_sym_DOLLAR_LBRACE;
	v->a[81018] = anon_sym_DOLLAR_LPAREN;
	v->a[81019] = anon_sym_BQUOTE;
	small_parse_table_4051(v);
}

void	small_parse_table_4051(t_small_parse_table_array *v)
{
	v->a[81020] = anon_sym_DOLLAR_BQUOTE;
	v->a[81021] = anon_sym_LT_LPAREN;
	v->a[81022] = anon_sym_GT_LPAREN;
	v->a[81023] = sym_word;
	v->a[81024] = 11;
	v->a[81025] = actions(3);
	v->a[81026] = 1;
	v->a[81027] = sym_comment;
	v->a[81028] = actions(5776);
	v->a[81029] = 1;
	v->a[81030] = sym_variable_name;
	v->a[81031] = actions(5944);
	v->a[81032] = 1;
	v->a[81033] = aux_sym_heredoc_redirect_token1;
	v->a[81034] = state(6746);
	v->a[81035] = 1;
	v->a[81036] = sym_subscript;
	v->a[81037] = actions(4253);
	v->a[81038] = 2;
	v->a[81039] = anon_sym_PIPE;
	small_parse_table_4052(v);
}

void	small_parse_table_4052(t_small_parse_table_array *v)
{
	v->a[81040] = anon_sym_PIPE_AMP;
	v->a[81041] = actions(4692);
	v->a[81042] = 2;
	v->a[81043] = anon_sym_LT_LT;
	v->a[81044] = anon_sym_LT_LT_DASH;
	v->a[81045] = actions(5940);
	v->a[81046] = 2;
	v->a[81047] = anon_sym_PIPE_PIPE;
	v->a[81048] = anon_sym_AMP_AMP;
	v->a[81049] = state(5148);
	v->a[81050] = 2;
	v->a[81051] = sym_variable_assignment;
	v->a[81052] = aux_sym_variable_assignments_repeat1;
	v->a[81053] = actions(4261);
	v->a[81054] = 3;
	v->a[81055] = sym_file_descriptor;
	v->a[81056] = sym_test_operator;
	v->a[81057] = sym__brace_start;
	v->a[81058] = state(5366);
	v->a[81059] = 3;
	small_parse_table_4053(v);
}

void	small_parse_table_4053(t_small_parse_table_array *v)
{
	v->a[81060] = sym_file_redirect;
	v->a[81061] = sym_heredoc_redirect;
	v->a[81062] = aux_sym_redirected_statement_repeat1;
	v->a[81063] = actions(4247);
	v->a[81064] = 28;
	v->a[81065] = anon_sym_LPAREN_LPAREN;
	v->a[81066] = anon_sym_LT;
	v->a[81067] = anon_sym_GT;
	v->a[81068] = anon_sym_GT_GT;
	v->a[81069] = anon_sym_AMP_GT;
	v->a[81070] = anon_sym_AMP_GT_GT;
	v->a[81071] = anon_sym_LT_AMP;
	v->a[81072] = anon_sym_GT_AMP;
	v->a[81073] = anon_sym_GT_PIPE;
	v->a[81074] = anon_sym_LT_AMP_DASH;
	v->a[81075] = anon_sym_GT_AMP_DASH;
	v->a[81076] = anon_sym_LT_LT_LT;
	v->a[81077] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81078] = anon_sym_DOLLAR_LBRACK;
	v->a[81079] = anon_sym_DOLLAR;
	small_parse_table_4054(v);
}

void	small_parse_table_4054(t_small_parse_table_array *v)
{
	v->a[81080] = sym__special_character;
	v->a[81081] = anon_sym_DQUOTE;
	v->a[81082] = sym_raw_string;
	v->a[81083] = sym_ansi_c_string;
	v->a[81084] = aux_sym_number_token1;
	v->a[81085] = aux_sym_number_token2;
	v->a[81086] = anon_sym_DOLLAR_LBRACE;
	v->a[81087] = anon_sym_DOLLAR_LPAREN;
	v->a[81088] = anon_sym_BQUOTE;
	v->a[81089] = anon_sym_DOLLAR_BQUOTE;
	v->a[81090] = anon_sym_LT_LPAREN;
	v->a[81091] = anon_sym_GT_LPAREN;
	v->a[81092] = sym_word;
	v->a[81093] = 6;
	v->a[81094] = actions(3);
	v->a[81095] = 1;
	v->a[81096] = sym_comment;
	v->a[81097] = actions(5920);
	v->a[81098] = 1;
	v->a[81099] = aux_sym_concatenation_token1;
	small_parse_table_4055(v);
}

/* EOF small_parse_table_810.c */
