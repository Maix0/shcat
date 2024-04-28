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
	v->a[6800] = 2;
	v->a[6801] = sym_concatenation;
	v->a[6802] = aux_sym_for_statement_repeat1;
	v->a[6803] = actions(2329);
	v->a[6804] = 3;
	v->a[6805] = sym_raw_string;
	v->a[6806] = sym_ansi_c_string;
	v->a[6807] = sym_word;
	v->a[6808] = state(1290);
	v->a[6809] = 9;
	v->a[6810] = sym_arithmetic_expansion;
	v->a[6811] = sym_brace_expression;
	v->a[6812] = sym_string;
	v->a[6813] = sym_translated_string;
	v->a[6814] = sym_number;
	v->a[6815] = sym_simple_expansion;
	v->a[6816] = sym_expansion;
	v->a[6817] = sym_command_substitution;
	v->a[6818] = sym_process_substitution;
	v->a[6819] = actions(2072);
	small_parse_table_341(v);
}

void	small_parse_table_341(t_small_parse_table_array *v)
{
	v->a[6820] = 23;
	v->a[6821] = anon_sym_SEMI;
	v->a[6822] = anon_sym_PIPE_PIPE;
	v->a[6823] = anon_sym_AMP_AMP;
	v->a[6824] = anon_sym_PIPE;
	v->a[6825] = anon_sym_AMP;
	v->a[6826] = anon_sym_LT;
	v->a[6827] = anon_sym_GT;
	v->a[6828] = anon_sym_LT_LT;
	v->a[6829] = anon_sym_GT_GT;
	v->a[6830] = anon_sym_esac;
	v->a[6831] = anon_sym_SEMI_SEMI;
	v->a[6832] = anon_sym_SEMI_AMP;
	v->a[6833] = anon_sym_SEMI_SEMI_AMP;
	v->a[6834] = anon_sym_PIPE_AMP;
	v->a[6835] = anon_sym_AMP_GT;
	v->a[6836] = anon_sym_AMP_GT_GT;
	v->a[6837] = anon_sym_LT_AMP;
	v->a[6838] = anon_sym_GT_AMP;
	v->a[6839] = anon_sym_GT_PIPE;
	small_parse_table_342(v);
}

void	small_parse_table_342(t_small_parse_table_array *v)
{
	v->a[6840] = anon_sym_LT_AMP_DASH;
	v->a[6841] = anon_sym_GT_AMP_DASH;
	v->a[6842] = anon_sym_LT_LT_DASH;
	v->a[6843] = anon_sym_LT_LT_LT;
	v->a[6844] = 28;
	v->a[6845] = actions(3);
	v->a[6846] = 1;
	v->a[6847] = sym_comment;
	v->a[6848] = actions(19);
	v->a[6849] = 1;
	v->a[6850] = anon_sym_LPAREN;
	v->a[6851] = actions(1549);
	v->a[6852] = 1;
	v->a[6853] = anon_sym_DOLLAR_LBRACK;
	v->a[6854] = actions(1551);
	v->a[6855] = 1;
	v->a[6856] = anon_sym_DOLLAR;
	v->a[6857] = actions(1555);
	v->a[6858] = 1;
	v->a[6859] = anon_sym_DQUOTE;
	small_parse_table_343(v);
}

void	small_parse_table_343(t_small_parse_table_array *v)
{
	v->a[6860] = actions(1557);
	v->a[6861] = 1;
	v->a[6862] = aux_sym_number_token1;
	v->a[6863] = actions(1559);
	v->a[6864] = 1;
	v->a[6865] = aux_sym_number_token2;
	v->a[6866] = actions(1561);
	v->a[6867] = 1;
	v->a[6868] = anon_sym_DOLLAR_LBRACE;
	v->a[6869] = actions(1563);
	v->a[6870] = 1;
	v->a[6871] = anon_sym_DOLLAR_LPAREN;
	v->a[6872] = actions(1565);
	v->a[6873] = 1;
	v->a[6874] = anon_sym_BQUOTE;
	v->a[6875] = actions(1567);
	v->a[6876] = 1;
	v->a[6877] = anon_sym_DOLLAR_BQUOTE;
	v->a[6878] = actions(1573);
	v->a[6879] = 1;
	small_parse_table_344(v);
}

void	small_parse_table_344(t_small_parse_table_array *v)
{
	v->a[6880] = sym__bare_dollar;
	v->a[6881] = actions(1575);
	v->a[6882] = 1;
	v->a[6883] = sym__brace_start;
	v->a[6884] = actions(2420);
	v->a[6885] = 1;
	v->a[6886] = anon_sym_LT_LT_LT;
	v->a[6887] = actions(2422);
	v->a[6888] = 1;
	v->a[6889] = sym__special_character;
	v->a[6890] = actions(2424);
	v->a[6891] = 1;
	v->a[6892] = sym_test_operator;
	v->a[6893] = state(688);
	v->a[6894] = 1;
	v->a[6895] = aux_sym_command_repeat2;
	v->a[6896] = state(1321);
	v->a[6897] = 1;
	v->a[6898] = aux_sym__literal_repeat1;
	v->a[6899] = state(1712);
	small_parse_table_345(v);
}

/* EOF small_parse_table_68.c */
