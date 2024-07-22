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
	v->a[70600] = sym_word;
	v->a[70601] = state(486);
	v->a[70602] = 5;
	v->a[70603] = sym_arithmetic_expansion;
	v->a[70604] = sym_string;
	v->a[70605] = sym_simple_expansion;
	v->a[70606] = sym_expansion;
	v->a[70607] = sym_command_substitution;
	v->a[70608] = 10;
	v->a[70609] = actions(3);
	v->a[70610] = 1;
	v->a[70611] = sym_comment;
	v->a[70612] = actions(1364);
	v->a[70613] = 1;
	v->a[70614] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70615] = actions(1366);
	v->a[70616] = 1;
	v->a[70617] = anon_sym_DOLLAR;
	v->a[70618] = actions(1368);
	v->a[70619] = 1;
	small_parse_table_3531(v);
}

void	small_parse_table_3531(t_small_parse_table_array *v)
{
	v->a[70620] = anon_sym_DQUOTE;
	v->a[70621] = actions(1370);
	v->a[70622] = 1;
	v->a[70623] = anon_sym_DOLLAR_LBRACE;
	v->a[70624] = actions(1372);
	v->a[70625] = 1;
	v->a[70626] = anon_sym_DOLLAR_LPAREN;
	v->a[70627] = actions(1374);
	v->a[70628] = 1;
	v->a[70629] = anon_sym_BQUOTE;
	v->a[70630] = state(502);
	v->a[70631] = 2;
	v->a[70632] = sym_concatenation;
	v->a[70633] = aux_sym_for_statement_repeat1;
	v->a[70634] = actions(1362);
	v->a[70635] = 3;
	v->a[70636] = sym_raw_string;
	v->a[70637] = sym_number;
	v->a[70638] = sym_word;
	v->a[70639] = state(873);
	small_parse_table_3532(v);
}

void	small_parse_table_3532(t_small_parse_table_array *v)
{
	v->a[70640] = 5;
	v->a[70641] = sym_arithmetic_expansion;
	v->a[70642] = sym_string;
	v->a[70643] = sym_simple_expansion;
	v->a[70644] = sym_expansion;
	v->a[70645] = sym_command_substitution;
	v->a[70646] = 10;
	v->a[70647] = actions(3);
	v->a[70648] = 1;
	v->a[70649] = sym_comment;
	v->a[70650] = actions(2651);
	v->a[70651] = 1;
	v->a[70652] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70653] = actions(2653);
	v->a[70654] = 1;
	v->a[70655] = anon_sym_DOLLAR;
	v->a[70656] = actions(2655);
	v->a[70657] = 1;
	v->a[70658] = anon_sym_DQUOTE;
	v->a[70659] = actions(2657);
	small_parse_table_3533(v);
}

void	small_parse_table_3533(t_small_parse_table_array *v)
{
	v->a[70660] = 1;
	v->a[70661] = anon_sym_DOLLAR_LBRACE;
	v->a[70662] = actions(2659);
	v->a[70663] = 1;
	v->a[70664] = anon_sym_DOLLAR_LPAREN;
	v->a[70665] = actions(2661);
	v->a[70666] = 1;
	v->a[70667] = anon_sym_BQUOTE;
	v->a[70668] = state(1830);
	v->a[70669] = 1;
	v->a[70670] = sym_concatenation;
	v->a[70671] = actions(2801);
	v->a[70672] = 3;
	v->a[70673] = sym_raw_string;
	v->a[70674] = sym_number;
	v->a[70675] = sym_word;
	v->a[70676] = state(1737);
	v->a[70677] = 5;
	v->a[70678] = sym_arithmetic_expansion;
	v->a[70679] = sym_string;
	small_parse_table_3534(v);
}

void	small_parse_table_3534(t_small_parse_table_array *v)
{
	v->a[70680] = sym_simple_expansion;
	v->a[70681] = sym_expansion;
	v->a[70682] = sym_command_substitution;
	v->a[70683] = 5;
	v->a[70684] = actions(3);
	v->a[70685] = 1;
	v->a[70686] = sym_comment;
	v->a[70687] = actions(2803);
	v->a[70688] = 1;
	v->a[70689] = aux_sym_concatenation_token1;
	v->a[70690] = actions(2805);
	v->a[70691] = 1;
	v->a[70692] = sym__concat;
	v->a[70693] = state(1426);
	v->a[70694] = 1;
	v->a[70695] = aux_sym_concatenation_repeat1;
	v->a[70696] = actions(1210);
	v->a[70697] = 12;
	v->a[70698] = anon_sym_SEMI_SEMI;
	v->a[70699] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3535(v);
}

/* EOF small_parse_table_706.c */
