/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_756.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3780(t_small_parse_table_array *v)
{
	v->a[75600] = actions(2133);
	v->a[75601] = 1;
	v->a[75602] = anon_sym_BQUOTE;
	v->a[75603] = actions(2135);
	v->a[75604] = 1;
	v->a[75605] = sym_extglob_pattern;
	v->a[75606] = actions(3052);
	v->a[75607] = 2;
	v->a[75608] = sym_raw_string;
	v->a[75609] = sym_word;
	v->a[75610] = state(2020);
	v->a[75611] = 2;
	v->a[75612] = sym_concatenation;
	v->a[75613] = sym__extglob_blob;
	v->a[75614] = state(1892);
	v->a[75615] = 6;
	v->a[75616] = sym_arithmetic_expansion;
	v->a[75617] = sym_string;
	v->a[75618] = sym_number;
	v->a[75619] = sym_simple_expansion;
	small_parse_table_3781(v);
}

void	small_parse_table_3781(t_small_parse_table_array *v)
{
	v->a[75620] = sym_expansion;
	v->a[75621] = sym_command_substitution;
	v->a[75622] = 3;
	v->a[75623] = actions(1404);
	v->a[75624] = 1;
	v->a[75625] = sym_comment;
	v->a[75626] = actions(1327);
	v->a[75627] = 7;
	v->a[75628] = anon_sym_PIPE;
	v->a[75629] = anon_sym_LT;
	v->a[75630] = anon_sym_GT;
	v->a[75631] = anon_sym_AMP_GT;
	v->a[75632] = anon_sym_LT_AMP;
	v->a[75633] = anon_sym_GT_AMP;
	v->a[75634] = anon_sym_LT_LT;
	v->a[75635] = actions(1329);
	v->a[75636] = 12;
	v->a[75637] = sym_file_descriptor;
	v->a[75638] = sym__concat;
	v->a[75639] = sym_variable_name;
	small_parse_table_3782(v);
}

void	small_parse_table_3782(t_small_parse_table_array *v)
{
	v->a[75640] = anon_sym_AMP_AMP;
	v->a[75641] = anon_sym_PIPE_PIPE;
	v->a[75642] = anon_sym_GT_GT;
	v->a[75643] = anon_sym_AMP_GT_GT;
	v->a[75644] = anon_sym_GT_PIPE;
	v->a[75645] = anon_sym_LT_AMP_DASH;
	v->a[75646] = anon_sym_GT_AMP_DASH;
	v->a[75647] = anon_sym_LT_LT_DASH;
	v->a[75648] = aux_sym_concatenation_token1;
	v->a[75649] = 14;
	v->a[75650] = actions(3);
	v->a[75651] = 1;
	v->a[75652] = sym_comment;
	v->a[75653] = actions(2905);
	v->a[75654] = 1;
	v->a[75655] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75656] = actions(2907);
	v->a[75657] = 1;
	v->a[75658] = anon_sym_DOLLAR;
	v->a[75659] = actions(2909);
	small_parse_table_3783(v);
}

void	small_parse_table_3783(t_small_parse_table_array *v)
{
	v->a[75660] = 1;
	v->a[75661] = anon_sym_DQUOTE;
	v->a[75662] = actions(2911);
	v->a[75663] = 1;
	v->a[75664] = aux_sym_number_token1;
	v->a[75665] = actions(2913);
	v->a[75666] = 1;
	v->a[75667] = aux_sym_number_token2;
	v->a[75668] = actions(2915);
	v->a[75669] = 1;
	v->a[75670] = anon_sym_DOLLAR_LBRACE;
	v->a[75671] = actions(2917);
	v->a[75672] = 1;
	v->a[75673] = anon_sym_DOLLAR_LPAREN;
	v->a[75674] = actions(2919);
	v->a[75675] = 1;
	v->a[75676] = anon_sym_BQUOTE;
	v->a[75677] = actions(2921);
	v->a[75678] = 1;
	v->a[75679] = sym__comment_word;
	small_parse_table_3784(v);
}

void	small_parse_table_3784(t_small_parse_table_array *v)
{
	v->a[75680] = actions(2923);
	v->a[75681] = 1;
	v->a[75682] = sym__empty_value;
	v->a[75683] = state(744);
	v->a[75684] = 1;
	v->a[75685] = sym_concatenation;
	v->a[75686] = actions(3054);
	v->a[75687] = 2;
	v->a[75688] = sym_raw_string;
	v->a[75689] = sym_word;
	v->a[75690] = state(762);
	v->a[75691] = 6;
	v->a[75692] = sym_arithmetic_expansion;
	v->a[75693] = sym_string;
	v->a[75694] = sym_number;
	v->a[75695] = sym_simple_expansion;
	v->a[75696] = sym_expansion;
	v->a[75697] = sym_command_substitution;
	v->a[75698] = 14;
	v->a[75699] = actions(3);
	small_parse_table_3785(v);
}

/* EOF small_parse_table_756.c */
