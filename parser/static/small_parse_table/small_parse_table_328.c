/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_328.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1640(t_small_parse_table_array *v)
{
	v->a[32800] = anon_sym_DOLLAR;
	v->a[32801] = actions(4637);
	v->a[32802] = 1;
	v->a[32803] = sym__special_character;
	v->a[32804] = actions(4639);
	v->a[32805] = 1;
	v->a[32806] = anon_sym_DQUOTE;
	v->a[32807] = actions(4643);
	v->a[32808] = 1;
	v->a[32809] = aux_sym_number_token1;
	v->a[32810] = actions(4645);
	v->a[32811] = 1;
	v->a[32812] = aux_sym_number_token2;
	v->a[32813] = actions(4647);
	v->a[32814] = 1;
	v->a[32815] = anon_sym_DOLLAR_LBRACE;
	v->a[32816] = actions(4649);
	v->a[32817] = 1;
	v->a[32818] = anon_sym_DOLLAR_LPAREN;
	v->a[32819] = actions(4651);
	small_parse_table_1641(v);
}

void	small_parse_table_1641(t_small_parse_table_array *v)
{
	v->a[32820] = 1;
	v->a[32821] = anon_sym_BQUOTE;
	v->a[32822] = actions(4653);
	v->a[32823] = 1;
	v->a[32824] = anon_sym_DOLLAR_BQUOTE;
	v->a[32825] = actions(4657);
	v->a[32826] = 1;
	v->a[32827] = sym_test_operator;
	v->a[32828] = actions(4659);
	v->a[32829] = 1;
	v->a[32830] = sym__brace_start;
	v->a[32831] = state(2914);
	v->a[32832] = 1;
	v->a[32833] = aux_sym__literal_repeat1;
	v->a[32834] = actions(4631);
	v->a[32835] = 2;
	v->a[32836] = anon_sym_LPAREN_LPAREN;
	v->a[32837] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32838] = actions(4641);
	v->a[32839] = 2;
	small_parse_table_1642(v);
}

void	small_parse_table_1642(t_small_parse_table_array *v)
{
	v->a[32840] = sym_raw_string;
	v->a[32841] = sym_ansi_c_string;
	v->a[32842] = actions(4655);
	v->a[32843] = 2;
	v->a[32844] = anon_sym_LT_LPAREN;
	v->a[32845] = anon_sym_GT_LPAREN;
	v->a[32846] = state(936);
	v->a[32847] = 2;
	v->a[32848] = sym_concatenation;
	v->a[32849] = aux_sym_for_statement_repeat1;
	v->a[32850] = actions(2094);
	v->a[32851] = 7;
	v->a[32852] = anon_sym_PIPE;
	v->a[32853] = anon_sym_LT;
	v->a[32854] = anon_sym_GT;
	v->a[32855] = anon_sym_LT_LT;
	v->a[32856] = anon_sym_AMP_GT;
	v->a[32857] = anon_sym_LT_AMP;
	v->a[32858] = anon_sym_GT_AMP;
	v->a[32859] = state(2487);
	small_parse_table_1643(v);
}

void	small_parse_table_1643(t_small_parse_table_array *v)
{
	v->a[32860] = 9;
	v->a[32861] = sym_arithmetic_expansion;
	v->a[32862] = sym_brace_expression;
	v->a[32863] = sym_string;
	v->a[32864] = sym_translated_string;
	v->a[32865] = sym_number;
	v->a[32866] = sym_simple_expansion;
	v->a[32867] = sym_expansion;
	v->a[32868] = sym_command_substitution;
	v->a[32869] = sym_process_substitution;
	v->a[32870] = actions(2096);
	v->a[32871] = 11;
	v->a[32872] = sym_file_descriptor;
	v->a[32873] = anon_sym_PIPE_PIPE;
	v->a[32874] = anon_sym_AMP_AMP;
	v->a[32875] = anon_sym_GT_GT;
	v->a[32876] = anon_sym_PIPE_AMP;
	v->a[32877] = anon_sym_AMP_GT_GT;
	v->a[32878] = anon_sym_GT_PIPE;
	v->a[32879] = anon_sym_LT_AMP_DASH;
	small_parse_table_1644(v);
}

void	small_parse_table_1644(t_small_parse_table_array *v)
{
	v->a[32880] = anon_sym_GT_AMP_DASH;
	v->a[32881] = anon_sym_LT_LT_DASH;
	v->a[32882] = anon_sym_LT_LT_LT;
	v->a[32883] = 8;
	v->a[32884] = actions(3);
	v->a[32885] = 1;
	v->a[32886] = sym_comment;
	v->a[32887] = actions(4663);
	v->a[32888] = 1;
	v->a[32889] = anon_sym_DQUOTE;
	v->a[32890] = actions(4667);
	v->a[32891] = 1;
	v->a[32892] = sym_variable_name;
	v->a[32893] = state(2716);
	v->a[32894] = 1;
	v->a[32895] = sym_string;
	v->a[32896] = actions(1235);
	v->a[32897] = 2;
	v->a[32898] = sym__concat;
	v->a[32899] = sym_test_operator;
	small_parse_table_1645(v);
}

/* EOF small_parse_table_328.c */
