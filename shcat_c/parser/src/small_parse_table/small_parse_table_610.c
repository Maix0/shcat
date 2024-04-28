/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_610.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3050(t_small_parse_table_array *v)
{
	v->a[61000] = aux_sym_number_token1;
	v->a[61001] = aux_sym_number_token2;
	v->a[61002] = anon_sym_DOLLAR_LBRACE;
	v->a[61003] = anon_sym_DOLLAR_LPAREN;
	v->a[61004] = anon_sym_BQUOTE;
	v->a[61005] = anon_sym_DOLLAR_BQUOTE;
	v->a[61006] = anon_sym_LT_LPAREN;
	v->a[61007] = anon_sym_GT_LPAREN;
	v->a[61008] = aux_sym__simple_variable_name_token1;
	v->a[61009] = sym_word;
	v->a[61010] = 6;
	v->a[61011] = actions(3);
	v->a[61012] = 1;
	v->a[61013] = sym_comment;
	v->a[61014] = actions(5638);
	v->a[61015] = 1;
	v->a[61016] = aux_sym_concatenation_token1;
	v->a[61017] = actions(5640);
	v->a[61018] = 1;
	v->a[61019] = sym__concat;
	small_parse_table_3051(v);
}

void	small_parse_table_3051(t_small_parse_table_array *v)
{
	v->a[61020] = state(1421);
	v->a[61021] = 1;
	v->a[61022] = aux_sym_concatenation_repeat1;
	v->a[61023] = actions(5069);
	v->a[61024] = 5;
	v->a[61025] = sym_file_descriptor;
	v->a[61026] = sym_variable_name;
	v->a[61027] = sym_test_operator;
	v->a[61028] = sym__brace_start;
	v->a[61029] = aux_sym_heredoc_redirect_token1;
	v->a[61030] = actions(5067);
	v->a[61031] = 38;
	v->a[61032] = anon_sym_LPAREN_LPAREN;
	v->a[61033] = anon_sym_SEMI;
	v->a[61034] = anon_sym_PIPE_PIPE;
	v->a[61035] = anon_sym_AMP_AMP;
	v->a[61036] = anon_sym_PIPE;
	v->a[61037] = anon_sym_AMP;
	v->a[61038] = anon_sym_LT;
	v->a[61039] = anon_sym_GT;
	small_parse_table_3052(v);
}

void	small_parse_table_3052(t_small_parse_table_array *v)
{
	v->a[61040] = anon_sym_LT_LT;
	v->a[61041] = anon_sym_GT_GT;
	v->a[61042] = anon_sym_RPAREN;
	v->a[61043] = anon_sym_SEMI_SEMI;
	v->a[61044] = anon_sym_PIPE_AMP;
	v->a[61045] = anon_sym_AMP_GT;
	v->a[61046] = anon_sym_AMP_GT_GT;
	v->a[61047] = anon_sym_LT_AMP;
	v->a[61048] = anon_sym_GT_AMP;
	v->a[61049] = anon_sym_GT_PIPE;
	v->a[61050] = anon_sym_LT_AMP_DASH;
	v->a[61051] = anon_sym_GT_AMP_DASH;
	v->a[61052] = anon_sym_LT_LT_DASH;
	v->a[61053] = anon_sym_LT_LT_LT;
	v->a[61054] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61055] = anon_sym_DOLLAR_LBRACK;
	v->a[61056] = anon_sym_DOLLAR;
	v->a[61057] = sym__special_character;
	v->a[61058] = anon_sym_DQUOTE;
	v->a[61059] = sym_raw_string;
	small_parse_table_3053(v);
}

void	small_parse_table_3053(t_small_parse_table_array *v)
{
	v->a[61060] = sym_ansi_c_string;
	v->a[61061] = aux_sym_number_token1;
	v->a[61062] = aux_sym_number_token2;
	v->a[61063] = anon_sym_DOLLAR_LBRACE;
	v->a[61064] = anon_sym_DOLLAR_LPAREN;
	v->a[61065] = anon_sym_BQUOTE;
	v->a[61066] = anon_sym_DOLLAR_BQUOTE;
	v->a[61067] = anon_sym_LT_LPAREN;
	v->a[61068] = anon_sym_GT_LPAREN;
	v->a[61069] = sym_word;
	v->a[61070] = 6;
	v->a[61071] = actions(3);
	v->a[61072] = 1;
	v->a[61073] = sym_comment;
	v->a[61074] = actions(5638);
	v->a[61075] = 1;
	v->a[61076] = aux_sym_concatenation_token1;
	v->a[61077] = actions(5640);
	v->a[61078] = 1;
	v->a[61079] = sym__concat;
	small_parse_table_3054(v);
}

void	small_parse_table_3054(t_small_parse_table_array *v)
{
	v->a[61080] = state(1367);
	v->a[61081] = 1;
	v->a[61082] = aux_sym_concatenation_repeat1;
	v->a[61083] = actions(5375);
	v->a[61084] = 5;
	v->a[61085] = sym_file_descriptor;
	v->a[61086] = sym_variable_name;
	v->a[61087] = sym_test_operator;
	v->a[61088] = sym__brace_start;
	v->a[61089] = aux_sym_heredoc_redirect_token1;
	v->a[61090] = actions(5373);
	v->a[61091] = 38;
	v->a[61092] = anon_sym_LPAREN_LPAREN;
	v->a[61093] = anon_sym_SEMI;
	v->a[61094] = anon_sym_PIPE_PIPE;
	v->a[61095] = anon_sym_AMP_AMP;
	v->a[61096] = anon_sym_PIPE;
	v->a[61097] = anon_sym_AMP;
	v->a[61098] = anon_sym_LT;
	v->a[61099] = anon_sym_GT;
	small_parse_table_3055(v);
}

/* EOF small_parse_table_610.c */
