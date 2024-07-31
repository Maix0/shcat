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
	v->a[5800] = sym_command_substitution;
	v->a[5801] = actions(210);
	v->a[5802] = 7;
	v->a[5803] = anon_sym_LT;
	v->a[5804] = anon_sym_GT;
	v->a[5805] = anon_sym_GT_GT;
	v->a[5806] = anon_sym_LT_AMP;
	v->a[5807] = anon_sym_GT_AMP;
	v->a[5808] = anon_sym_GT_PIPE;
	v->a[5809] = anon_sym_LT_GT;
	v->a[5810] = state(884);
	v->a[5811] = 12;
	v->a[5812] = sym_redirected_statement;
	v->a[5813] = sym_for_statement;
	v->a[5814] = sym_while_statement;
	v->a[5815] = sym_if_statement;
	v->a[5816] = sym_case_statement;
	v->a[5817] = sym_function_definition;
	v->a[5818] = sym_compound_statement;
	v->a[5819] = sym_subshell;
	small_parse_table_291(v);
}

void	small_parse_table_291(t_small_parse_table_array *v)
{
	v->a[5820] = sym_list;
	v->a[5821] = sym_negated_command;
	v->a[5822] = sym_command;
	v->a[5823] = sym__variable_assignments;
	v->a[5824] = 30;
	v->a[5825] = actions(3);
	v->a[5826] = 1;
	v->a[5827] = sym_comment;
	v->a[5828] = actions(9);
	v->a[5829] = 1;
	v->a[5830] = anon_sym_for;
	v->a[5831] = actions(13);
	v->a[5832] = 1;
	v->a[5833] = anon_sym_if;
	v->a[5834] = actions(15);
	v->a[5835] = 1;
	v->a[5836] = anon_sym_case;
	v->a[5837] = actions(17);
	v->a[5838] = 1;
	v->a[5839] = anon_sym_LPAREN;
	small_parse_table_292(v);
}

void	small_parse_table_292(t_small_parse_table_array *v)
{
	v->a[5840] = actions(19);
	v->a[5841] = 1;
	v->a[5842] = anon_sym_LBRACE;
	v->a[5843] = actions(53);
	v->a[5844] = 1;
	v->a[5845] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5846] = actions(55);
	v->a[5847] = 1;
	v->a[5848] = anon_sym_DOLLAR;
	v->a[5849] = actions(57);
	v->a[5850] = 1;
	v->a[5851] = anon_sym_DQUOTE;
	v->a[5852] = actions(61);
	v->a[5853] = 1;
	v->a[5854] = anon_sym_DOLLAR_LBRACE;
	v->a[5855] = actions(63);
	v->a[5856] = 1;
	v->a[5857] = anon_sym_DOLLAR_LPAREN;
	v->a[5858] = actions(65);
	v->a[5859] = 1;
	small_parse_table_293(v);
}

void	small_parse_table_293(t_small_parse_table_array *v)
{
	v->a[5860] = anon_sym_BQUOTE;
	v->a[5861] = actions(67);
	v->a[5862] = 1;
	v->a[5863] = sym_variable_name;
	v->a[5864] = actions(202);
	v->a[5865] = 1;
	v->a[5866] = sym_word;
	v->a[5867] = actions(204);
	v->a[5868] = 1;
	v->a[5869] = anon_sym_BANG;
	v->a[5870] = state(119);
	v->a[5871] = 1;
	v->a[5872] = aux_sym__statements_repeat1;
	v->a[5873] = state(272);
	v->a[5874] = 1;
	v->a[5875] = sym_command_name;
	v->a[5876] = state(283);
	v->a[5877] = 1;
	v->a[5878] = sym_variable_assignment;
	v->a[5879] = state(486);
	small_parse_table_294(v);
}

void	small_parse_table_294(t_small_parse_table_array *v)
{
	v->a[5880] = 1;
	v->a[5881] = aux_sym_command_repeat1;
	v->a[5882] = state(602);
	v->a[5883] = 1;
	v->a[5884] = sym_concatenation;
	v->a[5885] = state(636);
	v->a[5886] = 1;
	v->a[5887] = sym_file_redirect;
	v->a[5888] = state(951);
	v->a[5889] = 1;
	v->a[5890] = sym_pipeline;
	v->a[5891] = state(1006);
	v->a[5892] = 1;
	v->a[5893] = aux_sym_redirected_statement_repeat2;
	v->a[5894] = state(1605);
	v->a[5895] = 1;
	v->a[5896] = sym__statement_not_pipeline;
	v->a[5897] = state(1665);
	v->a[5898] = 1;
	v->a[5899] = sym__statements;
	small_parse_table_295(v);
}

/* EOF small_parse_table_58.c */
