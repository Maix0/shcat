/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1356.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6780(t_small_parse_table_array *v)
{
	v->a[135600] = sym_expansion;
	v->a[135601] = sym_command_substitution;
	v->a[135602] = 11;
	v->a[135603] = actions(3);
	v->a[135604] = 1;
	v->a[135605] = sym_comment;
	v->a[135606] = actions(7760);
	v->a[135607] = 1;
	v->a[135608] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[135609] = actions(7766);
	v->a[135610] = 1;
	v->a[135611] = sym_string_content;
	v->a[135612] = actions(7768);
	v->a[135613] = 1;
	v->a[135614] = anon_sym_DOLLAR_LBRACE;
	v->a[135615] = actions(7770);
	v->a[135616] = 1;
	v->a[135617] = anon_sym_DOLLAR_LPAREN;
	v->a[135618] = actions(7772);
	v->a[135619] = 1;
	small_parse_table_6781(v);
}

void	small_parse_table_6781(t_small_parse_table_array *v)
{
	v->a[135620] = anon_sym_BQUOTE;
	v->a[135621] = actions(7774);
	v->a[135622] = 1;
	v->a[135623] = anon_sym_DOLLAR_BQUOTE;
	v->a[135624] = actions(7862);
	v->a[135625] = 1;
	v->a[135626] = anon_sym_DOLLAR;
	v->a[135627] = actions(7864);
	v->a[135628] = 1;
	v->a[135629] = anon_sym_DQUOTE;
	v->a[135630] = state(3026);
	v->a[135631] = 1;
	v->a[135632] = aux_sym_string_repeat1;
	v->a[135633] = state(3218);
	v->a[135634] = 4;
	v->a[135635] = sym_arithmetic_expansion;
	v->a[135636] = sym_simple_expansion;
	v->a[135637] = sym_expansion;
	v->a[135638] = sym_command_substitution;
	v->a[135639] = 11;
	small_parse_table_6782(v);
}

void	small_parse_table_6782(t_small_parse_table_array *v)
{
	v->a[135640] = actions(3);
	v->a[135641] = 1;
	v->a[135642] = sym_comment;
	v->a[135643] = actions(7586);
	v->a[135644] = 1;
	v->a[135645] = anon_sym_DQUOTE;
	v->a[135646] = actions(7760);
	v->a[135647] = 1;
	v->a[135648] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[135649] = actions(7766);
	v->a[135650] = 1;
	v->a[135651] = sym_string_content;
	v->a[135652] = actions(7768);
	v->a[135653] = 1;
	v->a[135654] = anon_sym_DOLLAR_LBRACE;
	v->a[135655] = actions(7770);
	v->a[135656] = 1;
	v->a[135657] = anon_sym_DOLLAR_LPAREN;
	v->a[135658] = actions(7772);
	v->a[135659] = 1;
	small_parse_table_6783(v);
}

void	small_parse_table_6783(t_small_parse_table_array *v)
{
	v->a[135660] = anon_sym_BQUOTE;
	v->a[135661] = actions(7774);
	v->a[135662] = 1;
	v->a[135663] = anon_sym_DOLLAR_BQUOTE;
	v->a[135664] = actions(7866);
	v->a[135665] = 1;
	v->a[135666] = anon_sym_DOLLAR;
	v->a[135667] = state(3061);
	v->a[135668] = 1;
	v->a[135669] = aux_sym_string_repeat1;
	v->a[135670] = state(3218);
	v->a[135671] = 4;
	v->a[135672] = sym_arithmetic_expansion;
	v->a[135673] = sym_simple_expansion;
	v->a[135674] = sym_expansion;
	v->a[135675] = sym_command_substitution;
	v->a[135676] = 7;
	v->a[135677] = actions(3);
	v->a[135678] = 1;
	v->a[135679] = sym_comment;
	small_parse_table_6784(v);
}

void	small_parse_table_6784(t_small_parse_table_array *v)
{
	v->a[135680] = actions(7754);
	v->a[135681] = 1;
	v->a[135682] = aux_sym__simple_variable_name_token1;
	v->a[135683] = actions(7758);
	v->a[135684] = 1;
	v->a[135685] = sym_variable_name;
	v->a[135686] = actions(7868);
	v->a[135687] = 1;
	v->a[135688] = anon_sym_RBRACE3;
	v->a[135689] = state(3866);
	v->a[135690] = 1;
	v->a[135691] = sym__expansion_body;
	v->a[135692] = actions(7756);
	v->a[135693] = 2;
	v->a[135694] = anon_sym_0;
	v->a[135695] = anon_sym__;
	v->a[135696] = actions(7750);
	v->a[135697] = 7;
	v->a[135698] = anon_sym_BANG;
	v->a[135699] = anon_sym_DASH;
	small_parse_table_6785(v);
}

/* EOF small_parse_table_1356.c */
