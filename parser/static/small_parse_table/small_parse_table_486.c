/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_486.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2430(t_small_parse_table_array *v)
{
	v->a[48600] = 11;
	v->a[48601] = anon_sym_PIPE;
	v->a[48602] = anon_sym_RPAREN;
	v->a[48603] = anon_sym_SEMI_SEMI;
	v->a[48604] = anon_sym_AMP_AMP;
	v->a[48605] = anon_sym_PIPE_PIPE;
	v->a[48606] = anon_sym_LT;
	v->a[48607] = anon_sym_GT;
	v->a[48608] = anon_sym_GT_GT;
	v->a[48609] = anon_sym_LT_LT;
	v->a[48610] = anon_sym_BQUOTE;
	v->a[48611] = anon_sym_SEMI;
	v->a[48612] = 8;
	v->a[48613] = actions(3);
	v->a[48614] = 1;
	v->a[48615] = sym_comment;
	v->a[48616] = actions(2273);
	v->a[48617] = 1;
	v->a[48618] = anon_sym_RBRACE;
	v->a[48619] = actions(2277);
	small_parse_table_2431(v);
}

void	small_parse_table_2431(t_small_parse_table_array *v)
{
	v->a[48620] = 1;
	v->a[48621] = anon_sym_POUND;
	v->a[48622] = actions(2279);
	v->a[48623] = 1;
	v->a[48624] = aux_sym__simple_variable_name_token1;
	v->a[48625] = actions(2281);
	v->a[48626] = 1;
	v->a[48627] = anon_sym_0;
	v->a[48628] = actions(2283);
	v->a[48629] = 1;
	v->a[48630] = sym_variable_name;
	v->a[48631] = state(1728);
	v->a[48632] = 1;
	v->a[48633] = sym__expansion_body;
	v->a[48634] = actions(2275);
	v->a[48635] = 6;
	v->a[48636] = anon_sym_BANG;
	v->a[48637] = anon_sym_DASH;
	v->a[48638] = anon_sym_STAR;
	v->a[48639] = anon_sym_QMARK;
	small_parse_table_2432(v);
}

void	small_parse_table_2432(t_small_parse_table_array *v)
{
	v->a[48640] = anon_sym_DOLLAR;
	v->a[48641] = anon_sym_AT;
	v->a[48642] = 8;
	v->a[48643] = actions(3);
	v->a[48644] = 1;
	v->a[48645] = sym_comment;
	v->a[48646] = actions(2277);
	v->a[48647] = 1;
	v->a[48648] = anon_sym_POUND;
	v->a[48649] = actions(2279);
	v->a[48650] = 1;
	v->a[48651] = aux_sym__simple_variable_name_token1;
	v->a[48652] = actions(2281);
	v->a[48653] = 1;
	v->a[48654] = anon_sym_0;
	v->a[48655] = actions(2283);
	v->a[48656] = 1;
	v->a[48657] = sym_variable_name;
	v->a[48658] = actions(2285);
	v->a[48659] = 1;
	small_parse_table_2433(v);
}

void	small_parse_table_2433(t_small_parse_table_array *v)
{
	v->a[48660] = anon_sym_RBRACE;
	v->a[48661] = state(1682);
	v->a[48662] = 1;
	v->a[48663] = sym__expansion_body;
	v->a[48664] = actions(2275);
	v->a[48665] = 6;
	v->a[48666] = anon_sym_BANG;
	v->a[48667] = anon_sym_DASH;
	v->a[48668] = anon_sym_STAR;
	v->a[48669] = anon_sym_QMARK;
	v->a[48670] = anon_sym_DOLLAR;
	v->a[48671] = anon_sym_AT;
	v->a[48672] = 4;
	v->a[48673] = actions(3);
	v->a[48674] = 1;
	v->a[48675] = sym_comment;
	v->a[48676] = actions(2289);
	v->a[48677] = 1;
	v->a[48678] = anon_sym_esac;
	v->a[48679] = actions(2291);
	small_parse_table_2434(v);
}

void	small_parse_table_2434(t_small_parse_table_array *v)
{
	v->a[48680] = 1;
	v->a[48681] = sym_extglob_pattern;
	v->a[48682] = actions(2287);
	v->a[48683] = 10;
	v->a[48684] = anon_sym_LPAREN;
	v->a[48685] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48686] = anon_sym_DOLLAR;
	v->a[48687] = anon_sym_DQUOTE;
	v->a[48688] = sym_raw_string;
	v->a[48689] = sym_number;
	v->a[48690] = anon_sym_DOLLAR_LBRACE;
	v->a[48691] = anon_sym_DOLLAR_LPAREN;
	v->a[48692] = anon_sym_BQUOTE;
	v->a[48693] = sym_word;
	v->a[48694] = 10;
	v->a[48695] = actions(3);
	v->a[48696] = 1;
	v->a[48697] = sym_comment;
	v->a[48698] = actions(2293);
	v->a[48699] = 1;
	small_parse_table_2435(v);
}

/* EOF small_parse_table_486.c */
