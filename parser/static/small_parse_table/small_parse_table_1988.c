/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1988.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9940(t_small_parse_table_array *v)
{
	v->a[198800] = anon_sym_DOLLAR_LBRACK;
	v->a[198801] = actions(367);
	v->a[198802] = 1;
	v->a[198803] = anon_sym_DOLLAR;
	v->a[198804] = actions(371);
	v->a[198805] = 1;
	v->a[198806] = anon_sym_DQUOTE;
	v->a[198807] = actions(375);
	v->a[198808] = 1;
	v->a[198809] = aux_sym_number_token1;
	v->a[198810] = actions(377);
	v->a[198811] = 1;
	v->a[198812] = aux_sym_number_token2;
	v->a[198813] = actions(379);
	v->a[198814] = 1;
	v->a[198815] = anon_sym_DOLLAR_LBRACE;
	v->a[198816] = actions(381);
	v->a[198817] = 1;
	v->a[198818] = anon_sym_DOLLAR_LPAREN;
	v->a[198819] = actions(385);
	small_parse_table_9941(v);
}

void	small_parse_table_9941(t_small_parse_table_array *v)
{
	v->a[198820] = 1;
	v->a[198821] = anon_sym_DOLLAR_BQUOTE;
	v->a[198822] = actions(391);
	v->a[198823] = 1;
	v->a[198824] = sym__brace_start;
	v->a[198825] = actions(5809);
	v->a[198826] = 1;
	v->a[198827] = anon_sym_BQUOTE;
	v->a[198828] = actions(8836);
	v->a[198829] = 1;
	v->a[198830] = sym_word;
	v->a[198831] = actions(8844);
	v->a[198832] = 1;
	v->a[198833] = sym_test_operator;
	v->a[198834] = actions(9026);
	v->a[198835] = 1;
	v->a[198836] = anon_sym_RBRACK;
	v->a[198837] = actions(352);
	v->a[198838] = 2;
	v->a[198839] = anon_sym_LPAREN_LPAREN;
	small_parse_table_9942(v);
}

void	small_parse_table_9942(t_small_parse_table_array *v)
{
	v->a[198840] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[198841] = actions(387);
	v->a[198842] = 2;
	v->a[198843] = anon_sym_LT_LPAREN;
	v->a[198844] = anon_sym_GT_LPAREN;
	v->a[198845] = actions(8840);
	v->a[198846] = 2;
	v->a[198847] = sym__special_character;
	v->a[198848] = sym__comment_word;
	v->a[198849] = actions(8842);
	v->a[198850] = 3;
	v->a[198851] = sym__bare_dollar;
	v->a[198852] = sym_raw_string;
	v->a[198853] = sym_ansi_c_string;
	v->a[198854] = state(2730);
	v->a[198855] = 9;
	v->a[198856] = sym_arithmetic_expansion;
	v->a[198857] = sym_brace_expression;
	v->a[198858] = sym_string;
	v->a[198859] = sym_translated_string;
	small_parse_table_9943(v);
}

void	small_parse_table_9943(t_small_parse_table_array *v)
{
	v->a[198860] = sym_number;
	v->a[198861] = sym_simple_expansion;
	v->a[198862] = sym_expansion;
	v->a[198863] = sym_command_substitution;
	v->a[198864] = sym_process_substitution;
	v->a[198865] = 19;
	v->a[198866] = actions(3);
	v->a[198867] = 1;
	v->a[198868] = sym_comment;
	v->a[198869] = actions(363);
	v->a[198870] = 1;
	v->a[198871] = anon_sym_DOLLAR_LBRACK;
	v->a[198872] = actions(367);
	v->a[198873] = 1;
	v->a[198874] = anon_sym_DOLLAR;
	v->a[198875] = actions(371);
	v->a[198876] = 1;
	v->a[198877] = anon_sym_DQUOTE;
	v->a[198878] = actions(375);
	v->a[198879] = 1;
	small_parse_table_9944(v);
}

void	small_parse_table_9944(t_small_parse_table_array *v)
{
	v->a[198880] = aux_sym_number_token1;
	v->a[198881] = actions(377);
	v->a[198882] = 1;
	v->a[198883] = aux_sym_number_token2;
	v->a[198884] = actions(379);
	v->a[198885] = 1;
	v->a[198886] = anon_sym_DOLLAR_LBRACE;
	v->a[198887] = actions(381);
	v->a[198888] = 1;
	v->a[198889] = anon_sym_DOLLAR_LPAREN;
	v->a[198890] = actions(385);
	v->a[198891] = 1;
	v->a[198892] = anon_sym_DOLLAR_BQUOTE;
	v->a[198893] = actions(391);
	v->a[198894] = 1;
	v->a[198895] = sym__brace_start;
	v->a[198896] = actions(5809);
	v->a[198897] = 1;
	v->a[198898] = anon_sym_BQUOTE;
	v->a[198899] = actions(8836);
	small_parse_table_9945(v);
}

/* EOF small_parse_table_1988.c */
