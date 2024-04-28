/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1017.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5085(t_small_parse_table_array *v)
{
	v->a[101700] = sym_test_operator;
	v->a[101701] = actions(3060);
	v->a[101702] = 1;
	v->a[101703] = anon_sym_BQUOTE;
	v->a[101704] = state(2484);
	v->a[101705] = 1;
	v->a[101706] = aux_sym__literal_repeat1;
	v->a[101707] = state(3030);
	v->a[101708] = 1;
	v->a[101709] = sym__expression;
	v->a[101710] = actions(1129);
	v->a[101711] = 2;
	v->a[101712] = anon_sym_LPAREN_LPAREN;
	v->a[101713] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[101714] = actions(1165);
	v->a[101715] = 2;
	v->a[101716] = anon_sym_LT_LPAREN;
	v->a[101717] = anon_sym_GT_LPAREN;
	v->a[101718] = actions(1175);
	v->a[101719] = 2;
	small_parse_table_5086(v);
}

void	small_parse_table_5086(t_small_parse_table_array *v)
{
	v->a[101720] = anon_sym_PLUS_PLUS2;
	v->a[101721] = anon_sym_DASH_DASH2;
	v->a[101722] = actions(1177);
	v->a[101723] = 2;
	v->a[101724] = anon_sym_DASH2;
	v->a[101725] = anon_sym_PLUS2;
	v->a[101726] = actions(1183);
	v->a[101727] = 2;
	v->a[101728] = sym_raw_string;
	v->a[101729] = sym_ansi_c_string;
	v->a[101730] = state(2594);
	v->a[101731] = 6;
	v->a[101732] = sym_binary_expression;
	v->a[101733] = sym_ternary_expression;
	v->a[101734] = sym_unary_expression;
	v->a[101735] = sym_postfix_expression;
	v->a[101736] = sym_parenthesized_expression;
	v->a[101737] = sym_concatenation;
	v->a[101738] = state(2456);
	v->a[101739] = 9;
	small_parse_table_5087(v);
}

void	small_parse_table_5087(t_small_parse_table_array *v)
{
	v->a[101740] = sym_arithmetic_expansion;
	v->a[101741] = sym_brace_expression;
	v->a[101742] = sym_string;
	v->a[101743] = sym_translated_string;
	v->a[101744] = sym_number;
	v->a[101745] = sym_simple_expansion;
	v->a[101746] = sym_expansion;
	v->a[101747] = sym_command_substitution;
	v->a[101748] = sym_process_substitution;
	v->a[101749] = 26;
	v->a[101750] = actions(71);
	v->a[101751] = 1;
	v->a[101752] = sym_comment;
	v->a[101753] = actions(363);
	v->a[101754] = 1;
	v->a[101755] = anon_sym_DOLLAR_LBRACK;
	v->a[101756] = actions(367);
	v->a[101757] = 1;
	v->a[101758] = anon_sym_DOLLAR;
	v->a[101759] = actions(371);
	small_parse_table_5088(v);
}

void	small_parse_table_5088(t_small_parse_table_array *v)
{
	v->a[101760] = 1;
	v->a[101761] = anon_sym_DQUOTE;
	v->a[101762] = actions(375);
	v->a[101763] = 1;
	v->a[101764] = aux_sym_number_token1;
	v->a[101765] = actions(377);
	v->a[101766] = 1;
	v->a[101767] = aux_sym_number_token2;
	v->a[101768] = actions(379);
	v->a[101769] = 1;
	v->a[101770] = anon_sym_DOLLAR_LBRACE;
	v->a[101771] = actions(381);
	v->a[101772] = 1;
	v->a[101773] = anon_sym_DOLLAR_LPAREN;
	v->a[101774] = actions(385);
	v->a[101775] = 1;
	v->a[101776] = anon_sym_DOLLAR_BQUOTE;
	v->a[101777] = actions(391);
	v->a[101778] = 1;
	v->a[101779] = sym__brace_start;
	small_parse_table_5089(v);
}

void	small_parse_table_5089(t_small_parse_table_array *v)
{
	v->a[101780] = actions(1091);
	v->a[101781] = 1;
	v->a[101782] = sym_word;
	v->a[101783] = actions(1093);
	v->a[101784] = 1;
	v->a[101785] = anon_sym_LPAREN;
	v->a[101786] = actions(1095);
	v->a[101787] = 1;
	v->a[101788] = anon_sym_BANG;
	v->a[101789] = actions(1103);
	v->a[101790] = 1;
	v->a[101791] = anon_sym_TILDE;
	v->a[101792] = actions(1113);
	v->a[101793] = 1;
	v->a[101794] = sym_test_operator;
	v->a[101795] = actions(5809);
	v->a[101796] = 1;
	v->a[101797] = anon_sym_BQUOTE;
	v->a[101798] = actions(5916);
	v->a[101799] = 1;
	small_parse_table_5090(v);
}

/* EOF small_parse_table_1017.c */
