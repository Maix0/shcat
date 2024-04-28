/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1155.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5775(t_small_parse_table_array *v)
{
	v->a[115500] = anon_sym_BANG;
	v->a[115501] = actions(258);
	v->a[115502] = 1;
	v->a[115503] = anon_sym_DOLLAR;
	v->a[115504] = actions(264);
	v->a[115505] = 1;
	v->a[115506] = aux_sym_number_token1;
	v->a[115507] = actions(266);
	v->a[115508] = 1;
	v->a[115509] = aux_sym_number_token2;
	v->a[115510] = actions(270);
	v->a[115511] = 1;
	v->a[115512] = anon_sym_DOLLAR_LPAREN;
	v->a[115513] = actions(282);
	v->a[115514] = 1;
	v->a[115515] = sym_test_operator;
	v->a[115516] = actions(284);
	v->a[115517] = 1;
	v->a[115518] = sym__brace_start;
	v->a[115519] = actions(1075);
	small_parse_table_5776(v);
}

void	small_parse_table_5776(t_small_parse_table_array *v)
{
	v->a[115520] = 1;
	v->a[115521] = anon_sym_DOLLAR_LBRACK;
	v->a[115522] = actions(1079);
	v->a[115523] = 1;
	v->a[115524] = sym__special_character;
	v->a[115525] = actions(1081);
	v->a[115526] = 1;
	v->a[115527] = anon_sym_DQUOTE;
	v->a[115528] = actions(1085);
	v->a[115529] = 1;
	v->a[115530] = anon_sym_DOLLAR_LBRACE;
	v->a[115531] = actions(1087);
	v->a[115532] = 1;
	v->a[115533] = anon_sym_DOLLAR_BQUOTE;
	v->a[115534] = actions(3598);
	v->a[115535] = 1;
	v->a[115536] = anon_sym_BQUOTE;
	v->a[115537] = state(2690);
	v->a[115538] = 1;
	v->a[115539] = aux_sym__literal_repeat1;
	small_parse_table_5777(v);
}

void	small_parse_table_5777(t_small_parse_table_array *v)
{
	v->a[115540] = state(3086);
	v->a[115541] = 1;
	v->a[115542] = sym__expression;
	v->a[115543] = actions(103);
	v->a[115544] = 2;
	v->a[115545] = anon_sym_PLUS_PLUS2;
	v->a[115546] = anon_sym_DASH_DASH2;
	v->a[115547] = actions(105);
	v->a[115548] = 2;
	v->a[115549] = anon_sym_DASH2;
	v->a[115550] = anon_sym_PLUS2;
	v->a[115551] = actions(1073);
	v->a[115552] = 2;
	v->a[115553] = anon_sym_LPAREN_LPAREN;
	v->a[115554] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[115555] = actions(1083);
	v->a[115556] = 2;
	v->a[115557] = sym_raw_string;
	v->a[115558] = sym_ansi_c_string;
	v->a[115559] = actions(1089);
	small_parse_table_5778(v);
}

void	small_parse_table_5778(t_small_parse_table_array *v)
{
	v->a[115560] = 2;
	v->a[115561] = anon_sym_LT_LPAREN;
	v->a[115562] = anon_sym_GT_LPAREN;
	v->a[115563] = state(3053);
	v->a[115564] = 6;
	v->a[115565] = sym_binary_expression;
	v->a[115566] = sym_ternary_expression;
	v->a[115567] = sym_unary_expression;
	v->a[115568] = sym_postfix_expression;
	v->a[115569] = sym_parenthesized_expression;
	v->a[115570] = sym_concatenation;
	v->a[115571] = state(2500);
	v->a[115572] = 9;
	v->a[115573] = sym_arithmetic_expansion;
	v->a[115574] = sym_brace_expression;
	v->a[115575] = sym_string;
	v->a[115576] = sym_translated_string;
	v->a[115577] = sym_number;
	v->a[115578] = sym_simple_expansion;
	v->a[115579] = sym_expansion;
	small_parse_table_5779(v);
}

void	small_parse_table_5779(t_small_parse_table_array *v)
{
	v->a[115580] = sym_command_substitution;
	v->a[115581] = sym_process_substitution;
	v->a[115582] = 26;
	v->a[115583] = actions(71);
	v->a[115584] = 1;
	v->a[115585] = sym_comment;
	v->a[115586] = actions(107);
	v->a[115587] = 1;
	v->a[115588] = anon_sym_TILDE;
	v->a[115589] = actions(237);
	v->a[115590] = 1;
	v->a[115591] = sym_word;
	v->a[115592] = actions(248);
	v->a[115593] = 1;
	v->a[115594] = anon_sym_LPAREN;
	v->a[115595] = actions(250);
	v->a[115596] = 1;
	v->a[115597] = anon_sym_BANG;
	v->a[115598] = actions(258);
	v->a[115599] = 1;
	small_parse_table_5780(v);
}

/* EOF small_parse_table_1155.c */
