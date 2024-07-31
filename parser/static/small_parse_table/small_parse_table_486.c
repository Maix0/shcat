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
	v->a[48600] = sym__concat;
	v->a[48601] = sym_variable_name;
	v->a[48602] = actions(471);
	v->a[48603] = 17;
	v->a[48604] = anon_sym_LT;
	v->a[48605] = anon_sym_GT;
	v->a[48606] = anon_sym_GT_GT;
	v->a[48607] = anon_sym_LT_AMP;
	v->a[48608] = anon_sym_GT_AMP;
	v->a[48609] = anon_sym_GT_PIPE;
	v->a[48610] = anon_sym_LT_GT;
	v->a[48611] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48612] = aux_sym_concatenation_token1;
	v->a[48613] = anon_sym_DOLLAR;
	v->a[48614] = anon_sym_DQUOTE;
	v->a[48615] = sym_raw_string;
	v->a[48616] = sym_number;
	v->a[48617] = anon_sym_DOLLAR_LBRACE;
	v->a[48618] = anon_sym_DOLLAR_LPAREN;
	v->a[48619] = anon_sym_BQUOTE;
	small_parse_table_2431(v);
}

void	small_parse_table_2431(t_small_parse_table_array *v)
{
	v->a[48620] = sym_word;
	v->a[48621] = 3;
	v->a[48622] = actions(3);
	v->a[48623] = 1;
	v->a[48624] = sym_comment;
	v->a[48625] = actions(483);
	v->a[48626] = 2;
	v->a[48627] = sym__concat;
	v->a[48628] = sym_variable_name;
	v->a[48629] = actions(481);
	v->a[48630] = 17;
	v->a[48631] = anon_sym_LT;
	v->a[48632] = anon_sym_GT;
	v->a[48633] = anon_sym_GT_GT;
	v->a[48634] = anon_sym_LT_AMP;
	v->a[48635] = anon_sym_GT_AMP;
	v->a[48636] = anon_sym_GT_PIPE;
	v->a[48637] = anon_sym_LT_GT;
	v->a[48638] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48639] = aux_sym_concatenation_token1;
	small_parse_table_2432(v);
}

void	small_parse_table_2432(t_small_parse_table_array *v)
{
	v->a[48640] = anon_sym_DOLLAR;
	v->a[48641] = anon_sym_DQUOTE;
	v->a[48642] = sym_raw_string;
	v->a[48643] = sym_number;
	v->a[48644] = anon_sym_DOLLAR_LBRACE;
	v->a[48645] = anon_sym_DOLLAR_LPAREN;
	v->a[48646] = anon_sym_BQUOTE;
	v->a[48647] = sym_word;
	v->a[48648] = 3;
	v->a[48649] = actions(3);
	v->a[48650] = 1;
	v->a[48651] = sym_comment;
	v->a[48652] = actions(441);
	v->a[48653] = 2;
	v->a[48654] = sym__concat;
	v->a[48655] = sym_variable_name;
	v->a[48656] = actions(439);
	v->a[48657] = 17;
	v->a[48658] = anon_sym_LT;
	v->a[48659] = anon_sym_GT;
	small_parse_table_2433(v);
}

void	small_parse_table_2433(t_small_parse_table_array *v)
{
	v->a[48660] = anon_sym_GT_GT;
	v->a[48661] = anon_sym_LT_AMP;
	v->a[48662] = anon_sym_GT_AMP;
	v->a[48663] = anon_sym_GT_PIPE;
	v->a[48664] = anon_sym_LT_GT;
	v->a[48665] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48666] = aux_sym_concatenation_token1;
	v->a[48667] = anon_sym_DOLLAR;
	v->a[48668] = anon_sym_DQUOTE;
	v->a[48669] = sym_raw_string;
	v->a[48670] = sym_number;
	v->a[48671] = anon_sym_DOLLAR_LBRACE;
	v->a[48672] = anon_sym_DOLLAR_LPAREN;
	v->a[48673] = anon_sym_BQUOTE;
	v->a[48674] = sym_word;
	v->a[48675] = 9;
	v->a[48676] = actions(3);
	v->a[48677] = 1;
	v->a[48678] = sym_comment;
	v->a[48679] = actions(842);
	small_parse_table_2434(v);
}

void	small_parse_table_2434(t_small_parse_table_array *v)
{
	v->a[48680] = 1;
	v->a[48681] = anon_sym_RPAREN;
	v->a[48682] = actions(1591);
	v->a[48683] = 1;
	v->a[48684] = aux_sym_heredoc_redirect_token1;
	v->a[48685] = state(526);
	v->a[48686] = 1;
	v->a[48687] = sym_terminator;
	v->a[48688] = actions(850);
	v->a[48689] = 2;
	v->a[48690] = anon_sym_LT_LT;
	v->a[48691] = anon_sym_LT_LT_DASH;
	v->a[48692] = actions(858);
	v->a[48693] = 2;
	v->a[48694] = anon_sym_SEMI_SEMI;
	v->a[48695] = anon_sym_SEMI;
	v->a[48696] = actions(860);
	v->a[48697] = 2;
	v->a[48698] = anon_sym_AMP_AMP;
	v->a[48699] = anon_sym_PIPE_PIPE;
	small_parse_table_2435(v);
}

/* EOF small_parse_table_486.c */
