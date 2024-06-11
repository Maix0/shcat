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
	v->a[5800] = aux_sym_redirected_statement_repeat2;
	v->a[5801] = state(2252);
	v->a[5802] = 1;
	v->a[5803] = sym__statement_not_pipeline;
	v->a[5804] = state(2473);
	v->a[5805] = 1;
	v->a[5806] = sym__statements;
	v->a[5807] = actions(11);
	v->a[5808] = 2;
	v->a[5809] = anon_sym_while;
	v->a[5810] = anon_sym_until;
	v->a[5811] = actions(226);
	v->a[5812] = 2;
	v->a[5813] = anon_sym_LT_AMP_DASH;
	v->a[5814] = anon_sym_GT_AMP_DASH;
	v->a[5815] = actions(228);
	v->a[5816] = 2;
	v->a[5817] = sym_raw_string;
	v->a[5818] = sym_number;
	v->a[5819] = state(294);
	small_parse_table_291(v);
}

void	small_parse_table_291(t_small_parse_table_array *v)
{
	v->a[5820] = 5;
	v->a[5821] = sym_arithmetic_expansion;
	v->a[5822] = sym_string;
	v->a[5823] = sym_simple_expansion;
	v->a[5824] = sym_expansion;
	v->a[5825] = sym_command_substitution;
	v->a[5826] = actions(224);
	v->a[5827] = 8;
	v->a[5828] = anon_sym_LT;
	v->a[5829] = anon_sym_GT;
	v->a[5830] = anon_sym_GT_GT;
	v->a[5831] = anon_sym_AMP_GT;
	v->a[5832] = anon_sym_AMP_GT_GT;
	v->a[5833] = anon_sym_LT_AMP;
	v->a[5834] = anon_sym_GT_AMP;
	v->a[5835] = anon_sym_GT_PIPE;
	v->a[5836] = state(1188);
	v->a[5837] = 12;
	v->a[5838] = sym_redirected_statement;
	v->a[5839] = sym_for_statement;
	small_parse_table_292(v);
}

void	small_parse_table_292(t_small_parse_table_array *v)
{
	v->a[5840] = sym_while_statement;
	v->a[5841] = sym_if_statement;
	v->a[5842] = sym_case_statement;
	v->a[5843] = sym_function_definition;
	v->a[5844] = sym_compound_statement;
	v->a[5845] = sym_subshell;
	v->a[5846] = sym_list;
	v->a[5847] = sym_negated_command;
	v->a[5848] = sym_command;
	v->a[5849] = sym_variable_assignments;
	v->a[5850] = 32;
	v->a[5851] = actions(3);
	v->a[5852] = 1;
	v->a[5853] = sym_comment;
	v->a[5854] = actions(9);
	v->a[5855] = 1;
	v->a[5856] = anon_sym_for;
	v->a[5857] = actions(13);
	v->a[5858] = 1;
	v->a[5859] = anon_sym_if;
	small_parse_table_293(v);
}

void	small_parse_table_293(t_small_parse_table_array *v)
{
	v->a[5860] = actions(15);
	v->a[5861] = 1;
	v->a[5862] = anon_sym_case;
	v->a[5863] = actions(17);
	v->a[5864] = 1;
	v->a[5865] = anon_sym_LPAREN;
	v->a[5866] = actions(19);
	v->a[5867] = 1;
	v->a[5868] = anon_sym_LBRACE;
	v->a[5869] = actions(45);
	v->a[5870] = 1;
	v->a[5871] = sym_word;
	v->a[5872] = actions(53);
	v->a[5873] = 1;
	v->a[5874] = anon_sym_BANG;
	v->a[5875] = actions(59);
	v->a[5876] = 1;
	v->a[5877] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5878] = actions(61);
	v->a[5879] = 1;
	small_parse_table_294(v);
}

void	small_parse_table_294(t_small_parse_table_array *v)
{
	v->a[5880] = anon_sym_DOLLAR;
	v->a[5881] = actions(63);
	v->a[5882] = 1;
	v->a[5883] = anon_sym_DQUOTE;
	v->a[5884] = actions(67);
	v->a[5885] = 1;
	v->a[5886] = anon_sym_DOLLAR_LBRACE;
	v->a[5887] = actions(69);
	v->a[5888] = 1;
	v->a[5889] = anon_sym_DOLLAR_LPAREN;
	v->a[5890] = actions(71);
	v->a[5891] = 1;
	v->a[5892] = anon_sym_BQUOTE;
	v->a[5893] = actions(73);
	v->a[5894] = 1;
	v->a[5895] = sym_file_descriptor;
	v->a[5896] = actions(75);
	v->a[5897] = 1;
	v->a[5898] = sym_variable_name;
	v->a[5899] = actions(244);
	small_parse_table_295(v);
}

/* EOF small_parse_table_58.c */
