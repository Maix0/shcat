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
	v->a[70600] = actions(871);
	v->a[70601] = 1;
	v->a[70602] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70603] = actions(873);
	v->a[70604] = 1;
	v->a[70605] = anon_sym_DOLLAR;
	v->a[70606] = actions(875);
	v->a[70607] = 1;
	v->a[70608] = anon_sym_DQUOTE;
	v->a[70609] = actions(877);
	v->a[70610] = 1;
	v->a[70611] = anon_sym_DOLLAR_LBRACE;
	v->a[70612] = actions(879);
	v->a[70613] = 1;
	v->a[70614] = anon_sym_DOLLAR_LPAREN;
	v->a[70615] = actions(881);
	v->a[70616] = 1;
	v->a[70617] = anon_sym_BQUOTE;
	v->a[70618] = state(520);
	v->a[70619] = 2;
	small_parse_table_3531(v);
}

void	small_parse_table_3531(t_small_parse_table_array *v)
{
	v->a[70620] = sym_concatenation;
	v->a[70621] = aux_sym_for_statement_repeat1;
	v->a[70622] = actions(1319);
	v->a[70623] = 3;
	v->a[70624] = sym_raw_string;
	v->a[70625] = sym_number;
	v->a[70626] = sym_word;
	v->a[70627] = state(842);
	v->a[70628] = 5;
	v->a[70629] = sym_arithmetic_expansion;
	v->a[70630] = sym_string;
	v->a[70631] = sym_simple_expansion;
	v->a[70632] = sym_expansion;
	v->a[70633] = sym_command_substitution;
	v->a[70634] = 7;
	v->a[70635] = actions(3);
	v->a[70636] = 1;
	v->a[70637] = sym_comment;
	v->a[70638] = actions(2434);
	v->a[70639] = 1;
	small_parse_table_3532(v);
}

void	small_parse_table_3532(t_small_parse_table_array *v)
{
	v->a[70640] = aux_sym_heredoc_redirect_token1;
	v->a[70641] = actions(2436);
	v->a[70642] = 1;
	v->a[70643] = sym_file_descriptor;
	v->a[70644] = actions(744);
	v->a[70645] = 2;
	v->a[70646] = anon_sym_LT_LT;
	v->a[70647] = anon_sym_LT_LT_DASH;
	v->a[70648] = actions(1396);
	v->a[70649] = 2;
	v->a[70650] = anon_sym_AMP_AMP;
	v->a[70651] = anon_sym_PIPE_PIPE;
	v->a[70652] = state(1359);
	v->a[70653] = 3;
	v->a[70654] = sym_file_redirect;
	v->a[70655] = sym_heredoc_redirect;
	v->a[70656] = aux_sym_redirected_statement_repeat1;
	v->a[70657] = actions(2432);
	v->a[70658] = 7;
	v->a[70659] = anon_sym_LT;
	small_parse_table_3533(v);
}

void	small_parse_table_3533(t_small_parse_table_array *v)
{
	v->a[70660] = anon_sym_GT;
	v->a[70661] = anon_sym_GT_GT;
	v->a[70662] = anon_sym_LT_AMP;
	v->a[70663] = anon_sym_GT_AMP;
	v->a[70664] = anon_sym_GT_PIPE;
	v->a[70665] = anon_sym_LT_GT;
	v->a[70666] = 10;
	v->a[70667] = actions(3);
	v->a[70668] = 1;
	v->a[70669] = sym_comment;
	v->a[70670] = actions(1588);
	v->a[70671] = 1;
	v->a[70672] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70673] = actions(1590);
	v->a[70674] = 1;
	v->a[70675] = anon_sym_DOLLAR;
	v->a[70676] = actions(1592);
	v->a[70677] = 1;
	v->a[70678] = anon_sym_DQUOTE;
	v->a[70679] = actions(1594);
	small_parse_table_3534(v);
}

void	small_parse_table_3534(t_small_parse_table_array *v)
{
	v->a[70680] = 1;
	v->a[70681] = anon_sym_DOLLAR_LBRACE;
	v->a[70682] = actions(1596);
	v->a[70683] = 1;
	v->a[70684] = anon_sym_DOLLAR_LPAREN;
	v->a[70685] = actions(1598);
	v->a[70686] = 1;
	v->a[70687] = anon_sym_BQUOTE;
	v->a[70688] = state(736);
	v->a[70689] = 2;
	v->a[70690] = sym_concatenation;
	v->a[70691] = aux_sym_for_statement_repeat1;
	v->a[70692] = actions(1586);
	v->a[70693] = 3;
	v->a[70694] = sym_raw_string;
	v->a[70695] = sym_number;
	v->a[70696] = sym_word;
	v->a[70697] = state(915);
	v->a[70698] = 5;
	v->a[70699] = sym_arithmetic_expansion;
	small_parse_table_3535(v);
}

/* EOF small_parse_table_706.c */
