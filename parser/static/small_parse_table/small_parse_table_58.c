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
	v->a[5800] = state(141);
	v->a[5801] = 1;
	v->a[5802] = aux_sym__statements_repeat1;
	v->a[5803] = state(175);
	v->a[5804] = 1;
	v->a[5805] = sym_command_name;
	v->a[5806] = state(278);
	v->a[5807] = 1;
	v->a[5808] = sym_variable_assignment;
	v->a[5809] = state(567);
	v->a[5810] = 1;
	v->a[5811] = aux_sym_command_repeat1;
	v->a[5812] = state(582);
	v->a[5813] = 1;
	v->a[5814] = sym_concatenation;
	v->a[5815] = state(703);
	v->a[5816] = 1;
	v->a[5817] = sym_file_redirect;
	v->a[5818] = state(1100);
	v->a[5819] = 1;
	small_parse_table_291(v);
}

void	small_parse_table_291(t_small_parse_table_array *v)
{
	v->a[5820] = sym_pipeline;
	v->a[5821] = state(1196);
	v->a[5822] = 1;
	v->a[5823] = aux_sym_redirected_statement_repeat2;
	v->a[5824] = state(2037);
	v->a[5825] = 1;
	v->a[5826] = sym__statement_not_pipeline;
	v->a[5827] = state(2098);
	v->a[5828] = 1;
	v->a[5829] = sym__statements;
	v->a[5830] = actions(11);
	v->a[5831] = 2;
	v->a[5832] = anon_sym_while;
	v->a[5833] = anon_sym_until;
	v->a[5834] = actions(254);
	v->a[5835] = 2;
	v->a[5836] = anon_sym_LT_AMP_DASH;
	v->a[5837] = anon_sym_GT_AMP_DASH;
	v->a[5838] = state(295);
	v->a[5839] = 6;
	small_parse_table_292(v);
}

void	small_parse_table_292(t_small_parse_table_array *v)
{
	v->a[5840] = sym_arithmetic_expansion;
	v->a[5841] = sym_string;
	v->a[5842] = sym_number;
	v->a[5843] = sym_simple_expansion;
	v->a[5844] = sym_expansion;
	v->a[5845] = sym_command_substitution;
	v->a[5846] = actions(252);
	v->a[5847] = 8;
	v->a[5848] = anon_sym_LT;
	v->a[5849] = anon_sym_GT;
	v->a[5850] = anon_sym_GT_GT;
	v->a[5851] = anon_sym_AMP_GT;
	v->a[5852] = anon_sym_AMP_GT_GT;
	v->a[5853] = anon_sym_LT_AMP;
	v->a[5854] = anon_sym_GT_AMP;
	v->a[5855] = anon_sym_GT_PIPE;
	v->a[5856] = state(1031);
	v->a[5857] = 12;
	v->a[5858] = sym_redirected_statement;
	v->a[5859] = sym_for_statement;
	small_parse_table_293(v);
}

void	small_parse_table_293(t_small_parse_table_array *v)
{
	v->a[5860] = sym_while_statement;
	v->a[5861] = sym_if_statement;
	v->a[5862] = sym_case_statement;
	v->a[5863] = sym_function_definition;
	v->a[5864] = sym_compound_statement;
	v->a[5865] = sym_subshell;
	v->a[5866] = sym_list;
	v->a[5867] = sym_negated_command;
	v->a[5868] = sym_command;
	v->a[5869] = sym_variable_assignments;
	v->a[5870] = 34;
	v->a[5871] = actions(3);
	v->a[5872] = 1;
	v->a[5873] = sym_comment;
	v->a[5874] = actions(9);
	v->a[5875] = 1;
	v->a[5876] = anon_sym_for;
	v->a[5877] = actions(13);
	v->a[5878] = 1;
	v->a[5879] = anon_sym_if;
	small_parse_table_294(v);
}

void	small_parse_table_294(t_small_parse_table_array *v)
{
	v->a[5880] = actions(15);
	v->a[5881] = 1;
	v->a[5882] = anon_sym_case;
	v->a[5883] = actions(17);
	v->a[5884] = 1;
	v->a[5885] = anon_sym_LPAREN;
	v->a[5886] = actions(19);
	v->a[5887] = 1;
	v->a[5888] = anon_sym_LBRACE;
	v->a[5889] = actions(63);
	v->a[5890] = 1;
	v->a[5891] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5892] = actions(65);
	v->a[5893] = 1;
	v->a[5894] = anon_sym_DOLLAR;
	v->a[5895] = actions(67);
	v->a[5896] = 1;
	v->a[5897] = anon_sym_DQUOTE;
	v->a[5898] = actions(69);
	v->a[5899] = 1;
	small_parse_table_295(v);
}

/* EOF small_parse_table_58.c */
