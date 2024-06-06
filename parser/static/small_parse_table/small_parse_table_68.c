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
	v->a[6800] = aux_sym__simple_variable_name_token1;
	v->a[6801] = state(1024);
	v->a[6802] = 1;
	v->a[6803] = aux_sym__literal_repeat1;
	v->a[6804] = actions(822);
	v->a[6805] = 2;
	v->a[6806] = sym_file_descriptor;
	v->a[6807] = aux_sym_heredoc_redirect_token1;
	v->a[6808] = actions(1562);
	v->a[6809] = 2;
	v->a[6810] = sym_raw_string;
	v->a[6811] = sym_word;
	v->a[6812] = state(329);
	v->a[6813] = 3;
	v->a[6814] = sym_variable_assignment;
	v->a[6815] = sym_concatenation;
	v->a[6816] = aux_sym_declaration_command_repeat1;
	v->a[6817] = state(906);
	v->a[6818] = 7;
	v->a[6819] = sym_arithmetic_expansion;
	small_parse_table_341(v);
}

void	small_parse_table_341(t_small_parse_table_array *v)
{
	v->a[6820] = sym_brace_expression;
	v->a[6821] = sym_string;
	v->a[6822] = sym_number;
	v->a[6823] = sym_simple_expansion;
	v->a[6824] = sym_expansion;
	v->a[6825] = sym_command_substitution;
	v->a[6826] = actions(820);
	v->a[6827] = 20;
	v->a[6828] = anon_sym_PIPE;
	v->a[6829] = anon_sym_SEMI_SEMI;
	v->a[6830] = anon_sym_PIPE_AMP;
	v->a[6831] = anon_sym_AMP_AMP;
	v->a[6832] = anon_sym_PIPE_PIPE;
	v->a[6833] = anon_sym_LT;
	v->a[6834] = anon_sym_GT;
	v->a[6835] = anon_sym_GT_GT;
	v->a[6836] = anon_sym_AMP_GT;
	v->a[6837] = anon_sym_AMP_GT_GT;
	v->a[6838] = anon_sym_LT_AMP;
	v->a[6839] = anon_sym_GT_AMP;
	small_parse_table_342(v);
}

void	small_parse_table_342(t_small_parse_table_array *v)
{
	v->a[6840] = anon_sym_GT_PIPE;
	v->a[6841] = anon_sym_LT_AMP_DASH;
	v->a[6842] = anon_sym_GT_AMP_DASH;
	v->a[6843] = anon_sym_LT_LT;
	v->a[6844] = anon_sym_LT_LT_DASH;
	v->a[6845] = anon_sym_AMP;
	v->a[6846] = anon_sym_BQUOTE;
	v->a[6847] = anon_sym_SEMI;
	v->a[6848] = 5;
	v->a[6849] = actions(57);
	v->a[6850] = 1;
	v->a[6851] = sym_comment;
	v->a[6852] = actions(1695);
	v->a[6853] = 1;
	v->a[6854] = anon_sym_SEMI_SEMI;
	v->a[6855] = actions(1693);
	v->a[6856] = 3;
	v->a[6857] = anon_sym_RPAREN;
	v->a[6858] = anon_sym_SEMI_AMP;
	v->a[6859] = anon_sym_SEMI_SEMI_AMP;
	small_parse_table_343(v);
}

void	small_parse_table_343(t_small_parse_table_array *v)
{
	v->a[6860] = actions(1691);
	v->a[6861] = 17;
	v->a[6862] = sym_file_descriptor;
	v->a[6863] = sym_variable_name;
	v->a[6864] = sym_test_operator;
	v->a[6865] = sym__brace_start;
	v->a[6866] = anon_sym_LPAREN;
	v->a[6867] = anon_sym_LBRACE;
	v->a[6868] = anon_sym_GT_GT;
	v->a[6869] = anon_sym_AMP_GT_GT;
	v->a[6870] = anon_sym_GT_PIPE;
	v->a[6871] = anon_sym_LT_AMP_DASH;
	v->a[6872] = anon_sym_GT_AMP_DASH;
	v->a[6873] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6874] = anon_sym_DQUOTE;
	v->a[6875] = sym_raw_string;
	v->a[6876] = anon_sym_DOLLAR_LBRACE;
	v->a[6877] = anon_sym_BQUOTE;
	v->a[6878] = anon_sym_DOLLAR_BQUOTE;
	v->a[6879] = actions(1689);
	small_parse_table_344(v);
}

void	small_parse_table_344(t_small_parse_table_array *v)
{
	v->a[6880] = 26;
	v->a[6881] = anon_sym_for;
	v->a[6882] = anon_sym_select;
	v->a[6883] = anon_sym_while;
	v->a[6884] = anon_sym_until;
	v->a[6885] = anon_sym_if;
	v->a[6886] = anon_sym_case;
	v->a[6887] = anon_sym_function;
	v->a[6888] = anon_sym_BANG;
	v->a[6889] = anon_sym_declare;
	v->a[6890] = anon_sym_typeset;
	v->a[6891] = anon_sym_export;
	v->a[6892] = anon_sym_readonly;
	v->a[6893] = anon_sym_local;
	v->a[6894] = anon_sym_unset;
	v->a[6895] = anon_sym_unsetenv;
	v->a[6896] = anon_sym_LT;
	v->a[6897] = anon_sym_GT;
	v->a[6898] = anon_sym_AMP_GT;
	v->a[6899] = anon_sym_LT_AMP;
	small_parse_table_345(v);
}

/* EOF small_parse_table_68.c */
