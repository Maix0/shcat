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
	v->a[15801] = aux_sym_command_repeat1;
	v->a[15802] = state(627);
	v->a[15803] = 1;
	v->a[15804] = sym_concatenation;
	v->a[15805] = state(676);
	v->a[15806] = 1;
	v->a[15807] = sym_file_redirect;
	v->a[15808] = state(1101);
	v->a[15809] = 1;
	v->a[15810] = sym_pipeline;
	v->a[15811] = state(1175);
	v->a[15812] = 1;
	v->a[15813] = aux_sym_redirected_statement_repeat2;
	v->a[15814] = state(1918);
	v->a[15815] = 1;
	v->a[15816] = sym__statement_not_pipeline;
	v->a[15817] = actions(11);
	v->a[15818] = 2;
	v->a[15819] = anon_sym_while;
	small_parse_table_791(v);
}

void	small_parse_table_791(t_small_parse_table_array *v)
{
	v->a[15820] = anon_sym_until;
	v->a[15821] = actions(31);
	v->a[15822] = 2;
	v->a[15823] = sym_raw_string;
	v->a[15824] = sym_number;
	v->a[15825] = state(373);
	v->a[15826] = 5;
	v->a[15827] = sym_arithmetic_expansion;
	v->a[15828] = sym_string;
	v->a[15829] = sym_simple_expansion;
	v->a[15830] = sym_expansion;
	v->a[15831] = sym_command_substitution;
	v->a[15832] = actions(23);
	v->a[15833] = 7;
	v->a[15834] = anon_sym_LT;
	v->a[15835] = anon_sym_GT;
	v->a[15836] = anon_sym_GT_GT;
	v->a[15837] = anon_sym_LT_AMP;
	v->a[15838] = anon_sym_GT_AMP;
	v->a[15839] = anon_sym_GT_PIPE;
	small_parse_table_792(v);
}

void	small_parse_table_792(t_small_parse_table_array *v)
{
	v->a[15840] = anon_sym_LT_GT;
	v->a[15841] = state(1100);
	v->a[15842] = 12;
	v->a[15843] = sym_redirected_statement;
	v->a[15844] = sym_for_statement;
	v->a[15845] = sym_while_statement;
	v->a[15846] = sym_if_statement;
	v->a[15847] = sym_case_statement;
	v->a[15848] = sym_function_definition;
	v->a[15849] = sym_compound_statement;
	v->a[15850] = sym_subshell;
	v->a[15851] = sym_list;
	v->a[15852] = sym_negated_command;
	v->a[15853] = sym_command;
	v->a[15854] = sym__variable_assignments;
	v->a[15855] = 28;
	v->a[15856] = actions(3);
	v->a[15857] = 1;
	v->a[15858] = sym_comment;
	v->a[15859] = actions(311);
	small_parse_table_793(v);
}

void	small_parse_table_793(t_small_parse_table_array *v)
{
	v->a[15860] = 1;
	v->a[15861] = sym_word;
	v->a[15862] = actions(313);
	v->a[15863] = 1;
	v->a[15864] = anon_sym_for;
	v->a[15865] = actions(317);
	v->a[15866] = 1;
	v->a[15867] = anon_sym_if;
	v->a[15868] = actions(319);
	v->a[15869] = 1;
	v->a[15870] = anon_sym_case;
	v->a[15871] = actions(321);
	v->a[15872] = 1;
	v->a[15873] = anon_sym_LPAREN;
	v->a[15874] = actions(323);
	v->a[15875] = 1;
	v->a[15876] = anon_sym_LBRACE;
	v->a[15877] = actions(325);
	v->a[15878] = 1;
	v->a[15879] = anon_sym_BANG;
	small_parse_table_794(v);
}

void	small_parse_table_794(t_small_parse_table_array *v)
{
	v->a[15880] = actions(329);
	v->a[15881] = 1;
	v->a[15882] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15883] = actions(331);
	v->a[15884] = 1;
	v->a[15885] = anon_sym_DOLLAR;
	v->a[15886] = actions(333);
	v->a[15887] = 1;
	v->a[15888] = anon_sym_DQUOTE;
	v->a[15889] = actions(337);
	v->a[15890] = 1;
	v->a[15891] = anon_sym_DOLLAR_LBRACE;
	v->a[15892] = actions(339);
	v->a[15893] = 1;
	v->a[15894] = anon_sym_DOLLAR_LPAREN;
	v->a[15895] = actions(341);
	v->a[15896] = 1;
	v->a[15897] = anon_sym_BQUOTE;
	v->a[15898] = actions(343);
	v->a[15899] = 1;
	small_parse_table_795(v);
}

/* EOF small_parse_table_158.c */
