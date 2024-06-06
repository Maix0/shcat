/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_918.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4590(t_small_parse_table_array *v)
{
	v->a[91800] = 11;
	v->a[91801] = anon_sym_LT;
	v->a[91802] = anon_sym_GT;
	v->a[91803] = anon_sym_AMP_GT;
	v->a[91804] = anon_sym_LT_AMP;
	v->a[91805] = anon_sym_GT_AMP;
	v->a[91806] = anon_sym_DOLLAR;
	v->a[91807] = aux_sym_number_token1;
	v->a[91808] = aux_sym_number_token2;
	v->a[91809] = anon_sym_DOLLAR_LPAREN;
	v->a[91810] = anon_sym_BQUOTE;
	v->a[91811] = sym_word;
	v->a[91812] = actions(3066);
	v->a[91813] = 17;
	v->a[91814] = sym_file_descriptor;
	v->a[91815] = sym__concat;
	v->a[91816] = sym_variable_name;
	v->a[91817] = sym_test_operator;
	v->a[91818] = sym__brace_start;
	v->a[91819] = anon_sym_GT_GT;
	small_parse_table_4591(v);
}

void	small_parse_table_4591(t_small_parse_table_array *v)
{
	v->a[91820] = anon_sym_AMP_GT_GT;
	v->a[91821] = anon_sym_GT_PIPE;
	v->a[91822] = anon_sym_LT_AMP_DASH;
	v->a[91823] = anon_sym_GT_AMP_DASH;
	v->a[91824] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[91825] = aux_sym_concatenation_token1;
	v->a[91826] = sym__special_character;
	v->a[91827] = anon_sym_DQUOTE;
	v->a[91828] = sym_raw_string;
	v->a[91829] = anon_sym_DOLLAR_LBRACE;
	v->a[91830] = anon_sym_DOLLAR_BQUOTE;
	v->a[91831] = 19;
	v->a[91832] = actions(3);
	v->a[91833] = 1;
	v->a[91834] = sym_comment;
	v->a[91835] = actions(2458);
	v->a[91836] = 1;
	v->a[91837] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[91838] = actions(2460);
	v->a[91839] = 1;
	small_parse_table_4592(v);
}

void	small_parse_table_4592(t_small_parse_table_array *v)
{
	v->a[91840] = anon_sym_DOLLAR;
	v->a[91841] = actions(2464);
	v->a[91842] = 1;
	v->a[91843] = anon_sym_DQUOTE;
	v->a[91844] = actions(2466);
	v->a[91845] = 1;
	v->a[91846] = aux_sym_number_token1;
	v->a[91847] = actions(2468);
	v->a[91848] = 1;
	v->a[91849] = aux_sym_number_token2;
	v->a[91850] = actions(2470);
	v->a[91851] = 1;
	v->a[91852] = anon_sym_DOLLAR_LBRACE;
	v->a[91853] = actions(2472);
	v->a[91854] = 1;
	v->a[91855] = anon_sym_DOLLAR_LPAREN;
	v->a[91856] = actions(2474);
	v->a[91857] = 1;
	v->a[91858] = anon_sym_BQUOTE;
	v->a[91859] = actions(2476);
	small_parse_table_4593(v);
}

void	small_parse_table_4593(t_small_parse_table_array *v)
{
	v->a[91860] = 1;
	v->a[91861] = anon_sym_DOLLAR_BQUOTE;
	v->a[91862] = actions(2482);
	v->a[91863] = 1;
	v->a[91864] = sym__brace_start;
	v->a[91865] = actions(5072);
	v->a[91866] = 1;
	v->a[91867] = sym__special_character;
	v->a[91868] = actions(5074);
	v->a[91869] = 1;
	v->a[91870] = sym_test_operator;
	v->a[91871] = actions(5096);
	v->a[91872] = 1;
	v->a[91873] = aux_sym_heredoc_redirect_token1;
	v->a[91874] = state(2666);
	v->a[91875] = 1;
	v->a[91876] = aux_sym__literal_repeat1;
	v->a[91877] = actions(5066);
	v->a[91878] = 2;
	v->a[91879] = sym_raw_string;
	small_parse_table_4594(v);
}

void	small_parse_table_4594(t_small_parse_table_array *v)
{
	v->a[91880] = sym_word;
	v->a[91881] = state(1852);
	v->a[91882] = 2;
	v->a[91883] = sym_concatenation;
	v->a[91884] = aux_sym_for_statement_repeat1;
	v->a[91885] = actions(5094);
	v->a[91886] = 3;
	v->a[91887] = anon_sym_SEMI_SEMI;
	v->a[91888] = anon_sym_AMP;
	v->a[91889] = anon_sym_SEMI;
	v->a[91890] = state(2609);
	v->a[91891] = 7;
	v->a[91892] = sym_arithmetic_expansion;
	v->a[91893] = sym_brace_expression;
	v->a[91894] = sym_string;
	v->a[91895] = sym_number;
	v->a[91896] = sym_simple_expansion;
	v->a[91897] = sym_expansion;
	v->a[91898] = sym_command_substitution;
	v->a[91899] = 3;
	small_parse_table_4595(v);
}

/* EOF small_parse_table_918.c */
