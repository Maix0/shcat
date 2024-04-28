/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_830.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4150(t_small_parse_table_array *v)
{
	v->a[83000] = anon_sym_LT_AMP_DASH;
	v->a[83001] = anon_sym_GT_AMP_DASH;
	v->a[83002] = anon_sym_LT_LT_DASH;
	v->a[83003] = anon_sym_LT_LT_LT;
	v->a[83004] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[83005] = anon_sym_DOLLAR_LBRACK;
	v->a[83006] = anon_sym_DOLLAR;
	v->a[83007] = anon_sym_DQUOTE;
	v->a[83008] = sym_raw_string;
	v->a[83009] = sym_ansi_c_string;
	v->a[83010] = aux_sym_number_token1;
	v->a[83011] = aux_sym_number_token2;
	v->a[83012] = anon_sym_DOLLAR_LBRACE;
	v->a[83013] = anon_sym_DOLLAR_LPAREN;
	v->a[83014] = anon_sym_BQUOTE;
	v->a[83015] = anon_sym_DOLLAR_BQUOTE;
	v->a[83016] = anon_sym_LT_LPAREN;
	v->a[83017] = anon_sym_GT_LPAREN;
	v->a[83018] = sym_word;
	v->a[83019] = 5;
	small_parse_table_4151(v);
}

void	small_parse_table_4151(t_small_parse_table_array *v)
{
	v->a[83020] = actions(3);
	v->a[83021] = 1;
	v->a[83022] = sym_comment;
	v->a[83023] = actions(5968);
	v->a[83024] = 1;
	v->a[83025] = sym__special_character;
	v->a[83026] = state(1751);
	v->a[83027] = 1;
	v->a[83028] = aux_sym__literal_repeat1;
	v->a[83029] = actions(5069);
	v->a[83030] = 5;
	v->a[83031] = sym_file_descriptor;
	v->a[83032] = sym_variable_name;
	v->a[83033] = sym_test_operator;
	v->a[83034] = sym__brace_start;
	v->a[83035] = aux_sym_heredoc_redirect_token1;
	v->a[83036] = actions(5067);
	v->a[83037] = 37;
	v->a[83038] = anon_sym_LPAREN_LPAREN;
	v->a[83039] = anon_sym_SEMI;
	small_parse_table_4152(v);
}

void	small_parse_table_4152(t_small_parse_table_array *v)
{
	v->a[83040] = anon_sym_PIPE_PIPE;
	v->a[83041] = anon_sym_AMP_AMP;
	v->a[83042] = anon_sym_PIPE;
	v->a[83043] = anon_sym_AMP;
	v->a[83044] = anon_sym_LT;
	v->a[83045] = anon_sym_GT;
	v->a[83046] = anon_sym_LT_LT;
	v->a[83047] = anon_sym_GT_GT;
	v->a[83048] = anon_sym_RPAREN;
	v->a[83049] = anon_sym_SEMI_SEMI;
	v->a[83050] = anon_sym_PIPE_AMP;
	v->a[83051] = anon_sym_AMP_GT;
	v->a[83052] = anon_sym_AMP_GT_GT;
	v->a[83053] = anon_sym_LT_AMP;
	v->a[83054] = anon_sym_GT_AMP;
	v->a[83055] = anon_sym_GT_PIPE;
	v->a[83056] = anon_sym_LT_AMP_DASH;
	v->a[83057] = anon_sym_GT_AMP_DASH;
	v->a[83058] = anon_sym_LT_LT_DASH;
	v->a[83059] = anon_sym_LT_LT_LT;
	small_parse_table_4153(v);
}

void	small_parse_table_4153(t_small_parse_table_array *v)
{
	v->a[83060] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[83061] = anon_sym_DOLLAR_LBRACK;
	v->a[83062] = anon_sym_DOLLAR;
	v->a[83063] = anon_sym_DQUOTE;
	v->a[83064] = sym_raw_string;
	v->a[83065] = sym_ansi_c_string;
	v->a[83066] = aux_sym_number_token1;
	v->a[83067] = aux_sym_number_token2;
	v->a[83068] = anon_sym_DOLLAR_LBRACE;
	v->a[83069] = anon_sym_DOLLAR_LPAREN;
	v->a[83070] = anon_sym_BQUOTE;
	v->a[83071] = anon_sym_DOLLAR_BQUOTE;
	v->a[83072] = anon_sym_LT_LPAREN;
	v->a[83073] = anon_sym_GT_LPAREN;
	v->a[83074] = sym_word;
	v->a[83075] = 5;
	v->a[83076] = actions(3);
	v->a[83077] = 1;
	v->a[83078] = sym_comment;
	v->a[83079] = actions(5970);
	small_parse_table_4154(v);
}

void	small_parse_table_4154(t_small_parse_table_array *v)
{
	v->a[83080] = 1;
	v->a[83081] = sym__special_character;
	v->a[83082] = state(1736);
	v->a[83083] = 1;
	v->a[83084] = aux_sym__literal_repeat1;
	v->a[83085] = actions(5180);
	v->a[83086] = 5;
	v->a[83087] = sym_file_descriptor;
	v->a[83088] = sym_variable_name;
	v->a[83089] = sym_test_operator;
	v->a[83090] = sym__brace_start;
	v->a[83091] = aux_sym_heredoc_redirect_token1;
	v->a[83092] = actions(5178);
	v->a[83093] = 37;
	v->a[83094] = anon_sym_LPAREN_LPAREN;
	v->a[83095] = anon_sym_SEMI;
	v->a[83096] = anon_sym_PIPE_PIPE;
	v->a[83097] = anon_sym_AMP_AMP;
	v->a[83098] = anon_sym_PIPE;
	v->a[83099] = anon_sym_AMP;
	small_parse_table_4155(v);
}

/* EOF small_parse_table_830.c */
