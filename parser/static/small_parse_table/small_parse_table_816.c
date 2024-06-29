/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_816.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4080(t_small_parse_table_array *v)
{
	v->a[81600] = 1;
	v->a[81601] = anon_sym_DQUOTE;
	v->a[81602] = actions(2917);
	v->a[81603] = 1;
	v->a[81604] = anon_sym_DOLLAR_LBRACE;
	v->a[81605] = actions(2919);
	v->a[81606] = 1;
	v->a[81607] = anon_sym_DOLLAR_LPAREN;
	v->a[81608] = actions(2921);
	v->a[81609] = 1;
	v->a[81610] = anon_sym_BQUOTE;
	v->a[81611] = actions(2923);
	v->a[81612] = 1;
	v->a[81613] = sym__bare_dollar;
	v->a[81614] = actions(3076);
	v->a[81615] = 1;
	v->a[81616] = anon_sym_DOLLAR;
	v->a[81617] = actions(2909);
	v->a[81618] = 5;
	v->a[81619] = aux_sym_concatenation_token1;
	small_parse_table_4081(v);
}

void	small_parse_table_4081(t_small_parse_table_array *v)
{
	v->a[81620] = sym_raw_string;
	v->a[81621] = sym_number;
	v->a[81622] = sym__comment_word;
	v->a[81623] = sym_word;
	v->a[81624] = state(454);
	v->a[81625] = 5;
	v->a[81626] = sym_arithmetic_expansion;
	v->a[81627] = sym_string;
	v->a[81628] = sym_simple_expansion;
	v->a[81629] = sym_expansion;
	v->a[81630] = sym_command_substitution;
	v->a[81631] = 10;
	v->a[81632] = actions(3);
	v->a[81633] = 1;
	v->a[81634] = sym_comment;
	v->a[81635] = actions(1772);
	v->a[81636] = 1;
	v->a[81637] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81638] = actions(1774);
	v->a[81639] = 1;
	small_parse_table_4082(v);
}

void	small_parse_table_4082(t_small_parse_table_array *v)
{
	v->a[81640] = anon_sym_DOLLAR;
	v->a[81641] = actions(1776);
	v->a[81642] = 1;
	v->a[81643] = anon_sym_DQUOTE;
	v->a[81644] = actions(1778);
	v->a[81645] = 1;
	v->a[81646] = anon_sym_DOLLAR_LBRACE;
	v->a[81647] = actions(1780);
	v->a[81648] = 1;
	v->a[81649] = anon_sym_DOLLAR_LPAREN;
	v->a[81650] = actions(1782);
	v->a[81651] = 1;
	v->a[81652] = anon_sym_BQUOTE;
	v->a[81653] = actions(3080);
	v->a[81654] = 1;
	v->a[81655] = sym__bare_dollar;
	v->a[81656] = actions(3078);
	v->a[81657] = 5;
	v->a[81658] = aux_sym_concatenation_token1;
	v->a[81659] = sym_raw_string;
	small_parse_table_4083(v);
}

void	small_parse_table_4083(t_small_parse_table_array *v)
{
	v->a[81660] = sym_number;
	v->a[81661] = sym__comment_word;
	v->a[81662] = sym_word;
	v->a[81663] = state(1596);
	v->a[81664] = 5;
	v->a[81665] = sym_arithmetic_expansion;
	v->a[81666] = sym_string;
	v->a[81667] = sym_simple_expansion;
	v->a[81668] = sym_expansion;
	v->a[81669] = sym_command_substitution;
	v->a[81670] = 10;
	v->a[81671] = actions(3);
	v->a[81672] = 1;
	v->a[81673] = sym_comment;
	v->a[81674] = actions(345);
	v->a[81675] = 1;
	v->a[81676] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81677] = actions(349);
	v->a[81678] = 1;
	v->a[81679] = anon_sym_DQUOTE;
	small_parse_table_4084(v);
}

void	small_parse_table_4084(t_small_parse_table_array *v)
{
	v->a[81680] = actions(353);
	v->a[81681] = 1;
	v->a[81682] = anon_sym_DOLLAR_LBRACE;
	v->a[81683] = actions(355);
	v->a[81684] = 1;
	v->a[81685] = anon_sym_DOLLAR_LPAREN;
	v->a[81686] = actions(357);
	v->a[81687] = 1;
	v->a[81688] = anon_sym_BQUOTE;
	v->a[81689] = actions(2687);
	v->a[81690] = 1;
	v->a[81691] = sym__bare_dollar;
	v->a[81692] = actions(3082);
	v->a[81693] = 1;
	v->a[81694] = anon_sym_DOLLAR;
	v->a[81695] = actions(2685);
	v->a[81696] = 5;
	v->a[81697] = aux_sym_concatenation_token1;
	v->a[81698] = sym_raw_string;
	v->a[81699] = sym_number;
	small_parse_table_4085(v);
}

/* EOF small_parse_table_816.c */
