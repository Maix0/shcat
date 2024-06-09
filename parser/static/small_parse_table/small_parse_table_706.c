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
	v->a[70600] = anon_sym_GT_AMP_DASH;
	v->a[70601] = anon_sym_LT_LT;
	v->a[70602] = anon_sym_LT_LT_DASH;
	v->a[70603] = anon_sym_AMP;
	v->a[70604] = anon_sym_SEMI;
	v->a[70605] = 17;
	v->a[70606] = actions(3);
	v->a[70607] = 1;
	v->a[70608] = sym_comment;
	v->a[70609] = actions(2115);
	v->a[70610] = 1;
	v->a[70611] = anon_sym_LPAREN;
	v->a[70612] = actions(2119);
	v->a[70613] = 1;
	v->a[70614] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70615] = actions(2121);
	v->a[70616] = 1;
	v->a[70617] = anon_sym_DOLLAR;
	v->a[70618] = actions(2123);
	v->a[70619] = 1;
	small_parse_table_3531(v);
}

void	small_parse_table_3531(t_small_parse_table_array *v)
{
	v->a[70620] = anon_sym_DQUOTE;
	v->a[70621] = actions(2125);
	v->a[70622] = 1;
	v->a[70623] = aux_sym_number_token1;
	v->a[70624] = actions(2127);
	v->a[70625] = 1;
	v->a[70626] = aux_sym_number_token2;
	v->a[70627] = actions(2129);
	v->a[70628] = 1;
	v->a[70629] = anon_sym_DOLLAR_LBRACE;
	v->a[70630] = actions(2131);
	v->a[70631] = 1;
	v->a[70632] = anon_sym_DOLLAR_LPAREN;
	v->a[70633] = actions(2133);
	v->a[70634] = 1;
	v->a[70635] = anon_sym_BQUOTE;
	v->a[70636] = actions(2135);
	v->a[70637] = 1;
	v->a[70638] = sym_extglob_pattern;
	v->a[70639] = state(1241);
	small_parse_table_3532(v);
}

void	small_parse_table_3532(t_small_parse_table_array *v)
{
	v->a[70640] = 1;
	v->a[70641] = aux_sym_case_statement_repeat1;
	v->a[70642] = state(1786);
	v->a[70643] = 1;
	v->a[70644] = sym_case_item;
	v->a[70645] = state(2195);
	v->a[70646] = 1;
	v->a[70647] = sym__case_item_last;
	v->a[70648] = actions(2111);
	v->a[70649] = 2;
	v->a[70650] = sym_raw_string;
	v->a[70651] = sym_word;
	v->a[70652] = state(2016);
	v->a[70653] = 2;
	v->a[70654] = sym_concatenation;
	v->a[70655] = sym__extglob_blob;
	v->a[70656] = state(1896);
	v->a[70657] = 6;
	v->a[70658] = sym_arithmetic_expansion;
	v->a[70659] = sym_string;
	small_parse_table_3533(v);
}

void	small_parse_table_3533(t_small_parse_table_array *v)
{
	v->a[70660] = sym_number;
	v->a[70661] = sym_simple_expansion;
	v->a[70662] = sym_expansion;
	v->a[70663] = sym_command_substitution;
	v->a[70664] = 3;
	v->a[70665] = actions(3);
	v->a[70666] = 1;
	v->a[70667] = sym_comment;
	v->a[70668] = actions(2632);
	v->a[70669] = 3;
	v->a[70670] = sym_file_descriptor;
	v->a[70671] = ts_builtin_sym_end;
	v->a[70672] = aux_sym_heredoc_redirect_token1;
	v->a[70673] = actions(2634);
	v->a[70674] = 20;
	v->a[70675] = anon_sym_PIPE;
	v->a[70676] = anon_sym_RPAREN;
	v->a[70677] = anon_sym_SEMI_SEMI;
	v->a[70678] = anon_sym_AMP_AMP;
	v->a[70679] = anon_sym_PIPE_PIPE;
	small_parse_table_3534(v);
}

void	small_parse_table_3534(t_small_parse_table_array *v)
{
	v->a[70680] = anon_sym_LT;
	v->a[70681] = anon_sym_GT;
	v->a[70682] = anon_sym_GT_GT;
	v->a[70683] = anon_sym_AMP_GT;
	v->a[70684] = anon_sym_AMP_GT_GT;
	v->a[70685] = anon_sym_LT_AMP;
	v->a[70686] = anon_sym_GT_AMP;
	v->a[70687] = anon_sym_GT_PIPE;
	v->a[70688] = anon_sym_LT_AMP_DASH;
	v->a[70689] = anon_sym_GT_AMP_DASH;
	v->a[70690] = anon_sym_LT_LT;
	v->a[70691] = anon_sym_LT_LT_DASH;
	v->a[70692] = anon_sym_AMP;
	v->a[70693] = anon_sym_BQUOTE;
	v->a[70694] = anon_sym_SEMI;
	v->a[70695] = 10;
	v->a[70696] = actions(3);
	v->a[70697] = 1;
	v->a[70698] = sym_comment;
	v->a[70699] = actions(1073);
	small_parse_table_3535(v);
}

/* EOF small_parse_table_706.c */
