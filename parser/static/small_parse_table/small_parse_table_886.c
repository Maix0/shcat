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
	v->a[88600] = anon_sym_esac;
	v->a[88601] = actions(3708);
	v->a[88602] = 1;
	v->a[88603] = sym_extglob_pattern;
	v->a[88604] = actions(3704);
	v->a[88605] = 10;
	v->a[88606] = anon_sym_LPAREN;
	v->a[88607] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88608] = anon_sym_DOLLAR;
	v->a[88609] = anon_sym_DQUOTE;
	v->a[88610] = sym_raw_string;
	v->a[88611] = sym_number;
	v->a[88612] = anon_sym_DOLLAR_LBRACE;
	v->a[88613] = anon_sym_DOLLAR_LPAREN;
	v->a[88614] = anon_sym_BQUOTE;
	v->a[88615] = sym_word;
	v->a[88616] = 4;
	v->a[88617] = actions(3);
	v->a[88618] = 1;
	v->a[88619] = sym_comment;
	small_parse_table_4431(v);
}

void	small_parse_table_4431(t_small_parse_table_array *v)
{
	v->a[88620] = actions(1449);
	v->a[88621] = 1;
	v->a[88622] = sym_variable_name;
	v->a[88623] = actions(1447);
	v->a[88624] = 2;
	v->a[88625] = aux_sym__simple_variable_name_token1;
	v->a[88626] = aux_sym__multiline_variable_name_token1;
	v->a[88627] = actions(1445);
	v->a[88628] = 9;
	v->a[88629] = anon_sym_BANG;
	v->a[88630] = anon_sym_DASH;
	v->a[88631] = anon_sym_STAR;
	v->a[88632] = anon_sym_QMARK;
	v->a[88633] = anon_sym_DOLLAR;
	v->a[88634] = anon_sym_POUND;
	v->a[88635] = anon_sym_AT;
	v->a[88636] = anon_sym_0;
	v->a[88637] = anon_sym__;
	v->a[88638] = 10;
	v->a[88639] = actions(3);
	small_parse_table_4432(v);
}

void	small_parse_table_4432(t_small_parse_table_array *v)
{
	v->a[88640] = 1;
	v->a[88641] = sym_comment;
	v->a[88642] = actions(3414);
	v->a[88643] = 1;
	v->a[88644] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88645] = actions(3420);
	v->a[88646] = 1;
	v->a[88647] = sym_string_content;
	v->a[88648] = actions(3422);
	v->a[88649] = 1;
	v->a[88650] = anon_sym_DOLLAR_LBRACE;
	v->a[88651] = actions(3424);
	v->a[88652] = 1;
	v->a[88653] = anon_sym_DOLLAR_LPAREN;
	v->a[88654] = actions(3426);
	v->a[88655] = 1;
	v->a[88656] = anon_sym_BQUOTE;
	v->a[88657] = actions(3710);
	v->a[88658] = 1;
	v->a[88659] = anon_sym_DOLLAR;
	small_parse_table_4433(v);
}

void	small_parse_table_4433(t_small_parse_table_array *v)
{
	v->a[88660] = actions(3712);
	v->a[88661] = 1;
	v->a[88662] = anon_sym_DQUOTE;
	v->a[88663] = state(1883);
	v->a[88664] = 1;
	v->a[88665] = aux_sym_string_repeat1;
	v->a[88666] = state(1959);
	v->a[88667] = 4;
	v->a[88668] = sym_arithmetic_expansion;
	v->a[88669] = sym_simple_expansion;
	v->a[88670] = sym_expansion;
	v->a[88671] = sym_command_substitution;
	v->a[88672] = 4;
	v->a[88673] = actions(3);
	v->a[88674] = 1;
	v->a[88675] = sym_comment;
	v->a[88676] = actions(933);
	v->a[88677] = 1;
	v->a[88678] = sym_variable_name;
	v->a[88679] = actions(931);
	small_parse_table_4434(v);
}

void	small_parse_table_4434(t_small_parse_table_array *v)
{
	v->a[88680] = 2;
	v->a[88681] = aux_sym__simple_variable_name_token1;
	v->a[88682] = aux_sym__multiline_variable_name_token1;
	v->a[88683] = actions(929);
	v->a[88684] = 9;
	v->a[88685] = anon_sym_BANG;
	v->a[88686] = anon_sym_DASH;
	v->a[88687] = anon_sym_STAR;
	v->a[88688] = anon_sym_QMARK;
	v->a[88689] = anon_sym_DOLLAR;
	v->a[88690] = anon_sym_POUND;
	v->a[88691] = anon_sym_AT;
	v->a[88692] = anon_sym_0;
	v->a[88693] = anon_sym__;
	v->a[88694] = 10;
	v->a[88695] = actions(3);
	v->a[88696] = 1;
	v->a[88697] = sym_comment;
	v->a[88698] = actions(3414);
	v->a[88699] = 1;
	small_parse_table_4435(v);
}

/* EOF small_parse_table_886.c */
