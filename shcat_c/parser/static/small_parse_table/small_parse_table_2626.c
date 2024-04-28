/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2626.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13130(t_small_parse_table_array *v)
{
	v->a[262600] = anon_sym_GT_GT;
	v->a[262601] = anon_sym_AMP_GT;
	v->a[262602] = anon_sym_AMP_GT_GT;
	v->a[262603] = anon_sym_LT_AMP;
	v->a[262604] = anon_sym_GT_AMP;
	v->a[262605] = anon_sym_GT_PIPE;
	v->a[262606] = 16;
	v->a[262607] = actions(3);
	v->a[262608] = 1;
	v->a[262609] = sym_comment;
	v->a[262610] = actions(11760);
	v->a[262611] = 1;
	v->a[262612] = anon_sym_BANG2;
	v->a[262613] = actions(11764);
	v->a[262614] = 1;
	v->a[262615] = anon_sym_DOLLAR_LPAREN;
	v->a[262616] = actions(11766);
	v->a[262617] = 1;
	v->a[262618] = anon_sym_BQUOTE;
	v->a[262619] = actions(11768);
	small_parse_table_13131(v);
}

void	small_parse_table_13131(t_small_parse_table_array *v)
{
	v->a[262620] = 1;
	v->a[262621] = anon_sym_DOLLAR_BQUOTE;
	v->a[262622] = actions(11770);
	v->a[262623] = 1;
	v->a[262624] = aux_sym__simple_variable_name_token1;
	v->a[262625] = actions(11772);
	v->a[262626] = 1;
	v->a[262627] = sym_variable_name;
	v->a[262628] = actions(12025);
	v->a[262629] = 1;
	v->a[262630] = anon_sym_RBRACE3;
	v->a[262631] = state(3532);
	v->a[262632] = 1;
	v->a[262633] = sym_subscript;
	v->a[262634] = state(6428);
	v->a[262635] = 1;
	v->a[262636] = aux_sym__expansion_body_repeat1;
	v->a[262637] = state(6472);
	v->a[262638] = 1;
	v->a[262639] = sym_command_substitution;
	small_parse_table_13132(v);
}

void	small_parse_table_13132(t_small_parse_table_array *v)
{
	v->a[262640] = state(7348);
	v->a[262641] = 1;
	v->a[262642] = sym__expansion_body;
	v->a[262643] = actions(11762);
	v->a[262644] = 2;
	v->a[262645] = anon_sym_POUND2;
	v->a[262646] = anon_sym_EQ2;
	v->a[262647] = actions(8050);
	v->a[262648] = 3;
	v->a[262649] = sym__external_expansion_sym_hash;
	v->a[262650] = sym__external_expansion_sym_bang;
	v->a[262651] = sym__external_expansion_sym_equal;
	v->a[262652] = actions(11754);
	v->a[262653] = 4;
	v->a[262654] = anon_sym_DASH;
	v->a[262655] = anon_sym_STAR;
	v->a[262656] = anon_sym_QMARK;
	v->a[262657] = anon_sym_AT2;
	v->a[262658] = actions(11756);
	v->a[262659] = 5;
	small_parse_table_13133(v);
}

void	small_parse_table_13133(t_small_parse_table_array *v)
{
	v->a[262660] = anon_sym_BANG;
	v->a[262661] = anon_sym_DOLLAR;
	v->a[262662] = anon_sym_POUND;
	v->a[262663] = anon_sym_0;
	v->a[262664] = anon_sym__;
	v->a[262665] = 3;
	v->a[262666] = actions(3);
	v->a[262667] = 1;
	v->a[262668] = sym_comment;
	v->a[262669] = actions(1314);
	v->a[262670] = 3;
	v->a[262671] = sym_file_descriptor;
	v->a[262672] = sym__concat;
	v->a[262673] = aux_sym_heredoc_redirect_token1;
	v->a[262674] = actions(1312);
	v->a[262675] = 22;
	v->a[262676] = anon_sym_SEMI;
	v->a[262677] = anon_sym_PIPE_PIPE;
	v->a[262678] = anon_sym_AMP_AMP;
	v->a[262679] = anon_sym_PIPE;
	small_parse_table_13134(v);
}

void	small_parse_table_13134(t_small_parse_table_array *v)
{
	v->a[262680] = anon_sym_AMP;
	v->a[262681] = anon_sym_LT;
	v->a[262682] = anon_sym_GT;
	v->a[262683] = anon_sym_LT_LT;
	v->a[262684] = anon_sym_GT_GT;
	v->a[262685] = anon_sym_SEMI_SEMI;
	v->a[262686] = anon_sym_SEMI_AMP;
	v->a[262687] = anon_sym_SEMI_SEMI_AMP;
	v->a[262688] = anon_sym_PIPE_AMP;
	v->a[262689] = anon_sym_AMP_GT;
	v->a[262690] = anon_sym_AMP_GT_GT;
	v->a[262691] = anon_sym_LT_AMP;
	v->a[262692] = anon_sym_GT_AMP;
	v->a[262693] = anon_sym_GT_PIPE;
	v->a[262694] = anon_sym_LT_AMP_DASH;
	v->a[262695] = anon_sym_GT_AMP_DASH;
	v->a[262696] = anon_sym_LT_LT_DASH;
	v->a[262697] = aux_sym_concatenation_token1;
	v->a[262698] = 6;
	v->a[262699] = actions(3);
	small_parse_table_13135(v);
}

/* EOF small_parse_table_2626.c */
