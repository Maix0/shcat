/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1128.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5640(t_small_parse_table_array *v)
{
	v->a[112800] = 1;
	v->a[112801] = aux_sym_number_token1;
	v->a[112802] = actions(3891);
	v->a[112803] = 1;
	v->a[112804] = aux_sym_number_token2;
	v->a[112805] = actions(3895);
	v->a[112806] = 1;
	v->a[112807] = anon_sym_DOLLAR_LPAREN;
	v->a[112808] = actions(3903);
	v->a[112809] = 1;
	v->a[112810] = sym__brace_start;
	v->a[112811] = actions(6475);
	v->a[112812] = 1;
	v->a[112813] = sym_word;
	v->a[112814] = actions(6477);
	v->a[112815] = 1;
	v->a[112816] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[112817] = actions(6479);
	v->a[112818] = 1;
	v->a[112819] = sym__special_character;
	small_parse_table_5641(v);
}

void	small_parse_table_5641(t_small_parse_table_array *v)
{
	v->a[112820] = actions(6481);
	v->a[112821] = 1;
	v->a[112822] = anon_sym_DQUOTE;
	v->a[112823] = actions(6485);
	v->a[112824] = 1;
	v->a[112825] = anon_sym_DOLLAR_LBRACE;
	v->a[112826] = actions(6487);
	v->a[112827] = 1;
	v->a[112828] = anon_sym_BQUOTE;
	v->a[112829] = actions(6489);
	v->a[112830] = 1;
	v->a[112831] = anon_sym_DOLLAR_BQUOTE;
	v->a[112832] = actions(6491);
	v->a[112833] = 1;
	v->a[112834] = sym__comment_word;
	v->a[112835] = actions(6483);
	v->a[112836] = 3;
	v->a[112837] = sym_test_operator;
	v->a[112838] = sym__bare_dollar;
	v->a[112839] = sym_raw_string;
	small_parse_table_5642(v);
}

void	small_parse_table_5642(t_small_parse_table_array *v)
{
	v->a[112840] = state(2831);
	v->a[112841] = 7;
	v->a[112842] = sym_arithmetic_expansion;
	v->a[112843] = sym_brace_expression;
	v->a[112844] = sym_string;
	v->a[112845] = sym_number;
	v->a[112846] = sym_simple_expansion;
	v->a[112847] = sym_expansion;
	v->a[112848] = sym_command_substitution;
	v->a[112849] = 16;
	v->a[112850] = actions(3);
	v->a[112851] = 1;
	v->a[112852] = sym_comment;
	v->a[112853] = actions(5645);
	v->a[112854] = 1;
	v->a[112855] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[112856] = actions(5647);
	v->a[112857] = 1;
	v->a[112858] = anon_sym_DOLLAR;
	v->a[112859] = actions(5651);
	small_parse_table_5643(v);
}

void	small_parse_table_5643(t_small_parse_table_array *v)
{
	v->a[112860] = 1;
	v->a[112861] = anon_sym_DQUOTE;
	v->a[112862] = actions(5655);
	v->a[112863] = 1;
	v->a[112864] = aux_sym_number_token1;
	v->a[112865] = actions(5657);
	v->a[112866] = 1;
	v->a[112867] = aux_sym_number_token2;
	v->a[112868] = actions(5659);
	v->a[112869] = 1;
	v->a[112870] = anon_sym_DOLLAR_LBRACE;
	v->a[112871] = actions(5661);
	v->a[112872] = 1;
	v->a[112873] = anon_sym_DOLLAR_LPAREN;
	v->a[112874] = actions(5663);
	v->a[112875] = 1;
	v->a[112876] = anon_sym_BQUOTE;
	v->a[112877] = actions(5665);
	v->a[112878] = 1;
	v->a[112879] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_5644(v);
}

void	small_parse_table_5644(t_small_parse_table_array *v)
{
	v->a[112880] = actions(5671);
	v->a[112881] = 1;
	v->a[112882] = sym__brace_start;
	v->a[112883] = actions(6493);
	v->a[112884] = 1;
	v->a[112885] = sym_word;
	v->a[112886] = actions(6495);
	v->a[112887] = 1;
	v->a[112888] = sym__special_character;
	v->a[112889] = actions(6499);
	v->a[112890] = 1;
	v->a[112891] = sym__comment_word;
	v->a[112892] = actions(6497);
	v->a[112893] = 3;
	v->a[112894] = sym_test_operator;
	v->a[112895] = sym__bare_dollar;
	v->a[112896] = sym_raw_string;
	v->a[112897] = state(2652);
	v->a[112898] = 7;
	v->a[112899] = sym_arithmetic_expansion;
	small_parse_table_5645(v);
}

/* EOF small_parse_table_1128.c */
