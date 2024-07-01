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
	v->a[15800] = 1;
	v->a[15801] = sym_variable_assignment;
	v->a[15802] = state(890);
	v->a[15803] = 1;
	v->a[15804] = sym_concatenation;
	v->a[15805] = state(903);
	v->a[15806] = 1;
	v->a[15807] = sym_file_redirect;
	v->a[15808] = state(1426);
	v->a[15809] = 1;
	v->a[15810] = sym_pipeline;
	v->a[15811] = state(1455);
	v->a[15812] = 1;
	v->a[15813] = aux_sym_redirected_statement_repeat2;
	v->a[15814] = actions(315);
	v->a[15815] = 2;
	v->a[15816] = anon_sym_while;
	v->a[15817] = anon_sym_until;
	v->a[15818] = actions(335);
	v->a[15819] = 2;
	small_parse_table_791(v);
}

void	small_parse_table_791(t_small_parse_table_array *v)
{
	v->a[15820] = sym_raw_string;
	v->a[15821] = sym_number;
	v->a[15822] = state(760);
	v->a[15823] = 5;
	v->a[15824] = sym_arithmetic_expansion;
	v->a[15825] = sym_string;
	v->a[15826] = sym_simple_expansion;
	v->a[15827] = sym_expansion;
	v->a[15828] = sym_command_substitution;
	v->a[15829] = actions(327);
	v->a[15830] = 7;
	v->a[15831] = anon_sym_LT;
	v->a[15832] = anon_sym_GT;
	v->a[15833] = anon_sym_GT_GT;
	v->a[15834] = anon_sym_LT_AMP;
	v->a[15835] = anon_sym_GT_AMP;
	v->a[15836] = anon_sym_GT_PIPE;
	v->a[15837] = anon_sym_LT_GT;
	v->a[15838] = state(1504);
	v->a[15839] = 13;
	small_parse_table_792(v);
}

void	small_parse_table_792(t_small_parse_table_array *v)
{
	v->a[15840] = sym__statement_not_pipeline;
	v->a[15841] = sym_redirected_statement;
	v->a[15842] = sym_for_statement;
	v->a[15843] = sym_while_statement;
	v->a[15844] = sym_if_statement;
	v->a[15845] = sym_case_statement;
	v->a[15846] = sym_function_definition;
	v->a[15847] = sym_compound_statement;
	v->a[15848] = sym_subshell;
	v->a[15849] = sym_list;
	v->a[15850] = sym_negated_command;
	v->a[15851] = sym_command;
	v->a[15852] = sym__variable_assignments;
	v->a[15853] = 28;
	v->a[15854] = actions(3);
	v->a[15855] = 1;
	v->a[15856] = sym_comment;
	v->a[15857] = actions(9);
	v->a[15858] = 1;
	v->a[15859] = anon_sym_for;
	small_parse_table_793(v);
}

void	small_parse_table_793(t_small_parse_table_array *v)
{
	v->a[15860] = actions(13);
	v->a[15861] = 1;
	v->a[15862] = anon_sym_if;
	v->a[15863] = actions(15);
	v->a[15864] = 1;
	v->a[15865] = anon_sym_case;
	v->a[15866] = actions(17);
	v->a[15867] = 1;
	v->a[15868] = anon_sym_LPAREN;
	v->a[15869] = actions(19);
	v->a[15870] = 1;
	v->a[15871] = anon_sym_LBRACE;
	v->a[15872] = actions(43);
	v->a[15873] = 1;
	v->a[15874] = sym_word;
	v->a[15875] = actions(51);
	v->a[15876] = 1;
	v->a[15877] = anon_sym_BANG;
	v->a[15878] = actions(55);
	v->a[15879] = 1;
	small_parse_table_794(v);
}

void	small_parse_table_794(t_small_parse_table_array *v)
{
	v->a[15880] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15881] = actions(57);
	v->a[15882] = 1;
	v->a[15883] = anon_sym_DOLLAR;
	v->a[15884] = actions(59);
	v->a[15885] = 1;
	v->a[15886] = anon_sym_DQUOTE;
	v->a[15887] = actions(63);
	v->a[15888] = 1;
	v->a[15889] = anon_sym_DOLLAR_LBRACE;
	v->a[15890] = actions(65);
	v->a[15891] = 1;
	v->a[15892] = anon_sym_DOLLAR_LPAREN;
	v->a[15893] = actions(67);
	v->a[15894] = 1;
	v->a[15895] = anon_sym_BQUOTE;
	v->a[15896] = actions(69);
	v->a[15897] = 1;
	v->a[15898] = sym_file_descriptor;
	v->a[15899] = actions(71);
	small_parse_table_795(v);
}

/* EOF small_parse_table_158.c */
