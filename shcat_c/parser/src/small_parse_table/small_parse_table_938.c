/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_938.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4690(t_small_parse_table_array *v)
{
	v->a[93800] = anon_sym_DASH2;
	v->a[93801] = anon_sym_PLUS2;
	v->a[93802] = actions(1183);
	v->a[93803] = 2;
	v->a[93804] = sym_raw_string;
	v->a[93805] = sym_ansi_c_string;
	v->a[93806] = state(2594);
	v->a[93807] = 6;
	v->a[93808] = sym_binary_expression;
	v->a[93809] = sym_ternary_expression;
	v->a[93810] = sym_unary_expression;
	v->a[93811] = sym_postfix_expression;
	v->a[93812] = sym_parenthesized_expression;
	v->a[93813] = sym_concatenation;
	v->a[93814] = state(2456);
	v->a[93815] = 9;
	v->a[93816] = sym_arithmetic_expansion;
	v->a[93817] = sym_brace_expression;
	v->a[93818] = sym_string;
	v->a[93819] = sym_translated_string;
	small_parse_table_4691(v);
}

void	small_parse_table_4691(t_small_parse_table_array *v)
{
	v->a[93820] = sym_number;
	v->a[93821] = sym_simple_expansion;
	v->a[93822] = sym_expansion;
	v->a[93823] = sym_command_substitution;
	v->a[93824] = sym_process_substitution;
	v->a[93825] = 27;
	v->a[93826] = actions(71);
	v->a[93827] = 1;
	v->a[93828] = sym_comment;
	v->a[93829] = actions(1131);
	v->a[93830] = 1;
	v->a[93831] = anon_sym_LPAREN;
	v->a[93832] = actions(1141);
	v->a[93833] = 1;
	v->a[93834] = anon_sym_DOLLAR_LBRACK;
	v->a[93835] = actions(1145);
	v->a[93836] = 1;
	v->a[93837] = anon_sym_DOLLAR;
	v->a[93838] = actions(1149);
	v->a[93839] = 1;
	small_parse_table_4692(v);
}

void	small_parse_table_4692(t_small_parse_table_array *v)
{
	v->a[93840] = anon_sym_DQUOTE;
	v->a[93841] = actions(1153);
	v->a[93842] = 1;
	v->a[93843] = aux_sym_number_token1;
	v->a[93844] = actions(1155);
	v->a[93845] = 1;
	v->a[93846] = aux_sym_number_token2;
	v->a[93847] = actions(1157);
	v->a[93848] = 1;
	v->a[93849] = anon_sym_DOLLAR_LBRACE;
	v->a[93850] = actions(1159);
	v->a[93851] = 1;
	v->a[93852] = anon_sym_DOLLAR_LPAREN;
	v->a[93853] = actions(1163);
	v->a[93854] = 1;
	v->a[93855] = anon_sym_DOLLAR_BQUOTE;
	v->a[93856] = actions(1169);
	v->a[93857] = 1;
	v->a[93858] = sym__brace_start;
	v->a[93859] = actions(1187);
	small_parse_table_4693(v);
}

void	small_parse_table_4693(t_small_parse_table_array *v)
{
	v->a[93860] = 1;
	v->a[93861] = sym_word;
	v->a[93862] = actions(1189);
	v->a[93863] = 1;
	v->a[93864] = anon_sym_BANG;
	v->a[93865] = actions(1195);
	v->a[93866] = 1;
	v->a[93867] = anon_sym_TILDE;
	v->a[93868] = actions(1201);
	v->a[93869] = 1;
	v->a[93870] = sym_test_operator;
	v->a[93871] = actions(3060);
	v->a[93872] = 1;
	v->a[93873] = anon_sym_BQUOTE;
	v->a[93874] = actions(5779);
	v->a[93875] = 1;
	v->a[93876] = sym__special_character;
	v->a[93877] = actions(6112);
	v->a[93878] = 1;
	v->a[93879] = sym__regex_no_space;
	small_parse_table_4694(v);
}

void	small_parse_table_4694(t_small_parse_table_array *v)
{
	v->a[93880] = state(2717);
	v->a[93881] = 1;
	v->a[93882] = aux_sym__literal_repeat1;
	v->a[93883] = state(2995);
	v->a[93884] = 1;
	v->a[93885] = sym__expression;
	v->a[93886] = actions(1129);
	v->a[93887] = 2;
	v->a[93888] = anon_sym_LPAREN_LPAREN;
	v->a[93889] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[93890] = actions(1165);
	v->a[93891] = 2;
	v->a[93892] = anon_sym_LT_LPAREN;
	v->a[93893] = anon_sym_GT_LPAREN;
	v->a[93894] = actions(1191);
	v->a[93895] = 2;
	v->a[93896] = anon_sym_PLUS_PLUS2;
	v->a[93897] = anon_sym_DASH_DASH2;
	v->a[93898] = actions(1193);
	v->a[93899] = 2;
	small_parse_table_4695(v);
}

/* EOF small_parse_table_938.c */
