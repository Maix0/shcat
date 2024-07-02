/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_447.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2235(t_small_parse_table_array *v)
{
	v->a[44700] = 1;
	v->a[44701] = anon_sym_DOLLAR_LPAREN;
	v->a[44702] = actions(1596);
	v->a[44703] = 1;
	v->a[44704] = anon_sym_BQUOTE;
	v->a[44705] = actions(1598);
	v->a[44706] = 1;
	v->a[44707] = sym_variable_name;
	v->a[44708] = actions(1606);
	v->a[44709] = 1;
	v->a[44710] = anon_sym_RPAREN_RPAREN;
	v->a[44711] = actions(1580);
	v->a[44712] = 2;
	v->a[44713] = anon_sym_PLUS_PLUS;
	v->a[44714] = anon_sym_DASH_DASH;
	v->a[44715] = actions(1582);
	v->a[44716] = 2;
	v->a[44717] = anon_sym_DASH2;
	v->a[44718] = anon_sym_PLUS2;
	v->a[44719] = actions(1590);
	small_parse_table_2236(v);
}

void	small_parse_table_2236(t_small_parse_table_array *v)
{
	v->a[44720] = 2;
	v->a[44721] = sym_number;
	v->a[44722] = aux_sym__simple_variable_name_token1;
	v->a[44723] = state(238);
	v->a[44724] = 3;
	v->a[44725] = sym_string;
	v->a[44726] = sym_simple_expansion;
	v->a[44727] = sym_expansion;
	v->a[44728] = state(294);
	v->a[44729] = 8;
	v->a[44730] = sym__arithmetic_expression;
	v->a[44731] = sym_arithmetic_literal;
	v->a[44732] = sym_arithmetic_binary_expression;
	v->a[44733] = sym_arithmetic_ternary_expression;
	v->a[44734] = sym_arithmetic_unary_expression;
	v->a[44735] = sym_arithmetic_postfix_expression;
	v->a[44736] = sym_arithmetic_parenthesized_expression;
	v->a[44737] = sym_command_substitution;
	v->a[44738] = 3;
	v->a[44739] = actions(3);
	small_parse_table_2237(v);
}

void	small_parse_table_2237(t_small_parse_table_array *v)
{
	v->a[44740] = 1;
	v->a[44741] = sym_comment;
	v->a[44742] = actions(1327);
	v->a[44743] = 2;
	v->a[44744] = sym_file_descriptor;
	v->a[44745] = sym_variable_name;
	v->a[44746] = actions(1325);
	v->a[44747] = 25;
	v->a[44748] = anon_sym_for;
	v->a[44749] = anon_sym_while;
	v->a[44750] = anon_sym_until;
	v->a[44751] = anon_sym_if;
	v->a[44752] = anon_sym_case;
	v->a[44753] = anon_sym_LPAREN;
	v->a[44754] = anon_sym_LBRACE;
	v->a[44755] = anon_sym_RBRACE;
	v->a[44756] = anon_sym_BANG;
	v->a[44757] = anon_sym_LT;
	v->a[44758] = anon_sym_GT;
	v->a[44759] = anon_sym_GT_GT;
	small_parse_table_2238(v);
}

void	small_parse_table_2238(t_small_parse_table_array *v)
{
	v->a[44760] = anon_sym_LT_AMP;
	v->a[44761] = anon_sym_GT_AMP;
	v->a[44762] = anon_sym_GT_PIPE;
	v->a[44763] = anon_sym_LT_GT;
	v->a[44764] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44765] = anon_sym_DOLLAR;
	v->a[44766] = anon_sym_DQUOTE;
	v->a[44767] = sym_raw_string;
	v->a[44768] = sym_number;
	v->a[44769] = anon_sym_DOLLAR_LBRACE;
	v->a[44770] = anon_sym_DOLLAR_LPAREN;
	v->a[44771] = anon_sym_BQUOTE;
	v->a[44772] = sym_word;
	v->a[44773] = 3;
	v->a[44774] = actions(3);
	v->a[44775] = 1;
	v->a[44776] = sym_comment;
	v->a[44777] = actions(1327);
	v->a[44778] = 3;
	v->a[44779] = sym_file_descriptor;
	small_parse_table_2239(v);
}

void	small_parse_table_2239(t_small_parse_table_array *v)
{
	v->a[44780] = sym_variable_name;
	v->a[44781] = ts_builtin_sym_end;
	v->a[44782] = actions(1325);
	v->a[44783] = 24;
	v->a[44784] = anon_sym_for;
	v->a[44785] = anon_sym_while;
	v->a[44786] = anon_sym_until;
	v->a[44787] = anon_sym_if;
	v->a[44788] = anon_sym_case;
	v->a[44789] = anon_sym_LPAREN;
	v->a[44790] = anon_sym_LBRACE;
	v->a[44791] = anon_sym_BANG;
	v->a[44792] = anon_sym_LT;
	v->a[44793] = anon_sym_GT;
	v->a[44794] = anon_sym_GT_GT;
	v->a[44795] = anon_sym_LT_AMP;
	v->a[44796] = anon_sym_GT_AMP;
	v->a[44797] = anon_sym_GT_PIPE;
	v->a[44798] = anon_sym_LT_GT;
	v->a[44799] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2240(v);
}

/* EOF small_parse_table_447.c */
