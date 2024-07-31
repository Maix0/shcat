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
	v->a[6800] = state(911);
	v->a[6801] = 1;
	v->a[6802] = sym_pipeline;
	v->a[6803] = state(1001);
	v->a[6804] = 1;
	v->a[6805] = aux_sym_redirected_statement_repeat2;
	v->a[6806] = state(1606);
	v->a[6807] = 1;
	v->a[6808] = sym__statement_not_pipeline;
	v->a[6809] = state(1656);
	v->a[6810] = 1;
	v->a[6811] = sym__statements;
	v->a[6812] = actions(11);
	v->a[6813] = 2;
	v->a[6814] = anon_sym_while;
	v->a[6815] = anon_sym_until;
	v->a[6816] = actions(212);
	v->a[6817] = 2;
	v->a[6818] = sym_raw_string;
	v->a[6819] = sym_number;
	small_parse_table_341(v);
}

void	small_parse_table_341(t_small_parse_table_array *v)
{
	v->a[6820] = state(327);
	v->a[6821] = 5;
	v->a[6822] = sym_arithmetic_expansion;
	v->a[6823] = sym_string;
	v->a[6824] = sym_simple_expansion;
	v->a[6825] = sym_expansion;
	v->a[6826] = sym_command_substitution;
	v->a[6827] = actions(210);
	v->a[6828] = 7;
	v->a[6829] = anon_sym_LT;
	v->a[6830] = anon_sym_GT;
	v->a[6831] = anon_sym_GT_GT;
	v->a[6832] = anon_sym_LT_AMP;
	v->a[6833] = anon_sym_GT_AMP;
	v->a[6834] = anon_sym_GT_PIPE;
	v->a[6835] = anon_sym_LT_GT;
	v->a[6836] = state(884);
	v->a[6837] = 12;
	v->a[6838] = sym_redirected_statement;
	v->a[6839] = sym_for_statement;
	small_parse_table_342(v);
}

void	small_parse_table_342(t_small_parse_table_array *v)
{
	v->a[6840] = sym_while_statement;
	v->a[6841] = sym_if_statement;
	v->a[6842] = sym_case_statement;
	v->a[6843] = sym_function_definition;
	v->a[6844] = sym_compound_statement;
	v->a[6845] = sym_subshell;
	v->a[6846] = sym_list;
	v->a[6847] = sym_negated_command;
	v->a[6848] = sym_command;
	v->a[6849] = sym__variable_assignments;
	v->a[6850] = 30;
	v->a[6851] = actions(3);
	v->a[6852] = 1;
	v->a[6853] = sym_comment;
	v->a[6854] = actions(9);
	v->a[6855] = 1;
	v->a[6856] = anon_sym_for;
	v->a[6857] = actions(13);
	v->a[6858] = 1;
	v->a[6859] = anon_sym_if;
	small_parse_table_343(v);
}

void	small_parse_table_343(t_small_parse_table_array *v)
{
	v->a[6860] = actions(15);
	v->a[6861] = 1;
	v->a[6862] = anon_sym_case;
	v->a[6863] = actions(17);
	v->a[6864] = 1;
	v->a[6865] = anon_sym_LPAREN;
	v->a[6866] = actions(19);
	v->a[6867] = 1;
	v->a[6868] = anon_sym_LBRACE;
	v->a[6869] = actions(41);
	v->a[6870] = 1;
	v->a[6871] = sym_word;
	v->a[6872] = actions(49);
	v->a[6873] = 1;
	v->a[6874] = anon_sym_BANG;
	v->a[6875] = actions(53);
	v->a[6876] = 1;
	v->a[6877] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6878] = actions(55);
	v->a[6879] = 1;
	small_parse_table_344(v);
}

void	small_parse_table_344(t_small_parse_table_array *v)
{
	v->a[6880] = anon_sym_DOLLAR;
	v->a[6881] = actions(57);
	v->a[6882] = 1;
	v->a[6883] = anon_sym_DQUOTE;
	v->a[6884] = actions(61);
	v->a[6885] = 1;
	v->a[6886] = anon_sym_DOLLAR_LBRACE;
	v->a[6887] = actions(63);
	v->a[6888] = 1;
	v->a[6889] = anon_sym_DOLLAR_LPAREN;
	v->a[6890] = actions(65);
	v->a[6891] = 1;
	v->a[6892] = anon_sym_BQUOTE;
	v->a[6893] = actions(67);
	v->a[6894] = 1;
	v->a[6895] = sym_variable_name;
	v->a[6896] = actions(226);
	v->a[6897] = 1;
	v->a[6898] = anon_sym_done;
	v->a[6899] = state(36);
	small_parse_table_345(v);
}

/* EOF small_parse_table_68.c */
