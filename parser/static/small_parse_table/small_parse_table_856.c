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
	v->a[85600] = actions(3340);
	v->a[85601] = 1;
	v->a[85602] = sym_variable_name;
	v->a[85603] = actions(3396);
	v->a[85604] = 1;
	v->a[85605] = anon_sym_RBRACE;
	v->a[85606] = state(2239);
	v->a[85607] = 1;
	v->a[85608] = sym__expansion_body;
	v->a[85609] = actions(3338);
	v->a[85610] = 2;
	v->a[85611] = anon_sym_0;
	v->a[85612] = anon_sym__;
	v->a[85613] = actions(3334);
	v->a[85614] = 7;
	v->a[85615] = anon_sym_BANG;
	v->a[85616] = anon_sym_DASH;
	v->a[85617] = anon_sym_STAR;
	v->a[85618] = anon_sym_QMARK;
	v->a[85619] = anon_sym_DOLLAR;
	small_parse_table_4281(v);
}

void	small_parse_table_4281(t_small_parse_table_array *v)
{
	v->a[85620] = anon_sym_POUND;
	v->a[85621] = anon_sym_AT;
	v->a[85622] = 7;
	v->a[85623] = actions(3);
	v->a[85624] = 1;
	v->a[85625] = sym_comment;
	v->a[85626] = actions(3336);
	v->a[85627] = 1;
	v->a[85628] = aux_sym__simple_variable_name_token1;
	v->a[85629] = actions(3340);
	v->a[85630] = 1;
	v->a[85631] = sym_variable_name;
	v->a[85632] = actions(3398);
	v->a[85633] = 1;
	v->a[85634] = anon_sym_RBRACE;
	v->a[85635] = state(2249);
	v->a[85636] = 1;
	v->a[85637] = sym__expansion_body;
	v->a[85638] = actions(3338);
	v->a[85639] = 2;
	small_parse_table_4282(v);
}

void	small_parse_table_4282(t_small_parse_table_array *v)
{
	v->a[85640] = anon_sym_0;
	v->a[85641] = anon_sym__;
	v->a[85642] = actions(3334);
	v->a[85643] = 7;
	v->a[85644] = anon_sym_BANG;
	v->a[85645] = anon_sym_DASH;
	v->a[85646] = anon_sym_STAR;
	v->a[85647] = anon_sym_QMARK;
	v->a[85648] = anon_sym_DOLLAR;
	v->a[85649] = anon_sym_POUND;
	v->a[85650] = anon_sym_AT;
	v->a[85651] = 7;
	v->a[85652] = actions(3);
	v->a[85653] = 1;
	v->a[85654] = sym_comment;
	v->a[85655] = actions(3336);
	v->a[85656] = 1;
	v->a[85657] = aux_sym__simple_variable_name_token1;
	v->a[85658] = actions(3340);
	v->a[85659] = 1;
	small_parse_table_4283(v);
}

void	small_parse_table_4283(t_small_parse_table_array *v)
{
	v->a[85660] = sym_variable_name;
	v->a[85661] = actions(3400);
	v->a[85662] = 1;
	v->a[85663] = anon_sym_RBRACE;
	v->a[85664] = state(2137);
	v->a[85665] = 1;
	v->a[85666] = sym__expansion_body;
	v->a[85667] = actions(3338);
	v->a[85668] = 2;
	v->a[85669] = anon_sym_0;
	v->a[85670] = anon_sym__;
	v->a[85671] = actions(3334);
	v->a[85672] = 7;
	v->a[85673] = anon_sym_BANG;
	v->a[85674] = anon_sym_DASH;
	v->a[85675] = anon_sym_STAR;
	v->a[85676] = anon_sym_QMARK;
	v->a[85677] = anon_sym_DOLLAR;
	v->a[85678] = anon_sym_POUND;
	v->a[85679] = anon_sym_AT;
	small_parse_table_4284(v);
}

void	small_parse_table_4284(t_small_parse_table_array *v)
{
	v->a[85680] = 5;
	v->a[85681] = actions(3);
	v->a[85682] = 1;
	v->a[85683] = sym_comment;
	v->a[85684] = actions(3045);
	v->a[85685] = 1;
	v->a[85686] = aux_sym_concatenation_token1;
	v->a[85687] = actions(3402);
	v->a[85688] = 1;
	v->a[85689] = sym__concat;
	v->a[85690] = state(1586);
	v->a[85691] = 1;
	v->a[85692] = aux_sym_concatenation_repeat1;
	v->a[85693] = actions(1081);
	v->a[85694] = 10;
	v->a[85695] = aux_sym_heredoc_redirect_token1;
	v->a[85696] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85697] = anon_sym_DOLLAR;
	v->a[85698] = anon_sym_DQUOTE;
	v->a[85699] = sym_raw_string;
	small_parse_table_4285(v);
}

/* EOF small_parse_table_856.c */
