/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1240.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6200(t_small_parse_table_array *v)
{
	v->a[124000] = actions(5844);
	v->a[124001] = 1;
	v->a[124002] = aux_sym_concatenation_token1;
	v->a[124003] = actions(5846);
	v->a[124004] = 1;
	v->a[124005] = sym__concat;
	v->a[124006] = state(2385);
	v->a[124007] = 1;
	v->a[124008] = aux_sym_concatenation_repeat1;
	v->a[124009] = actions(5478);
	v->a[124010] = 4;
	v->a[124011] = sym_file_descriptor;
	v->a[124012] = sym_test_operator;
	v->a[124013] = sym__brace_start;
	v->a[124014] = aux_sym_heredoc_redirect_token1;
	v->a[124015] = actions(5476);
	v->a[124016] = 34;
	v->a[124017] = anon_sym_LPAREN_LPAREN;
	v->a[124018] = anon_sym_PIPE_PIPE;
	v->a[124019] = anon_sym_AMP_AMP;
	small_parse_table_6201(v);
}

void	small_parse_table_6201(t_small_parse_table_array *v)
{
	v->a[124020] = anon_sym_PIPE;
	v->a[124021] = anon_sym_LT;
	v->a[124022] = anon_sym_GT;
	v->a[124023] = anon_sym_LT_LT;
	v->a[124024] = anon_sym_GT_GT;
	v->a[124025] = anon_sym_PIPE_AMP;
	v->a[124026] = anon_sym_AMP_GT;
	v->a[124027] = anon_sym_AMP_GT_GT;
	v->a[124028] = anon_sym_LT_AMP;
	v->a[124029] = anon_sym_GT_AMP;
	v->a[124030] = anon_sym_GT_PIPE;
	v->a[124031] = anon_sym_LT_AMP_DASH;
	v->a[124032] = anon_sym_GT_AMP_DASH;
	v->a[124033] = anon_sym_LT_LT_DASH;
	v->a[124034] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[124035] = anon_sym_DOLLAR_LBRACK;
	v->a[124036] = anon_sym_DOLLAR;
	v->a[124037] = sym__special_character;
	v->a[124038] = anon_sym_DQUOTE;
	v->a[124039] = sym_raw_string;
	small_parse_table_6202(v);
}

void	small_parse_table_6202(t_small_parse_table_array *v)
{
	v->a[124040] = sym_ansi_c_string;
	v->a[124041] = aux_sym_number_token1;
	v->a[124042] = aux_sym_number_token2;
	v->a[124043] = anon_sym_DOLLAR_LBRACE;
	v->a[124044] = anon_sym_DOLLAR_LPAREN;
	v->a[124045] = anon_sym_BQUOTE;
	v->a[124046] = anon_sym_DOLLAR_BQUOTE;
	v->a[124047] = anon_sym_LT_LPAREN;
	v->a[124048] = anon_sym_GT_LPAREN;
	v->a[124049] = aux_sym__simple_variable_name_token1;
	v->a[124050] = sym_word;
	v->a[124051] = 5;
	v->a[124052] = actions(71);
	v->a[124053] = 1;
	v->a[124054] = sym_comment;
	v->a[124055] = actions(6555);
	v->a[124056] = 1;
	v->a[124057] = sym__special_character;
	v->a[124058] = state(2366);
	v->a[124059] = 1;
	small_parse_table_6203(v);
}

void	small_parse_table_6203(t_small_parse_table_array *v)
{
	v->a[124060] = aux_sym__literal_repeat1;
	v->a[124061] = actions(1362);
	v->a[124062] = 14;
	v->a[124063] = anon_sym_PIPE;
	v->a[124064] = anon_sym_EQ_EQ;
	v->a[124065] = anon_sym_LT;
	v->a[124066] = anon_sym_GT;
	v->a[124067] = anon_sym_LT_LT;
	v->a[124068] = anon_sym_EQ_TILDE;
	v->a[124069] = anon_sym_AMP_GT;
	v->a[124070] = anon_sym_LT_AMP;
	v->a[124071] = anon_sym_GT_AMP;
	v->a[124072] = anon_sym_DOLLAR;
	v->a[124073] = aux_sym_number_token1;
	v->a[124074] = aux_sym_number_token2;
	v->a[124075] = anon_sym_DOLLAR_LPAREN;
	v->a[124076] = sym_word;
	v->a[124077] = actions(1364);
	v->a[124078] = 25;
	v->a[124079] = sym_file_descriptor;
	small_parse_table_6204(v);
}

void	small_parse_table_6204(t_small_parse_table_array *v)
{
	v->a[124080] = sym_test_operator;
	v->a[124081] = sym__bare_dollar;
	v->a[124082] = sym__brace_start;
	v->a[124083] = anon_sym_LPAREN_LPAREN;
	v->a[124084] = anon_sym_PIPE_PIPE;
	v->a[124085] = anon_sym_AMP_AMP;
	v->a[124086] = anon_sym_GT_GT;
	v->a[124087] = anon_sym_PIPE_AMP;
	v->a[124088] = anon_sym_AMP_GT_GT;
	v->a[124089] = anon_sym_GT_PIPE;
	v->a[124090] = anon_sym_LT_AMP_DASH;
	v->a[124091] = anon_sym_GT_AMP_DASH;
	v->a[124092] = anon_sym_LT_LT_DASH;
	v->a[124093] = anon_sym_LT_LT_LT;
	v->a[124094] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[124095] = anon_sym_DOLLAR_LBRACK;
	v->a[124096] = anon_sym_DQUOTE;
	v->a[124097] = sym_raw_string;
	v->a[124098] = sym_ansi_c_string;
	v->a[124099] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_6205(v);
}

/* EOF small_parse_table_1240.c */
