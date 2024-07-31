/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_426.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2130(t_small_parse_table_array *v)
{
	v->a[42600] = anon_sym_PIPE;
	v->a[42601] = anon_sym_AMP_AMP;
	v->a[42602] = anon_sym_PIPE_PIPE;
	v->a[42603] = anon_sym_LT;
	v->a[42604] = anon_sym_GT;
	v->a[42605] = anon_sym_GT_GT;
	v->a[42606] = anon_sym_LT_AMP;
	v->a[42607] = anon_sym_GT_AMP;
	v->a[42608] = anon_sym_GT_PIPE;
	v->a[42609] = anon_sym_LT_GT;
	v->a[42610] = anon_sym_LT_LT;
	v->a[42611] = anon_sym_LT_LT_DASH;
	v->a[42612] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42613] = anon_sym_DOLLAR;
	v->a[42614] = anon_sym_DQUOTE;
	v->a[42615] = sym_raw_string;
	v->a[42616] = sym_number;
	v->a[42617] = anon_sym_DOLLAR_LBRACE;
	v->a[42618] = anon_sym_DOLLAR_LPAREN;
	v->a[42619] = anon_sym_BQUOTE;
	small_parse_table_2131(v);
}

void	small_parse_table_2131(t_small_parse_table_array *v)
{
	v->a[42620] = sym_word;
	v->a[42621] = 12;
	v->a[42622] = actions(407);
	v->a[42623] = 1;
	v->a[42624] = sym_comment;
	v->a[42625] = actions(1540);
	v->a[42626] = 1;
	v->a[42627] = anon_sym_LPAREN;
	v->a[42628] = actions(1542);
	v->a[42629] = 1;
	v->a[42630] = anon_sym_BANG;
	v->a[42631] = actions(1548);
	v->a[42632] = 1;
	v->a[42633] = anon_sym_DOLLAR;
	v->a[42634] = actions(1550);
	v->a[42635] = 1;
	v->a[42636] = anon_sym_DQUOTE;
	v->a[42637] = actions(1554);
	v->a[42638] = 1;
	v->a[42639] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2132(v);
}

void	small_parse_table_2132(t_small_parse_table_array *v)
{
	v->a[42640] = actions(1556);
	v->a[42641] = 1;
	v->a[42642] = sym_variable_name;
	v->a[42643] = actions(1544);
	v->a[42644] = 2;
	v->a[42645] = anon_sym_PLUS_PLUS;
	v->a[42646] = anon_sym_DASH_DASH;
	v->a[42647] = actions(1546);
	v->a[42648] = 2;
	v->a[42649] = anon_sym_DASH2;
	v->a[42650] = anon_sym_PLUS2;
	v->a[42651] = actions(1552);
	v->a[42652] = 2;
	v->a[42653] = sym_number;
	v->a[42654] = aux_sym__simple_variable_name_token1;
	v->a[42655] = state(157);
	v->a[42656] = 3;
	v->a[42657] = sym_string;
	v->a[42658] = sym_simple_expansion;
	v->a[42659] = sym_expansion;
	small_parse_table_2133(v);
}

void	small_parse_table_2133(t_small_parse_table_array *v)
{
	v->a[42660] = state(164);
	v->a[42661] = 7;
	v->a[42662] = sym__arithmetic_expression;
	v->a[42663] = sym_arithmetic_literal;
	v->a[42664] = sym_arithmetic_binary_expression;
	v->a[42665] = sym_arithmetic_ternary_expression;
	v->a[42666] = sym_arithmetic_unary_expression;
	v->a[42667] = sym_arithmetic_postfix_expression;
	v->a[42668] = sym_arithmetic_parenthesized_expression;
	v->a[42669] = 12;
	v->a[42670] = actions(407);
	v->a[42671] = 1;
	v->a[42672] = sym_comment;
	v->a[42673] = actions(1540);
	v->a[42674] = 1;
	v->a[42675] = anon_sym_LPAREN;
	v->a[42676] = actions(1542);
	v->a[42677] = 1;
	v->a[42678] = anon_sym_BANG;
	v->a[42679] = actions(1548);
	small_parse_table_2134(v);
}

void	small_parse_table_2134(t_small_parse_table_array *v)
{
	v->a[42680] = 1;
	v->a[42681] = anon_sym_DOLLAR;
	v->a[42682] = actions(1550);
	v->a[42683] = 1;
	v->a[42684] = anon_sym_DQUOTE;
	v->a[42685] = actions(1554);
	v->a[42686] = 1;
	v->a[42687] = anon_sym_DOLLAR_LBRACE;
	v->a[42688] = actions(1556);
	v->a[42689] = 1;
	v->a[42690] = sym_variable_name;
	v->a[42691] = actions(1544);
	v->a[42692] = 2;
	v->a[42693] = anon_sym_PLUS_PLUS;
	v->a[42694] = anon_sym_DASH_DASH;
	v->a[42695] = actions(1546);
	v->a[42696] = 2;
	v->a[42697] = anon_sym_DASH2;
	v->a[42698] = anon_sym_PLUS2;
	v->a[42699] = actions(1552);
	small_parse_table_2135(v);
}

/* EOF small_parse_table_426.c */
