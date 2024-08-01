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
	v->a[5800] = 1;
	v->a[5801] = sym_file_redirect;
	v->a[5802] = state(937);
	v->a[5803] = 1;
	v->a[5804] = sym_pipeline;
	v->a[5805] = state(1019);
	v->a[5806] = 1;
	v->a[5807] = aux_sym_redirected_statement_repeat2;
	v->a[5808] = state(1557);
	v->a[5809] = 1;
	v->a[5810] = sym__statement_not_pipeline;
	v->a[5811] = state(1648);
	v->a[5812] = 1;
	v->a[5813] = sym__statements;
	v->a[5814] = actions(11);
	v->a[5815] = 2;
	v->a[5816] = anon_sym_while;
	v->a[5817] = anon_sym_until;
	v->a[5818] = actions(214);
	v->a[5819] = 2;
	small_parse_table_291(v);
}

void	small_parse_table_291(t_small_parse_table_array *v)
{
	v->a[5820] = sym_raw_string;
	v->a[5821] = sym_number;
	v->a[5822] = actions(212);
	v->a[5823] = 3;
	v->a[5824] = anon_sym_LT;
	v->a[5825] = anon_sym_GT;
	v->a[5826] = anon_sym_GT_GT;
	v->a[5827] = state(277);
	v->a[5828] = 5;
	v->a[5829] = sym_arithmetic_expansion;
	v->a[5830] = sym_string;
	v->a[5831] = sym_simple_expansion;
	v->a[5832] = sym_expansion;
	v->a[5833] = sym_command_substitution;
	v->a[5834] = state(877);
	v->a[5835] = 12;
	v->a[5836] = sym_redirected_statement;
	v->a[5837] = sym_for_statement;
	v->a[5838] = sym_while_statement;
	v->a[5839] = sym_if_statement;
	small_parse_table_292(v);
}

void	small_parse_table_292(t_small_parse_table_array *v)
{
	v->a[5840] = sym_case_statement;
	v->a[5841] = sym_function_definition;
	v->a[5842] = sym_compound_statement;
	v->a[5843] = sym_subshell;
	v->a[5844] = sym_list;
	v->a[5845] = sym_negated_command;
	v->a[5846] = sym_command;
	v->a[5847] = sym__variable_assignments;
	v->a[5848] = 30;
	v->a[5849] = actions(3);
	v->a[5850] = 1;
	v->a[5851] = sym_comment;
	v->a[5852] = actions(9);
	v->a[5853] = 1;
	v->a[5854] = anon_sym_for;
	v->a[5855] = actions(13);
	v->a[5856] = 1;
	v->a[5857] = anon_sym_if;
	v->a[5858] = actions(15);
	v->a[5859] = 1;
	small_parse_table_293(v);
}

void	small_parse_table_293(t_small_parse_table_array *v)
{
	v->a[5860] = anon_sym_case;
	v->a[5861] = actions(17);
	v->a[5862] = 1;
	v->a[5863] = anon_sym_LPAREN;
	v->a[5864] = actions(19);
	v->a[5865] = 1;
	v->a[5866] = anon_sym_LBRACE;
	v->a[5867] = actions(53);
	v->a[5868] = 1;
	v->a[5869] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5870] = actions(55);
	v->a[5871] = 1;
	v->a[5872] = anon_sym_DOLLAR;
	v->a[5873] = actions(57);
	v->a[5874] = 1;
	v->a[5875] = anon_sym_DQUOTE;
	v->a[5876] = actions(61);
	v->a[5877] = 1;
	v->a[5878] = anon_sym_DOLLAR_LBRACE;
	v->a[5879] = actions(63);
	small_parse_table_294(v);
}

void	small_parse_table_294(t_small_parse_table_array *v)
{
	v->a[5880] = 1;
	v->a[5881] = anon_sym_DOLLAR_LPAREN;
	v->a[5882] = actions(65);
	v->a[5883] = 1;
	v->a[5884] = anon_sym_BQUOTE;
	v->a[5885] = actions(208);
	v->a[5886] = 1;
	v->a[5887] = sym_word;
	v->a[5888] = actions(210);
	v->a[5889] = 1;
	v->a[5890] = anon_sym_BANG;
	v->a[5891] = actions(216);
	v->a[5892] = 1;
	v->a[5893] = sym_variable_name;
	v->a[5894] = state(112);
	v->a[5895] = 1;
	v->a[5896] = aux_sym__statements_repeat1;
	v->a[5897] = state(158);
	v->a[5898] = 1;
	v->a[5899] = sym_command_name;
	small_parse_table_295(v);
}

/* EOF small_parse_table_58.c */
