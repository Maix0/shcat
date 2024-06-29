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
	v->a[88600] = 7;
	v->a[88601] = anon_sym_BANG;
	v->a[88602] = anon_sym_DASH;
	v->a[88603] = anon_sym_STAR;
	v->a[88604] = anon_sym_QMARK;
	v->a[88605] = anon_sym_DOLLAR;
	v->a[88606] = anon_sym_POUND;
	v->a[88607] = anon_sym_AT;
	v->a[88608] = 10;
	v->a[88609] = actions(3);
	v->a[88610] = 1;
	v->a[88611] = sym_comment;
	v->a[88612] = actions(3414);
	v->a[88613] = 1;
	v->a[88614] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88615] = actions(3416);
	v->a[88616] = 1;
	v->a[88617] = anon_sym_DOLLAR;
	v->a[88618] = actions(3418);
	v->a[88619] = 1;
	small_parse_table_4431(v);
}

void	small_parse_table_4431(t_small_parse_table_array *v)
{
	v->a[88620] = anon_sym_DQUOTE;
	v->a[88621] = actions(3420);
	v->a[88622] = 1;
	v->a[88623] = sym_string_content;
	v->a[88624] = actions(3422);
	v->a[88625] = 1;
	v->a[88626] = anon_sym_DOLLAR_LBRACE;
	v->a[88627] = actions(3424);
	v->a[88628] = 1;
	v->a[88629] = anon_sym_DOLLAR_LPAREN;
	v->a[88630] = actions(3426);
	v->a[88631] = 1;
	v->a[88632] = anon_sym_BQUOTE;
	v->a[88633] = state(1874);
	v->a[88634] = 1;
	v->a[88635] = aux_sym_string_repeat1;
	v->a[88636] = state(1963);
	v->a[88637] = 4;
	v->a[88638] = sym_arithmetic_expansion;
	v->a[88639] = sym_simple_expansion;
	small_parse_table_4432(v);
}

void	small_parse_table_4432(t_small_parse_table_array *v)
{
	v->a[88640] = sym_expansion;
	v->a[88641] = sym_command_substitution;
	v->a[88642] = 4;
	v->a[88643] = actions(3);
	v->a[88644] = 1;
	v->a[88645] = sym_comment;
	v->a[88646] = actions(3432);
	v->a[88647] = 1;
	v->a[88648] = sym_variable_name;
	v->a[88649] = actions(3430);
	v->a[88650] = 2;
	v->a[88651] = aux_sym__simple_variable_name_token1;
	v->a[88652] = aux_sym__multiline_variable_name_token1;
	v->a[88653] = actions(3428);
	v->a[88654] = 9;
	v->a[88655] = anon_sym_BANG;
	v->a[88656] = anon_sym_DASH;
	v->a[88657] = anon_sym_STAR;
	v->a[88658] = anon_sym_QMARK;
	v->a[88659] = anon_sym_DOLLAR;
	small_parse_table_4433(v);
}

void	small_parse_table_4433(t_small_parse_table_array *v)
{
	v->a[88660] = anon_sym_POUND;
	v->a[88661] = anon_sym_AT;
	v->a[88662] = anon_sym_0;
	v->a[88663] = anon_sym__;
	v->a[88664] = 6;
	v->a[88665] = actions(1074);
	v->a[88666] = 1;
	v->a[88667] = sym_comment;
	v->a[88668] = actions(3440);
	v->a[88669] = 1;
	v->a[88670] = anon_sym_LT_LT;
	v->a[88671] = actions(3442);
	v->a[88672] = 1;
	v->a[88673] = anon_sym_LT_LT_DASH;
	v->a[88674] = actions(3438);
	v->a[88675] = 2;
	v->a[88676] = anon_sym_LT_AMP_DASH;
	v->a[88677] = anon_sym_GT_AMP_DASH;
	v->a[88678] = actions(3436);
	v->a[88679] = 3;
	small_parse_table_4434(v);
}

void	small_parse_table_4434(t_small_parse_table_array *v)
{
	v->a[88680] = anon_sym_GT_GT;
	v->a[88681] = anon_sym_AMP_GT_GT;
	v->a[88682] = anon_sym_GT_PIPE;
	v->a[88683] = actions(3434);
	v->a[88684] = 5;
	v->a[88685] = anon_sym_LT;
	v->a[88686] = anon_sym_GT;
	v->a[88687] = anon_sym_AMP_GT;
	v->a[88688] = anon_sym_LT_AMP;
	v->a[88689] = anon_sym_GT_AMP;
	v->a[88690] = 4;
	v->a[88691] = actions(3);
	v->a[88692] = 1;
	v->a[88693] = sym_comment;
	v->a[88694] = actions(393);
	v->a[88695] = 1;
	v->a[88696] = sym_variable_name;
	v->a[88697] = actions(391);
	v->a[88698] = 2;
	v->a[88699] = aux_sym__simple_variable_name_token1;
	small_parse_table_4435(v);
}

/* EOF small_parse_table_886.c */
