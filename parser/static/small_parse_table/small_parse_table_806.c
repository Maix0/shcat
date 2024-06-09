/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_806.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4030(t_small_parse_table_array *v)
{
	v->a[80600] = anon_sym_DOLLAR_LBRACE;
	v->a[80601] = actions(497);
	v->a[80602] = 1;
	v->a[80603] = anon_sym_DOLLAR_LPAREN;
	v->a[80604] = actions(499);
	v->a[80605] = 1;
	v->a[80606] = anon_sym_BQUOTE;
	v->a[80607] = actions(3280);
	v->a[80608] = 1;
	v->a[80609] = sym__bare_dollar;
	v->a[80610] = actions(3338);
	v->a[80611] = 1;
	v->a[80612] = anon_sym_DOLLAR;
	v->a[80613] = actions(3276);
	v->a[80614] = 3;
	v->a[80615] = sym_raw_string;
	v->a[80616] = sym__comment_word;
	v->a[80617] = sym_word;
	v->a[80618] = state(522);
	v->a[80619] = 6;
	small_parse_table_4031(v);
}

void	small_parse_table_4031(t_small_parse_table_array *v)
{
	v->a[80620] = sym_arithmetic_expansion;
	v->a[80621] = sym_string;
	v->a[80622] = sym_number;
	v->a[80623] = sym_simple_expansion;
	v->a[80624] = sym_expansion;
	v->a[80625] = sym_command_substitution;
	v->a[80626] = 12;
	v->a[80627] = actions(3);
	v->a[80628] = 1;
	v->a[80629] = sym_comment;
	v->a[80630] = actions(797);
	v->a[80631] = 1;
	v->a[80632] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80633] = actions(799);
	v->a[80634] = 1;
	v->a[80635] = anon_sym_DOLLAR;
	v->a[80636] = actions(801);
	v->a[80637] = 1;
	v->a[80638] = anon_sym_DQUOTE;
	v->a[80639] = actions(803);
	small_parse_table_4032(v);
}

void	small_parse_table_4032(t_small_parse_table_array *v)
{
	v->a[80640] = 1;
	v->a[80641] = aux_sym_number_token1;
	v->a[80642] = actions(805);
	v->a[80643] = 1;
	v->a[80644] = aux_sym_number_token2;
	v->a[80645] = actions(807);
	v->a[80646] = 1;
	v->a[80647] = anon_sym_DOLLAR_LBRACE;
	v->a[80648] = actions(809);
	v->a[80649] = 1;
	v->a[80650] = anon_sym_DOLLAR_LPAREN;
	v->a[80651] = actions(811);
	v->a[80652] = 1;
	v->a[80653] = anon_sym_BQUOTE;
	v->a[80654] = actions(795);
	v->a[80655] = 2;
	v->a[80656] = sym_raw_string;
	v->a[80657] = sym_word;
	v->a[80658] = state(222);
	v->a[80659] = 2;
	small_parse_table_4033(v);
}

void	small_parse_table_4033(t_small_parse_table_array *v)
{
	v->a[80660] = sym_concatenation;
	v->a[80661] = aux_sym_for_statement_repeat1;
	v->a[80662] = state(424);
	v->a[80663] = 6;
	v->a[80664] = sym_arithmetic_expansion;
	v->a[80665] = sym_string;
	v->a[80666] = sym_number;
	v->a[80667] = sym_simple_expansion;
	v->a[80668] = sym_expansion;
	v->a[80669] = sym_command_substitution;
	v->a[80670] = 12;
	v->a[80671] = actions(3);
	v->a[80672] = 1;
	v->a[80673] = sym_comment;
	v->a[80674] = actions(797);
	v->a[80675] = 1;
	v->a[80676] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80677] = actions(799);
	v->a[80678] = 1;
	v->a[80679] = anon_sym_DOLLAR;
	small_parse_table_4034(v);
}

void	small_parse_table_4034(t_small_parse_table_array *v)
{
	v->a[80680] = actions(801);
	v->a[80681] = 1;
	v->a[80682] = anon_sym_DQUOTE;
	v->a[80683] = actions(803);
	v->a[80684] = 1;
	v->a[80685] = aux_sym_number_token1;
	v->a[80686] = actions(805);
	v->a[80687] = 1;
	v->a[80688] = aux_sym_number_token2;
	v->a[80689] = actions(807);
	v->a[80690] = 1;
	v->a[80691] = anon_sym_DOLLAR_LBRACE;
	v->a[80692] = actions(809);
	v->a[80693] = 1;
	v->a[80694] = anon_sym_DOLLAR_LPAREN;
	v->a[80695] = actions(811);
	v->a[80696] = 1;
	v->a[80697] = anon_sym_BQUOTE;
	v->a[80698] = actions(795);
	v->a[80699] = 2;
	small_parse_table_4035(v);
}

/* EOF small_parse_table_806.c */
