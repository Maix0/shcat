/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_306.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1530(t_small_parse_table_array *v)
{
	v->a[30600] = anon_sym_LPAREN;
	v->a[30601] = actions(59);
	v->a[30602] = 1;
	v->a[30603] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30604] = actions(61);
	v->a[30605] = 1;
	v->a[30606] = anon_sym_DOLLAR;
	v->a[30607] = actions(63);
	v->a[30608] = 1;
	v->a[30609] = anon_sym_DQUOTE;
	v->a[30610] = actions(67);
	v->a[30611] = 1;
	v->a[30612] = anon_sym_DOLLAR_LBRACE;
	v->a[30613] = actions(69);
	v->a[30614] = 1;
	v->a[30615] = anon_sym_DOLLAR_LPAREN;
	v->a[30616] = actions(71);
	v->a[30617] = 1;
	v->a[30618] = anon_sym_BQUOTE;
	v->a[30619] = actions(232);
	small_parse_table_1531(v);
}

void	small_parse_table_1531(t_small_parse_table_array *v)
{
	v->a[30620] = 1;
	v->a[30621] = sym_variable_name;
	v->a[30622] = actions(1201);
	v->a[30623] = 1;
	v->a[30624] = sym_file_descriptor;
	v->a[30625] = state(184);
	v->a[30626] = 1;
	v->a[30627] = sym_command_name;
	v->a[30628] = state(647);
	v->a[30629] = 1;
	v->a[30630] = sym_concatenation;
	v->a[30631] = state(735);
	v->a[30632] = 1;
	v->a[30633] = sym_variable_assignment;
	v->a[30634] = state(828);
	v->a[30635] = 1;
	v->a[30636] = aux_sym_command_repeat1;
	v->a[30637] = state(1328);
	v->a[30638] = 1;
	v->a[30639] = sym_command;
	small_parse_table_1532(v);
}

void	small_parse_table_1532(t_small_parse_table_array *v)
{
	v->a[30640] = state(1329);
	v->a[30641] = 1;
	v->a[30642] = sym_subshell;
	v->a[30643] = state(1477);
	v->a[30644] = 1;
	v->a[30645] = sym_file_redirect;
	v->a[30646] = actions(1199);
	v->a[30647] = 2;
	v->a[30648] = anon_sym_LT_AMP_DASH;
	v->a[30649] = anon_sym_GT_AMP_DASH;
	v->a[30650] = actions(228);
	v->a[30651] = 3;
	v->a[30652] = sym_raw_string;
	v->a[30653] = sym_number;
	v->a[30654] = sym_word;
	v->a[30655] = state(294);
	v->a[30656] = 5;
	v->a[30657] = sym_arithmetic_expansion;
	v->a[30658] = sym_string;
	v->a[30659] = sym_simple_expansion;
	small_parse_table_1533(v);
}

void	small_parse_table_1533(t_small_parse_table_array *v)
{
	v->a[30660] = sym_expansion;
	v->a[30661] = sym_command_substitution;
	v->a[30662] = actions(1197);
	v->a[30663] = 8;
	v->a[30664] = anon_sym_LT;
	v->a[30665] = anon_sym_GT;
	v->a[30666] = anon_sym_GT_GT;
	v->a[30667] = anon_sym_AMP_GT;
	v->a[30668] = anon_sym_AMP_GT_GT;
	v->a[30669] = anon_sym_LT_AMP;
	v->a[30670] = anon_sym_GT_AMP;
	v->a[30671] = anon_sym_GT_PIPE;
	v->a[30672] = 3;
	v->a[30673] = actions(1094);
	v->a[30674] = 1;
	v->a[30675] = sym_comment;
	v->a[30676] = actions(1203);
	v->a[30677] = 13;
	v->a[30678] = anon_sym_PIPE;
	v->a[30679] = anon_sym_EQ;
	small_parse_table_1534(v);
}

void	small_parse_table_1534(t_small_parse_table_array *v)
{
	v->a[30680] = anon_sym_LT;
	v->a[30681] = anon_sym_GT;
	v->a[30682] = anon_sym_GT_GT;
	v->a[30683] = anon_sym_LT_LT;
	v->a[30684] = anon_sym_CARET;
	v->a[30685] = anon_sym_AMP;
	v->a[30686] = anon_sym_PLUS;
	v->a[30687] = anon_sym_DASH;
	v->a[30688] = anon_sym_STAR;
	v->a[30689] = anon_sym_SLASH;
	v->a[30690] = anon_sym_PERCENT;
	v->a[30691] = actions(1205);
	v->a[30692] = 21;
	v->a[30693] = anon_sym_AMP_AMP;
	v->a[30694] = anon_sym_PIPE_PIPE;
	v->a[30695] = anon_sym_RPAREN_RPAREN;
	v->a[30696] = anon_sym_PLUS_EQ;
	v->a[30697] = anon_sym_DASH_EQ;
	v->a[30698] = anon_sym_STAR_EQ;
	v->a[30699] = anon_sym_SLASH_EQ;
	small_parse_table_1535(v);
}

/* EOF small_parse_table_306.c */
