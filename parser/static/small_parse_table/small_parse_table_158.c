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
	v->a[15800] = anon_sym_LT;
	v->a[15801] = anon_sym_GT;
	v->a[15802] = anon_sym_GT_GT;
	v->a[15803] = anon_sym_LT_AMP;
	v->a[15804] = anon_sym_GT_AMP;
	v->a[15805] = anon_sym_GT_PIPE;
	v->a[15806] = state(1096);
	v->a[15807] = 12;
	v->a[15808] = sym_redirected_statement;
	v->a[15809] = sym_for_statement;
	v->a[15810] = sym_while_statement;
	v->a[15811] = sym_if_statement;
	v->a[15812] = sym_case_statement;
	v->a[15813] = sym_function_definition;
	v->a[15814] = sym_compound_statement;
	v->a[15815] = sym_subshell;
	v->a[15816] = sym_list;
	v->a[15817] = sym_negated_command;
	v->a[15818] = sym_command;
	v->a[15819] = sym__variable_assignments;
	small_parse_table_791(v);
}

void	small_parse_table_791(t_small_parse_table_array *v)
{
	v->a[15820] = 31;
	v->a[15821] = actions(3);
	v->a[15822] = 1;
	v->a[15823] = sym_comment;
	v->a[15824] = actions(9);
	v->a[15825] = 1;
	v->a[15826] = anon_sym_for;
	v->a[15827] = actions(13);
	v->a[15828] = 1;
	v->a[15829] = anon_sym_if;
	v->a[15830] = actions(15);
	v->a[15831] = 1;
	v->a[15832] = anon_sym_case;
	v->a[15833] = actions(17);
	v->a[15834] = 1;
	v->a[15835] = anon_sym_LPAREN;
	v->a[15836] = actions(19);
	v->a[15837] = 1;
	v->a[15838] = anon_sym_LBRACE;
	v->a[15839] = actions(45);
	small_parse_table_792(v);
}

void	small_parse_table_792(t_small_parse_table_array *v)
{
	v->a[15840] = 1;
	v->a[15841] = sym_word;
	v->a[15842] = actions(53);
	v->a[15843] = 1;
	v->a[15844] = anon_sym_BANG;
	v->a[15845] = actions(59);
	v->a[15846] = 1;
	v->a[15847] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15848] = actions(61);
	v->a[15849] = 1;
	v->a[15850] = anon_sym_DOLLAR;
	v->a[15851] = actions(63);
	v->a[15852] = 1;
	v->a[15853] = anon_sym_DQUOTE;
	v->a[15854] = actions(67);
	v->a[15855] = 1;
	v->a[15856] = anon_sym_DOLLAR_LBRACE;
	v->a[15857] = actions(69);
	v->a[15858] = 1;
	v->a[15859] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_793(v);
}

void	small_parse_table_793(t_small_parse_table_array *v)
{
	v->a[15860] = actions(71);
	v->a[15861] = 1;
	v->a[15862] = anon_sym_BQUOTE;
	v->a[15863] = actions(73);
	v->a[15864] = 1;
	v->a[15865] = sym_file_descriptor;
	v->a[15866] = actions(75);
	v->a[15867] = 1;
	v->a[15868] = sym_variable_name;
	v->a[15869] = state(80);
	v->a[15870] = 1;
	v->a[15871] = aux_sym__terminated_statement;
	v->a[15872] = state(189);
	v->a[15873] = 1;
	v->a[15874] = sym_command_name;
	v->a[15875] = state(249);
	v->a[15876] = 1;
	v->a[15877] = sym_variable_assignment;
	v->a[15878] = state(650);
	v->a[15879] = 1;
	small_parse_table_794(v);
}

void	small_parse_table_794(t_small_parse_table_array *v)
{
	v->a[15880] = sym_concatenation;
	v->a[15881] = state(712);
	v->a[15882] = 1;
	v->a[15883] = sym_file_redirect;
	v->a[15884] = state(713);
	v->a[15885] = 1;
	v->a[15886] = aux_sym_command_repeat1;
	v->a[15887] = state(1236);
	v->a[15888] = 1;
	v->a[15889] = sym_pipeline;
	v->a[15890] = state(1333);
	v->a[15891] = 1;
	v->a[15892] = aux_sym_redirected_statement_repeat2;
	v->a[15893] = state(2103);
	v->a[15894] = 1;
	v->a[15895] = sym__statement_not_pipeline;
	v->a[15896] = actions(11);
	v->a[15897] = 2;
	v->a[15898] = anon_sym_while;
	v->a[15899] = anon_sym_until;
	small_parse_table_795(v);
}

/* EOF small_parse_table_158.c */
