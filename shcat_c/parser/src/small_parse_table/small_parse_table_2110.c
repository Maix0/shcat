/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2110.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10550(t_small_parse_table_array *v)
{
	v->a[211000] = anon_sym_DOLLAR_LBRACE;
	v->a[211001] = actions(9998);
	v->a[211002] = 1;
	v->a[211003] = anon_sym_BQUOTE;
	v->a[211004] = actions(10000);
	v->a[211005] = 1;
	v->a[211006] = anon_sym_DOLLAR_BQUOTE;
	v->a[211007] = actions(10004);
	v->a[211008] = 1;
	v->a[211009] = sym__comment_word;
	v->a[211010] = actions(10012);
	v->a[211011] = 1;
	v->a[211012] = anon_sym_DOLLAR;
	v->a[211013] = actions(9984);
	v->a[211014] = 2;
	v->a[211015] = anon_sym_LPAREN_LPAREN;
	v->a[211016] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[211017] = actions(9990);
	v->a[211018] = 2;
	v->a[211019] = sym_test_operator;
	small_parse_table_10551(v);
}

void	small_parse_table_10551(t_small_parse_table_array *v)
{
	v->a[211020] = sym__special_character;
	v->a[211021] = actions(10002);
	v->a[211022] = 2;
	v->a[211023] = anon_sym_LT_LPAREN;
	v->a[211024] = anon_sym_GT_LPAREN;
	v->a[211025] = actions(9994);
	v->a[211026] = 3;
	v->a[211027] = sym__bare_dollar;
	v->a[211028] = sym_raw_string;
	v->a[211029] = sym_ansi_c_string;
	v->a[211030] = state(1423);
	v->a[211031] = 9;
	v->a[211032] = sym_arithmetic_expansion;
	v->a[211033] = sym_brace_expression;
	v->a[211034] = sym_string;
	v->a[211035] = sym_translated_string;
	v->a[211036] = sym_number;
	v->a[211037] = sym_simple_expansion;
	v->a[211038] = sym_expansion;
	v->a[211039] = sym_command_substitution;
	small_parse_table_10552(v);
}

void	small_parse_table_10552(t_small_parse_table_array *v)
{
	v->a[211040] = sym_process_substitution;
	v->a[211041] = 18;
	v->a[211042] = actions(3);
	v->a[211043] = 1;
	v->a[211044] = sym_comment;
	v->a[211045] = actions(8571);
	v->a[211046] = 1;
	v->a[211047] = anon_sym_DOLLAR_LBRACK;
	v->a[211048] = actions(8573);
	v->a[211049] = 1;
	v->a[211050] = anon_sym_DOLLAR;
	v->a[211051] = actions(8577);
	v->a[211052] = 1;
	v->a[211053] = anon_sym_DQUOTE;
	v->a[211054] = actions(8581);
	v->a[211055] = 1;
	v->a[211056] = aux_sym_number_token1;
	v->a[211057] = actions(8583);
	v->a[211058] = 1;
	v->a[211059] = aux_sym_number_token2;
	small_parse_table_10553(v);
}

void	small_parse_table_10553(t_small_parse_table_array *v)
{
	v->a[211060] = actions(8585);
	v->a[211061] = 1;
	v->a[211062] = anon_sym_DOLLAR_LBRACE;
	v->a[211063] = actions(8587);
	v->a[211064] = 1;
	v->a[211065] = anon_sym_DOLLAR_LPAREN;
	v->a[211066] = actions(8589);
	v->a[211067] = 1;
	v->a[211068] = anon_sym_BQUOTE;
	v->a[211069] = actions(8591);
	v->a[211070] = 1;
	v->a[211071] = anon_sym_DOLLAR_BQUOTE;
	v->a[211072] = actions(8597);
	v->a[211073] = 1;
	v->a[211074] = sym__brace_start;
	v->a[211075] = actions(10014);
	v->a[211076] = 1;
	v->a[211077] = sym_word;
	v->a[211078] = actions(10020);
	v->a[211079] = 1;
	small_parse_table_10554(v);
}

void	small_parse_table_10554(t_small_parse_table_array *v)
{
	v->a[211080] = sym__comment_word;
	v->a[211081] = actions(8567);
	v->a[211082] = 2;
	v->a[211083] = anon_sym_LPAREN_LPAREN;
	v->a[211084] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[211085] = actions(8593);
	v->a[211086] = 2;
	v->a[211087] = anon_sym_LT_LPAREN;
	v->a[211088] = anon_sym_GT_LPAREN;
	v->a[211089] = actions(10016);
	v->a[211090] = 2;
	v->a[211091] = sym_test_operator;
	v->a[211092] = sym__special_character;
	v->a[211093] = actions(10018);
	v->a[211094] = 3;
	v->a[211095] = sym__bare_dollar;
	v->a[211096] = sym_raw_string;
	v->a[211097] = sym_ansi_c_string;
	v->a[211098] = state(5199);
	v->a[211099] = 9;
	small_parse_table_10555(v);
}

/* EOF small_parse_table_2110.c */
