/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_158.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_790(t_small_parse_table_array *v)
{
	v->a[15800] = sym_string;
	v->a[15801] = sym_simple_expansion;
	v->a[15802] = sym_expansion;
	v->a[15803] = sym_command_substitution;
	v->a[15804] = actions(23);
	v->a[15805] = 7;
	v->a[15806] = anon_sym_LT;
	v->a[15807] = anon_sym_GT;
	v->a[15808] = anon_sym_GT_GT;
	v->a[15809] = anon_sym_LT_AMP;
	v->a[15810] = anon_sym_GT_AMP;
	v->a[15811] = anon_sym_GT_PIPE;
	v->a[15812] = anon_sym_LT_GT;
	v->a[15813] = state(974);
	v->a[15814] = 7;
	v->a[15815] = sym_for_statement;
	v->a[15816] = sym_while_statement;
	v->a[15817] = sym_if_statement;
	v->a[15818] = sym_compound_statement;
	v->a[15819] = sym_subshell;
	small_parse_table_791(v);
}

void	small_parse_table_791(t_small_parse_table_array *v)
{
	v->a[15820] = sym_command;
	v->a[15821] = sym__variable_assignments;
	v->a[15822] = 23;
	v->a[15823] = actions(3);
	v->a[15824] = 1;
	v->a[15825] = sym_comment;
	v->a[15826] = actions(81);
	v->a[15827] = 1;
	v->a[15828] = anon_sym_for;
	v->a[15829] = actions(85);
	v->a[15830] = 1;
	v->a[15831] = anon_sym_if;
	v->a[15832] = actions(89);
	v->a[15833] = 1;
	v->a[15834] = anon_sym_LPAREN;
	v->a[15835] = actions(93);
	v->a[15836] = 1;
	v->a[15837] = anon_sym_LBRACE;
	v->a[15838] = actions(99);
	v->a[15839] = 1;
	small_parse_table_792(v);
}

void	small_parse_table_792(t_small_parse_table_array *v)
{
	v->a[15840] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15841] = actions(101);
	v->a[15842] = 1;
	v->a[15843] = anon_sym_DOLLAR;
	v->a[15844] = actions(103);
	v->a[15845] = 1;
	v->a[15846] = anon_sym_DQUOTE;
	v->a[15847] = actions(107);
	v->a[15848] = 1;
	v->a[15849] = anon_sym_DOLLAR_LBRACE;
	v->a[15850] = actions(109);
	v->a[15851] = 1;
	v->a[15852] = anon_sym_DOLLAR_LPAREN;
	v->a[15853] = actions(111);
	v->a[15854] = 1;
	v->a[15855] = anon_sym_BQUOTE;
	v->a[15856] = actions(341);
	v->a[15857] = 1;
	v->a[15858] = sym_variable_name;
	v->a[15859] = state(185);
	small_parse_table_793(v);
}

void	small_parse_table_793(t_small_parse_table_array *v)
{
	v->a[15860] = 1;
	v->a[15861] = sym_command_name;
	v->a[15862] = state(491);
	v->a[15863] = 1;
	v->a[15864] = aux_sym_command_repeat1;
	v->a[15865] = state(599);
	v->a[15866] = 1;
	v->a[15867] = sym_concatenation;
	v->a[15868] = state(615);
	v->a[15869] = 1;
	v->a[15870] = sym_file_redirect;
	v->a[15871] = state(961);
	v->a[15872] = 1;
	v->a[15873] = sym_variable_assignment;
	v->a[15874] = state(989);
	v->a[15875] = 1;
	v->a[15876] = aux_sym_redirected_statement_repeat2;
	v->a[15877] = actions(83);
	v->a[15878] = 2;
	v->a[15879] = anon_sym_while;
	small_parse_table_794(v);
}

void	small_parse_table_794(t_small_parse_table_array *v)
{
	v->a[15880] = anon_sym_until;
	v->a[15881] = actions(105);
	v->a[15882] = 3;
	v->a[15883] = sym_raw_string;
	v->a[15884] = sym_number;
	v->a[15885] = sym_word;
	v->a[15886] = state(341);
	v->a[15887] = 5;
	v->a[15888] = sym_arithmetic_expansion;
	v->a[15889] = sym_string;
	v->a[15890] = sym_simple_expansion;
	v->a[15891] = sym_expansion;
	v->a[15892] = sym_command_substitution;
	v->a[15893] = actions(97);
	v->a[15894] = 7;
	v->a[15895] = anon_sym_LT;
	v->a[15896] = anon_sym_GT;
	v->a[15897] = anon_sym_GT_GT;
	v->a[15898] = anon_sym_LT_AMP;
	v->a[15899] = anon_sym_GT_AMP;
	small_parse_table_795(v);
}

/* EOF small_parse_table_158.c */
