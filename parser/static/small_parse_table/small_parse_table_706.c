/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_706.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3530(t_small_parse_table_array *v)
{
	v->a[70600] = actions(680);
	v->a[70601] = 1;
	v->a[70602] = sym_comment;
	v->a[70603] = actions(692);
	v->a[70604] = 1;
	v->a[70605] = anon_sym_PIPE;
	v->a[70606] = actions(997);
	v->a[70607] = 3;
	v->a[70608] = anon_sym_LT;
	v->a[70609] = anon_sym_GT;
	v->a[70610] = anon_sym_LT_LT;
	v->a[70611] = state(1415);
	v->a[70612] = 3;
	v->a[70613] = sym_file_redirect;
	v->a[70614] = sym_heredoc_redirect;
	v->a[70615] = aux_sym_redirected_statement_repeat1;
	v->a[70616] = actions(995);
	v->a[70617] = 9;
	v->a[70618] = sym_file_descriptor;
	v->a[70619] = anon_sym_AMP_AMP;
	small_parse_table_3531(v);
}

void	small_parse_table_3531(t_small_parse_table_array *v)
{
	v->a[70620] = anon_sym_PIPE_PIPE;
	v->a[70621] = anon_sym_GT_GT;
	v->a[70622] = anon_sym_LT_AMP;
	v->a[70623] = anon_sym_GT_AMP;
	v->a[70624] = anon_sym_GT_PIPE;
	v->a[70625] = anon_sym_LT_GT;
	v->a[70626] = anon_sym_LT_LT_DASH;
	v->a[70627] = 6;
	v->a[70628] = actions(3);
	v->a[70629] = 1;
	v->a[70630] = sym_comment;
	v->a[70631] = actions(2038);
	v->a[70632] = 1;
	v->a[70633] = aux_sym_heredoc_redirect_token1;
	v->a[70634] = actions(2767);
	v->a[70635] = 1;
	v->a[70636] = sym_file_descriptor;
	v->a[70637] = state(1394);
	v->a[70638] = 2;
	v->a[70639] = sym_file_redirect;
	small_parse_table_3532(v);
}

void	small_parse_table_3532(t_small_parse_table_array *v)
{
	v->a[70640] = aux_sym_redirected_statement_repeat2;
	v->a[70641] = actions(2036);
	v->a[70642] = 5;
	v->a[70643] = anon_sym_PIPE;
	v->a[70644] = anon_sym_AMP_AMP;
	v->a[70645] = anon_sym_PIPE_PIPE;
	v->a[70646] = anon_sym_LT_LT;
	v->a[70647] = anon_sym_LT_LT_DASH;
	v->a[70648] = actions(2600);
	v->a[70649] = 7;
	v->a[70650] = anon_sym_LT;
	v->a[70651] = anon_sym_GT;
	v->a[70652] = anon_sym_GT_GT;
	v->a[70653] = anon_sym_LT_AMP;
	v->a[70654] = anon_sym_GT_AMP;
	v->a[70655] = anon_sym_GT_PIPE;
	v->a[70656] = anon_sym_LT_GT;
	v->a[70657] = 10;
	v->a[70658] = actions(3);
	v->a[70659] = 1;
	small_parse_table_3533(v);
}

void	small_parse_table_3533(t_small_parse_table_array *v)
{
	v->a[70660] = sym_comment;
	v->a[70661] = actions(2444);
	v->a[70662] = 1;
	v->a[70663] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70664] = actions(2448);
	v->a[70665] = 1;
	v->a[70666] = anon_sym_DQUOTE;
	v->a[70667] = actions(2450);
	v->a[70668] = 1;
	v->a[70669] = anon_sym_DOLLAR_LBRACE;
	v->a[70670] = actions(2452);
	v->a[70671] = 1;
	v->a[70672] = anon_sym_DOLLAR_LPAREN;
	v->a[70673] = actions(2454);
	v->a[70674] = 1;
	v->a[70675] = anon_sym_BQUOTE;
	v->a[70676] = actions(2553);
	v->a[70677] = 1;
	v->a[70678] = anon_sym_DOLLAR;
	v->a[70679] = state(417);
	small_parse_table_3534(v);
}

void	small_parse_table_3534(t_small_parse_table_array *v)
{
	v->a[70680] = 2;
	v->a[70681] = sym_concatenation;
	v->a[70682] = aux_sym_for_statement_repeat1;
	v->a[70683] = actions(2765);
	v->a[70684] = 3;
	v->a[70685] = sym_raw_string;
	v->a[70686] = sym_number;
	v->a[70687] = sym_word;
	v->a[70688] = state(714);
	v->a[70689] = 5;
	v->a[70690] = sym_arithmetic_expansion;
	v->a[70691] = sym_string;
	v->a[70692] = sym_simple_expansion;
	v->a[70693] = sym_expansion;
	v->a[70694] = sym_command_substitution;
	v->a[70695] = 10;
	v->a[70696] = actions(3);
	v->a[70697] = 1;
	v->a[70698] = sym_comment;
	v->a[70699] = actions(821);
	small_parse_table_3535(v);
}

/* EOF small_parse_table_706.c */
