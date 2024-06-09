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
	v->a[18800] = anon_sym_while;
	v->a[18801] = anon_sym_until;
	v->a[18802] = actions(61);
	v->a[18803] = 2;
	v->a[18804] = anon_sym_LT_AMP_DASH;
	v->a[18805] = anon_sym_GT_AMP_DASH;
	v->a[18806] = state(397);
	v->a[18807] = 6;
	v->a[18808] = sym_arithmetic_expansion;
	v->a[18809] = sym_string;
	v->a[18810] = sym_number;
	v->a[18811] = sym_simple_expansion;
	v->a[18812] = sym_expansion;
	v->a[18813] = sym_command_substitution;
	v->a[18814] = actions(59);
	v->a[18815] = 8;
	v->a[18816] = anon_sym_LT;
	v->a[18817] = anon_sym_GT;
	v->a[18818] = anon_sym_GT_GT;
	v->a[18819] = anon_sym_AMP_GT;
	small_parse_table_941(v);
}

void	small_parse_table_941(t_small_parse_table_array *v)
{
	v->a[18820] = anon_sym_AMP_GT_GT;
	v->a[18821] = anon_sym_LT_AMP;
	v->a[18822] = anon_sym_GT_AMP;
	v->a[18823] = anon_sym_GT_PIPE;
	v->a[18824] = state(1088);
	v->a[18825] = 12;
	v->a[18826] = sym_redirected_statement;
	v->a[18827] = sym_for_statement;
	v->a[18828] = sym_while_statement;
	v->a[18829] = sym_if_statement;
	v->a[18830] = sym_case_statement;
	v->a[18831] = sym_function_definition;
	v->a[18832] = sym_compound_statement;
	v->a[18833] = sym_subshell;
	v->a[18834] = sym_list;
	v->a[18835] = sym_negated_command;
	v->a[18836] = sym_command;
	v->a[18837] = sym_variable_assignments;
	v->a[18838] = 31;
	v->a[18839] = actions(3);
	small_parse_table_942(v);
}

void	small_parse_table_942(t_small_parse_table_array *v)
{
	v->a[18840] = 1;
	v->a[18841] = sym_comment;
	v->a[18842] = actions(9);
	v->a[18843] = 1;
	v->a[18844] = anon_sym_for;
	v->a[18845] = actions(13);
	v->a[18846] = 1;
	v->a[18847] = anon_sym_if;
	v->a[18848] = actions(15);
	v->a[18849] = 1;
	v->a[18850] = anon_sym_case;
	v->a[18851] = actions(17);
	v->a[18852] = 1;
	v->a[18853] = anon_sym_LPAREN;
	v->a[18854] = actions(19);
	v->a[18855] = 1;
	v->a[18856] = anon_sym_LBRACE;
	v->a[18857] = actions(63);
	v->a[18858] = 1;
	v->a[18859] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_943(v);
}

void	small_parse_table_943(t_small_parse_table_array *v)
{
	v->a[18860] = actions(65);
	v->a[18861] = 1;
	v->a[18862] = anon_sym_DOLLAR;
	v->a[18863] = actions(67);
	v->a[18864] = 1;
	v->a[18865] = anon_sym_DQUOTE;
	v->a[18866] = actions(71);
	v->a[18867] = 1;
	v->a[18868] = aux_sym_number_token1;
	v->a[18869] = actions(73);
	v->a[18870] = 1;
	v->a[18871] = aux_sym_number_token2;
	v->a[18872] = actions(75);
	v->a[18873] = 1;
	v->a[18874] = anon_sym_DOLLAR_LBRACE;
	v->a[18875] = actions(77);
	v->a[18876] = 1;
	v->a[18877] = anon_sym_DOLLAR_LPAREN;
	v->a[18878] = actions(79);
	v->a[18879] = 1;
	small_parse_table_944(v);
}

void	small_parse_table_944(t_small_parse_table_array *v)
{
	v->a[18880] = anon_sym_BQUOTE;
	v->a[18881] = actions(349);
	v->a[18882] = 1;
	v->a[18883] = sym_word;
	v->a[18884] = actions(351);
	v->a[18885] = 1;
	v->a[18886] = anon_sym_BANG;
	v->a[18887] = actions(357);
	v->a[18888] = 1;
	v->a[18889] = sym_raw_string;
	v->a[18890] = actions(359);
	v->a[18891] = 1;
	v->a[18892] = sym_file_descriptor;
	v->a[18893] = actions(361);
	v->a[18894] = 1;
	v->a[18895] = sym_variable_name;
	v->a[18896] = state(247);
	v->a[18897] = 1;
	v->a[18898] = sym_command_name;
	v->a[18899] = state(557);
	small_parse_table_945(v);
}

/* EOF small_parse_table_188.c */
