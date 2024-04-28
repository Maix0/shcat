/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1210.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6050(t_small_parse_table_array *v)
{
	v->a[121000] = sym_test_operator;
	v->a[121001] = anon_sym_RPAREN_RPAREN;
	v->a[121002] = anon_sym_PLUS_PLUS;
	v->a[121003] = anon_sym_DASH_DASH;
	v->a[121004] = anon_sym_PLUS_EQ;
	v->a[121005] = anon_sym_DASH_EQ;
	v->a[121006] = anon_sym_STAR_EQ;
	v->a[121007] = anon_sym_SLASH_EQ;
	v->a[121008] = anon_sym_PERCENT_EQ;
	v->a[121009] = anon_sym_STAR_STAR_EQ;
	v->a[121010] = anon_sym_LT_LT_EQ;
	v->a[121011] = anon_sym_GT_GT_EQ;
	v->a[121012] = anon_sym_AMP_EQ;
	v->a[121013] = anon_sym_CARET_EQ;
	v->a[121014] = anon_sym_PIPE_EQ;
	v->a[121015] = anon_sym_PIPE_PIPE;
	v->a[121016] = anon_sym_AMP_AMP;
	v->a[121017] = anon_sym_EQ_EQ;
	v->a[121018] = anon_sym_BANG_EQ;
	v->a[121019] = anon_sym_LT_EQ;
	small_parse_table_6051(v);
}

void	small_parse_table_6051(t_small_parse_table_array *v)
{
	v->a[121020] = anon_sym_GT_EQ;
	v->a[121021] = anon_sym_RBRACK_RBRACK;
	v->a[121022] = anon_sym_EQ_TILDE;
	v->a[121023] = anon_sym_QMARK;
	v->a[121024] = anon_sym_COLON;
	v->a[121025] = 3;
	v->a[121026] = actions(71);
	v->a[121027] = 1;
	v->a[121028] = sym_comment;
	v->a[121029] = actions(1312);
	v->a[121030] = 15;
	v->a[121031] = anon_sym_PIPE;
	v->a[121032] = anon_sym_EQ_EQ;
	v->a[121033] = anon_sym_LT;
	v->a[121034] = anon_sym_GT;
	v->a[121035] = anon_sym_LT_LT;
	v->a[121036] = anon_sym_EQ_TILDE;
	v->a[121037] = anon_sym_AMP_GT;
	v->a[121038] = anon_sym_LT_AMP;
	v->a[121039] = anon_sym_GT_AMP;
	small_parse_table_6052(v);
}

void	small_parse_table_6052(t_small_parse_table_array *v)
{
	v->a[121040] = anon_sym_DOLLAR;
	v->a[121041] = aux_sym_number_token1;
	v->a[121042] = aux_sym_number_token2;
	v->a[121043] = anon_sym_DOLLAR_LPAREN;
	v->a[121044] = anon_sym_BQUOTE;
	v->a[121045] = sym_word;
	v->a[121046] = actions(1314);
	v->a[121047] = 27;
	v->a[121048] = sym_file_descriptor;
	v->a[121049] = sym__concat;
	v->a[121050] = sym_test_operator;
	v->a[121051] = sym__bare_dollar;
	v->a[121052] = sym__brace_start;
	v->a[121053] = anon_sym_LPAREN_LPAREN;
	v->a[121054] = anon_sym_PIPE_PIPE;
	v->a[121055] = anon_sym_AMP_AMP;
	v->a[121056] = anon_sym_GT_GT;
	v->a[121057] = anon_sym_PIPE_AMP;
	v->a[121058] = anon_sym_AMP_GT_GT;
	v->a[121059] = anon_sym_GT_PIPE;
	small_parse_table_6053(v);
}

void	small_parse_table_6053(t_small_parse_table_array *v)
{
	v->a[121060] = anon_sym_LT_AMP_DASH;
	v->a[121061] = anon_sym_GT_AMP_DASH;
	v->a[121062] = anon_sym_LT_LT_DASH;
	v->a[121063] = anon_sym_LT_LT_LT;
	v->a[121064] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[121065] = anon_sym_DOLLAR_LBRACK;
	v->a[121066] = aux_sym_concatenation_token1;
	v->a[121067] = sym__special_character;
	v->a[121068] = anon_sym_DQUOTE;
	v->a[121069] = sym_raw_string;
	v->a[121070] = sym_ansi_c_string;
	v->a[121071] = anon_sym_DOLLAR_LBRACE;
	v->a[121072] = anon_sym_DOLLAR_BQUOTE;
	v->a[121073] = anon_sym_LT_LPAREN;
	v->a[121074] = anon_sym_GT_LPAREN;
	v->a[121075] = 5;
	v->a[121076] = actions(71);
	v->a[121077] = 1;
	v->a[121078] = sym_comment;
	v->a[121079] = state(2293);
	small_parse_table_6054(v);
}

void	small_parse_table_6054(t_small_parse_table_array *v)
{
	v->a[121080] = 1;
	v->a[121081] = aux_sym_concatenation_repeat1;
	v->a[121082] = actions(6441);
	v->a[121083] = 2;
	v->a[121084] = sym__concat;
	v->a[121085] = aux_sym_concatenation_token1;
	v->a[121086] = actions(4370);
	v->a[121087] = 14;
	v->a[121088] = anon_sym_PIPE;
	v->a[121089] = anon_sym_LT;
	v->a[121090] = anon_sym_GT;
	v->a[121091] = anon_sym_LT_LT;
	v->a[121092] = anon_sym_AMP_GT;
	v->a[121093] = anon_sym_LT_AMP;
	v->a[121094] = anon_sym_GT_AMP;
	v->a[121095] = anon_sym_DOLLAR;
	v->a[121096] = sym__special_character;
	v->a[121097] = aux_sym_number_token1;
	v->a[121098] = aux_sym_number_token2;
	v->a[121099] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_6055(v);
}

/* EOF small_parse_table_1210.c */
