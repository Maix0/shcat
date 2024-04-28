/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_418.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2090(t_small_parse_table_array *v)
{
	v->a[41800] = anon_sym_DOLLAR_LBRACE;
	v->a[41801] = anon_sym_DOLLAR_LPAREN;
	v->a[41802] = anon_sym_BQUOTE;
	v->a[41803] = anon_sym_DOLLAR_BQUOTE;
	v->a[41804] = anon_sym_LT_LPAREN;
	v->a[41805] = anon_sym_GT_LPAREN;
	v->a[41806] = sym_word;
	v->a[41807] = 22;
	v->a[41808] = actions(71);
	v->a[41809] = 1;
	v->a[41810] = sym_comment;
	v->a[41811] = actions(5108);
	v->a[41812] = 1;
	v->a[41813] = sym_word;
	v->a[41814] = actions(5112);
	v->a[41815] = 1;
	v->a[41816] = anon_sym_DOLLAR_LBRACK;
	v->a[41817] = actions(5114);
	v->a[41818] = 1;
	v->a[41819] = anon_sym_DOLLAR;
	small_parse_table_2091(v);
}

void	small_parse_table_2091(t_small_parse_table_array *v)
{
	v->a[41820] = actions(5116);
	v->a[41821] = 1;
	v->a[41822] = sym__special_character;
	v->a[41823] = actions(5118);
	v->a[41824] = 1;
	v->a[41825] = anon_sym_DQUOTE;
	v->a[41826] = actions(5122);
	v->a[41827] = 1;
	v->a[41828] = aux_sym_number_token1;
	v->a[41829] = actions(5124);
	v->a[41830] = 1;
	v->a[41831] = aux_sym_number_token2;
	v->a[41832] = actions(5126);
	v->a[41833] = 1;
	v->a[41834] = anon_sym_DOLLAR_LBRACE;
	v->a[41835] = actions(5128);
	v->a[41836] = 1;
	v->a[41837] = anon_sym_DOLLAR_LPAREN;
	v->a[41838] = actions(5130);
	v->a[41839] = 1;
	small_parse_table_2092(v);
}

void	small_parse_table_2092(t_small_parse_table_array *v)
{
	v->a[41840] = anon_sym_BQUOTE;
	v->a[41841] = actions(5132);
	v->a[41842] = 1;
	v->a[41843] = anon_sym_DOLLAR_BQUOTE;
	v->a[41844] = actions(5136);
	v->a[41845] = 1;
	v->a[41846] = sym_test_operator;
	v->a[41847] = actions(5138);
	v->a[41848] = 1;
	v->a[41849] = sym__brace_start;
	v->a[41850] = state(3114);
	v->a[41851] = 1;
	v->a[41852] = aux_sym__literal_repeat1;
	v->a[41853] = actions(5110);
	v->a[41854] = 2;
	v->a[41855] = anon_sym_LPAREN_LPAREN;
	v->a[41856] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41857] = actions(5120);
	v->a[41858] = 2;
	v->a[41859] = sym_raw_string;
	small_parse_table_2093(v);
}

void	small_parse_table_2093(t_small_parse_table_array *v)
{
	v->a[41860] = sym_ansi_c_string;
	v->a[41861] = actions(5134);
	v->a[41862] = 2;
	v->a[41863] = anon_sym_LT_LPAREN;
	v->a[41864] = anon_sym_GT_LPAREN;
	v->a[41865] = state(1075);
	v->a[41866] = 2;
	v->a[41867] = sym_concatenation;
	v->a[41868] = aux_sym_for_statement_repeat1;
	v->a[41869] = actions(2094);
	v->a[41870] = 7;
	v->a[41871] = anon_sym_PIPE;
	v->a[41872] = anon_sym_LT;
	v->a[41873] = anon_sym_GT;
	v->a[41874] = anon_sym_LT_LT;
	v->a[41875] = anon_sym_AMP_GT;
	v->a[41876] = anon_sym_LT_AMP;
	v->a[41877] = anon_sym_GT_AMP;
	v->a[41878] = state(2613);
	v->a[41879] = 9;
	small_parse_table_2094(v);
}

void	small_parse_table_2094(t_small_parse_table_array *v)
{
	v->a[41880] = sym_arithmetic_expansion;
	v->a[41881] = sym_brace_expression;
	v->a[41882] = sym_string;
	v->a[41883] = sym_translated_string;
	v->a[41884] = sym_number;
	v->a[41885] = sym_simple_expansion;
	v->a[41886] = sym_expansion;
	v->a[41887] = sym_command_substitution;
	v->a[41888] = sym_process_substitution;
	v->a[41889] = actions(2096);
	v->a[41890] = 10;
	v->a[41891] = sym_file_descriptor;
	v->a[41892] = anon_sym_PIPE_PIPE;
	v->a[41893] = anon_sym_AMP_AMP;
	v->a[41894] = anon_sym_GT_GT;
	v->a[41895] = anon_sym_PIPE_AMP;
	v->a[41896] = anon_sym_AMP_GT_GT;
	v->a[41897] = anon_sym_GT_PIPE;
	v->a[41898] = anon_sym_LT_AMP_DASH;
	v->a[41899] = anon_sym_GT_AMP_DASH;
	small_parse_table_2095(v);
}

/* EOF small_parse_table_418.c */
