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
	v->a[98800] = actions(5449);
	v->a[98801] = 2;
	v->a[98802] = sym_test_operator;
	v->a[98803] = sym_raw_string;
	v->a[98804] = state(2585);
	v->a[98805] = 7;
	v->a[98806] = sym_arithmetic_expansion;
	v->a[98807] = sym_brace_expression;
	v->a[98808] = sym_string;
	v->a[98809] = sym_number;
	v->a[98810] = sym_simple_expansion;
	v->a[98811] = sym_expansion;
	v->a[98812] = sym_command_substitution;
	v->a[98813] = 19;
	v->a[98814] = actions(3);
	v->a[98815] = 1;
	v->a[98816] = sym_comment;
	v->a[98817] = actions(5451);
	v->a[98818] = 1;
	v->a[98819] = sym_word;
	small_parse_table_4941(v);
}

void	small_parse_table_4941(t_small_parse_table_array *v)
{
	v->a[98820] = actions(5453);
	v->a[98821] = 1;
	v->a[98822] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[98823] = actions(5455);
	v->a[98824] = 1;
	v->a[98825] = anon_sym_DOLLAR;
	v->a[98826] = actions(5457);
	v->a[98827] = 1;
	v->a[98828] = sym__special_character;
	v->a[98829] = actions(5459);
	v->a[98830] = 1;
	v->a[98831] = anon_sym_DQUOTE;
	v->a[98832] = actions(5463);
	v->a[98833] = 1;
	v->a[98834] = aux_sym_number_token1;
	v->a[98835] = actions(5465);
	v->a[98836] = 1;
	v->a[98837] = aux_sym_number_token2;
	v->a[98838] = actions(5467);
	v->a[98839] = 1;
	small_parse_table_4942(v);
}

void	small_parse_table_4942(t_small_parse_table_array *v)
{
	v->a[98840] = anon_sym_DOLLAR_LBRACE;
	v->a[98841] = actions(5469);
	v->a[98842] = 1;
	v->a[98843] = anon_sym_DOLLAR_LPAREN;
	v->a[98844] = actions(5471);
	v->a[98845] = 1;
	v->a[98846] = anon_sym_BQUOTE;
	v->a[98847] = actions(5473);
	v->a[98848] = 1;
	v->a[98849] = anon_sym_DOLLAR_BQUOTE;
	v->a[98850] = actions(5475);
	v->a[98851] = 1;
	v->a[98852] = sym__comment_word;
	v->a[98853] = actions(5477);
	v->a[98854] = 1;
	v->a[98855] = sym__empty_value;
	v->a[98856] = actions(5479);
	v->a[98857] = 1;
	v->a[98858] = sym__brace_start;
	v->a[98859] = state(1174);
	small_parse_table_4943(v);
}

void	small_parse_table_4943(t_small_parse_table_array *v)
{
	v->a[98860] = 1;
	v->a[98861] = aux_sym__literal_repeat1;
	v->a[98862] = state(1248);
	v->a[98863] = 1;
	v->a[98864] = sym_concatenation;
	v->a[98865] = actions(5461);
	v->a[98866] = 2;
	v->a[98867] = sym_test_operator;
	v->a[98868] = sym_raw_string;
	v->a[98869] = state(794);
	v->a[98870] = 7;
	v->a[98871] = sym_arithmetic_expansion;
	v->a[98872] = sym_brace_expression;
	v->a[98873] = sym_string;
	v->a[98874] = sym_number;
	v->a[98875] = sym_simple_expansion;
	v->a[98876] = sym_expansion;
	v->a[98877] = sym_command_substitution;
	v->a[98878] = 19;
	v->a[98879] = actions(3);
	small_parse_table_4944(v);
}

void	small_parse_table_4944(t_small_parse_table_array *v)
{
	v->a[98880] = 1;
	v->a[98881] = sym_comment;
	v->a[98882] = actions(5481);
	v->a[98883] = 1;
	v->a[98884] = sym_word;
	v->a[98885] = actions(5483);
	v->a[98886] = 1;
	v->a[98887] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[98888] = actions(5485);
	v->a[98889] = 1;
	v->a[98890] = anon_sym_DOLLAR;
	v->a[98891] = actions(5487);
	v->a[98892] = 1;
	v->a[98893] = sym__special_character;
	v->a[98894] = actions(5489);
	v->a[98895] = 1;
	v->a[98896] = anon_sym_DQUOTE;
	v->a[98897] = actions(5493);
	v->a[98898] = 1;
	v->a[98899] = aux_sym_number_token1;
	small_parse_table_4945(v);
}

/* EOF small_parse_table_988.c */
