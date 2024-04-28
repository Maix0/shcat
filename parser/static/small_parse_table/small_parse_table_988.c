/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_988.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4940(t_small_parse_table_array *v)
{
	v->a[98800] = aux_sym_number_token2;
	v->a[98801] = actions(379);
	v->a[98802] = 1;
	v->a[98803] = anon_sym_DOLLAR_LBRACE;
	v->a[98804] = actions(381);
	v->a[98805] = 1;
	v->a[98806] = anon_sym_DOLLAR_LPAREN;
	v->a[98807] = actions(385);
	v->a[98808] = 1;
	v->a[98809] = anon_sym_DOLLAR_BQUOTE;
	v->a[98810] = actions(389);
	v->a[98811] = 1;
	v->a[98812] = sym_test_operator;
	v->a[98813] = actions(391);
	v->a[98814] = 1;
	v->a[98815] = sym__brace_start;
	v->a[98816] = actions(5807);
	v->a[98817] = 1;
	v->a[98818] = sym__special_character;
	v->a[98819] = actions(5809);
	small_parse_table_4941(v);
}

void	small_parse_table_4941(t_small_parse_table_array *v)
{
	v->a[98820] = 1;
	v->a[98821] = anon_sym_BQUOTE;
	v->a[98822] = state(2641);
	v->a[98823] = 1;
	v->a[98824] = aux_sym__literal_repeat1;
	v->a[98825] = state(2957);
	v->a[98826] = 1;
	v->a[98827] = sym__expression;
	v->a[98828] = actions(183);
	v->a[98829] = 2;
	v->a[98830] = anon_sym_PLUS_PLUS2;
	v->a[98831] = anon_sym_DASH_DASH2;
	v->a[98832] = actions(185);
	v->a[98833] = 2;
	v->a[98834] = anon_sym_DASH2;
	v->a[98835] = anon_sym_PLUS2;
	v->a[98836] = actions(352);
	v->a[98837] = 2;
	v->a[98838] = anon_sym_LPAREN_LPAREN;
	v->a[98839] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_4942(v);
}

void	small_parse_table_4942(t_small_parse_table_array *v)
{
	v->a[98840] = actions(373);
	v->a[98841] = 2;
	v->a[98842] = sym_raw_string;
	v->a[98843] = sym_ansi_c_string;
	v->a[98844] = actions(387);
	v->a[98845] = 2;
	v->a[98846] = anon_sym_LT_LPAREN;
	v->a[98847] = anon_sym_GT_LPAREN;
	v->a[98848] = state(3071);
	v->a[98849] = 6;
	v->a[98850] = sym_binary_expression;
	v->a[98851] = sym_ternary_expression;
	v->a[98852] = sym_unary_expression;
	v->a[98853] = sym_postfix_expression;
	v->a[98854] = sym_parenthesized_expression;
	v->a[98855] = sym_concatenation;
	v->a[98856] = state(2521);
	v->a[98857] = 9;
	v->a[98858] = sym_arithmetic_expansion;
	v->a[98859] = sym_brace_expression;
	small_parse_table_4943(v);
}

void	small_parse_table_4943(t_small_parse_table_array *v)
{
	v->a[98860] = sym_string;
	v->a[98861] = sym_translated_string;
	v->a[98862] = sym_number;
	v->a[98863] = sym_simple_expansion;
	v->a[98864] = sym_expansion;
	v->a[98865] = sym_command_substitution;
	v->a[98866] = sym_process_substitution;
	v->a[98867] = 3;
	v->a[98868] = actions(71);
	v->a[98869] = 1;
	v->a[98870] = sym_comment;
	v->a[98871] = actions(1308);
	v->a[98872] = 16;
	v->a[98873] = anon_sym_PIPE;
	v->a[98874] = anon_sym_EQ_EQ;
	v->a[98875] = anon_sym_LT;
	v->a[98876] = anon_sym_GT;
	v->a[98877] = anon_sym_LT_LT;
	v->a[98878] = anon_sym_LPAREN;
	v->a[98879] = anon_sym_EQ_TILDE;
	small_parse_table_4944(v);
}

void	small_parse_table_4944(t_small_parse_table_array *v)
{
	v->a[98880] = anon_sym_AMP_GT;
	v->a[98881] = anon_sym_LT_AMP;
	v->a[98882] = anon_sym_GT_AMP;
	v->a[98883] = anon_sym_DOLLAR;
	v->a[98884] = aux_sym_number_token1;
	v->a[98885] = aux_sym_number_token2;
	v->a[98886] = anon_sym_DOLLAR_LPAREN;
	v->a[98887] = anon_sym_BQUOTE;
	v->a[98888] = sym_word;
	v->a[98889] = actions(1310);
	v->a[98890] = 27;
	v->a[98891] = sym_file_descriptor;
	v->a[98892] = sym__concat;
	v->a[98893] = sym_test_operator;
	v->a[98894] = sym__bare_dollar;
	v->a[98895] = sym__brace_start;
	v->a[98896] = anon_sym_LPAREN_LPAREN;
	v->a[98897] = anon_sym_PIPE_PIPE;
	v->a[98898] = anon_sym_AMP_AMP;
	v->a[98899] = anon_sym_GT_GT;
	small_parse_table_4945(v);
}

/* EOF small_parse_table_988.c */
