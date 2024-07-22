/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_446.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2230(t_small_parse_table_array *v)
{
	v->a[44600] = 1;
	v->a[44601] = sym_comment;
	v->a[44602] = actions(1445);
	v->a[44603] = 1;
	v->a[44604] = ts_builtin_sym_end;
	v->a[44605] = actions(1412);
	v->a[44606] = 2;
	v->a[44607] = sym_file_descriptor;
	v->a[44608] = sym_variable_name;
	v->a[44609] = actions(1408);
	v->a[44610] = 24;
	v->a[44611] = anon_sym_for;
	v->a[44612] = anon_sym_while;
	v->a[44613] = anon_sym_until;
	v->a[44614] = anon_sym_if;
	v->a[44615] = anon_sym_case;
	v->a[44616] = anon_sym_LPAREN;
	v->a[44617] = anon_sym_LBRACE;
	v->a[44618] = anon_sym_BANG;
	v->a[44619] = anon_sym_LT;
	small_parse_table_2231(v);
}

void	small_parse_table_2231(t_small_parse_table_array *v)
{
	v->a[44620] = anon_sym_GT;
	v->a[44621] = anon_sym_GT_GT;
	v->a[44622] = anon_sym_LT_AMP;
	v->a[44623] = anon_sym_GT_AMP;
	v->a[44624] = anon_sym_GT_PIPE;
	v->a[44625] = anon_sym_LT_GT;
	v->a[44626] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44627] = anon_sym_DOLLAR;
	v->a[44628] = anon_sym_DQUOTE;
	v->a[44629] = sym_raw_string;
	v->a[44630] = sym_number;
	v->a[44631] = anon_sym_DOLLAR_LBRACE;
	v->a[44632] = anon_sym_DOLLAR_LPAREN;
	v->a[44633] = anon_sym_BQUOTE;
	v->a[44634] = sym_word;
	v->a[44635] = 16;
	v->a[44636] = actions(501);
	v->a[44637] = 1;
	v->a[44638] = sym_comment;
	v->a[44639] = actions(1469);
	small_parse_table_2232(v);
}

void	small_parse_table_2232(t_small_parse_table_array *v)
{
	v->a[44640] = 1;
	v->a[44641] = anon_sym_LPAREN;
	v->a[44642] = actions(1471);
	v->a[44643] = 1;
	v->a[44644] = anon_sym_BANG;
	v->a[44645] = actions(1479);
	v->a[44646] = 1;
	v->a[44647] = anon_sym_TILDE;
	v->a[44648] = actions(1481);
	v->a[44649] = 1;
	v->a[44650] = anon_sym_DOLLAR;
	v->a[44651] = actions(1483);
	v->a[44652] = 1;
	v->a[44653] = anon_sym_DQUOTE;
	v->a[44654] = actions(1487);
	v->a[44655] = 1;
	v->a[44656] = anon_sym_DOLLAR_LBRACE;
	v->a[44657] = actions(1489);
	v->a[44658] = 1;
	v->a[44659] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2233(v);
}

void	small_parse_table_2233(t_small_parse_table_array *v)
{
	v->a[44660] = actions(1491);
	v->a[44661] = 1;
	v->a[44662] = anon_sym_BQUOTE;
	v->a[44663] = actions(1493);
	v->a[44664] = 1;
	v->a[44665] = sym_variable_name;
	v->a[44666] = actions(1614);
	v->a[44667] = 1;
	v->a[44668] = anon_sym_RPAREN_RPAREN;
	v->a[44669] = actions(1475);
	v->a[44670] = 2;
	v->a[44671] = anon_sym_PLUS_PLUS;
	v->a[44672] = anon_sym_DASH_DASH;
	v->a[44673] = actions(1477);
	v->a[44674] = 2;
	v->a[44675] = anon_sym_DASH2;
	v->a[44676] = anon_sym_PLUS2;
	v->a[44677] = actions(1485);
	v->a[44678] = 2;
	v->a[44679] = sym_number;
	small_parse_table_2234(v);
}

void	small_parse_table_2234(t_small_parse_table_array *v)
{
	v->a[44680] = aux_sym__simple_variable_name_token1;
	v->a[44681] = state(194);
	v->a[44682] = 3;
	v->a[44683] = sym_string;
	v->a[44684] = sym_simple_expansion;
	v->a[44685] = sym_expansion;
	v->a[44686] = state(308);
	v->a[44687] = 8;
	v->a[44688] = sym__arithmetic_expression;
	v->a[44689] = sym_arithmetic_literal;
	v->a[44690] = sym_arithmetic_binary_expression;
	v->a[44691] = sym_arithmetic_ternary_expression;
	v->a[44692] = sym_arithmetic_unary_expression;
	v->a[44693] = sym_arithmetic_postfix_expression;
	v->a[44694] = sym_arithmetic_parenthesized_expression;
	v->a[44695] = sym_command_substitution;
	v->a[44696] = 7;
	v->a[44697] = actions(3);
	v->a[44698] = 1;
	v->a[44699] = sym_comment;
	small_parse_table_2235(v);
}

/* EOF small_parse_table_446.c */
