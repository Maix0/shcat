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
	v->a[15801] = sym_file_redirect;
	v->a[15802] = state(1100);
	v->a[15803] = 1;
	v->a[15804] = sym_pipeline;
	v->a[15805] = state(1196);
	v->a[15806] = 1;
	v->a[15807] = aux_sym_redirected_statement_repeat2;
	v->a[15808] = state(2037);
	v->a[15809] = 1;
	v->a[15810] = sym__statement_not_pipeline;
	v->a[15811] = state(2111);
	v->a[15812] = 1;
	v->a[15813] = sym__statements;
	v->a[15814] = actions(11);
	v->a[15815] = 2;
	v->a[15816] = anon_sym_while;
	v->a[15817] = anon_sym_until;
	v->a[15818] = actions(254);
	v->a[15819] = 2;
	small_parse_table_791(v);
}

void	small_parse_table_791(t_small_parse_table_array *v)
{
	v->a[15820] = anon_sym_LT_AMP_DASH;
	v->a[15821] = anon_sym_GT_AMP_DASH;
	v->a[15822] = state(295);
	v->a[15823] = 6;
	v->a[15824] = sym_arithmetic_expansion;
	v->a[15825] = sym_string;
	v->a[15826] = sym_number;
	v->a[15827] = sym_simple_expansion;
	v->a[15828] = sym_expansion;
	v->a[15829] = sym_command_substitution;
	v->a[15830] = actions(252);
	v->a[15831] = 8;
	v->a[15832] = anon_sym_LT;
	v->a[15833] = anon_sym_GT;
	v->a[15834] = anon_sym_GT_GT;
	v->a[15835] = anon_sym_AMP_GT;
	v->a[15836] = anon_sym_AMP_GT_GT;
	v->a[15837] = anon_sym_LT_AMP;
	v->a[15838] = anon_sym_GT_AMP;
	v->a[15839] = anon_sym_GT_PIPE;
	small_parse_table_792(v);
}

void	small_parse_table_792(t_small_parse_table_array *v)
{
	v->a[15840] = state(1031);
	v->a[15841] = 12;
	v->a[15842] = sym_redirected_statement;
	v->a[15843] = sym_for_statement;
	v->a[15844] = sym_while_statement;
	v->a[15845] = sym_if_statement;
	v->a[15846] = sym_case_statement;
	v->a[15847] = sym_function_definition;
	v->a[15848] = sym_compound_statement;
	v->a[15849] = sym_subshell;
	v->a[15850] = sym_list;
	v->a[15851] = sym_negated_command;
	v->a[15852] = sym_command;
	v->a[15853] = sym_variable_assignments;
	v->a[15854] = 34;
	v->a[15855] = actions(3);
	v->a[15856] = 1;
	v->a[15857] = sym_comment;
	v->a[15858] = actions(9);
	v->a[15859] = 1;
	small_parse_table_793(v);
}

void	small_parse_table_793(t_small_parse_table_array *v)
{
	v->a[15860] = anon_sym_for;
	v->a[15861] = actions(13);
	v->a[15862] = 1;
	v->a[15863] = anon_sym_if;
	v->a[15864] = actions(15);
	v->a[15865] = 1;
	v->a[15866] = anon_sym_case;
	v->a[15867] = actions(17);
	v->a[15868] = 1;
	v->a[15869] = anon_sym_LPAREN;
	v->a[15870] = actions(19);
	v->a[15871] = 1;
	v->a[15872] = anon_sym_LBRACE;
	v->a[15873] = actions(63);
	v->a[15874] = 1;
	v->a[15875] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15876] = actions(65);
	v->a[15877] = 1;
	v->a[15878] = anon_sym_DOLLAR;
	v->a[15879] = actions(67);
	small_parse_table_794(v);
}

void	small_parse_table_794(t_small_parse_table_array *v)
{
	v->a[15880] = 1;
	v->a[15881] = anon_sym_DQUOTE;
	v->a[15882] = actions(69);
	v->a[15883] = 1;
	v->a[15884] = sym_raw_string;
	v->a[15885] = actions(71);
	v->a[15886] = 1;
	v->a[15887] = aux_sym_number_token1;
	v->a[15888] = actions(73);
	v->a[15889] = 1;
	v->a[15890] = aux_sym_number_token2;
	v->a[15891] = actions(75);
	v->a[15892] = 1;
	v->a[15893] = anon_sym_DOLLAR_LBRACE;
	v->a[15894] = actions(77);
	v->a[15895] = 1;
	v->a[15896] = anon_sym_DOLLAR_LPAREN;
	v->a[15897] = actions(79);
	v->a[15898] = 1;
	v->a[15899] = anon_sym_BQUOTE;
	small_parse_table_795(v);
}

/* EOF small_parse_table_158.c */
