/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2966.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14830(t_small_parse_table_array *v)
{
	v->a[296600] = 1;
	v->a[296601] = anon_sym_DOLLAR_BQUOTE;
	v->a[296602] = actions(13304);
	v->a[296603] = 1;
	v->a[296604] = anon_sym_DOLLAR;
	v->a[296605] = actions(13306);
	v->a[296606] = 1;
	v->a[296607] = anon_sym_DQUOTE;
	v->a[296608] = state(5768);
	v->a[296609] = 1;
	v->a[296610] = aux_sym_string_repeat1;
	v->a[296611] = actions(13058);
	v->a[296612] = 2;
	v->a[296613] = anon_sym_LPAREN_LPAREN;
	v->a[296614] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[296615] = state(6127);
	v->a[296616] = 4;
	v->a[296617] = sym_arithmetic_expansion;
	v->a[296618] = sym_simple_expansion;
	v->a[296619] = sym_expansion;
	small_parse_table_14831(v);
}

void	small_parse_table_14831(t_small_parse_table_array *v)
{
	v->a[296620] = sym_command_substitution;
	v->a[296621] = 12;
	v->a[296622] = actions(3);
	v->a[296623] = 1;
	v->a[296624] = sym_comment;
	v->a[296625] = actions(13060);
	v->a[296626] = 1;
	v->a[296627] = anon_sym_DOLLAR_LBRACK;
	v->a[296628] = actions(13066);
	v->a[296629] = 1;
	v->a[296630] = sym_string_content;
	v->a[296631] = actions(13068);
	v->a[296632] = 1;
	v->a[296633] = anon_sym_DOLLAR_LBRACE;
	v->a[296634] = actions(13070);
	v->a[296635] = 1;
	v->a[296636] = anon_sym_DOLLAR_LPAREN;
	v->a[296637] = actions(13072);
	v->a[296638] = 1;
	v->a[296639] = anon_sym_BQUOTE;
	small_parse_table_14832(v);
}

void	small_parse_table_14832(t_small_parse_table_array *v)
{
	v->a[296640] = actions(13074);
	v->a[296641] = 1;
	v->a[296642] = anon_sym_DOLLAR_BQUOTE;
	v->a[296643] = actions(13308);
	v->a[296644] = 1;
	v->a[296645] = anon_sym_DOLLAR;
	v->a[296646] = actions(13310);
	v->a[296647] = 1;
	v->a[296648] = anon_sym_DQUOTE;
	v->a[296649] = state(5763);
	v->a[296650] = 1;
	v->a[296651] = aux_sym_string_repeat1;
	v->a[296652] = actions(13058);
	v->a[296653] = 2;
	v->a[296654] = anon_sym_LPAREN_LPAREN;
	v->a[296655] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[296656] = state(6127);
	v->a[296657] = 4;
	v->a[296658] = sym_arithmetic_expansion;
	v->a[296659] = sym_simple_expansion;
	small_parse_table_14833(v);
}

void	small_parse_table_14833(t_small_parse_table_array *v)
{
	v->a[296660] = sym_expansion;
	v->a[296661] = sym_command_substitution;
	v->a[296662] = 12;
	v->a[296663] = actions(3);
	v->a[296664] = 1;
	v->a[296665] = sym_comment;
	v->a[296666] = actions(13060);
	v->a[296667] = 1;
	v->a[296668] = anon_sym_DOLLAR_LBRACK;
	v->a[296669] = actions(13066);
	v->a[296670] = 1;
	v->a[296671] = sym_string_content;
	v->a[296672] = actions(13068);
	v->a[296673] = 1;
	v->a[296674] = anon_sym_DOLLAR_LBRACE;
	v->a[296675] = actions(13070);
	v->a[296676] = 1;
	v->a[296677] = anon_sym_DOLLAR_LPAREN;
	v->a[296678] = actions(13072);
	v->a[296679] = 1;
	small_parse_table_14834(v);
}

void	small_parse_table_14834(t_small_parse_table_array *v)
{
	v->a[296680] = anon_sym_BQUOTE;
	v->a[296681] = actions(13074);
	v->a[296682] = 1;
	v->a[296683] = anon_sym_DOLLAR_BQUOTE;
	v->a[296684] = actions(13312);
	v->a[296685] = 1;
	v->a[296686] = anon_sym_DOLLAR;
	v->a[296687] = actions(13314);
	v->a[296688] = 1;
	v->a[296689] = anon_sym_DQUOTE;
	v->a[296690] = state(5768);
	v->a[296691] = 1;
	v->a[296692] = aux_sym_string_repeat1;
	v->a[296693] = actions(13058);
	v->a[296694] = 2;
	v->a[296695] = anon_sym_LPAREN_LPAREN;
	v->a[296696] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[296697] = state(6127);
	v->a[296698] = 4;
	v->a[296699] = sym_arithmetic_expansion;
	small_parse_table_14835(v);
}

/* EOF small_parse_table_2966.c */
