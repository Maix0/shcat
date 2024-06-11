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
	v->a[15800] = state(243);
	v->a[15801] = 1;
	v->a[15802] = sym_variable_assignment;
	v->a[15803] = state(621);
	v->a[15804] = 1;
	v->a[15805] = sym_concatenation;
	v->a[15806] = state(692);
	v->a[15807] = 1;
	v->a[15808] = sym_file_redirect;
	v->a[15809] = state(810);
	v->a[15810] = 1;
	v->a[15811] = aux_sym_command_repeat1;
	v->a[15812] = state(1217);
	v->a[15813] = 1;
	v->a[15814] = sym_redirected_statement;
	v->a[15815] = state(1218);
	v->a[15816] = 1;
	v->a[15817] = sym_for_statement;
	v->a[15818] = state(1219);
	v->a[15819] = 1;
	small_parse_table_791(v);
}

void	small_parse_table_791(t_small_parse_table_array *v)
{
	v->a[15820] = sym_while_statement;
	v->a[15821] = state(1220);
	v->a[15822] = 1;
	v->a[15823] = sym_if_statement;
	v->a[15824] = state(1221);
	v->a[15825] = 1;
	v->a[15826] = sym_case_statement;
	v->a[15827] = state(1222);
	v->a[15828] = 1;
	v->a[15829] = sym_function_definition;
	v->a[15830] = state(1227);
	v->a[15831] = 1;
	v->a[15832] = sym_compound_statement;
	v->a[15833] = state(1229);
	v->a[15834] = 1;
	v->a[15835] = sym_subshell;
	v->a[15836] = state(1230);
	v->a[15837] = 1;
	v->a[15838] = sym_list;
	v->a[15839] = state(1232);
	small_parse_table_792(v);
}

void	small_parse_table_792(t_small_parse_table_array *v)
{
	v->a[15840] = 1;
	v->a[15841] = sym_negated_command;
	v->a[15842] = state(1233);
	v->a[15843] = 1;
	v->a[15844] = sym_command;
	v->a[15845] = state(1234);
	v->a[15846] = 1;
	v->a[15847] = sym_variable_assignments;
	v->a[15848] = state(1406);
	v->a[15849] = 1;
	v->a[15850] = sym_pipeline;
	v->a[15851] = state(1432);
	v->a[15852] = 1;
	v->a[15853] = aux_sym_redirected_statement_repeat2;
	v->a[15854] = state(2254);
	v->a[15855] = 1;
	v->a[15856] = sym__statement_not_pipeline;
	v->a[15857] = actions(93);
	v->a[15858] = 2;
	v->a[15859] = anon_sym_while;
	small_parse_table_793(v);
}

void	small_parse_table_793(t_small_parse_table_array *v)
{
	v->a[15860] = anon_sym_until;
	v->a[15861] = actions(107);
	v->a[15862] = 2;
	v->a[15863] = anon_sym_LT_AMP_DASH;
	v->a[15864] = anon_sym_GT_AMP_DASH;
	v->a[15865] = actions(115);
	v->a[15866] = 2;
	v->a[15867] = sym_raw_string;
	v->a[15868] = sym_number;
	v->a[15869] = state(282);
	v->a[15870] = 5;
	v->a[15871] = sym_arithmetic_expansion;
	v->a[15872] = sym_string;
	v->a[15873] = sym_simple_expansion;
	v->a[15874] = sym_expansion;
	v->a[15875] = sym_command_substitution;
	v->a[15876] = actions(105);
	v->a[15877] = 8;
	v->a[15878] = anon_sym_LT;
	v->a[15879] = anon_sym_GT;
	small_parse_table_794(v);
}

void	small_parse_table_794(t_small_parse_table_array *v)
{
	v->a[15880] = anon_sym_GT_GT;
	v->a[15881] = anon_sym_AMP_GT;
	v->a[15882] = anon_sym_AMP_GT_GT;
	v->a[15883] = anon_sym_LT_AMP;
	v->a[15884] = anon_sym_GT_AMP;
	v->a[15885] = anon_sym_GT_PIPE;
	v->a[15886] = 31;
	v->a[15887] = actions(3);
	v->a[15888] = 1;
	v->a[15889] = sym_comment;
	v->a[15890] = actions(9);
	v->a[15891] = 1;
	v->a[15892] = anon_sym_for;
	v->a[15893] = actions(13);
	v->a[15894] = 1;
	v->a[15895] = anon_sym_if;
	v->a[15896] = actions(15);
	v->a[15897] = 1;
	v->a[15898] = anon_sym_case;
	v->a[15899] = actions(17);
	small_parse_table_795(v);
}

/* EOF small_parse_table_158.c */
