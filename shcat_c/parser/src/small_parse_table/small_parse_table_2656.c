/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2656.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13280(t_small_parse_table_array *v)
{
	v->a[265600] = 1;
	v->a[265601] = anon_sym_RBRACE3;
	v->a[265602] = state(3532);
	v->a[265603] = 1;
	v->a[265604] = sym_subscript;
	v->a[265605] = state(6428);
	v->a[265606] = 1;
	v->a[265607] = aux_sym__expansion_body_repeat1;
	v->a[265608] = state(6472);
	v->a[265609] = 1;
	v->a[265610] = sym_command_substitution;
	v->a[265611] = state(6842);
	v->a[265612] = 1;
	v->a[265613] = sym__expansion_body;
	v->a[265614] = actions(11762);
	v->a[265615] = 2;
	v->a[265616] = anon_sym_POUND2;
	v->a[265617] = anon_sym_EQ2;
	v->a[265618] = actions(8050);
	v->a[265619] = 3;
	small_parse_table_13281(v);
}

void	small_parse_table_13281(t_small_parse_table_array *v)
{
	v->a[265620] = sym__external_expansion_sym_hash;
	v->a[265621] = sym__external_expansion_sym_bang;
	v->a[265622] = sym__external_expansion_sym_equal;
	v->a[265623] = actions(11754);
	v->a[265624] = 4;
	v->a[265625] = anon_sym_DASH;
	v->a[265626] = anon_sym_STAR;
	v->a[265627] = anon_sym_QMARK;
	v->a[265628] = anon_sym_AT2;
	v->a[265629] = actions(11756);
	v->a[265630] = 5;
	v->a[265631] = anon_sym_BANG;
	v->a[265632] = anon_sym_DOLLAR;
	v->a[265633] = anon_sym_POUND;
	v->a[265634] = anon_sym_0;
	v->a[265635] = anon_sym__;
	v->a[265636] = 3;
	v->a[265637] = actions(3);
	v->a[265638] = 1;
	v->a[265639] = sym_comment;
	small_parse_table_13282(v);
}

void	small_parse_table_13282(t_small_parse_table_array *v)
{
	v->a[265640] = actions(1310);
	v->a[265641] = 3;
	v->a[265642] = sym_file_descriptor;
	v->a[265643] = sym__concat;
	v->a[265644] = aux_sym_heredoc_redirect_token1;
	v->a[265645] = actions(1308);
	v->a[265646] = 22;
	v->a[265647] = anon_sym_SEMI;
	v->a[265648] = anon_sym_PIPE_PIPE;
	v->a[265649] = anon_sym_AMP_AMP;
	v->a[265650] = anon_sym_PIPE;
	v->a[265651] = anon_sym_AMP;
	v->a[265652] = anon_sym_LT;
	v->a[265653] = anon_sym_GT;
	v->a[265654] = anon_sym_LT_LT;
	v->a[265655] = anon_sym_GT_GT;
	v->a[265656] = anon_sym_SEMI_SEMI;
	v->a[265657] = anon_sym_SEMI_AMP;
	v->a[265658] = anon_sym_SEMI_SEMI_AMP;
	v->a[265659] = anon_sym_PIPE_AMP;
	small_parse_table_13283(v);
}

void	small_parse_table_13283(t_small_parse_table_array *v)
{
	v->a[265660] = anon_sym_AMP_GT;
	v->a[265661] = anon_sym_AMP_GT_GT;
	v->a[265662] = anon_sym_LT_AMP;
	v->a[265663] = anon_sym_GT_AMP;
	v->a[265664] = anon_sym_GT_PIPE;
	v->a[265665] = anon_sym_LT_AMP_DASH;
	v->a[265666] = anon_sym_GT_AMP_DASH;
	v->a[265667] = anon_sym_LT_LT_DASH;
	v->a[265668] = aux_sym_concatenation_token1;
	v->a[265669] = 16;
	v->a[265670] = actions(3);
	v->a[265671] = 1;
	v->a[265672] = sym_comment;
	v->a[265673] = actions(11760);
	v->a[265674] = 1;
	v->a[265675] = anon_sym_BANG2;
	v->a[265676] = actions(11764);
	v->a[265677] = 1;
	v->a[265678] = anon_sym_DOLLAR_LPAREN;
	v->a[265679] = actions(11766);
	small_parse_table_13284(v);
}

void	small_parse_table_13284(t_small_parse_table_array *v)
{
	v->a[265680] = 1;
	v->a[265681] = anon_sym_BQUOTE;
	v->a[265682] = actions(11768);
	v->a[265683] = 1;
	v->a[265684] = anon_sym_DOLLAR_BQUOTE;
	v->a[265685] = actions(11770);
	v->a[265686] = 1;
	v->a[265687] = aux_sym__simple_variable_name_token1;
	v->a[265688] = actions(11772);
	v->a[265689] = 1;
	v->a[265690] = sym_variable_name;
	v->a[265691] = actions(12088);
	v->a[265692] = 1;
	v->a[265693] = anon_sym_RBRACE3;
	v->a[265694] = state(3532);
	v->a[265695] = 1;
	v->a[265696] = sym_subscript;
	v->a[265697] = state(6428);
	v->a[265698] = 1;
	v->a[265699] = aux_sym__expansion_body_repeat1;
	small_parse_table_13285(v);
}

/* EOF small_parse_table_2656.c */
