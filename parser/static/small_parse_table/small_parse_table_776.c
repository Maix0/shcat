/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_776.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3880(t_small_parse_table_array *v)
{
	v->a[77600] = actions(761);
	v->a[77601] = 1;
	v->a[77602] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77603] = actions(763);
	v->a[77604] = 1;
	v->a[77605] = anon_sym_DOLLAR;
	v->a[77606] = actions(765);
	v->a[77607] = 1;
	v->a[77608] = anon_sym_DQUOTE;
	v->a[77609] = actions(767);
	v->a[77610] = 1;
	v->a[77611] = aux_sym_number_token1;
	v->a[77612] = actions(769);
	v->a[77613] = 1;
	v->a[77614] = aux_sym_number_token2;
	v->a[77615] = actions(771);
	v->a[77616] = 1;
	v->a[77617] = anon_sym_DOLLAR_LBRACE;
	v->a[77618] = actions(773);
	v->a[77619] = 1;
	small_parse_table_3881(v);
}

void	small_parse_table_3881(t_small_parse_table_array *v)
{
	v->a[77620] = anon_sym_DOLLAR_LPAREN;
	v->a[77621] = actions(775);
	v->a[77622] = 1;
	v->a[77623] = anon_sym_BQUOTE;
	v->a[77624] = actions(1385);
	v->a[77625] = 2;
	v->a[77626] = sym_raw_string;
	v->a[77627] = sym_word;
	v->a[77628] = state(394);
	v->a[77629] = 2;
	v->a[77630] = sym_concatenation;
	v->a[77631] = aux_sym_for_statement_repeat1;
	v->a[77632] = state(805);
	v->a[77633] = 6;
	v->a[77634] = sym_arithmetic_expansion;
	v->a[77635] = sym_string;
	v->a[77636] = sym_number;
	v->a[77637] = sym_simple_expansion;
	v->a[77638] = sym_expansion;
	v->a[77639] = sym_command_substitution;
	small_parse_table_3882(v);
}

void	small_parse_table_3882(t_small_parse_table_array *v)
{
	v->a[77640] = 12;
	v->a[77641] = actions(3);
	v->a[77642] = 1;
	v->a[77643] = sym_comment;
	v->a[77644] = actions(1618);
	v->a[77645] = 1;
	v->a[77646] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77647] = actions(1622);
	v->a[77648] = 1;
	v->a[77649] = anon_sym_DQUOTE;
	v->a[77650] = actions(1624);
	v->a[77651] = 1;
	v->a[77652] = aux_sym_number_token1;
	v->a[77653] = actions(1626);
	v->a[77654] = 1;
	v->a[77655] = aux_sym_number_token2;
	v->a[77656] = actions(1628);
	v->a[77657] = 1;
	v->a[77658] = anon_sym_DOLLAR_LBRACE;
	v->a[77659] = actions(1630);
	small_parse_table_3883(v);
}

void	small_parse_table_3883(t_small_parse_table_array *v)
{
	v->a[77660] = 1;
	v->a[77661] = anon_sym_DOLLAR_LPAREN;
	v->a[77662] = actions(1632);
	v->a[77663] = 1;
	v->a[77664] = anon_sym_BQUOTE;
	v->a[77665] = actions(3154);
	v->a[77666] = 1;
	v->a[77667] = anon_sym_DOLLAR;
	v->a[77668] = actions(3156);
	v->a[77669] = 1;
	v->a[77670] = sym__bare_dollar;
	v->a[77671] = actions(3152);
	v->a[77672] = 3;
	v->a[77673] = sym_raw_string;
	v->a[77674] = sym__comment_word;
	v->a[77675] = sym_word;
	v->a[77676] = state(1436);
	v->a[77677] = 6;
	v->a[77678] = sym_arithmetic_expansion;
	v->a[77679] = sym_string;
	small_parse_table_3884(v);
}

void	small_parse_table_3884(t_small_parse_table_array *v)
{
	v->a[77680] = sym_number;
	v->a[77681] = sym_simple_expansion;
	v->a[77682] = sym_expansion;
	v->a[77683] = sym_command_substitution;
	v->a[77684] = 3;
	v->a[77685] = actions(1404);
	v->a[77686] = 1;
	v->a[77687] = sym_comment;
	v->a[77688] = actions(1327);
	v->a[77689] = 7;
	v->a[77690] = anon_sym_PIPE;
	v->a[77691] = anon_sym_LT;
	v->a[77692] = anon_sym_GT;
	v->a[77693] = anon_sym_AMP_GT;
	v->a[77694] = anon_sym_LT_AMP;
	v->a[77695] = anon_sym_GT_AMP;
	v->a[77696] = anon_sym_LT_LT;
	v->a[77697] = actions(1329);
	v->a[77698] = 11;
	v->a[77699] = sym_file_descriptor;
	small_parse_table_3885(v);
}

/* EOF small_parse_table_776.c */
