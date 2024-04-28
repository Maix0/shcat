/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1916.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9580(t_small_parse_table_array *v)
{
	v->a[191600] = anon_sym_COLON_DASH;
	v->a[191601] = anon_sym_PLUS3;
	v->a[191602] = anon_sym_COLON_PLUS;
	v->a[191603] = anon_sym_QMARK2;
	v->a[191604] = anon_sym_COLON_QMARK;
	v->a[191605] = 19;
	v->a[191606] = actions(3);
	v->a[191607] = 1;
	v->a[191608] = sym_comment;
	v->a[191609] = actions(8030);
	v->a[191610] = 1;
	v->a[191611] = anon_sym_SLASH;
	v->a[191612] = actions(8032);
	v->a[191613] = 1;
	v->a[191614] = anon_sym_PERCENT;
	v->a[191615] = actions(8034);
	v->a[191616] = 1;
	v->a[191617] = anon_sym_COLON;
	v->a[191618] = actions(8546);
	v->a[191619] = 1;
	small_parse_table_9581(v);
}

void	small_parse_table_9581(t_small_parse_table_array *v)
{
	v->a[191620] = anon_sym_AT;
	v->a[191621] = actions(8550);
	v->a[191622] = 1;
	v->a[191623] = anon_sym_RBRACE3;
	v->a[191624] = state(6402);
	v->a[191625] = 1;
	v->a[191626] = aux_sym__expansion_body_repeat1;
	v->a[191627] = state(6985);
	v->a[191628] = 1;
	v->a[191629] = sym__expansion_operator;
	v->a[191630] = state(6986);
	v->a[191631] = 1;
	v->a[191632] = sym__expansion_max_length;
	v->a[191633] = state(6987);
	v->a[191634] = 1;
	v->a[191635] = sym__expansion_regex_removal;
	v->a[191636] = state(6988);
	v->a[191637] = 1;
	v->a[191638] = sym__expansion_regex_replacement;
	v->a[191639] = state(6992);
	small_parse_table_9582(v);
}

void	small_parse_table_9582(t_small_parse_table_array *v)
{
	v->a[191640] = 1;
	v->a[191641] = sym__expansion_regex;
	v->a[191642] = state(6993);
	v->a[191643] = 1;
	v->a[191644] = sym__expansion_expression;
	v->a[191645] = actions(8028);
	v->a[191646] = 2;
	v->a[191647] = anon_sym_COMMA;
	v->a[191648] = anon_sym_CARET;
	v->a[191649] = actions(8048);
	v->a[191650] = 2;
	v->a[191651] = anon_sym_COMMA_COMMA;
	v->a[191652] = anon_sym_CARET_CARET;
	v->a[191653] = actions(8036);
	v->a[191654] = 3;
	v->a[191655] = sym__immediate_double_hash;
	v->a[191656] = anon_sym_POUND;
	v->a[191657] = anon_sym_PERCENT_PERCENT;
	v->a[191658] = actions(8046);
	v->a[191659] = 3;
	small_parse_table_9583(v);
}

void	small_parse_table_9583(t_small_parse_table_array *v)
{
	v->a[191660] = anon_sym_SLASH_SLASH;
	v->a[191661] = anon_sym_SLASH_POUND;
	v->a[191662] = anon_sym_SLASH_PERCENT;
	v->a[191663] = actions(8050);
	v->a[191664] = 3;
	v->a[191665] = sym__external_expansion_sym_hash;
	v->a[191666] = sym__external_expansion_sym_bang;
	v->a[191667] = sym__external_expansion_sym_equal;
	v->a[191668] = actions(8044);
	v->a[191669] = 8;
	v->a[191670] = anon_sym_EQ2;
	v->a[191671] = anon_sym_COLON_EQ;
	v->a[191672] = anon_sym_DASH3;
	v->a[191673] = anon_sym_COLON_DASH;
	v->a[191674] = anon_sym_PLUS3;
	v->a[191675] = anon_sym_COLON_PLUS;
	v->a[191676] = anon_sym_QMARK2;
	v->a[191677] = anon_sym_COLON_QMARK;
	v->a[191678] = 8;
	v->a[191679] = actions(3);
	small_parse_table_9584(v);
}

void	small_parse_table_9584(t_small_parse_table_array *v)
{
	v->a[191680] = 1;
	v->a[191681] = sym_comment;
	v->a[191682] = actions(1235);
	v->a[191683] = 1;
	v->a[191684] = sym_file_descriptor;
	v->a[191685] = actions(3791);
	v->a[191686] = 1;
	v->a[191687] = anon_sym_DQUOTE;
	v->a[191688] = actions(7444);
	v->a[191689] = 1;
	v->a[191690] = sym_variable_name;
	v->a[191691] = state(4389);
	v->a[191692] = 1;
	v->a[191693] = sym_string;
	v->a[191694] = actions(7442);
	v->a[191695] = 2;
	v->a[191696] = aux_sym__simple_variable_name_token1;
	v->a[191697] = aux_sym__multiline_variable_name_token1;
	v->a[191698] = actions(7440);
	v->a[191699] = 9;
	small_parse_table_9585(v);
}

/* EOF small_parse_table_1916.c */
