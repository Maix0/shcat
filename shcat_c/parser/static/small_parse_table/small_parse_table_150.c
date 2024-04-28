/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_150.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_750(t_small_parse_table_array *v)
{
	v->a[15000] = sym_comment;
	v->a[15001] = state(1744);
	v->a[15002] = 1;
	v->a[15003] = aux_sym__literal_repeat1;
	v->a[15004] = state(704);
	v->a[15005] = 2;
	v->a[15006] = sym_concatenation;
	v->a[15007] = aux_sym_for_statement_repeat1;
	v->a[15008] = actions(2096);
	v->a[15009] = 5;
	v->a[15010] = sym_file_descriptor;
	v->a[15011] = sym_variable_name;
	v->a[15012] = sym_test_operator;
	v->a[15013] = sym__brace_start;
	v->a[15014] = aux_sym_heredoc_redirect_token1;
	v->a[15015] = state(1688);
	v->a[15016] = 9;
	v->a[15017] = sym_arithmetic_expansion;
	v->a[15018] = sym_brace_expression;
	v->a[15019] = sym_string;
	small_parse_table_751(v);
}

void	small_parse_table_751(t_small_parse_table_array *v)
{
	v->a[15020] = sym_translated_string;
	v->a[15021] = sym_number;
	v->a[15022] = sym_simple_expansion;
	v->a[15023] = sym_expansion;
	v->a[15024] = sym_command_substitution;
	v->a[15025] = sym_process_substitution;
	v->a[15026] = actions(2094);
	v->a[15027] = 37;
	v->a[15028] = anon_sym_LPAREN_LPAREN;
	v->a[15029] = anon_sym_SEMI;
	v->a[15030] = anon_sym_PIPE_PIPE;
	v->a[15031] = anon_sym_AMP_AMP;
	v->a[15032] = anon_sym_PIPE;
	v->a[15033] = anon_sym_AMP;
	v->a[15034] = anon_sym_LT;
	v->a[15035] = anon_sym_GT;
	v->a[15036] = anon_sym_LT_LT;
	v->a[15037] = anon_sym_GT_GT;
	v->a[15038] = anon_sym_SEMI_SEMI;
	v->a[15039] = anon_sym_PIPE_AMP;
	small_parse_table_752(v);
}

void	small_parse_table_752(t_small_parse_table_array *v)
{
	v->a[15040] = anon_sym_AMP_GT;
	v->a[15041] = anon_sym_AMP_GT_GT;
	v->a[15042] = anon_sym_LT_AMP;
	v->a[15043] = anon_sym_GT_AMP;
	v->a[15044] = anon_sym_GT_PIPE;
	v->a[15045] = anon_sym_LT_AMP_DASH;
	v->a[15046] = anon_sym_GT_AMP_DASH;
	v->a[15047] = anon_sym_LT_LT_DASH;
	v->a[15048] = anon_sym_LT_LT_LT;
	v->a[15049] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15050] = anon_sym_DOLLAR_LBRACK;
	v->a[15051] = anon_sym_DOLLAR;
	v->a[15052] = sym__special_character;
	v->a[15053] = anon_sym_DQUOTE;
	v->a[15054] = sym_raw_string;
	v->a[15055] = sym_ansi_c_string;
	v->a[15056] = aux_sym_number_token1;
	v->a[15057] = aux_sym_number_token2;
	v->a[15058] = anon_sym_DOLLAR_LBRACE;
	v->a[15059] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_753(v);
}

void	small_parse_table_753(t_small_parse_table_array *v)
{
	v->a[15060] = anon_sym_BQUOTE;
	v->a[15061] = anon_sym_DOLLAR_BQUOTE;
	v->a[15062] = anon_sym_LT_LPAREN;
	v->a[15063] = anon_sym_GT_LPAREN;
	v->a[15064] = sym_word;
	v->a[15065] = 8;
	v->a[15066] = actions(3);
	v->a[15067] = 1;
	v->a[15068] = sym_comment;
	v->a[15069] = actions(3423);
	v->a[15070] = 1;
	v->a[15071] = anon_sym_DQUOTE;
	v->a[15072] = actions(3427);
	v->a[15073] = 1;
	v->a[15074] = sym_variable_name;
	v->a[15075] = state(1686);
	v->a[15076] = 1;
	v->a[15077] = sym_string;
	v->a[15078] = actions(3425);
	v->a[15079] = 2;
	small_parse_table_754(v);
}

void	small_parse_table_754(t_small_parse_table_array *v)
{
	v->a[15080] = aux_sym__simple_variable_name_token1;
	v->a[15081] = aux_sym__multiline_variable_name_token1;
	v->a[15082] = actions(1235);
	v->a[15083] = 4;
	v->a[15084] = sym_file_descriptor;
	v->a[15085] = sym_test_operator;
	v->a[15086] = sym__brace_start;
	v->a[15087] = ts_builtin_sym_end;
	v->a[15088] = actions(3421);
	v->a[15089] = 9;
	v->a[15090] = anon_sym_DASH;
	v->a[15091] = anon_sym_STAR;
	v->a[15092] = anon_sym_BANG;
	v->a[15093] = anon_sym_QMARK;
	v->a[15094] = anon_sym_DOLLAR;
	v->a[15095] = anon_sym_POUND;
	v->a[15096] = anon_sym_AT2;
	v->a[15097] = anon_sym_0;
	v->a[15098] = anon_sym__;
	v->a[15099] = actions(1227);
	small_parse_table_755(v);
}

/* EOF small_parse_table_150.c */
