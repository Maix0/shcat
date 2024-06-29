/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_916.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4580(t_small_parse_table_array *v)
{
	v->a[91600] = actions(3426);
	v->a[91601] = 1;
	v->a[91602] = anon_sym_BQUOTE;
	v->a[91603] = actions(3782);
	v->a[91604] = 1;
	v->a[91605] = anon_sym_DOLLAR;
	v->a[91606] = actions(3784);
	v->a[91607] = 1;
	v->a[91608] = anon_sym_DQUOTE;
	v->a[91609] = state(1863);
	v->a[91610] = 1;
	v->a[91611] = aux_sym_string_repeat1;
	v->a[91612] = state(1963);
	v->a[91613] = 4;
	v->a[91614] = sym_arithmetic_expansion;
	v->a[91615] = sym_simple_expansion;
	v->a[91616] = sym_expansion;
	v->a[91617] = sym_command_substitution;
	v->a[91618] = 10;
	v->a[91619] = actions(3);
	small_parse_table_4581(v);
}

void	small_parse_table_4581(t_small_parse_table_array *v)
{
	v->a[91620] = 1;
	v->a[91621] = sym_comment;
	v->a[91622] = actions(3414);
	v->a[91623] = 1;
	v->a[91624] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[91625] = actions(3420);
	v->a[91626] = 1;
	v->a[91627] = sym_string_content;
	v->a[91628] = actions(3422);
	v->a[91629] = 1;
	v->a[91630] = anon_sym_DOLLAR_LBRACE;
	v->a[91631] = actions(3424);
	v->a[91632] = 1;
	v->a[91633] = anon_sym_DOLLAR_LPAREN;
	v->a[91634] = actions(3426);
	v->a[91635] = 1;
	v->a[91636] = anon_sym_BQUOTE;
	v->a[91637] = actions(3786);
	v->a[91638] = 1;
	v->a[91639] = anon_sym_DOLLAR;
	small_parse_table_4582(v);
}

void	small_parse_table_4582(t_small_parse_table_array *v)
{
	v->a[91640] = actions(3788);
	v->a[91641] = 1;
	v->a[91642] = anon_sym_DQUOTE;
	v->a[91643] = state(1863);
	v->a[91644] = 1;
	v->a[91645] = aux_sym_string_repeat1;
	v->a[91646] = state(1963);
	v->a[91647] = 4;
	v->a[91648] = sym_arithmetic_expansion;
	v->a[91649] = sym_simple_expansion;
	v->a[91650] = sym_expansion;
	v->a[91651] = sym_command_substitution;
	v->a[91652] = 10;
	v->a[91653] = actions(3);
	v->a[91654] = 1;
	v->a[91655] = sym_comment;
	v->a[91656] = actions(3414);
	v->a[91657] = 1;
	v->a[91658] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[91659] = actions(3420);
	small_parse_table_4583(v);
}

void	small_parse_table_4583(t_small_parse_table_array *v)
{
	v->a[91660] = 1;
	v->a[91661] = sym_string_content;
	v->a[91662] = actions(3422);
	v->a[91663] = 1;
	v->a[91664] = anon_sym_DOLLAR_LBRACE;
	v->a[91665] = actions(3424);
	v->a[91666] = 1;
	v->a[91667] = anon_sym_DOLLAR_LPAREN;
	v->a[91668] = actions(3426);
	v->a[91669] = 1;
	v->a[91670] = anon_sym_BQUOTE;
	v->a[91671] = actions(3790);
	v->a[91672] = 1;
	v->a[91673] = anon_sym_DOLLAR;
	v->a[91674] = actions(3792);
	v->a[91675] = 1;
	v->a[91676] = anon_sym_DQUOTE;
	v->a[91677] = state(1907);
	v->a[91678] = 1;
	v->a[91679] = aux_sym_string_repeat1;
	small_parse_table_4584(v);
}

void	small_parse_table_4584(t_small_parse_table_array *v)
{
	v->a[91680] = state(1963);
	v->a[91681] = 4;
	v->a[91682] = sym_arithmetic_expansion;
	v->a[91683] = sym_simple_expansion;
	v->a[91684] = sym_expansion;
	v->a[91685] = sym_command_substitution;
	v->a[91686] = 4;
	v->a[91687] = actions(3);
	v->a[91688] = 1;
	v->a[91689] = sym_comment;
	v->a[91690] = actions(1408);
	v->a[91691] = 1;
	v->a[91692] = sym_variable_name;
	v->a[91693] = actions(1406);
	v->a[91694] = 2;
	v->a[91695] = aux_sym__simple_variable_name_token1;
	v->a[91696] = aux_sym__multiline_variable_name_token1;
	v->a[91697] = actions(1404);
	v->a[91698] = 9;
	v->a[91699] = anon_sym_BANG;
	small_parse_table_4585(v);
}

/* EOF small_parse_table_916.c */
