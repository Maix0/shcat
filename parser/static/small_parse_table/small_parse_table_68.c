/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_68.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_340(t_small_parse_table_array *v)
{
	v->a[6800] = actions(75);
	v->a[6801] = 1;
	v->a[6802] = anon_sym_DOLLAR_LBRACE;
	v->a[6803] = actions(77);
	v->a[6804] = 1;
	v->a[6805] = anon_sym_DOLLAR_LPAREN;
	v->a[6806] = actions(79);
	v->a[6807] = 1;
	v->a[6808] = anon_sym_BQUOTE;
	v->a[6809] = actions(248);
	v->a[6810] = 1;
	v->a[6811] = sym_word;
	v->a[6812] = actions(250);
	v->a[6813] = 1;
	v->a[6814] = anon_sym_BANG;
	v->a[6815] = actions(256);
	v->a[6816] = 1;
	v->a[6817] = sym_raw_string;
	v->a[6818] = actions(258);
	v->a[6819] = 1;
	small_parse_table_341(v);
}

void	small_parse_table_341(t_small_parse_table_array *v)
{
	v->a[6820] = sym_file_descriptor;
	v->a[6821] = actions(260);
	v->a[6822] = 1;
	v->a[6823] = sym_variable_name;
	v->a[6824] = state(141);
	v->a[6825] = 1;
	v->a[6826] = aux_sym__statements_repeat1;
	v->a[6827] = state(175);
	v->a[6828] = 1;
	v->a[6829] = sym_command_name;
	v->a[6830] = state(278);
	v->a[6831] = 1;
	v->a[6832] = sym_variable_assignment;
	v->a[6833] = state(567);
	v->a[6834] = 1;
	v->a[6835] = aux_sym_command_repeat1;
	v->a[6836] = state(582);
	v->a[6837] = 1;
	v->a[6838] = sym_concatenation;
	v->a[6839] = state(691);
	small_parse_table_342(v);
}

void	small_parse_table_342(t_small_parse_table_array *v)
{
	v->a[6840] = 1;
	v->a[6841] = sym_file_redirect;
	v->a[6842] = state(1100);
	v->a[6843] = 1;
	v->a[6844] = sym_pipeline;
	v->a[6845] = state(1196);
	v->a[6846] = 1;
	v->a[6847] = aux_sym_redirected_statement_repeat2;
	v->a[6848] = state(2037);
	v->a[6849] = 1;
	v->a[6850] = sym__statement_not_pipeline;
	v->a[6851] = state(2220);
	v->a[6852] = 1;
	v->a[6853] = sym__statements;
	v->a[6854] = actions(11);
	v->a[6855] = 2;
	v->a[6856] = anon_sym_while;
	v->a[6857] = anon_sym_until;
	v->a[6858] = actions(254);
	v->a[6859] = 2;
	small_parse_table_343(v);
}

void	small_parse_table_343(t_small_parse_table_array *v)
{
	v->a[6860] = anon_sym_LT_AMP_DASH;
	v->a[6861] = anon_sym_GT_AMP_DASH;
	v->a[6862] = state(295);
	v->a[6863] = 6;
	v->a[6864] = sym_arithmetic_expansion;
	v->a[6865] = sym_string;
	v->a[6866] = sym_number;
	v->a[6867] = sym_simple_expansion;
	v->a[6868] = sym_expansion;
	v->a[6869] = sym_command_substitution;
	v->a[6870] = actions(252);
	v->a[6871] = 8;
	v->a[6872] = anon_sym_LT;
	v->a[6873] = anon_sym_GT;
	v->a[6874] = anon_sym_GT_GT;
	v->a[6875] = anon_sym_AMP_GT;
	v->a[6876] = anon_sym_AMP_GT_GT;
	v->a[6877] = anon_sym_LT_AMP;
	v->a[6878] = anon_sym_GT_AMP;
	v->a[6879] = anon_sym_GT_PIPE;
	small_parse_table_344(v);
}

void	small_parse_table_344(t_small_parse_table_array *v)
{
	v->a[6880] = state(1031);
	v->a[6881] = 12;
	v->a[6882] = sym_redirected_statement;
	v->a[6883] = sym_for_statement;
	v->a[6884] = sym_while_statement;
	v->a[6885] = sym_if_statement;
	v->a[6886] = sym_case_statement;
	v->a[6887] = sym_function_definition;
	v->a[6888] = sym_compound_statement;
	v->a[6889] = sym_subshell;
	v->a[6890] = sym_list;
	v->a[6891] = sym_negated_command;
	v->a[6892] = sym_command;
	v->a[6893] = sym_variable_assignments;
	v->a[6894] = 34;
	v->a[6895] = actions(3);
	v->a[6896] = 1;
	v->a[6897] = sym_comment;
	v->a[6898] = actions(9);
	v->a[6899] = 1;
	small_parse_table_345(v);
}

/* EOF small_parse_table_68.c */
