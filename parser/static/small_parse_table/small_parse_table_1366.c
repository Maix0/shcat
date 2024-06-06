/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1366.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6830(t_small_parse_table_array *v)
{
	v->a[136600] = sym_simple_expansion;
	v->a[136601] = sym_expansion;
	v->a[136602] = sym_command_substitution;
	v->a[136603] = 11;
	v->a[136604] = actions(3);
	v->a[136605] = 1;
	v->a[136606] = sym_comment;
	v->a[136607] = actions(7760);
	v->a[136608] = 1;
	v->a[136609] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[136610] = actions(7766);
	v->a[136611] = 1;
	v->a[136612] = sym_string_content;
	v->a[136613] = actions(7768);
	v->a[136614] = 1;
	v->a[136615] = anon_sym_DOLLAR_LBRACE;
	v->a[136616] = actions(7770);
	v->a[136617] = 1;
	v->a[136618] = anon_sym_DOLLAR_LPAREN;
	v->a[136619] = actions(7772);
	small_parse_table_6831(v);
}

void	small_parse_table_6831(t_small_parse_table_array *v)
{
	v->a[136620] = 1;
	v->a[136621] = anon_sym_BQUOTE;
	v->a[136622] = actions(7774);
	v->a[136623] = 1;
	v->a[136624] = anon_sym_DOLLAR_BQUOTE;
	v->a[136625] = actions(7938);
	v->a[136626] = 1;
	v->a[136627] = anon_sym_DOLLAR;
	v->a[136628] = actions(7940);
	v->a[136629] = 1;
	v->a[136630] = anon_sym_DQUOTE;
	v->a[136631] = state(3046);
	v->a[136632] = 1;
	v->a[136633] = aux_sym_string_repeat1;
	v->a[136634] = state(3218);
	v->a[136635] = 4;
	v->a[136636] = sym_arithmetic_expansion;
	v->a[136637] = sym_simple_expansion;
	v->a[136638] = sym_expansion;
	v->a[136639] = sym_command_substitution;
	small_parse_table_6832(v);
}

void	small_parse_table_6832(t_small_parse_table_array *v)
{
	v->a[136640] = 7;
	v->a[136641] = actions(3);
	v->a[136642] = 1;
	v->a[136643] = sym_comment;
	v->a[136644] = actions(7754);
	v->a[136645] = 1;
	v->a[136646] = aux_sym__simple_variable_name_token1;
	v->a[136647] = actions(7758);
	v->a[136648] = 1;
	v->a[136649] = sym_variable_name;
	v->a[136650] = actions(7942);
	v->a[136651] = 1;
	v->a[136652] = anon_sym_RBRACE3;
	v->a[136653] = state(3770);
	v->a[136654] = 1;
	v->a[136655] = sym__expansion_body;
	v->a[136656] = actions(7756);
	v->a[136657] = 2;
	v->a[136658] = anon_sym_0;
	v->a[136659] = anon_sym__;
	small_parse_table_6833(v);
}

void	small_parse_table_6833(t_small_parse_table_array *v)
{
	v->a[136660] = actions(7750);
	v->a[136661] = 7;
	v->a[136662] = anon_sym_BANG;
	v->a[136663] = anon_sym_DASH;
	v->a[136664] = anon_sym_STAR;
	v->a[136665] = anon_sym_QMARK;
	v->a[136666] = anon_sym_DOLLAR;
	v->a[136667] = anon_sym_POUND;
	v->a[136668] = anon_sym_AT;
	v->a[136669] = 7;
	v->a[136670] = actions(3);
	v->a[136671] = 1;
	v->a[136672] = sym_comment;
	v->a[136673] = actions(7754);
	v->a[136674] = 1;
	v->a[136675] = aux_sym__simple_variable_name_token1;
	v->a[136676] = actions(7758);
	v->a[136677] = 1;
	v->a[136678] = sym_variable_name;
	v->a[136679] = actions(7944);
	small_parse_table_6834(v);
}

void	small_parse_table_6834(t_small_parse_table_array *v)
{
	v->a[136680] = 1;
	v->a[136681] = anon_sym_RBRACE3;
	v->a[136682] = state(3934);
	v->a[136683] = 1;
	v->a[136684] = sym__expansion_body;
	v->a[136685] = actions(7756);
	v->a[136686] = 2;
	v->a[136687] = anon_sym_0;
	v->a[136688] = anon_sym__;
	v->a[136689] = actions(7750);
	v->a[136690] = 7;
	v->a[136691] = anon_sym_BANG;
	v->a[136692] = anon_sym_DASH;
	v->a[136693] = anon_sym_STAR;
	v->a[136694] = anon_sym_QMARK;
	v->a[136695] = anon_sym_DOLLAR;
	v->a[136696] = anon_sym_POUND;
	v->a[136697] = anon_sym_AT;
	v->a[136698] = 11;
	v->a[136699] = actions(3);
	small_parse_table_6835(v);
}

/* EOF small_parse_table_1366.c */
