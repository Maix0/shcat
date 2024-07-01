/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_476.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2380(t_small_parse_table_array *v)
{
	v->a[47600] = anon_sym_case;
	v->a[47601] = anon_sym_LPAREN;
	v->a[47602] = anon_sym_LBRACE;
	v->a[47603] = anon_sym_BANG;
	v->a[47604] = anon_sym_LT;
	v->a[47605] = anon_sym_GT;
	v->a[47606] = anon_sym_GT_GT;
	v->a[47607] = anon_sym_LT_AMP;
	v->a[47608] = anon_sym_GT_AMP;
	v->a[47609] = anon_sym_GT_PIPE;
	v->a[47610] = anon_sym_LT_GT;
	v->a[47611] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47612] = anon_sym_DOLLAR;
	v->a[47613] = anon_sym_DQUOTE;
	v->a[47614] = sym_raw_string;
	v->a[47615] = sym_number;
	v->a[47616] = anon_sym_DOLLAR_LBRACE;
	v->a[47617] = anon_sym_DOLLAR_LPAREN;
	v->a[47618] = sym_word;
	v->a[47619] = 3;
	small_parse_table_2381(v);
}

void	small_parse_table_2381(t_small_parse_table_array *v)
{
	v->a[47620] = actions(3);
	v->a[47621] = 1;
	v->a[47622] = sym_comment;
	v->a[47623] = actions(770);
	v->a[47624] = 3;
	v->a[47625] = sym_file_descriptor;
	v->a[47626] = sym__concat;
	v->a[47627] = sym__bare_dollar;
	v->a[47628] = actions(768);
	v->a[47629] = 23;
	v->a[47630] = anon_sym_LPAREN;
	v->a[47631] = anon_sym_PIPE;
	v->a[47632] = anon_sym_AMP_AMP;
	v->a[47633] = anon_sym_PIPE_PIPE;
	v->a[47634] = anon_sym_LT;
	v->a[47635] = anon_sym_GT;
	v->a[47636] = anon_sym_GT_GT;
	v->a[47637] = anon_sym_LT_AMP;
	v->a[47638] = anon_sym_GT_AMP;
	v->a[47639] = anon_sym_GT_PIPE;
	small_parse_table_2382(v);
}

void	small_parse_table_2382(t_small_parse_table_array *v)
{
	v->a[47640] = anon_sym_LT_GT;
	v->a[47641] = anon_sym_LT_LT;
	v->a[47642] = anon_sym_LT_LT_DASH;
	v->a[47643] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47644] = aux_sym_concatenation_token1;
	v->a[47645] = anon_sym_DOLLAR;
	v->a[47646] = anon_sym_DQUOTE;
	v->a[47647] = sym_raw_string;
	v->a[47648] = sym_number;
	v->a[47649] = anon_sym_DOLLAR_LBRACE;
	v->a[47650] = anon_sym_DOLLAR_LPAREN;
	v->a[47651] = anon_sym_BQUOTE;
	v->a[47652] = sym_word;
	v->a[47653] = 15;
	v->a[47654] = actions(664);
	v->a[47655] = 1;
	v->a[47656] = sym_comment;
	v->a[47657] = actions(1560);
	v->a[47658] = 1;
	v->a[47659] = anon_sym_LPAREN;
	small_parse_table_2383(v);
}

void	small_parse_table_2383(t_small_parse_table_array *v)
{
	v->a[47660] = actions(1562);
	v->a[47661] = 1;
	v->a[47662] = anon_sym_BANG;
	v->a[47663] = actions(1570);
	v->a[47664] = 1;
	v->a[47665] = anon_sym_TILDE;
	v->a[47666] = actions(1572);
	v->a[47667] = 1;
	v->a[47668] = anon_sym_DOLLAR;
	v->a[47669] = actions(1574);
	v->a[47670] = 1;
	v->a[47671] = anon_sym_DQUOTE;
	v->a[47672] = actions(1578);
	v->a[47673] = 1;
	v->a[47674] = anon_sym_DOLLAR_LBRACE;
	v->a[47675] = actions(1580);
	v->a[47676] = 1;
	v->a[47677] = anon_sym_DOLLAR_LPAREN;
	v->a[47678] = actions(1582);
	v->a[47679] = 1;
	small_parse_table_2384(v);
}

void	small_parse_table_2384(t_small_parse_table_array *v)
{
	v->a[47680] = anon_sym_BQUOTE;
	v->a[47681] = actions(1584);
	v->a[47682] = 1;
	v->a[47683] = sym_variable_name;
	v->a[47684] = actions(1566);
	v->a[47685] = 2;
	v->a[47686] = anon_sym_PLUS_PLUS;
	v->a[47687] = anon_sym_DASH_DASH;
	v->a[47688] = actions(1568);
	v->a[47689] = 2;
	v->a[47690] = anon_sym_DASH2;
	v->a[47691] = anon_sym_PLUS2;
	v->a[47692] = actions(1576);
	v->a[47693] = 2;
	v->a[47694] = sym_number;
	v->a[47695] = aux_sym__simple_variable_name_token1;
	v->a[47696] = state(255);
	v->a[47697] = 3;
	v->a[47698] = sym_string;
	v->a[47699] = sym_simple_expansion;
	small_parse_table_2385(v);
}

/* EOF small_parse_table_476.c */
