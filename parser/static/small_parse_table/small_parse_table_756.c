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
	v->a[75600] = actions(2832);
	v->a[75601] = 1;
	v->a[75602] = sym__comment_word;
	v->a[75603] = actions(2834);
	v->a[75604] = 1;
	v->a[75605] = sym__empty_value;
	v->a[75606] = state(1183);
	v->a[75607] = 1;
	v->a[75608] = sym_concatenation;
	v->a[75609] = actions(2828);
	v->a[75610] = 3;
	v->a[75611] = sym_raw_string;
	v->a[75612] = sym_number;
	v->a[75613] = sym_word;
	v->a[75614] = state(1079);
	v->a[75615] = 5;
	v->a[75616] = sym_arithmetic_expansion;
	v->a[75617] = sym_string;
	v->a[75618] = sym_simple_expansion;
	v->a[75619] = sym_expansion;
	small_parse_table_3781(v);
}

void	small_parse_table_3781(t_small_parse_table_array *v)
{
	v->a[75620] = sym_command_substitution;
	v->a[75621] = 10;
	v->a[75622] = actions(3);
	v->a[75623] = 1;
	v->a[75624] = sym_comment;
	v->a[75625] = actions(497);
	v->a[75626] = 1;
	v->a[75627] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75628] = actions(499);
	v->a[75629] = 1;
	v->a[75630] = anon_sym_DOLLAR;
	v->a[75631] = actions(501);
	v->a[75632] = 1;
	v->a[75633] = anon_sym_DQUOTE;
	v->a[75634] = actions(503);
	v->a[75635] = 1;
	v->a[75636] = anon_sym_DOLLAR_LBRACE;
	v->a[75637] = actions(505);
	v->a[75638] = 1;
	v->a[75639] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3782(v);
}

void	small_parse_table_3782(t_small_parse_table_array *v)
{
	v->a[75640] = actions(507);
	v->a[75641] = 1;
	v->a[75642] = anon_sym_BQUOTE;
	v->a[75643] = actions(2838);
	v->a[75644] = 1;
	v->a[75645] = sym__bare_dollar;
	v->a[75646] = actions(2836);
	v->a[75647] = 5;
	v->a[75648] = aux_sym_concatenation_token1;
	v->a[75649] = sym_raw_string;
	v->a[75650] = sym_number;
	v->a[75651] = sym__comment_word;
	v->a[75652] = sym_word;
	v->a[75653] = state(499);
	v->a[75654] = 5;
	v->a[75655] = sym_arithmetic_expansion;
	v->a[75656] = sym_string;
	v->a[75657] = sym_simple_expansion;
	v->a[75658] = sym_expansion;
	v->a[75659] = sym_command_substitution;
	small_parse_table_3783(v);
}

void	small_parse_table_3783(t_small_parse_table_array *v)
{
	v->a[75660] = 3;
	v->a[75661] = actions(870);
	v->a[75662] = 1;
	v->a[75663] = sym_comment;
	v->a[75664] = actions(1266);
	v->a[75665] = 6;
	v->a[75666] = anon_sym_PIPE;
	v->a[75667] = anon_sym_LT;
	v->a[75668] = anon_sym_GT;
	v->a[75669] = anon_sym_LT_AMP;
	v->a[75670] = anon_sym_GT_AMP;
	v->a[75671] = anon_sym_LT_LT;
	v->a[75672] = actions(1264);
	v->a[75673] = 11;
	v->a[75674] = sym_file_descriptor;
	v->a[75675] = sym__concat;
	v->a[75676] = sym_variable_name;
	v->a[75677] = anon_sym_AMP_AMP;
	v->a[75678] = anon_sym_PIPE_PIPE;
	v->a[75679] = anon_sym_GT_GT;
	small_parse_table_3784(v);
}

void	small_parse_table_3784(t_small_parse_table_array *v)
{
	v->a[75680] = anon_sym_GT_PIPE;
	v->a[75681] = anon_sym_LT_AMP_DASH;
	v->a[75682] = anon_sym_GT_AMP_DASH;
	v->a[75683] = anon_sym_LT_LT_DASH;
	v->a[75684] = aux_sym_concatenation_token1;
	v->a[75685] = 8;
	v->a[75686] = actions(3);
	v->a[75687] = 1;
	v->a[75688] = sym_comment;
	v->a[75689] = actions(2544);
	v->a[75690] = 1;
	v->a[75691] = aux_sym_heredoc_redirect_token1;
	v->a[75692] = actions(2546);
	v->a[75693] = 1;
	v->a[75694] = sym_file_descriptor;
	v->a[75695] = actions(754);
	v->a[75696] = 2;
	v->a[75697] = anon_sym_LT_LT;
	v->a[75698] = anon_sym_LT_LT_DASH;
	v->a[75699] = actions(1496);
	small_parse_table_3785(v);
}

/* EOF small_parse_table_756.c */
