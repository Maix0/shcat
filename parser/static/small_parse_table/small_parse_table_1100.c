/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1100.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5500(t_small_parse_table_array *v)
{
	v->a[110000] = state(2594);
	v->a[110001] = 6;
	v->a[110002] = sym_binary_expression;
	v->a[110003] = sym_ternary_expression;
	v->a[110004] = sym_unary_expression;
	v->a[110005] = sym_postfix_expression;
	v->a[110006] = sym_parenthesized_expression;
	v->a[110007] = sym_concatenation;
	v->a[110008] = state(2503);
	v->a[110009] = 9;
	v->a[110010] = sym_arithmetic_expansion;
	v->a[110011] = sym_brace_expression;
	v->a[110012] = sym_string;
	v->a[110013] = sym_translated_string;
	v->a[110014] = sym_number;
	v->a[110015] = sym_simple_expansion;
	v->a[110016] = sym_expansion;
	v->a[110017] = sym_command_substitution;
	v->a[110018] = sym_process_substitution;
	v->a[110019] = 8;
	small_parse_table_5501(v);
}

void	small_parse_table_5501(t_small_parse_table_array *v)
{
	v->a[110020] = actions(3);
	v->a[110021] = 1;
	v->a[110022] = sym_comment;
	v->a[110023] = actions(5826);
	v->a[110024] = 1;
	v->a[110025] = aux_sym_heredoc_redirect_token1;
	v->a[110026] = actions(5828);
	v->a[110027] = 1;
	v->a[110028] = sym_file_descriptor;
	v->a[110029] = actions(6254);
	v->a[110030] = 1;
	v->a[110031] = anon_sym_RPAREN;
	v->a[110032] = actions(5831);
	v->a[110033] = 3;
	v->a[110034] = sym_variable_name;
	v->a[110035] = sym_test_operator;
	v->a[110036] = sym__brace_start;
	v->a[110037] = actions(5821);
	v->a[110038] = 9;
	v->a[110039] = anon_sym_SEMI;
	small_parse_table_5502(v);
}

void	small_parse_table_5502(t_small_parse_table_array *v)
{
	v->a[110040] = anon_sym_PIPE_PIPE;
	v->a[110041] = anon_sym_AMP_AMP;
	v->a[110042] = anon_sym_PIPE;
	v->a[110043] = anon_sym_AMP;
	v->a[110044] = anon_sym_LT_LT;
	v->a[110045] = anon_sym_SEMI_SEMI;
	v->a[110046] = anon_sym_PIPE_AMP;
	v->a[110047] = anon_sym_LT_LT_DASH;
	v->a[110048] = actions(5823);
	v->a[110049] = 11;
	v->a[110050] = anon_sym_LT;
	v->a[110051] = anon_sym_GT;
	v->a[110052] = anon_sym_GT_GT;
	v->a[110053] = anon_sym_AMP_GT;
	v->a[110054] = anon_sym_AMP_GT_GT;
	v->a[110055] = anon_sym_LT_AMP;
	v->a[110056] = anon_sym_GT_AMP;
	v->a[110057] = anon_sym_GT_PIPE;
	v->a[110058] = anon_sym_LT_AMP_DASH;
	v->a[110059] = anon_sym_GT_AMP_DASH;
	small_parse_table_5503(v);
}

void	small_parse_table_5503(t_small_parse_table_array *v)
{
	v->a[110060] = anon_sym_LT_LT_LT;
	v->a[110061] = actions(5819);
	v->a[110062] = 17;
	v->a[110063] = anon_sym_LPAREN_LPAREN;
	v->a[110064] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[110065] = anon_sym_DOLLAR_LBRACK;
	v->a[110066] = anon_sym_DOLLAR;
	v->a[110067] = sym__special_character;
	v->a[110068] = anon_sym_DQUOTE;
	v->a[110069] = sym_raw_string;
	v->a[110070] = sym_ansi_c_string;
	v->a[110071] = aux_sym_number_token1;
	v->a[110072] = aux_sym_number_token2;
	v->a[110073] = anon_sym_DOLLAR_LBRACE;
	v->a[110074] = anon_sym_DOLLAR_LPAREN;
	v->a[110075] = anon_sym_BQUOTE;
	v->a[110076] = anon_sym_DOLLAR_BQUOTE;
	v->a[110077] = anon_sym_LT_LPAREN;
	v->a[110078] = anon_sym_GT_LPAREN;
	v->a[110079] = sym_word;
	small_parse_table_5504(v);
}

void	small_parse_table_5504(t_small_parse_table_array *v)
{
	v->a[110080] = 5;
	v->a[110081] = actions(3);
	v->a[110082] = 1;
	v->a[110083] = sym_comment;
	v->a[110084] = actions(6257);
	v->a[110085] = 1;
	v->a[110086] = sym__special_character;
	v->a[110087] = state(2118);
	v->a[110088] = 1;
	v->a[110089] = aux_sym__literal_repeat1;
	v->a[110090] = actions(5395);
	v->a[110091] = 4;
	v->a[110092] = sym_file_descriptor;
	v->a[110093] = sym_test_operator;
	v->a[110094] = sym__brace_start;
	v->a[110095] = aux_sym_heredoc_redirect_token1;
	v->a[110096] = actions(5393);
	v->a[110097] = 37;
	v->a[110098] = anon_sym_LPAREN_LPAREN;
	v->a[110099] = anon_sym_SEMI;
	small_parse_table_5505(v);
}

/* EOF small_parse_table_1100.c */
