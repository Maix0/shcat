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
	v->a[6800] = actions(15);
	v->a[6801] = 1;
	v->a[6802] = anon_sym_case;
	v->a[6803] = actions(17);
	v->a[6804] = 1;
	v->a[6805] = anon_sym_LPAREN;
	v->a[6806] = actions(19);
	v->a[6807] = 1;
	v->a[6808] = anon_sym_LBRACE;
	v->a[6809] = actions(43);
	v->a[6810] = 1;
	v->a[6811] = sym_word;
	v->a[6812] = actions(51);
	v->a[6813] = 1;
	v->a[6814] = anon_sym_BANG;
	v->a[6815] = actions(55);
	v->a[6816] = 1;
	v->a[6817] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6818] = actions(57);
	v->a[6819] = 1;
	small_parse_table_341(v);
}

void	small_parse_table_341(t_small_parse_table_array *v)
{
	v->a[6820] = anon_sym_DOLLAR;
	v->a[6821] = actions(59);
	v->a[6822] = 1;
	v->a[6823] = anon_sym_DQUOTE;
	v->a[6824] = actions(63);
	v->a[6825] = 1;
	v->a[6826] = anon_sym_DOLLAR_LBRACE;
	v->a[6827] = actions(65);
	v->a[6828] = 1;
	v->a[6829] = anon_sym_DOLLAR_LPAREN;
	v->a[6830] = actions(67);
	v->a[6831] = 1;
	v->a[6832] = anon_sym_BQUOTE;
	v->a[6833] = actions(69);
	v->a[6834] = 1;
	v->a[6835] = sym_file_descriptor;
	v->a[6836] = actions(71);
	v->a[6837] = 1;
	v->a[6838] = sym_variable_name;
	v->a[6839] = actions(233);
	small_parse_table_342(v);
}

void	small_parse_table_342(t_small_parse_table_array *v)
{
	v->a[6840] = 1;
	v->a[6841] = anon_sym_RBRACE;
	v->a[6842] = state(102);
	v->a[6843] = 1;
	v->a[6844] = aux_sym__terminated_statement;
	v->a[6845] = state(182);
	v->a[6846] = 1;
	v->a[6847] = sym_command_name;
	v->a[6848] = state(340);
	v->a[6849] = 1;
	v->a[6850] = sym_variable_assignment;
	v->a[6851] = state(584);
	v->a[6852] = 1;
	v->a[6853] = sym_concatenation;
	v->a[6854] = state(620);
	v->a[6855] = 1;
	v->a[6856] = sym_file_redirect;
	v->a[6857] = state(623);
	v->a[6858] = 1;
	v->a[6859] = aux_sym_command_repeat1;
	small_parse_table_343(v);
}

void	small_parse_table_343(t_small_parse_table_array *v)
{
	v->a[6860] = state(1193);
	v->a[6861] = 1;
	v->a[6862] = sym_pipeline;
	v->a[6863] = state(1201);
	v->a[6864] = 1;
	v->a[6865] = aux_sym_redirected_statement_repeat2;
	v->a[6866] = state(1911);
	v->a[6867] = 1;
	v->a[6868] = sym__statement_not_pipeline;
	v->a[6869] = actions(11);
	v->a[6870] = 2;
	v->a[6871] = anon_sym_while;
	v->a[6872] = anon_sym_until;
	v->a[6873] = actions(61);
	v->a[6874] = 2;
	v->a[6875] = sym_raw_string;
	v->a[6876] = sym_number;
	v->a[6877] = state(433);
	v->a[6878] = 5;
	v->a[6879] = sym_arithmetic_expansion;
	small_parse_table_344(v);
}

void	small_parse_table_344(t_small_parse_table_array *v)
{
	v->a[6880] = sym_string;
	v->a[6881] = sym_simple_expansion;
	v->a[6882] = sym_expansion;
	v->a[6883] = sym_command_substitution;
	v->a[6884] = actions(53);
	v->a[6885] = 7;
	v->a[6886] = anon_sym_LT;
	v->a[6887] = anon_sym_GT;
	v->a[6888] = anon_sym_GT_GT;
	v->a[6889] = anon_sym_LT_AMP;
	v->a[6890] = anon_sym_GT_AMP;
	v->a[6891] = anon_sym_GT_PIPE;
	v->a[6892] = anon_sym_LT_GT;
	v->a[6893] = state(1089);
	v->a[6894] = 12;
	v->a[6895] = sym_redirected_statement;
	v->a[6896] = sym_for_statement;
	v->a[6897] = sym_while_statement;
	v->a[6898] = sym_if_statement;
	v->a[6899] = sym_case_statement;
	small_parse_table_345(v);
}

/* EOF small_parse_table_68.c */
