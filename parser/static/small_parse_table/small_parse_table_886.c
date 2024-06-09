/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_886.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4430(t_small_parse_table_array *v)
{
	v->a[88600] = actions(3);
	v->a[88601] = 1;
	v->a[88602] = sym_comment;
	v->a[88603] = actions(3712);
	v->a[88604] = 1;
	v->a[88605] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88606] = actions(3716);
	v->a[88607] = 1;
	v->a[88608] = sym_string_content;
	v->a[88609] = actions(3718);
	v->a[88610] = 1;
	v->a[88611] = anon_sym_DOLLAR_LBRACE;
	v->a[88612] = actions(3720);
	v->a[88613] = 1;
	v->a[88614] = anon_sym_DOLLAR_LPAREN;
	v->a[88615] = actions(3722);
	v->a[88616] = 1;
	v->a[88617] = anon_sym_BQUOTE;
	v->a[88618] = actions(3808);
	v->a[88619] = 1;
	small_parse_table_4431(v);
}

void	small_parse_table_4431(t_small_parse_table_array *v)
{
	v->a[88620] = anon_sym_DOLLAR;
	v->a[88621] = actions(3810);
	v->a[88622] = 1;
	v->a[88623] = anon_sym_DQUOTE;
	v->a[88624] = state(1761);
	v->a[88625] = 1;
	v->a[88626] = aux_sym_string_repeat1;
	v->a[88627] = state(1869);
	v->a[88628] = 4;
	v->a[88629] = sym_arithmetic_expansion;
	v->a[88630] = sym_simple_expansion;
	v->a[88631] = sym_expansion;
	v->a[88632] = sym_command_substitution;
	v->a[88633] = 10;
	v->a[88634] = actions(3);
	v->a[88635] = 1;
	v->a[88636] = sym_comment;
	v->a[88637] = actions(3490);
	v->a[88638] = 1;
	v->a[88639] = anon_sym_DQUOTE;
	small_parse_table_4432(v);
}

void	small_parse_table_4432(t_small_parse_table_array *v)
{
	v->a[88640] = actions(3712);
	v->a[88641] = 1;
	v->a[88642] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88643] = actions(3716);
	v->a[88644] = 1;
	v->a[88645] = sym_string_content;
	v->a[88646] = actions(3718);
	v->a[88647] = 1;
	v->a[88648] = anon_sym_DOLLAR_LBRACE;
	v->a[88649] = actions(3720);
	v->a[88650] = 1;
	v->a[88651] = anon_sym_DOLLAR_LPAREN;
	v->a[88652] = actions(3722);
	v->a[88653] = 1;
	v->a[88654] = anon_sym_BQUOTE;
	v->a[88655] = actions(3812);
	v->a[88656] = 1;
	v->a[88657] = anon_sym_DOLLAR;
	v->a[88658] = state(1738);
	v->a[88659] = 1;
	small_parse_table_4433(v);
}

void	small_parse_table_4433(t_small_parse_table_array *v)
{
	v->a[88660] = aux_sym_string_repeat1;
	v->a[88661] = state(1869);
	v->a[88662] = 4;
	v->a[88663] = sym_arithmetic_expansion;
	v->a[88664] = sym_simple_expansion;
	v->a[88665] = sym_expansion;
	v->a[88666] = sym_command_substitution;
	v->a[88667] = 10;
	v->a[88668] = actions(3);
	v->a[88669] = 1;
	v->a[88670] = sym_comment;
	v->a[88671] = actions(3516);
	v->a[88672] = 1;
	v->a[88673] = anon_sym_DQUOTE;
	v->a[88674] = actions(3712);
	v->a[88675] = 1;
	v->a[88676] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88677] = actions(3716);
	v->a[88678] = 1;
	v->a[88679] = sym_string_content;
	small_parse_table_4434(v);
}

void	small_parse_table_4434(t_small_parse_table_array *v)
{
	v->a[88680] = actions(3718);
	v->a[88681] = 1;
	v->a[88682] = anon_sym_DOLLAR_LBRACE;
	v->a[88683] = actions(3720);
	v->a[88684] = 1;
	v->a[88685] = anon_sym_DOLLAR_LPAREN;
	v->a[88686] = actions(3722);
	v->a[88687] = 1;
	v->a[88688] = anon_sym_BQUOTE;
	v->a[88689] = actions(3814);
	v->a[88690] = 1;
	v->a[88691] = anon_sym_DOLLAR;
	v->a[88692] = state(1738);
	v->a[88693] = 1;
	v->a[88694] = aux_sym_string_repeat1;
	v->a[88695] = state(1869);
	v->a[88696] = 4;
	v->a[88697] = sym_arithmetic_expansion;
	v->a[88698] = sym_simple_expansion;
	v->a[88699] = sym_expansion;
	small_parse_table_4435(v);
}

/* EOF small_parse_table_886.c */
