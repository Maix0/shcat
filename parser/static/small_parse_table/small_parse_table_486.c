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
	v->a[48600] = anon_sym_DOLLAR_LBRACE;
	v->a[48601] = anon_sym_DOLLAR_LPAREN;
	v->a[48602] = anon_sym_BQUOTE;
	v->a[48603] = sym_word;
	v->a[48604] = actions(1522);
	v->a[48605] = 9;
	v->a[48606] = anon_sym_PIPE;
	v->a[48607] = anon_sym_SEMI_SEMI;
	v->a[48608] = anon_sym_AMP_AMP;
	v->a[48609] = anon_sym_PIPE_PIPE;
	v->a[48610] = anon_sym_LT_LT;
	v->a[48611] = anon_sym_LT_LT_DASH;
	v->a[48612] = aux_sym_heredoc_redirect_token1;
	v->a[48613] = anon_sym_AMP;
	v->a[48614] = anon_sym_SEMI;
	v->a[48615] = 6;
	v->a[48616] = actions(3);
	v->a[48617] = 1;
	v->a[48618] = sym_comment;
	v->a[48619] = actions(1083);
	small_parse_table_2431(v);
}

void	small_parse_table_2431(t_small_parse_table_array *v)
{
	v->a[48620] = 1;
	v->a[48621] = aux_sym_concatenation_token1;
	v->a[48622] = actions(1681);
	v->a[48623] = 1;
	v->a[48624] = sym__concat;
	v->a[48625] = state(381);
	v->a[48626] = 1;
	v->a[48627] = aux_sym_concatenation_repeat1;
	v->a[48628] = actions(1085);
	v->a[48629] = 2;
	v->a[48630] = sym_file_descriptor;
	v->a[48631] = sym__bare_dollar;
	v->a[48632] = actions(1081);
	v->a[48633] = 24;
	v->a[48634] = anon_sym_LPAREN;
	v->a[48635] = anon_sym_PIPE;
	v->a[48636] = anon_sym_AMP_AMP;
	v->a[48637] = anon_sym_PIPE_PIPE;
	v->a[48638] = anon_sym_LT;
	v->a[48639] = anon_sym_GT;
	small_parse_table_2432(v);
}

void	small_parse_table_2432(t_small_parse_table_array *v)
{
	v->a[48640] = anon_sym_GT_GT;
	v->a[48641] = anon_sym_LT_AMP;
	v->a[48642] = anon_sym_GT_AMP;
	v->a[48643] = anon_sym_GT_PIPE;
	v->a[48644] = anon_sym_LT_AMP_DASH;
	v->a[48645] = anon_sym_GT_AMP_DASH;
	v->a[48646] = anon_sym_LT_LT;
	v->a[48647] = anon_sym_LT_LT_DASH;
	v->a[48648] = aux_sym_heredoc_redirect_token1;
	v->a[48649] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48650] = anon_sym_DOLLAR;
	v->a[48651] = anon_sym_DQUOTE;
	v->a[48652] = sym_raw_string;
	v->a[48653] = sym_number;
	v->a[48654] = anon_sym_DOLLAR_LBRACE;
	v->a[48655] = anon_sym_DOLLAR_LPAREN;
	v->a[48656] = anon_sym_BQUOTE;
	v->a[48657] = sym_word;
	v->a[48658] = 4;
	v->a[48659] = actions(3);
	small_parse_table_2433(v);
}

void	small_parse_table_2433(t_small_parse_table_array *v)
{
	v->a[48660] = 1;
	v->a[48661] = sym_comment;
	v->a[48662] = actions(1575);
	v->a[48663] = 2;
	v->a[48664] = anon_sym_RPAREN;
	v->a[48665] = anon_sym_SEMI_SEMI;
	v->a[48666] = actions(1577);
	v->a[48667] = 2;
	v->a[48668] = sym_file_descriptor;
	v->a[48669] = sym_variable_name;
	v->a[48670] = actions(1573);
	v->a[48671] = 25;
	v->a[48672] = anon_sym_for;
	v->a[48673] = anon_sym_while;
	v->a[48674] = anon_sym_until;
	v->a[48675] = anon_sym_if;
	v->a[48676] = anon_sym_case;
	v->a[48677] = anon_sym_LPAREN;
	v->a[48678] = anon_sym_LBRACE;
	v->a[48679] = anon_sym_BANG;
	small_parse_table_2434(v);
}

void	small_parse_table_2434(t_small_parse_table_array *v)
{
	v->a[48680] = anon_sym_LT;
	v->a[48681] = anon_sym_GT;
	v->a[48682] = anon_sym_GT_GT;
	v->a[48683] = anon_sym_LT_AMP;
	v->a[48684] = anon_sym_GT_AMP;
	v->a[48685] = anon_sym_GT_PIPE;
	v->a[48686] = anon_sym_LT_AMP_DASH;
	v->a[48687] = anon_sym_GT_AMP_DASH;
	v->a[48688] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48689] = anon_sym_DOLLAR;
	v->a[48690] = anon_sym_DQUOTE;
	v->a[48691] = sym_raw_string;
	v->a[48692] = sym_number;
	v->a[48693] = anon_sym_DOLLAR_LBRACE;
	v->a[48694] = anon_sym_DOLLAR_LPAREN;
	v->a[48695] = anon_sym_BQUOTE;
	v->a[48696] = sym_word;
	v->a[48697] = 4;
	v->a[48698] = actions(3);
	v->a[48699] = 1;
	small_parse_table_2435(v);
}

/* EOF small_parse_table_486.c */
