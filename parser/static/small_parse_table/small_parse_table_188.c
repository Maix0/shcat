/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_188.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_940(t_small_parse_table_array *v)
{
	v->a[18800] = actions(9);
	v->a[18801] = 1;
	v->a[18802] = anon_sym_for;
	v->a[18803] = actions(13);
	v->a[18804] = 1;
	v->a[18805] = anon_sym_if;
	v->a[18806] = actions(15);
	v->a[18807] = 1;
	v->a[18808] = anon_sym_case;
	v->a[18809] = actions(17);
	v->a[18810] = 1;
	v->a[18811] = anon_sym_LPAREN;
	v->a[18812] = actions(19);
	v->a[18813] = 1;
	v->a[18814] = anon_sym_LBRACE;
	v->a[18815] = actions(59);
	v->a[18816] = 1;
	v->a[18817] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18818] = actions(61);
	v->a[18819] = 1;
	small_parse_table_941(v);
}

void	small_parse_table_941(t_small_parse_table_array *v)
{
	v->a[18820] = anon_sym_DOLLAR;
	v->a[18821] = actions(63);
	v->a[18822] = 1;
	v->a[18823] = anon_sym_DQUOTE;
	v->a[18824] = actions(67);
	v->a[18825] = 1;
	v->a[18826] = anon_sym_DOLLAR_LBRACE;
	v->a[18827] = actions(69);
	v->a[18828] = 1;
	v->a[18829] = anon_sym_DOLLAR_LPAREN;
	v->a[18830] = actions(71);
	v->a[18831] = 1;
	v->a[18832] = anon_sym_BQUOTE;
	v->a[18833] = actions(363);
	v->a[18834] = 1;
	v->a[18835] = sym_word;
	v->a[18836] = actions(365);
	v->a[18837] = 1;
	v->a[18838] = anon_sym_BANG;
	v->a[18839] = actions(373);
	small_parse_table_942(v);
}

void	small_parse_table_942(t_small_parse_table_array *v)
{
	v->a[18840] = 1;
	v->a[18841] = sym_file_descriptor;
	v->a[18842] = actions(375);
	v->a[18843] = 1;
	v->a[18844] = sym_variable_name;
	v->a[18845] = state(308);
	v->a[18846] = 1;
	v->a[18847] = sym_command_name;
	v->a[18848] = state(640);
	v->a[18849] = 1;
	v->a[18850] = sym_variable_assignment;
	v->a[18851] = state(650);
	v->a[18852] = 1;
	v->a[18853] = sym_concatenation;
	v->a[18854] = state(669);
	v->a[18855] = 1;
	v->a[18856] = aux_sym_command_repeat1;
	v->a[18857] = state(712);
	v->a[18858] = 1;
	v->a[18859] = sym_file_redirect;
	small_parse_table_943(v);
}

void	small_parse_table_943(t_small_parse_table_array *v)
{
	v->a[18860] = state(1441);
	v->a[18861] = 1;
	v->a[18862] = aux_sym_redirected_statement_repeat2;
	v->a[18863] = state(1473);
	v->a[18864] = 1;
	v->a[18865] = sym_pipeline;
	v->a[18866] = state(2106);
	v->a[18867] = 1;
	v->a[18868] = sym__statement_not_pipeline;
	v->a[18869] = actions(11);
	v->a[18870] = 2;
	v->a[18871] = anon_sym_while;
	v->a[18872] = anon_sym_until;
	v->a[18873] = actions(369);
	v->a[18874] = 2;
	v->a[18875] = anon_sym_LT_AMP_DASH;
	v->a[18876] = anon_sym_GT_AMP_DASH;
	v->a[18877] = actions(371);
	v->a[18878] = 2;
	v->a[18879] = sym_raw_string;
	small_parse_table_944(v);
}

void	small_parse_table_944(t_small_parse_table_array *v)
{
	v->a[18880] = sym_number;
	v->a[18881] = state(711);
	v->a[18882] = 5;
	v->a[18883] = sym_arithmetic_expansion;
	v->a[18884] = sym_string;
	v->a[18885] = sym_simple_expansion;
	v->a[18886] = sym_expansion;
	v->a[18887] = sym_command_substitution;
	v->a[18888] = actions(367);
	v->a[18889] = 6;
	v->a[18890] = anon_sym_LT;
	v->a[18891] = anon_sym_GT;
	v->a[18892] = anon_sym_GT_GT;
	v->a[18893] = anon_sym_LT_AMP;
	v->a[18894] = anon_sym_GT_AMP;
	v->a[18895] = anon_sym_GT_PIPE;
	v->a[18896] = state(1404);
	v->a[18897] = 12;
	v->a[18898] = sym_redirected_statement;
	v->a[18899] = sym_for_statement;
	small_parse_table_945(v);
}

/* EOF small_parse_table_188.c */
