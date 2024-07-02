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
	v->a[5800] = sym_file_redirect;
	v->a[5801] = state(639);
	v->a[5802] = 1;
	v->a[5803] = aux_sym_command_repeat1;
	v->a[5804] = state(1073);
	v->a[5805] = 1;
	v->a[5806] = sym_pipeline;
	v->a[5807] = state(1158);
	v->a[5808] = 1;
	v->a[5809] = aux_sym_redirected_statement_repeat2;
	v->a[5810] = state(1906);
	v->a[5811] = 1;
	v->a[5812] = sym__statement_not_pipeline;
	v->a[5813] = state(2064);
	v->a[5814] = 1;
	v->a[5815] = sym__statements;
	v->a[5816] = actions(11);
	v->a[5817] = 2;
	v->a[5818] = anon_sym_while;
	v->a[5819] = anon_sym_until;
	small_parse_table_291(v);
}

void	small_parse_table_291(t_small_parse_table_array *v)
{
	v->a[5820] = actions(217);
	v->a[5821] = 2;
	v->a[5822] = sym_raw_string;
	v->a[5823] = sym_number;
	v->a[5824] = state(347);
	v->a[5825] = 5;
	v->a[5826] = sym_arithmetic_expansion;
	v->a[5827] = sym_string;
	v->a[5828] = sym_simple_expansion;
	v->a[5829] = sym_expansion;
	v->a[5830] = sym_command_substitution;
	v->a[5831] = actions(215);
	v->a[5832] = 7;
	v->a[5833] = anon_sym_LT;
	v->a[5834] = anon_sym_GT;
	v->a[5835] = anon_sym_GT_GT;
	v->a[5836] = anon_sym_LT_AMP;
	v->a[5837] = anon_sym_GT_AMP;
	v->a[5838] = anon_sym_GT_PIPE;
	v->a[5839] = anon_sym_LT_GT;
	small_parse_table_292(v);
}

void	small_parse_table_292(t_small_parse_table_array *v)
{
	v->a[5840] = state(958);
	v->a[5841] = 12;
	v->a[5842] = sym_redirected_statement;
	v->a[5843] = sym_for_statement;
	v->a[5844] = sym_while_statement;
	v->a[5845] = sym_if_statement;
	v->a[5846] = sym_case_statement;
	v->a[5847] = sym_function_definition;
	v->a[5848] = sym_compound_statement;
	v->a[5849] = sym_subshell;
	v->a[5850] = sym_list;
	v->a[5851] = sym_negated_command;
	v->a[5852] = sym_command;
	v->a[5853] = sym__variable_assignments;
	v->a[5854] = 31;
	v->a[5855] = actions(3);
	v->a[5856] = 1;
	v->a[5857] = sym_comment;
	v->a[5858] = actions(9);
	v->a[5859] = 1;
	small_parse_table_293(v);
}

void	small_parse_table_293(t_small_parse_table_array *v)
{
	v->a[5860] = anon_sym_for;
	v->a[5861] = actions(13);
	v->a[5862] = 1;
	v->a[5863] = anon_sym_if;
	v->a[5864] = actions(15);
	v->a[5865] = 1;
	v->a[5866] = anon_sym_case;
	v->a[5867] = actions(17);
	v->a[5868] = 1;
	v->a[5869] = anon_sym_LPAREN;
	v->a[5870] = actions(19);
	v->a[5871] = 1;
	v->a[5872] = anon_sym_LBRACE;
	v->a[5873] = actions(55);
	v->a[5874] = 1;
	v->a[5875] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5876] = actions(57);
	v->a[5877] = 1;
	v->a[5878] = anon_sym_DOLLAR;
	v->a[5879] = actions(59);
	small_parse_table_294(v);
}

void	small_parse_table_294(t_small_parse_table_array *v)
{
	v->a[5880] = 1;
	v->a[5881] = anon_sym_DQUOTE;
	v->a[5882] = actions(63);
	v->a[5883] = 1;
	v->a[5884] = anon_sym_DOLLAR_LBRACE;
	v->a[5885] = actions(65);
	v->a[5886] = 1;
	v->a[5887] = anon_sym_DOLLAR_LPAREN;
	v->a[5888] = actions(67);
	v->a[5889] = 1;
	v->a[5890] = anon_sym_BQUOTE;
	v->a[5891] = actions(69);
	v->a[5892] = 1;
	v->a[5893] = sym_file_descriptor;
	v->a[5894] = actions(71);
	v->a[5895] = 1;
	v->a[5896] = sym_variable_name;
	v->a[5897] = actions(223);
	v->a[5898] = 1;
	v->a[5899] = sym_word;
	small_parse_table_295(v);
}

/* EOF small_parse_table_58.c */
