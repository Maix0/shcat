/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_756.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3780(t_small_parse_table_array *v)
{
	v->a[75600] = anon_sym_DQUOTE;
	v->a[75601] = state(1610);
	v->a[75602] = 1;
	v->a[75603] = aux_sym_string_repeat1;
	v->a[75604] = state(1748);
	v->a[75605] = 4;
	v->a[75606] = sym_arithmetic_expansion;
	v->a[75607] = sym_simple_expansion;
	v->a[75608] = sym_expansion;
	v->a[75609] = sym_command_substitution;
	v->a[75610] = 10;
	v->a[75611] = actions(3);
	v->a[75612] = 1;
	v->a[75613] = sym_comment;
	v->a[75614] = actions(3058);
	v->a[75615] = 1;
	v->a[75616] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75617] = actions(3064);
	v->a[75618] = 1;
	v->a[75619] = sym_string_content;
	small_parse_table_3781(v);
}

void	small_parse_table_3781(t_small_parse_table_array *v)
{
	v->a[75620] = actions(3066);
	v->a[75621] = 1;
	v->a[75622] = anon_sym_DOLLAR_LBRACE;
	v->a[75623] = actions(3068);
	v->a[75624] = 1;
	v->a[75625] = anon_sym_DOLLAR_LPAREN;
	v->a[75626] = actions(3070);
	v->a[75627] = 1;
	v->a[75628] = anon_sym_BQUOTE;
	v->a[75629] = actions(3174);
	v->a[75630] = 1;
	v->a[75631] = anon_sym_DOLLAR;
	v->a[75632] = actions(3176);
	v->a[75633] = 1;
	v->a[75634] = anon_sym_DQUOTE;
	v->a[75635] = state(1610);
	v->a[75636] = 1;
	v->a[75637] = aux_sym_string_repeat1;
	v->a[75638] = state(1748);
	v->a[75639] = 4;
	small_parse_table_3782(v);
}

void	small_parse_table_3782(t_small_parse_table_array *v)
{
	v->a[75640] = sym_arithmetic_expansion;
	v->a[75641] = sym_simple_expansion;
	v->a[75642] = sym_expansion;
	v->a[75643] = sym_command_substitution;
	v->a[75644] = 10;
	v->a[75645] = actions(3);
	v->a[75646] = 1;
	v->a[75647] = sym_comment;
	v->a[75648] = actions(3058);
	v->a[75649] = 1;
	v->a[75650] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75651] = actions(3064);
	v->a[75652] = 1;
	v->a[75653] = sym_string_content;
	v->a[75654] = actions(3066);
	v->a[75655] = 1;
	v->a[75656] = anon_sym_DOLLAR_LBRACE;
	v->a[75657] = actions(3068);
	v->a[75658] = 1;
	v->a[75659] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3783(v);
}

void	small_parse_table_3783(t_small_parse_table_array *v)
{
	v->a[75660] = actions(3070);
	v->a[75661] = 1;
	v->a[75662] = anon_sym_BQUOTE;
	v->a[75663] = actions(3178);
	v->a[75664] = 1;
	v->a[75665] = anon_sym_DOLLAR;
	v->a[75666] = actions(3180);
	v->a[75667] = 1;
	v->a[75668] = anon_sym_DQUOTE;
	v->a[75669] = state(1618);
	v->a[75670] = 1;
	v->a[75671] = aux_sym_string_repeat1;
	v->a[75672] = state(1748);
	v->a[75673] = 4;
	v->a[75674] = sym_arithmetic_expansion;
	v->a[75675] = sym_simple_expansion;
	v->a[75676] = sym_expansion;
	v->a[75677] = sym_command_substitution;
	v->a[75678] = 8;
	v->a[75679] = actions(3);
	small_parse_table_3784(v);
}

void	small_parse_table_3784(t_small_parse_table_array *v)
{
	v->a[75680] = 1;
	v->a[75681] = sym_comment;
	v->a[75682] = actions(3040);
	v->a[75683] = 1;
	v->a[75684] = anon_sym_POUND;
	v->a[75685] = actions(3042);
	v->a[75686] = 1;
	v->a[75687] = aux_sym__simple_variable_name_token1;
	v->a[75688] = actions(3044);
	v->a[75689] = 1;
	v->a[75690] = anon_sym_0;
	v->a[75691] = actions(3046);
	v->a[75692] = 1;
	v->a[75693] = sym_variable_name;
	v->a[75694] = actions(3182);
	v->a[75695] = 1;
	v->a[75696] = anon_sym_RBRACE;
	v->a[75697] = state(2008);
	v->a[75698] = 1;
	v->a[75699] = sym__expansion_body;
	small_parse_table_3785(v);
}

/* EOF small_parse_table_756.c */
