/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1908.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9540(t_small_parse_table_array *v)
{
	v->a[190800] = sym_brace_expression;
	v->a[190801] = sym_string;
	v->a[190802] = sym_translated_string;
	v->a[190803] = sym_number;
	v->a[190804] = sym_simple_expansion;
	v->a[190805] = sym_expansion;
	v->a[190806] = sym_command_substitution;
	v->a[190807] = sym_process_substitution;
	v->a[190808] = 3;
	v->a[190809] = actions(71);
	v->a[190810] = 1;
	v->a[190811] = sym_comment;
	v->a[190812] = actions(1352);
	v->a[190813] = 11;
	v->a[190814] = anon_sym_LT;
	v->a[190815] = anon_sym_GT;
	v->a[190816] = anon_sym_AMP_GT;
	v->a[190817] = anon_sym_LT_AMP;
	v->a[190818] = anon_sym_GT_AMP;
	v->a[190819] = anon_sym_DOLLAR;
	small_parse_table_9541(v);
}

void	small_parse_table_9541(t_small_parse_table_array *v)
{
	v->a[190820] = aux_sym_number_token1;
	v->a[190821] = aux_sym_number_token2;
	v->a[190822] = anon_sym_DOLLAR_LPAREN;
	v->a[190823] = anon_sym_BQUOTE;
	v->a[190824] = sym_word;
	v->a[190825] = actions(1354);
	v->a[190826] = 23;
	v->a[190827] = sym_file_descriptor;
	v->a[190828] = sym__concat;
	v->a[190829] = sym_variable_name;
	v->a[190830] = sym_test_operator;
	v->a[190831] = sym__brace_start;
	v->a[190832] = anon_sym_LPAREN_LPAREN;
	v->a[190833] = anon_sym_GT_GT;
	v->a[190834] = anon_sym_AMP_GT_GT;
	v->a[190835] = anon_sym_GT_PIPE;
	v->a[190836] = anon_sym_LT_AMP_DASH;
	v->a[190837] = anon_sym_GT_AMP_DASH;
	v->a[190838] = anon_sym_LT_LT_LT;
	v->a[190839] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_9542(v);
}

void	small_parse_table_9542(t_small_parse_table_array *v)
{
	v->a[190840] = anon_sym_DOLLAR_LBRACK;
	v->a[190841] = aux_sym_concatenation_token1;
	v->a[190842] = sym__special_character;
	v->a[190843] = anon_sym_DQUOTE;
	v->a[190844] = sym_raw_string;
	v->a[190845] = sym_ansi_c_string;
	v->a[190846] = anon_sym_DOLLAR_LBRACE;
	v->a[190847] = anon_sym_DOLLAR_BQUOTE;
	v->a[190848] = anon_sym_LT_LPAREN;
	v->a[190849] = anon_sym_GT_LPAREN;
	v->a[190850] = 23;
	v->a[190851] = actions(3);
	v->a[190852] = 1;
	v->a[190853] = sym_comment;
	v->a[190854] = actions(1761);
	v->a[190855] = 1;
	v->a[190856] = anon_sym_DOLLAR;
	v->a[190857] = actions(1767);
	v->a[190858] = 1;
	v->a[190859] = aux_sym_number_token1;
	small_parse_table_9543(v);
}

void	small_parse_table_9543(t_small_parse_table_array *v)
{
	v->a[190860] = actions(1769);
	v->a[190861] = 1;
	v->a[190862] = aux_sym_number_token2;
	v->a[190863] = actions(1773);
	v->a[190864] = 1;
	v->a[190865] = anon_sym_DOLLAR_LPAREN;
	v->a[190866] = actions(1787);
	v->a[190867] = 1;
	v->a[190868] = sym__brace_start;
	v->a[190869] = actions(8420);
	v->a[190870] = 1;
	v->a[190871] = sym_word;
	v->a[190872] = actions(8424);
	v->a[190873] = 1;
	v->a[190874] = anon_sym_LPAREN;
	v->a[190875] = actions(8426);
	v->a[190876] = 1;
	v->a[190877] = anon_sym_DOLLAR_LBRACK;
	v->a[190878] = actions(8428);
	v->a[190879] = 1;
	small_parse_table_9544(v);
}

void	small_parse_table_9544(t_small_parse_table_array *v)
{
	v->a[190880] = sym__special_character;
	v->a[190881] = actions(8430);
	v->a[190882] = 1;
	v->a[190883] = anon_sym_DQUOTE;
	v->a[190884] = actions(8434);
	v->a[190885] = 1;
	v->a[190886] = anon_sym_DOLLAR_LBRACE;
	v->a[190887] = actions(8436);
	v->a[190888] = 1;
	v->a[190889] = anon_sym_BQUOTE;
	v->a[190890] = actions(8438);
	v->a[190891] = 1;
	v->a[190892] = anon_sym_DOLLAR_BQUOTE;
	v->a[190893] = actions(8442);
	v->a[190894] = 1;
	v->a[190895] = sym__comment_word;
	v->a[190896] = actions(8444);
	v->a[190897] = 1;
	v->a[190898] = sym__empty_value;
	v->a[190899] = actions(8446);
	small_parse_table_9545(v);
}

/* EOF small_parse_table_1908.c */
