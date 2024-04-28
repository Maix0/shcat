/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_960.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4800(t_small_parse_table_array *v)
{
	v->a[96000] = anon_sym_PIPE_AMP;
	v->a[96001] = anon_sym_AMP_GT;
	v->a[96002] = anon_sym_AMP_GT_GT;
	v->a[96003] = anon_sym_LT_AMP;
	v->a[96004] = anon_sym_GT_AMP;
	v->a[96005] = anon_sym_GT_PIPE;
	v->a[96006] = anon_sym_LT_AMP_DASH;
	v->a[96007] = anon_sym_GT_AMP_DASH;
	v->a[96008] = anon_sym_LT_LT_DASH;
	v->a[96009] = anon_sym_LT_LT_LT;
	v->a[96010] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[96011] = anon_sym_DOLLAR_LBRACK;
	v->a[96012] = anon_sym_DOLLAR;
	v->a[96013] = sym__special_character;
	v->a[96014] = anon_sym_DQUOTE;
	v->a[96015] = sym_raw_string;
	v->a[96016] = sym_ansi_c_string;
	v->a[96017] = aux_sym_number_token1;
	v->a[96018] = aux_sym_number_token2;
	v->a[96019] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_4801(v);
}

void	small_parse_table_4801(t_small_parse_table_array *v)
{
	v->a[96020] = anon_sym_DOLLAR_LPAREN;
	v->a[96021] = anon_sym_BQUOTE;
	v->a[96022] = anon_sym_DOLLAR_BQUOTE;
	v->a[96023] = anon_sym_LT_LPAREN;
	v->a[96024] = anon_sym_GT_LPAREN;
	v->a[96025] = sym_word;
	v->a[96026] = 3;
	v->a[96027] = actions(3);
	v->a[96028] = 1;
	v->a[96029] = sym_comment;
	v->a[96030] = actions(2096);
	v->a[96031] = 5;
	v->a[96032] = sym_file_descriptor;
	v->a[96033] = sym_variable_name;
	v->a[96034] = sym_test_operator;
	v->a[96035] = sym__brace_start;
	v->a[96036] = aux_sym_heredoc_redirect_token1;
	v->a[96037] = actions(2094);
	v->a[96038] = 38;
	v->a[96039] = anon_sym_LPAREN_LPAREN;
	small_parse_table_4802(v);
}

void	small_parse_table_4802(t_small_parse_table_array *v)
{
	v->a[96040] = anon_sym_SEMI;
	v->a[96041] = anon_sym_PIPE_PIPE;
	v->a[96042] = anon_sym_AMP_AMP;
	v->a[96043] = anon_sym_PIPE;
	v->a[96044] = anon_sym_AMP;
	v->a[96045] = anon_sym_LT;
	v->a[96046] = anon_sym_GT;
	v->a[96047] = anon_sym_LT_LT;
	v->a[96048] = anon_sym_GT_GT;
	v->a[96049] = anon_sym_RPAREN;
	v->a[96050] = anon_sym_SEMI_SEMI;
	v->a[96051] = anon_sym_PIPE_AMP;
	v->a[96052] = anon_sym_AMP_GT;
	v->a[96053] = anon_sym_AMP_GT_GT;
	v->a[96054] = anon_sym_LT_AMP;
	v->a[96055] = anon_sym_GT_AMP;
	v->a[96056] = anon_sym_GT_PIPE;
	v->a[96057] = anon_sym_LT_AMP_DASH;
	v->a[96058] = anon_sym_GT_AMP_DASH;
	v->a[96059] = anon_sym_LT_LT_DASH;
	small_parse_table_4803(v);
}

void	small_parse_table_4803(t_small_parse_table_array *v)
{
	v->a[96060] = anon_sym_LT_LT_LT;
	v->a[96061] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[96062] = anon_sym_DOLLAR_LBRACK;
	v->a[96063] = anon_sym_DOLLAR;
	v->a[96064] = sym__special_character;
	v->a[96065] = anon_sym_DQUOTE;
	v->a[96066] = sym_raw_string;
	v->a[96067] = sym_ansi_c_string;
	v->a[96068] = aux_sym_number_token1;
	v->a[96069] = aux_sym_number_token2;
	v->a[96070] = anon_sym_DOLLAR_LBRACE;
	v->a[96071] = anon_sym_DOLLAR_LPAREN;
	v->a[96072] = anon_sym_BQUOTE;
	v->a[96073] = anon_sym_DOLLAR_BQUOTE;
	v->a[96074] = anon_sym_LT_LPAREN;
	v->a[96075] = anon_sym_GT_LPAREN;
	v->a[96076] = sym_word;
	v->a[96077] = 3;
	v->a[96078] = actions(71);
	v->a[96079] = 1;
	small_parse_table_4804(v);
}

void	small_parse_table_4804(t_small_parse_table_array *v)
{
	v->a[96080] = sym_comment;
	v->a[96081] = actions(1312);
	v->a[96082] = 16;
	v->a[96083] = anon_sym_PIPE;
	v->a[96084] = anon_sym_EQ_EQ;
	v->a[96085] = anon_sym_LT;
	v->a[96086] = anon_sym_GT;
	v->a[96087] = anon_sym_LT_LT;
	v->a[96088] = anon_sym_LPAREN;
	v->a[96089] = anon_sym_EQ_TILDE;
	v->a[96090] = anon_sym_AMP_GT;
	v->a[96091] = anon_sym_LT_AMP;
	v->a[96092] = anon_sym_GT_AMP;
	v->a[96093] = anon_sym_DOLLAR;
	v->a[96094] = aux_sym_number_token1;
	v->a[96095] = aux_sym_number_token2;
	v->a[96096] = anon_sym_DOLLAR_LPAREN;
	v->a[96097] = anon_sym_BQUOTE;
	v->a[96098] = sym_word;
	v->a[96099] = actions(1314);
	small_parse_table_4805(v);
}

/* EOF small_parse_table_960.c */
