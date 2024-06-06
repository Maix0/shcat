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
	v->a[15000] = state(2320);
	v->a[15001] = 1;
	v->a[15002] = sym_concatenation;
	v->a[15003] = actions(1534);
	v->a[15004] = 2;
	v->a[15005] = sym_file_descriptor;
	v->a[15006] = aux_sym_heredoc_redirect_token1;
	v->a[15007] = actions(2577);
	v->a[15008] = 2;
	v->a[15009] = sym_raw_string;
	v->a[15010] = sym_word;
	v->a[15011] = state(2316);
	v->a[15012] = 7;
	v->a[15013] = sym_arithmetic_expansion;
	v->a[15014] = sym_brace_expression;
	v->a[15015] = sym_string;
	v->a[15016] = sym_number;
	v->a[15017] = sym_simple_expansion;
	v->a[15018] = sym_expansion;
	v->a[15019] = sym_command_substitution;
	small_parse_table_751(v);
}

void	small_parse_table_751(t_small_parse_table_array *v)
{
	v->a[15020] = actions(1532);
	v->a[15021] = 19;
	v->a[15022] = anon_sym_PIPE;
	v->a[15023] = anon_sym_SEMI_SEMI;
	v->a[15024] = anon_sym_PIPE_AMP;
	v->a[15025] = anon_sym_AMP_AMP;
	v->a[15026] = anon_sym_PIPE_PIPE;
	v->a[15027] = anon_sym_LT;
	v->a[15028] = anon_sym_GT;
	v->a[15029] = anon_sym_GT_GT;
	v->a[15030] = anon_sym_AMP_GT;
	v->a[15031] = anon_sym_AMP_GT_GT;
	v->a[15032] = anon_sym_LT_AMP;
	v->a[15033] = anon_sym_GT_AMP;
	v->a[15034] = anon_sym_GT_PIPE;
	v->a[15035] = anon_sym_LT_AMP_DASH;
	v->a[15036] = anon_sym_GT_AMP_DASH;
	v->a[15037] = anon_sym_LT_LT;
	v->a[15038] = anon_sym_LT_LT_DASH;
	v->a[15039] = anon_sym_AMP;
	small_parse_table_752(v);
}

void	small_parse_table_752(t_small_parse_table_array *v)
{
	v->a[15040] = anon_sym_SEMI;
	v->a[15041] = 21;
	v->a[15042] = actions(57);
	v->a[15043] = 1;
	v->a[15044] = sym_comment;
	v->a[15045] = actions(2581);
	v->a[15046] = 1;
	v->a[15047] = sym_word;
	v->a[15048] = actions(2584);
	v->a[15049] = 1;
	v->a[15050] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15051] = actions(2587);
	v->a[15052] = 1;
	v->a[15053] = anon_sym_DOLLAR;
	v->a[15054] = actions(2590);
	v->a[15055] = 1;
	v->a[15056] = sym__special_character;
	v->a[15057] = actions(2593);
	v->a[15058] = 1;
	v->a[15059] = anon_sym_DQUOTE;
	small_parse_table_753(v);
}

void	small_parse_table_753(t_small_parse_table_array *v)
{
	v->a[15060] = actions(2599);
	v->a[15061] = 1;
	v->a[15062] = aux_sym_number_token1;
	v->a[15063] = actions(2602);
	v->a[15064] = 1;
	v->a[15065] = aux_sym_number_token2;
	v->a[15066] = actions(2605);
	v->a[15067] = 1;
	v->a[15068] = anon_sym_DOLLAR_LBRACE;
	v->a[15069] = actions(2608);
	v->a[15070] = 1;
	v->a[15071] = anon_sym_DOLLAR_LPAREN;
	v->a[15072] = actions(2611);
	v->a[15073] = 1;
	v->a[15074] = anon_sym_BQUOTE;
	v->a[15075] = actions(2614);
	v->a[15076] = 1;
	v->a[15077] = anon_sym_DOLLAR_BQUOTE;
	v->a[15078] = actions(2617);
	v->a[15079] = 1;
	small_parse_table_754(v);
}

void	small_parse_table_754(t_small_parse_table_array *v)
{
	v->a[15080] = aux_sym__simple_variable_name_token1;
	v->a[15081] = actions(2620);
	v->a[15082] = 1;
	v->a[15083] = sym_variable_name;
	v->a[15084] = actions(2623);
	v->a[15085] = 1;
	v->a[15086] = sym__brace_start;
	v->a[15087] = state(1522);
	v->a[15088] = 1;
	v->a[15089] = aux_sym__literal_repeat1;
	v->a[15090] = actions(2596);
	v->a[15091] = 2;
	v->a[15092] = sym_test_operator;
	v->a[15093] = sym_raw_string;
	v->a[15094] = state(452);
	v->a[15095] = 3;
	v->a[15096] = sym_variable_assignment;
	v->a[15097] = sym_concatenation;
	v->a[15098] = aux_sym_declaration_command_repeat1;
	v->a[15099] = actions(764);
	small_parse_table_755(v);
}

/* EOF small_parse_table_150.c */
