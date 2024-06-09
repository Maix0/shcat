/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_876.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4380(t_small_parse_table_array *v)
{
	v->a[87600] = actions(509);
	v->a[87601] = 9;
	v->a[87602] = anon_sym_BANG;
	v->a[87603] = anon_sym_DASH;
	v->a[87604] = anon_sym_STAR;
	v->a[87605] = anon_sym_QMARK;
	v->a[87606] = anon_sym_DOLLAR;
	v->a[87607] = anon_sym_POUND;
	v->a[87608] = anon_sym_AT;
	v->a[87609] = anon_sym_0;
	v->a[87610] = anon_sym__;
	v->a[87611] = 10;
	v->a[87612] = actions(3);
	v->a[87613] = 1;
	v->a[87614] = sym_comment;
	v->a[87615] = actions(3712);
	v->a[87616] = 1;
	v->a[87617] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87618] = actions(3716);
	v->a[87619] = 1;
	small_parse_table_4381(v);
}

void	small_parse_table_4381(t_small_parse_table_array *v)
{
	v->a[87620] = sym_string_content;
	v->a[87621] = actions(3718);
	v->a[87622] = 1;
	v->a[87623] = anon_sym_DOLLAR_LBRACE;
	v->a[87624] = actions(3720);
	v->a[87625] = 1;
	v->a[87626] = anon_sym_DOLLAR_LPAREN;
	v->a[87627] = actions(3722);
	v->a[87628] = 1;
	v->a[87629] = anon_sym_BQUOTE;
	v->a[87630] = actions(3734);
	v->a[87631] = 1;
	v->a[87632] = anon_sym_DOLLAR;
	v->a[87633] = actions(3736);
	v->a[87634] = 1;
	v->a[87635] = anon_sym_DQUOTE;
	v->a[87636] = state(1760);
	v->a[87637] = 1;
	v->a[87638] = aux_sym_string_repeat1;
	v->a[87639] = state(1869);
	small_parse_table_4382(v);
}

void	small_parse_table_4382(t_small_parse_table_array *v)
{
	v->a[87640] = 4;
	v->a[87641] = sym_arithmetic_expansion;
	v->a[87642] = sym_simple_expansion;
	v->a[87643] = sym_expansion;
	v->a[87644] = sym_command_substitution;
	v->a[87645] = 10;
	v->a[87646] = actions(3);
	v->a[87647] = 1;
	v->a[87648] = sym_comment;
	v->a[87649] = actions(3520);
	v->a[87650] = 1;
	v->a[87651] = anon_sym_DQUOTE;
	v->a[87652] = actions(3712);
	v->a[87653] = 1;
	v->a[87654] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87655] = actions(3716);
	v->a[87656] = 1;
	v->a[87657] = sym_string_content;
	v->a[87658] = actions(3718);
	v->a[87659] = 1;
	small_parse_table_4383(v);
}

void	small_parse_table_4383(t_small_parse_table_array *v)
{
	v->a[87660] = anon_sym_DOLLAR_LBRACE;
	v->a[87661] = actions(3720);
	v->a[87662] = 1;
	v->a[87663] = anon_sym_DOLLAR_LPAREN;
	v->a[87664] = actions(3722);
	v->a[87665] = 1;
	v->a[87666] = anon_sym_BQUOTE;
	v->a[87667] = actions(3738);
	v->a[87668] = 1;
	v->a[87669] = anon_sym_DOLLAR;
	v->a[87670] = state(1738);
	v->a[87671] = 1;
	v->a[87672] = aux_sym_string_repeat1;
	v->a[87673] = state(1869);
	v->a[87674] = 4;
	v->a[87675] = sym_arithmetic_expansion;
	v->a[87676] = sym_simple_expansion;
	v->a[87677] = sym_expansion;
	v->a[87678] = sym_command_substitution;
	v->a[87679] = 3;
	small_parse_table_4384(v);
}

void	small_parse_table_4384(t_small_parse_table_array *v)
{
	v->a[87680] = actions(3);
	v->a[87681] = 1;
	v->a[87682] = sym_comment;
	v->a[87683] = actions(3706);
	v->a[87684] = 1;
	v->a[87685] = sym_extglob_pattern;
	v->a[87686] = actions(3702);
	v->a[87687] = 11;
	v->a[87688] = anon_sym_LPAREN;
	v->a[87689] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87690] = anon_sym_DOLLAR;
	v->a[87691] = anon_sym_DQUOTE;
	v->a[87692] = sym_raw_string;
	v->a[87693] = aux_sym_number_token1;
	v->a[87694] = aux_sym_number_token2;
	v->a[87695] = anon_sym_DOLLAR_LBRACE;
	v->a[87696] = anon_sym_DOLLAR_LPAREN;
	v->a[87697] = anon_sym_BQUOTE;
	v->a[87698] = sym_word;
	v->a[87699] = 4;
	small_parse_table_4385(v);
}

/* EOF small_parse_table_876.c */
