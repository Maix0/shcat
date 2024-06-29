/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_574.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2870(t_small_parse_table_array *v)
{
	v->a[57400] = actions(1849);
	v->a[57401] = 1;
	v->a[57402] = anon_sym_DOLLAR_LBRACE;
	v->a[57403] = actions(1851);
	v->a[57404] = 1;
	v->a[57405] = anon_sym_DOLLAR_LPAREN;
	v->a[57406] = actions(1853);
	v->a[57407] = 1;
	v->a[57408] = anon_sym_BQUOTE;
	v->a[57409] = actions(1855);
	v->a[57410] = 1;
	v->a[57411] = sym_variable_name;
	v->a[57412] = actions(1943);
	v->a[57413] = 1;
	v->a[57414] = anon_sym_RPAREN_RPAREN;
	v->a[57415] = actions(1837);
	v->a[57416] = 2;
	v->a[57417] = anon_sym_PLUS_PLUS;
	v->a[57418] = anon_sym_DASH_DASH;
	v->a[57419] = actions(1839);
	small_parse_table_2871(v);
}

void	small_parse_table_2871(t_small_parse_table_array *v)
{
	v->a[57420] = 2;
	v->a[57421] = anon_sym_DASH2;
	v->a[57422] = anon_sym_PLUS2;
	v->a[57423] = actions(1847);
	v->a[57424] = 2;
	v->a[57425] = sym_number;
	v->a[57426] = aux_sym__simple_variable_name_token1;
	v->a[57427] = state(370);
	v->a[57428] = 3;
	v->a[57429] = sym_string;
	v->a[57430] = sym_simple_expansion;
	v->a[57431] = sym_expansion;
	v->a[57432] = state(436);
	v->a[57433] = 8;
	v->a[57434] = sym__arithmetic_expression;
	v->a[57435] = sym_arithmetic_literal;
	v->a[57436] = sym_arithmetic_binary_expression;
	v->a[57437] = sym_arithmetic_ternary_expression;
	v->a[57438] = sym_arithmetic_unary_expression;
	v->a[57439] = sym_arithmetic_postfix_expression;
	small_parse_table_2872(v);
}

void	small_parse_table_2872(t_small_parse_table_array *v)
{
	v->a[57440] = sym_arithmetic_parenthesized_expression;
	v->a[57441] = sym_command_substitution;
	v->a[57442] = 3;
	v->a[57443] = actions(3);
	v->a[57444] = 1;
	v->a[57445] = sym_comment;
	v->a[57446] = actions(1195);
	v->a[57447] = 2;
	v->a[57448] = sym_file_descriptor;
	v->a[57449] = sym__concat;
	v->a[57450] = actions(1193);
	v->a[57451] = 25;
	v->a[57452] = anon_sym_PIPE;
	v->a[57453] = anon_sym_AMP_AMP;
	v->a[57454] = anon_sym_PIPE_PIPE;
	v->a[57455] = anon_sym_LT;
	v->a[57456] = anon_sym_GT;
	v->a[57457] = anon_sym_GT_GT;
	v->a[57458] = anon_sym_AMP_GT;
	v->a[57459] = anon_sym_AMP_GT_GT;
	small_parse_table_2873(v);
}

void	small_parse_table_2873(t_small_parse_table_array *v)
{
	v->a[57460] = anon_sym_LT_AMP;
	v->a[57461] = anon_sym_GT_AMP;
	v->a[57462] = anon_sym_GT_PIPE;
	v->a[57463] = anon_sym_LT_AMP_DASH;
	v->a[57464] = anon_sym_GT_AMP_DASH;
	v->a[57465] = anon_sym_LT_LT;
	v->a[57466] = anon_sym_LT_LT_DASH;
	v->a[57467] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57468] = aux_sym_concatenation_token1;
	v->a[57469] = anon_sym_DOLLAR;
	v->a[57470] = anon_sym_DQUOTE;
	v->a[57471] = sym_raw_string;
	v->a[57472] = sym_number;
	v->a[57473] = anon_sym_DOLLAR_LBRACE;
	v->a[57474] = anon_sym_DOLLAR_LPAREN;
	v->a[57475] = anon_sym_BQUOTE;
	v->a[57476] = sym_word;
	v->a[57477] = 18;
	v->a[57478] = actions(3);
	v->a[57479] = 1;
	small_parse_table_2874(v);
}

void	small_parse_table_2874(t_small_parse_table_array *v)
{
	v->a[57480] = sym_comment;
	v->a[57481] = actions(1879);
	v->a[57482] = 1;
	v->a[57483] = anon_sym_LPAREN;
	v->a[57484] = actions(1883);
	v->a[57485] = 1;
	v->a[57486] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57487] = actions(1885);
	v->a[57488] = 1;
	v->a[57489] = anon_sym_DOLLAR;
	v->a[57490] = actions(1887);
	v->a[57491] = 1;
	v->a[57492] = anon_sym_DQUOTE;
	v->a[57493] = actions(1889);
	v->a[57494] = 1;
	v->a[57495] = anon_sym_DOLLAR_LBRACE;
	v->a[57496] = actions(1891);
	v->a[57497] = 1;
	v->a[57498] = anon_sym_DOLLAR_LPAREN;
	v->a[57499] = actions(1893);
	small_parse_table_2875(v);
}

/* EOF small_parse_table_574.c */
