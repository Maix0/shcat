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
	v->a[121000] = anon_sym_SEMI_SEMI;
	v->a[121001] = anon_sym_PIPE_AMP;
	v->a[121002] = anon_sym_AMP_AMP;
	v->a[121003] = anon_sym_PIPE_PIPE;
	v->a[121004] = anon_sym_LT_LT;
	v->a[121005] = anon_sym_LT_LT_DASH;
	v->a[121006] = anon_sym_AMP;
	v->a[121007] = anon_sym_BQUOTE;
	v->a[121008] = anon_sym_SEMI;
	v->a[121009] = 16;
	v->a[121010] = actions(3);
	v->a[121011] = 1;
	v->a[121012] = sym_comment;
	v->a[121013] = actions(2362);
	v->a[121014] = 1;
	v->a[121015] = aux_sym_number_token1;
	v->a[121016] = actions(2364);
	v->a[121017] = 1;
	v->a[121018] = aux_sym_number_token2;
	v->a[121019] = actions(2368);
	small_parse_table_6051(v);
}

void	small_parse_table_6051(t_small_parse_table_array *v)
{
	v->a[121020] = 1;
	v->a[121021] = anon_sym_DOLLAR_LPAREN;
	v->a[121022] = actions(2376);
	v->a[121023] = 1;
	v->a[121024] = sym__brace_start;
	v->a[121025] = actions(6811);
	v->a[121026] = 1;
	v->a[121027] = sym_word;
	v->a[121028] = actions(6813);
	v->a[121029] = 1;
	v->a[121030] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[121031] = actions(6815);
	v->a[121032] = 1;
	v->a[121033] = sym__special_character;
	v->a[121034] = actions(6817);
	v->a[121035] = 1;
	v->a[121036] = anon_sym_DQUOTE;
	v->a[121037] = actions(6821);
	v->a[121038] = 1;
	v->a[121039] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_6052(v);
}

void	small_parse_table_6052(t_small_parse_table_array *v)
{
	v->a[121040] = actions(6823);
	v->a[121041] = 1;
	v->a[121042] = anon_sym_BQUOTE;
	v->a[121043] = actions(6825);
	v->a[121044] = 1;
	v->a[121045] = anon_sym_DOLLAR_BQUOTE;
	v->a[121046] = actions(6827);
	v->a[121047] = 1;
	v->a[121048] = sym__comment_word;
	v->a[121049] = actions(7029);
	v->a[121050] = 1;
	v->a[121051] = anon_sym_DOLLAR;
	v->a[121052] = actions(6819);
	v->a[121053] = 3;
	v->a[121054] = sym_test_operator;
	v->a[121055] = sym__bare_dollar;
	v->a[121056] = sym_raw_string;
	v->a[121057] = state(2035);
	v->a[121058] = 7;
	v->a[121059] = sym_arithmetic_expansion;
	small_parse_table_6053(v);
}

void	small_parse_table_6053(t_small_parse_table_array *v)
{
	v->a[121060] = sym_brace_expression;
	v->a[121061] = sym_string;
	v->a[121062] = sym_number;
	v->a[121063] = sym_simple_expansion;
	v->a[121064] = sym_expansion;
	v->a[121065] = sym_command_substitution;
	v->a[121066] = 16;
	v->a[121067] = actions(3);
	v->a[121068] = 1;
	v->a[121069] = sym_comment;
	v->a[121070] = actions(2362);
	v->a[121071] = 1;
	v->a[121072] = aux_sym_number_token1;
	v->a[121073] = actions(2364);
	v->a[121074] = 1;
	v->a[121075] = aux_sym_number_token2;
	v->a[121076] = actions(2368);
	v->a[121077] = 1;
	v->a[121078] = anon_sym_DOLLAR_LPAREN;
	v->a[121079] = actions(2376);
	small_parse_table_6054(v);
}

void	small_parse_table_6054(t_small_parse_table_array *v)
{
	v->a[121080] = 1;
	v->a[121081] = sym__brace_start;
	v->a[121082] = actions(6811);
	v->a[121083] = 1;
	v->a[121084] = sym_word;
	v->a[121085] = actions(6813);
	v->a[121086] = 1;
	v->a[121087] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[121088] = actions(6815);
	v->a[121089] = 1;
	v->a[121090] = sym__special_character;
	v->a[121091] = actions(6817);
	v->a[121092] = 1;
	v->a[121093] = anon_sym_DQUOTE;
	v->a[121094] = actions(6821);
	v->a[121095] = 1;
	v->a[121096] = anon_sym_DOLLAR_LBRACE;
	v->a[121097] = actions(6823);
	v->a[121098] = 1;
	v->a[121099] = anon_sym_BQUOTE;
	small_parse_table_6055(v);
}

/* EOF small_parse_table_1210.c */
