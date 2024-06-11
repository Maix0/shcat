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
	v->a[18800] = 1;
	v->a[18801] = anon_sym_DOLLAR_LPAREN;
	v->a[18802] = actions(39);
	v->a[18803] = 1;
	v->a[18804] = anon_sym_BQUOTE;
	v->a[18805] = actions(41);
	v->a[18806] = 1;
	v->a[18807] = sym_file_descriptor;
	v->a[18808] = actions(43);
	v->a[18809] = 1;
	v->a[18810] = sym_variable_name;
	v->a[18811] = state(185);
	v->a[18812] = 1;
	v->a[18813] = sym_command_name;
	v->a[18814] = state(257);
	v->a[18815] = 1;
	v->a[18816] = sym_variable_assignment;
	v->a[18817] = state(639);
	v->a[18818] = 1;
	v->a[18819] = sym_concatenation;
	small_parse_table_941(v);
}

void	small_parse_table_941(t_small_parse_table_array *v)
{
	v->a[18820] = state(745);
	v->a[18821] = 1;
	v->a[18822] = aux_sym_command_repeat1;
	v->a[18823] = state(760);
	v->a[18824] = 1;
	v->a[18825] = sym_file_redirect;
	v->a[18826] = state(1419);
	v->a[18827] = 1;
	v->a[18828] = aux_sym_redirected_statement_repeat2;
	v->a[18829] = state(1606);
	v->a[18830] = 1;
	v->a[18831] = sym_pipeline;
	v->a[18832] = actions(11);
	v->a[18833] = 2;
	v->a[18834] = anon_sym_while;
	v->a[18835] = anon_sym_until;
	v->a[18836] = actions(25);
	v->a[18837] = 2;
	v->a[18838] = anon_sym_LT_AMP_DASH;
	v->a[18839] = anon_sym_GT_AMP_DASH;
	small_parse_table_942(v);
}

void	small_parse_table_942(t_small_parse_table_array *v)
{
	v->a[18840] = actions(33);
	v->a[18841] = 2;
	v->a[18842] = sym_raw_string;
	v->a[18843] = sym_number;
	v->a[18844] = state(291);
	v->a[18845] = 5;
	v->a[18846] = sym_arithmetic_expansion;
	v->a[18847] = sym_string;
	v->a[18848] = sym_simple_expansion;
	v->a[18849] = sym_expansion;
	v->a[18850] = sym_command_substitution;
	v->a[18851] = actions(23);
	v->a[18852] = 8;
	v->a[18853] = anon_sym_LT;
	v->a[18854] = anon_sym_GT;
	v->a[18855] = anon_sym_GT_GT;
	v->a[18856] = anon_sym_AMP_GT;
	v->a[18857] = anon_sym_AMP_GT_GT;
	v->a[18858] = anon_sym_LT_AMP;
	v->a[18859] = anon_sym_GT_AMP;
	small_parse_table_943(v);
}

void	small_parse_table_943(t_small_parse_table_array *v)
{
	v->a[18860] = anon_sym_GT_PIPE;
	v->a[18861] = state(1239);
	v->a[18862] = 13;
	v->a[18863] = sym__statement_not_pipeline;
	v->a[18864] = sym_redirected_statement;
	v->a[18865] = sym_for_statement;
	v->a[18866] = sym_while_statement;
	v->a[18867] = sym_if_statement;
	v->a[18868] = sym_case_statement;
	v->a[18869] = sym_function_definition;
	v->a[18870] = sym_compound_statement;
	v->a[18871] = sym_subshell;
	v->a[18872] = sym_list;
	v->a[18873] = sym_negated_command;
	v->a[18874] = sym_command;
	v->a[18875] = sym_variable_assignments;
	v->a[18876] = 30;
	v->a[18877] = actions(3);
	v->a[18878] = 1;
	v->a[18879] = sym_comment;
	small_parse_table_944(v);
}

void	small_parse_table_944(t_small_parse_table_array *v)
{
	v->a[18880] = actions(9);
	v->a[18881] = 1;
	v->a[18882] = anon_sym_for;
	v->a[18883] = actions(13);
	v->a[18884] = 1;
	v->a[18885] = anon_sym_if;
	v->a[18886] = actions(15);
	v->a[18887] = 1;
	v->a[18888] = anon_sym_case;
	v->a[18889] = actions(17);
	v->a[18890] = 1;
	v->a[18891] = anon_sym_LPAREN;
	v->a[18892] = actions(19);
	v->a[18893] = 1;
	v->a[18894] = anon_sym_LBRACE;
	v->a[18895] = actions(59);
	v->a[18896] = 1;
	v->a[18897] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18898] = actions(61);
	v->a[18899] = 1;
	small_parse_table_945(v);
}

/* EOF small_parse_table_188.c */
