/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_140.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_700(t_small_parse_table_array *v)
{
	v->a[14000] = anon_sym_DOLLAR_LBRACK;
	v->a[14001] = sym__special_character;
	v->a[14002] = sym_raw_string;
	v->a[14003] = sym_ansi_c_string;
	v->a[14004] = aux_sym_number_token1;
	v->a[14005] = aux_sym_number_token2;
	v->a[14006] = anon_sym_DOLLAR_LBRACE;
	v->a[14007] = anon_sym_DOLLAR_LPAREN;
	v->a[14008] = anon_sym_BQUOTE;
	v->a[14009] = anon_sym_DOLLAR_BQUOTE;
	v->a[14010] = anon_sym_LT_LPAREN;
	v->a[14011] = anon_sym_GT_LPAREN;
	v->a[14012] = sym_word;
	v->a[14013] = 26;
	v->a[14014] = actions(3);
	v->a[14015] = 1;
	v->a[14016] = sym_comment;
	v->a[14017] = actions(1549);
	v->a[14018] = 1;
	v->a[14019] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_701(v);
}

void	small_parse_table_701(t_small_parse_table_array *v)
{
	v->a[14020] = actions(1551);
	v->a[14021] = 1;
	v->a[14022] = anon_sym_DOLLAR;
	v->a[14023] = actions(1555);
	v->a[14024] = 1;
	v->a[14025] = anon_sym_DQUOTE;
	v->a[14026] = actions(1557);
	v->a[14027] = 1;
	v->a[14028] = aux_sym_number_token1;
	v->a[14029] = actions(1559);
	v->a[14030] = 1;
	v->a[14031] = aux_sym_number_token2;
	v->a[14032] = actions(1561);
	v->a[14033] = 1;
	v->a[14034] = anon_sym_DOLLAR_LBRACE;
	v->a[14035] = actions(1563);
	v->a[14036] = 1;
	v->a[14037] = anon_sym_DOLLAR_LPAREN;
	v->a[14038] = actions(1565);
	v->a[14039] = 1;
	small_parse_table_702(v);
}

void	small_parse_table_702(t_small_parse_table_array *v)
{
	v->a[14040] = anon_sym_BQUOTE;
	v->a[14041] = actions(1567);
	v->a[14042] = 1;
	v->a[14043] = anon_sym_DOLLAR_BQUOTE;
	v->a[14044] = actions(1573);
	v->a[14045] = 1;
	v->a[14046] = sym__bare_dollar;
	v->a[14047] = actions(1575);
	v->a[14048] = 1;
	v->a[14049] = sym__brace_start;
	v->a[14050] = actions(2420);
	v->a[14051] = 1;
	v->a[14052] = anon_sym_LT_LT_LT;
	v->a[14053] = actions(2422);
	v->a[14054] = 1;
	v->a[14055] = sym__special_character;
	v->a[14056] = actions(2424);
	v->a[14057] = 1;
	v->a[14058] = sym_test_operator;
	v->a[14059] = state(703);
	small_parse_table_703(v);
}

void	small_parse_table_703(t_small_parse_table_array *v)
{
	v->a[14060] = 1;
	v->a[14061] = aux_sym_command_repeat2;
	v->a[14062] = state(1321);
	v->a[14063] = 1;
	v->a[14064] = aux_sym__literal_repeat1;
	v->a[14065] = state(1712);
	v->a[14066] = 1;
	v->a[14067] = sym_herestring_redirect;
	v->a[14068] = state(1716);
	v->a[14069] = 1;
	v->a[14070] = sym_concatenation;
	v->a[14071] = actions(1543);
	v->a[14072] = 2;
	v->a[14073] = anon_sym_LPAREN_LPAREN;
	v->a[14074] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14075] = actions(1569);
	v->a[14076] = 2;
	v->a[14077] = anon_sym_LT_LPAREN;
	v->a[14078] = anon_sym_GT_LPAREN;
	v->a[14079] = actions(1615);
	small_parse_table_704(v);
}

void	small_parse_table_704(t_small_parse_table_array *v)
{
	v->a[14080] = 2;
	v->a[14081] = sym_file_descriptor;
	v->a[14082] = aux_sym_heredoc_redirect_token1;
	v->a[14083] = actions(2418);
	v->a[14084] = 2;
	v->a[14085] = anon_sym_EQ_EQ;
	v->a[14086] = anon_sym_EQ_TILDE;
	v->a[14087] = actions(2416);
	v->a[14088] = 3;
	v->a[14089] = sym_raw_string;
	v->a[14090] = sym_ansi_c_string;
	v->a[14091] = sym_word;
	v->a[14092] = state(1794);
	v->a[14093] = 9;
	v->a[14094] = sym_arithmetic_expansion;
	v->a[14095] = sym_brace_expression;
	v->a[14096] = sym_string;
	v->a[14097] = sym_translated_string;
	v->a[14098] = sym_number;
	v->a[14099] = sym_simple_expansion;
	small_parse_table_705(v);
}

/* EOF small_parse_table_140.c */
