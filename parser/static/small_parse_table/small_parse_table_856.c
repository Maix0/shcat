/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_856.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4280(t_small_parse_table_array *v)
{
	v->a[85600] = 1;
	v->a[85601] = anon_sym_RBRACE;
	v->a[85602] = state(2297);
	v->a[85603] = 2;
	v->a[85604] = sym_expansion_expression;
	v->a[85605] = sym_expansion_regex;
	v->a[85606] = actions(3182);
	v->a[85607] = 3;
	v->a[85608] = sym__immediate_double_hash;
	v->a[85609] = anon_sym_POUND;
	v->a[85610] = anon_sym_PERCENT_PERCENT;
	v->a[85611] = actions(3184);
	v->a[85612] = 8;
	v->a[85613] = anon_sym_COLON_DASH;
	v->a[85614] = anon_sym_DASH3;
	v->a[85615] = anon_sym_COLON_EQ;
	v->a[85616] = anon_sym_EQ2;
	v->a[85617] = anon_sym_COLON_QMARK;
	v->a[85618] = anon_sym_QMARK2;
	v->a[85619] = anon_sym_COLON_PLUS;
	small_parse_table_4281(v);
}

void	small_parse_table_4281(t_small_parse_table_array *v)
{
	v->a[85620] = anon_sym_PLUS3;
	v->a[85621] = 10;
	v->a[85622] = actions(3);
	v->a[85623] = 1;
	v->a[85624] = sym_comment;
	v->a[85625] = actions(3060);
	v->a[85626] = 1;
	v->a[85627] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85628] = actions(3064);
	v->a[85629] = 1;
	v->a[85630] = anon_sym_DQUOTE;
	v->a[85631] = actions(3066);
	v->a[85632] = 1;
	v->a[85633] = anon_sym_DOLLAR_LBRACE;
	v->a[85634] = actions(3068);
	v->a[85635] = 1;
	v->a[85636] = anon_sym_DOLLAR_LPAREN;
	v->a[85637] = actions(3070);
	v->a[85638] = 1;
	v->a[85639] = anon_sym_BQUOTE;
	small_parse_table_4282(v);
}

void	small_parse_table_4282(t_small_parse_table_array *v)
{
	v->a[85640] = actions(3104);
	v->a[85641] = 1;
	v->a[85642] = anon_sym_DOLLAR;
	v->a[85643] = state(1999);
	v->a[85644] = 1;
	v->a[85645] = sym_concatenation;
	v->a[85646] = actions(3188);
	v->a[85647] = 3;
	v->a[85648] = sym_raw_string;
	v->a[85649] = sym_number;
	v->a[85650] = sym_word;
	v->a[85651] = state(1957);
	v->a[85652] = 5;
	v->a[85653] = sym_arithmetic_expansion;
	v->a[85654] = sym_string;
	v->a[85655] = sym_simple_expansion;
	v->a[85656] = sym_expansion;
	v->a[85657] = sym_command_substitution;
	v->a[85658] = 3;
	v->a[85659] = actions(3);
	small_parse_table_4283(v);
}

void	small_parse_table_4283(t_small_parse_table_array *v)
{
	v->a[85660] = 1;
	v->a[85661] = sym_comment;
	v->a[85662] = actions(1056);
	v->a[85663] = 1;
	v->a[85664] = sym__concat;
	v->a[85665] = actions(1058);
	v->a[85666] = 14;
	v->a[85667] = anon_sym_SEMI_SEMI;
	v->a[85668] = aux_sym_heredoc_redirect_token1;
	v->a[85669] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85670] = anon_sym_AMP;
	v->a[85671] = aux_sym_concatenation_token1;
	v->a[85672] = anon_sym_DOLLAR;
	v->a[85673] = anon_sym_DQUOTE;
	v->a[85674] = sym_raw_string;
	v->a[85675] = sym_number;
	v->a[85676] = anon_sym_DOLLAR_LBRACE;
	v->a[85677] = anon_sym_DOLLAR_LPAREN;
	v->a[85678] = anon_sym_BQUOTE;
	v->a[85679] = sym_word;
	small_parse_table_4284(v);
}

void	small_parse_table_4284(t_small_parse_table_array *v)
{
	v->a[85680] = anon_sym_SEMI;
	v->a[85681] = 6;
	v->a[85682] = actions(3);
	v->a[85683] = 1;
	v->a[85684] = sym_comment;
	v->a[85685] = actions(3192);
	v->a[85686] = 1;
	v->a[85687] = anon_sym_DQUOTE;
	v->a[85688] = actions(3194);
	v->a[85689] = 1;
	v->a[85690] = sym_string_content;
	v->a[85691] = actions(3198);
	v->a[85692] = 1;
	v->a[85693] = sym_variable_name;
	v->a[85694] = actions(3196);
	v->a[85695] = 2;
	v->a[85696] = aux_sym__simple_variable_name_token1;
	v->a[85697] = aux_sym__multiline_variable_name_token1;
	v->a[85698] = actions(3190);
	v->a[85699] = 9;
	small_parse_table_4285(v);
}

/* EOF small_parse_table_856.c */
