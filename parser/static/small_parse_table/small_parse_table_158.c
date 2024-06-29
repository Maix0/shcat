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
	v->a[15801] = sym_list;
	v->a[15802] = state(1018);
	v->a[15803] = 1;
	v->a[15804] = sym_subshell;
	v->a[15805] = state(1019);
	v->a[15806] = 1;
	v->a[15807] = sym_compound_statement;
	v->a[15808] = state(1021);
	v->a[15809] = 1;
	v->a[15810] = sym_function_definition;
	v->a[15811] = state(1022);
	v->a[15812] = 1;
	v->a[15813] = sym_case_statement;
	v->a[15814] = state(1023);
	v->a[15815] = 1;
	v->a[15816] = sym_if_statement;
	v->a[15817] = state(1024);
	v->a[15818] = 1;
	v->a[15819] = sym_while_statement;
	small_parse_table_791(v);
}

void	small_parse_table_791(t_small_parse_table_array *v)
{
	v->a[15820] = state(1025);
	v->a[15821] = 1;
	v->a[15822] = sym_for_statement;
	v->a[15823] = state(1027);
	v->a[15824] = 1;
	v->a[15825] = sym_redirected_statement;
	v->a[15826] = state(1166);
	v->a[15827] = 1;
	v->a[15828] = sym_pipeline;
	v->a[15829] = state(1207);
	v->a[15830] = 1;
	v->a[15831] = aux_sym_redirected_statement_repeat2;
	v->a[15832] = state(2116);
	v->a[15833] = 1;
	v->a[15834] = sym__statement_not_pipeline;
	v->a[15835] = actions(11);
	v->a[15836] = 2;
	v->a[15837] = anon_sym_while;
	v->a[15838] = anon_sym_until;
	v->a[15839] = actions(57);
	small_parse_table_792(v);
}

void	small_parse_table_792(t_small_parse_table_array *v)
{
	v->a[15840] = 2;
	v->a[15841] = anon_sym_LT_AMP_DASH;
	v->a[15842] = anon_sym_GT_AMP_DASH;
	v->a[15843] = actions(65);
	v->a[15844] = 2;
	v->a[15845] = sym_raw_string;
	v->a[15846] = sym_number;
	v->a[15847] = state(420);
	v->a[15848] = 5;
	v->a[15849] = sym_arithmetic_expansion;
	v->a[15850] = sym_string;
	v->a[15851] = sym_simple_expansion;
	v->a[15852] = sym_expansion;
	v->a[15853] = sym_command_substitution;
	v->a[15854] = actions(55);
	v->a[15855] = 8;
	v->a[15856] = anon_sym_LT;
	v->a[15857] = anon_sym_GT;
	v->a[15858] = anon_sym_GT_GT;
	v->a[15859] = anon_sym_AMP_GT;
	small_parse_table_793(v);
}

void	small_parse_table_793(t_small_parse_table_array *v)
{
	v->a[15860] = anon_sym_AMP_GT_GT;
	v->a[15861] = anon_sym_LT_AMP;
	v->a[15862] = anon_sym_GT_AMP;
	v->a[15863] = anon_sym_GT_PIPE;
	v->a[15864] = 42;
	v->a[15865] = actions(3);
	v->a[15866] = 1;
	v->a[15867] = sym_comment;
	v->a[15868] = actions(9);
	v->a[15869] = 1;
	v->a[15870] = anon_sym_for;
	v->a[15871] = actions(13);
	v->a[15872] = 1;
	v->a[15873] = anon_sym_if;
	v->a[15874] = actions(15);
	v->a[15875] = 1;
	v->a[15876] = anon_sym_case;
	v->a[15877] = actions(17);
	v->a[15878] = 1;
	v->a[15879] = anon_sym_LPAREN;
	small_parse_table_794(v);
}

void	small_parse_table_794(t_small_parse_table_array *v)
{
	v->a[15880] = actions(19);
	v->a[15881] = 1;
	v->a[15882] = anon_sym_LBRACE;
	v->a[15883] = actions(45);
	v->a[15884] = 1;
	v->a[15885] = sym_word;
	v->a[15886] = actions(53);
	v->a[15887] = 1;
	v->a[15888] = anon_sym_BANG;
	v->a[15889] = actions(59);
	v->a[15890] = 1;
	v->a[15891] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15892] = actions(61);
	v->a[15893] = 1;
	v->a[15894] = anon_sym_DOLLAR;
	v->a[15895] = actions(63);
	v->a[15896] = 1;
	v->a[15897] = anon_sym_DQUOTE;
	v->a[15898] = actions(67);
	v->a[15899] = 1;
	small_parse_table_795(v);
}

/* EOF small_parse_table_158.c */
