/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_470.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2350(t_small_parse_table_array *v)
{
	v->a[47000] = anon_sym_LT_AMP_DASH;
	v->a[47001] = anon_sym_GT_AMP_DASH;
	v->a[47002] = anon_sym_LT_LT_DASH;
	v->a[47003] = anon_sym_LT_LT_LT;
	v->a[47004] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47005] = anon_sym_DOLLAR_LBRACK;
	v->a[47006] = aux_sym_concatenation_token1;
	v->a[47007] = anon_sym_DOLLAR;
	v->a[47008] = sym__special_character;
	v->a[47009] = anon_sym_DQUOTE;
	v->a[47010] = sym_raw_string;
	v->a[47011] = sym_ansi_c_string;
	v->a[47012] = aux_sym_number_token1;
	v->a[47013] = aux_sym_number_token2;
	v->a[47014] = anon_sym_DOLLAR_LBRACE;
	v->a[47015] = anon_sym_DOLLAR_LPAREN;
	v->a[47016] = anon_sym_BQUOTE;
	v->a[47017] = anon_sym_DOLLAR_BQUOTE;
	v->a[47018] = anon_sym_LT_LPAREN;
	v->a[47019] = anon_sym_GT_LPAREN;
	small_parse_table_2351(v);
}

void	small_parse_table_2351(t_small_parse_table_array *v)
{
	v->a[47020] = sym_word;
	v->a[47021] = 22;
	v->a[47022] = actions(71);
	v->a[47023] = 1;
	v->a[47024] = sym_comment;
	v->a[47025] = actions(5311);
	v->a[47026] = 1;
	v->a[47027] = sym_word;
	v->a[47028] = actions(5315);
	v->a[47029] = 1;
	v->a[47030] = anon_sym_DOLLAR_LBRACK;
	v->a[47031] = actions(5317);
	v->a[47032] = 1;
	v->a[47033] = anon_sym_DOLLAR;
	v->a[47034] = actions(5319);
	v->a[47035] = 1;
	v->a[47036] = sym__special_character;
	v->a[47037] = actions(5321);
	v->a[47038] = 1;
	v->a[47039] = anon_sym_DQUOTE;
	small_parse_table_2352(v);
}

void	small_parse_table_2352(t_small_parse_table_array *v)
{
	v->a[47040] = actions(5325);
	v->a[47041] = 1;
	v->a[47042] = aux_sym_number_token1;
	v->a[47043] = actions(5327);
	v->a[47044] = 1;
	v->a[47045] = aux_sym_number_token2;
	v->a[47046] = actions(5329);
	v->a[47047] = 1;
	v->a[47048] = anon_sym_DOLLAR_LBRACE;
	v->a[47049] = actions(5331);
	v->a[47050] = 1;
	v->a[47051] = anon_sym_DOLLAR_LPAREN;
	v->a[47052] = actions(5333);
	v->a[47053] = 1;
	v->a[47054] = anon_sym_BQUOTE;
	v->a[47055] = actions(5335);
	v->a[47056] = 1;
	v->a[47057] = anon_sym_DOLLAR_BQUOTE;
	v->a[47058] = actions(5339);
	v->a[47059] = 1;
	small_parse_table_2353(v);
}

void	small_parse_table_2353(t_small_parse_table_array *v)
{
	v->a[47060] = sym_test_operator;
	v->a[47061] = actions(5341);
	v->a[47062] = 1;
	v->a[47063] = sym__brace_start;
	v->a[47064] = state(5424);
	v->a[47065] = 1;
	v->a[47066] = aux_sym__literal_repeat1;
	v->a[47067] = state(5575);
	v->a[47068] = 1;
	v->a[47069] = sym_concatenation;
	v->a[47070] = actions(5313);
	v->a[47071] = 2;
	v->a[47072] = anon_sym_LPAREN_LPAREN;
	v->a[47073] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47074] = actions(5323);
	v->a[47075] = 2;
	v->a[47076] = sym_raw_string;
	v->a[47077] = sym_ansi_c_string;
	v->a[47078] = actions(5337);
	v->a[47079] = 2;
	small_parse_table_2354(v);
}

void	small_parse_table_2354(t_small_parse_table_array *v)
{
	v->a[47080] = anon_sym_LT_LPAREN;
	v->a[47081] = anon_sym_GT_LPAREN;
	v->a[47082] = actions(2494);
	v->a[47083] = 7;
	v->a[47084] = anon_sym_PIPE;
	v->a[47085] = anon_sym_LT;
	v->a[47086] = anon_sym_GT;
	v->a[47087] = anon_sym_LT_LT;
	v->a[47088] = anon_sym_AMP_GT;
	v->a[47089] = anon_sym_LT_AMP;
	v->a[47090] = anon_sym_GT_AMP;
	v->a[47091] = state(5379);
	v->a[47092] = 9;
	v->a[47093] = sym_arithmetic_expansion;
	v->a[47094] = sym_brace_expression;
	v->a[47095] = sym_string;
	v->a[47096] = sym_translated_string;
	v->a[47097] = sym_number;
	v->a[47098] = sym_simple_expansion;
	v->a[47099] = sym_expansion;
	small_parse_table_2355(v);
}

/* EOF small_parse_table_470.c */
