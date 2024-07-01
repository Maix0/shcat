/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_58.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_290(t_small_parse_table_array *v)
{
	v->a[5800] = anon_sym_BANG;
	v->a[5801] = actions(230);
	v->a[5802] = 1;
	v->a[5803] = sym_file_descriptor;
	v->a[5804] = actions(232);
	v->a[5805] = 1;
	v->a[5806] = sym_variable_name;
	v->a[5807] = state(133);
	v->a[5808] = 1;
	v->a[5809] = aux_sym__statements_repeat1;
	v->a[5810] = state(180);
	v->a[5811] = 1;
	v->a[5812] = sym_command_name;
	v->a[5813] = state(231);
	v->a[5814] = 1;
	v->a[5815] = sym_variable_assignment;
	v->a[5816] = state(650);
	v->a[5817] = 1;
	v->a[5818] = sym_concatenation;
	v->a[5819] = state(679);
	small_parse_table_291(v);
}

void	small_parse_table_291(t_small_parse_table_array *v)
{
	v->a[5820] = 1;
	v->a[5821] = sym_file_redirect;
	v->a[5822] = state(710);
	v->a[5823] = 1;
	v->a[5824] = aux_sym_command_repeat1;
	v->a[5825] = state(1095);
	v->a[5826] = 1;
	v->a[5827] = sym_pipeline;
	v->a[5828] = state(1282);
	v->a[5829] = 1;
	v->a[5830] = aux_sym_redirected_statement_repeat2;
	v->a[5831] = state(2127);
	v->a[5832] = 1;
	v->a[5833] = sym__statement_not_pipeline;
	v->a[5834] = state(2161);
	v->a[5835] = 1;
	v->a[5836] = sym__statements;
	v->a[5837] = actions(11);
	v->a[5838] = 2;
	v->a[5839] = anon_sym_while;
	small_parse_table_292(v);
}

void	small_parse_table_292(t_small_parse_table_array *v)
{
	v->a[5840] = anon_sym_until;
	v->a[5841] = actions(226);
	v->a[5842] = 2;
	v->a[5843] = anon_sym_LT_AMP_DASH;
	v->a[5844] = anon_sym_GT_AMP_DASH;
	v->a[5845] = actions(228);
	v->a[5846] = 2;
	v->a[5847] = sym_raw_string;
	v->a[5848] = sym_number;
	v->a[5849] = state(382);
	v->a[5850] = 5;
	v->a[5851] = sym_arithmetic_expansion;
	v->a[5852] = sym_string;
	v->a[5853] = sym_simple_expansion;
	v->a[5854] = sym_expansion;
	v->a[5855] = sym_command_substitution;
	v->a[5856] = actions(224);
	v->a[5857] = 6;
	v->a[5858] = anon_sym_LT;
	v->a[5859] = anon_sym_GT;
	small_parse_table_293(v);
}

void	small_parse_table_293(t_small_parse_table_array *v)
{
	v->a[5860] = anon_sym_GT_GT;
	v->a[5861] = anon_sym_LT_AMP;
	v->a[5862] = anon_sym_GT_AMP;
	v->a[5863] = anon_sym_GT_PIPE;
	v->a[5864] = state(1087);
	v->a[5865] = 12;
	v->a[5866] = sym_redirected_statement;
	v->a[5867] = sym_for_statement;
	v->a[5868] = sym_while_statement;
	v->a[5869] = sym_if_statement;
	v->a[5870] = sym_case_statement;
	v->a[5871] = sym_function_definition;
	v->a[5872] = sym_compound_statement;
	v->a[5873] = sym_subshell;
	v->a[5874] = sym_list;
	v->a[5875] = sym_negated_command;
	v->a[5876] = sym_command;
	v->a[5877] = sym__variable_assignments;
	v->a[5878] = 32;
	v->a[5879] = actions(3);
	small_parse_table_294(v);
}

void	small_parse_table_294(t_small_parse_table_array *v)
{
	v->a[5880] = 1;
	v->a[5881] = sym_comment;
	v->a[5882] = actions(9);
	v->a[5883] = 1;
	v->a[5884] = anon_sym_for;
	v->a[5885] = actions(13);
	v->a[5886] = 1;
	v->a[5887] = anon_sym_if;
	v->a[5888] = actions(15);
	v->a[5889] = 1;
	v->a[5890] = anon_sym_case;
	v->a[5891] = actions(17);
	v->a[5892] = 1;
	v->a[5893] = anon_sym_LPAREN;
	v->a[5894] = actions(19);
	v->a[5895] = 1;
	v->a[5896] = anon_sym_LBRACE;
	v->a[5897] = actions(59);
	v->a[5898] = 1;
	v->a[5899] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_295(v);
}

/* EOF small_parse_table_58.c */
