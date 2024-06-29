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
	v->a[75600] = 14;
	v->a[75601] = actions(3);
	v->a[75602] = 1;
	v->a[75603] = sym_comment;
	v->a[75604] = actions(2501);
	v->a[75605] = 1;
	v->a[75606] = anon_sym_LPAREN;
	v->a[75607] = actions(2504);
	v->a[75608] = 1;
	v->a[75609] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75610] = actions(2507);
	v->a[75611] = 1;
	v->a[75612] = anon_sym_DOLLAR;
	v->a[75613] = actions(2510);
	v->a[75614] = 1;
	v->a[75615] = anon_sym_DQUOTE;
	v->a[75616] = actions(2513);
	v->a[75617] = 1;
	v->a[75618] = anon_sym_DOLLAR_LBRACE;
	v->a[75619] = actions(2516);
	small_parse_table_3781(v);
}

void	small_parse_table_3781(t_small_parse_table_array *v)
{
	v->a[75620] = 1;
	v->a[75621] = anon_sym_DOLLAR_LPAREN;
	v->a[75622] = actions(2519);
	v->a[75623] = 1;
	v->a[75624] = anon_sym_BQUOTE;
	v->a[75625] = actions(2522);
	v->a[75626] = 1;
	v->a[75627] = sym_extglob_pattern;
	v->a[75628] = state(1396);
	v->a[75629] = 1;
	v->a[75630] = aux_sym_case_statement_repeat1;
	v->a[75631] = state(1923);
	v->a[75632] = 1;
	v->a[75633] = sym_case_item;
	v->a[75634] = state(2093);
	v->a[75635] = 2;
	v->a[75636] = sym_concatenation;
	v->a[75637] = sym__extglob_blob;
	v->a[75638] = actions(2498);
	v->a[75639] = 3;
	small_parse_table_3782(v);
}

void	small_parse_table_3782(t_small_parse_table_array *v)
{
	v->a[75640] = sym_raw_string;
	v->a[75641] = sym_number;
	v->a[75642] = sym_word;
	v->a[75643] = state(1995);
	v->a[75644] = 5;
	v->a[75645] = sym_arithmetic_expansion;
	v->a[75646] = sym_string;
	v->a[75647] = sym_simple_expansion;
	v->a[75648] = sym_expansion;
	v->a[75649] = sym_command_substitution;
	v->a[75650] = 8;
	v->a[75651] = actions(3);
	v->a[75652] = 1;
	v->a[75653] = sym_comment;
	v->a[75654] = actions(2121);
	v->a[75655] = 1;
	v->a[75656] = aux_sym_heredoc_redirect_token1;
	v->a[75657] = actions(2496);
	v->a[75658] = 1;
	v->a[75659] = sym_file_descriptor;
	small_parse_table_3783(v);
}

void	small_parse_table_3783(t_small_parse_table_array *v)
{
	v->a[75660] = actions(804);
	v->a[75661] = 2;
	v->a[75662] = anon_sym_LT_LT;
	v->a[75663] = anon_sym_LT_LT_DASH;
	v->a[75664] = actions(2492);
	v->a[75665] = 2;
	v->a[75666] = anon_sym_LT_AMP_DASH;
	v->a[75667] = anon_sym_GT_AMP_DASH;
	v->a[75668] = actions(2119);
	v->a[75669] = 3;
	v->a[75670] = anon_sym_PIPE;
	v->a[75671] = anon_sym_AMP_AMP;
	v->a[75672] = anon_sym_PIPE_PIPE;
	v->a[75673] = state(1409);
	v->a[75674] = 3;
	v->a[75675] = sym_file_redirect;
	v->a[75676] = sym_heredoc_redirect;
	v->a[75677] = aux_sym_redirected_statement_repeat1;
	v->a[75678] = actions(2490);
	v->a[75679] = 8;
	small_parse_table_3784(v);
}

void	small_parse_table_3784(t_small_parse_table_array *v)
{
	v->a[75680] = anon_sym_LT;
	v->a[75681] = anon_sym_GT;
	v->a[75682] = anon_sym_GT_GT;
	v->a[75683] = anon_sym_AMP_GT;
	v->a[75684] = anon_sym_AMP_GT_GT;
	v->a[75685] = anon_sym_LT_AMP;
	v->a[75686] = anon_sym_GT_AMP;
	v->a[75687] = anon_sym_GT_PIPE;
	v->a[75688] = 6;
	v->a[75689] = actions(3);
	v->a[75690] = 1;
	v->a[75691] = sym_comment;
	v->a[75692] = actions(2101);
	v->a[75693] = 1;
	v->a[75694] = aux_sym_concatenation_token1;
	v->a[75695] = actions(2103);
	v->a[75696] = 1;
	v->a[75697] = sym__concat;
	v->a[75698] = state(1401);
	v->a[75699] = 1;
	small_parse_table_3785(v);
}

/* EOF small_parse_table_756.c */
