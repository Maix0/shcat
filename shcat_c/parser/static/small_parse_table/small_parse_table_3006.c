/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3006.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15030(t_small_parse_table_array *v)
{
	v->a[300600] = 1;
	v->a[300601] = anon_sym_DOLLAR_BQUOTE;
	v->a[300602] = actions(13714);
	v->a[300603] = 1;
	v->a[300604] = anon_sym_DOLLAR;
	v->a[300605] = actions(13716);
	v->a[300606] = 1;
	v->a[300607] = anon_sym_DQUOTE;
	v->a[300608] = state(5859);
	v->a[300609] = 1;
	v->a[300610] = aux_sym_string_repeat1;
	v->a[300611] = actions(13058);
	v->a[300612] = 2;
	v->a[300613] = anon_sym_LPAREN_LPAREN;
	v->a[300614] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[300615] = state(6127);
	v->a[300616] = 4;
	v->a[300617] = sym_arithmetic_expansion;
	v->a[300618] = sym_simple_expansion;
	v->a[300619] = sym_expansion;
	small_parse_table_15031(v);
}

void	small_parse_table_15031(t_small_parse_table_array *v)
{
	v->a[300620] = sym_command_substitution;
	v->a[300621] = 12;
	v->a[300622] = actions(3);
	v->a[300623] = 1;
	v->a[300624] = sym_comment;
	v->a[300625] = actions(13060);
	v->a[300626] = 1;
	v->a[300627] = anon_sym_DOLLAR_LBRACK;
	v->a[300628] = actions(13066);
	v->a[300629] = 1;
	v->a[300630] = sym_string_content;
	v->a[300631] = actions(13068);
	v->a[300632] = 1;
	v->a[300633] = anon_sym_DOLLAR_LBRACE;
	v->a[300634] = actions(13070);
	v->a[300635] = 1;
	v->a[300636] = anon_sym_DOLLAR_LPAREN;
	v->a[300637] = actions(13072);
	v->a[300638] = 1;
	v->a[300639] = anon_sym_BQUOTE;
	small_parse_table_15032(v);
}

void	small_parse_table_15032(t_small_parse_table_array *v)
{
	v->a[300640] = actions(13074);
	v->a[300641] = 1;
	v->a[300642] = anon_sym_DOLLAR_BQUOTE;
	v->a[300643] = actions(13718);
	v->a[300644] = 1;
	v->a[300645] = anon_sym_DOLLAR;
	v->a[300646] = actions(13720);
	v->a[300647] = 1;
	v->a[300648] = anon_sym_DQUOTE;
	v->a[300649] = state(5768);
	v->a[300650] = 1;
	v->a[300651] = aux_sym_string_repeat1;
	v->a[300652] = actions(13058);
	v->a[300653] = 2;
	v->a[300654] = anon_sym_LPAREN_LPAREN;
	v->a[300655] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[300656] = state(6127);
	v->a[300657] = 4;
	v->a[300658] = sym_arithmetic_expansion;
	v->a[300659] = sym_simple_expansion;
	small_parse_table_15033(v);
}

void	small_parse_table_15033(t_small_parse_table_array *v)
{
	v->a[300660] = sym_expansion;
	v->a[300661] = sym_command_substitution;
	v->a[300662] = 12;
	v->a[300663] = actions(3);
	v->a[300664] = 1;
	v->a[300665] = sym_comment;
	v->a[300666] = actions(13060);
	v->a[300667] = 1;
	v->a[300668] = anon_sym_DOLLAR_LBRACK;
	v->a[300669] = actions(13066);
	v->a[300670] = 1;
	v->a[300671] = sym_string_content;
	v->a[300672] = actions(13068);
	v->a[300673] = 1;
	v->a[300674] = anon_sym_DOLLAR_LBRACE;
	v->a[300675] = actions(13070);
	v->a[300676] = 1;
	v->a[300677] = anon_sym_DOLLAR_LPAREN;
	v->a[300678] = actions(13072);
	v->a[300679] = 1;
	small_parse_table_15034(v);
}

void	small_parse_table_15034(t_small_parse_table_array *v)
{
	v->a[300680] = anon_sym_BQUOTE;
	v->a[300681] = actions(13074);
	v->a[300682] = 1;
	v->a[300683] = anon_sym_DOLLAR_BQUOTE;
	v->a[300684] = actions(13722);
	v->a[300685] = 1;
	v->a[300686] = anon_sym_DOLLAR;
	v->a[300687] = actions(13724);
	v->a[300688] = 1;
	v->a[300689] = anon_sym_DQUOTE;
	v->a[300690] = state(5862);
	v->a[300691] = 1;
	v->a[300692] = aux_sym_string_repeat1;
	v->a[300693] = actions(13058);
	v->a[300694] = 2;
	v->a[300695] = anon_sym_LPAREN_LPAREN;
	v->a[300696] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[300697] = state(6127);
	v->a[300698] = 4;
	v->a[300699] = sym_arithmetic_expansion;
	small_parse_table_15035(v);
}

/* EOF small_parse_table_3006.c */
