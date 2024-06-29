/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_686.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3430(t_small_parse_table_array *v)
{
	v->a[68600] = anon_sym_SEMI;
	v->a[68601] = state(1256);
	v->a[68602] = 3;
	v->a[68603] = sym_file_redirect;
	v->a[68604] = sym_heredoc_redirect;
	v->a[68605] = aux_sym_redirected_statement_repeat1;
	v->a[68606] = actions(2062);
	v->a[68607] = 8;
	v->a[68608] = anon_sym_LT;
	v->a[68609] = anon_sym_GT;
	v->a[68610] = anon_sym_GT_GT;
	v->a[68611] = anon_sym_AMP_GT;
	v->a[68612] = anon_sym_AMP_GT_GT;
	v->a[68613] = anon_sym_LT_AMP;
	v->a[68614] = anon_sym_GT_AMP;
	v->a[68615] = anon_sym_GT_PIPE;
	v->a[68616] = 5;
	v->a[68617] = actions(3);
	v->a[68618] = 1;
	v->a[68619] = sym_comment;
	small_parse_table_3431(v);
}

void	small_parse_table_3431(t_small_parse_table_array *v)
{
	v->a[68620] = actions(774);
	v->a[68621] = 1;
	v->a[68622] = sym_file_descriptor;
	v->a[68623] = actions(844);
	v->a[68624] = 1;
	v->a[68625] = sym_variable_name;
	v->a[68626] = state(1142);
	v->a[68627] = 2;
	v->a[68628] = sym_variable_assignment;
	v->a[68629] = aux_sym__variable_assignments_repeat1;
	v->a[68630] = actions(762);
	v->a[68631] = 19;
	v->a[68632] = anon_sym_LT;
	v->a[68633] = anon_sym_GT;
	v->a[68634] = anon_sym_GT_GT;
	v->a[68635] = anon_sym_AMP_GT;
	v->a[68636] = anon_sym_AMP_GT_GT;
	v->a[68637] = anon_sym_LT_AMP;
	v->a[68638] = anon_sym_GT_AMP;
	v->a[68639] = anon_sym_GT_PIPE;
	small_parse_table_3432(v);
}

void	small_parse_table_3432(t_small_parse_table_array *v)
{
	v->a[68640] = anon_sym_LT_AMP_DASH;
	v->a[68641] = anon_sym_GT_AMP_DASH;
	v->a[68642] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68643] = anon_sym_DOLLAR;
	v->a[68644] = anon_sym_DQUOTE;
	v->a[68645] = sym_raw_string;
	v->a[68646] = sym_number;
	v->a[68647] = anon_sym_DOLLAR_LBRACE;
	v->a[68648] = anon_sym_DOLLAR_LPAREN;
	v->a[68649] = anon_sym_BQUOTE;
	v->a[68650] = sym_word;
	v->a[68651] = 5;
	v->a[68652] = actions(3);
	v->a[68653] = 1;
	v->a[68654] = sym_comment;
	v->a[68655] = actions(774);
	v->a[68656] = 1;
	v->a[68657] = sym_file_descriptor;
	v->a[68658] = actions(1474);
	v->a[68659] = 1;
	small_parse_table_3433(v);
}

void	small_parse_table_3433(t_small_parse_table_array *v)
{
	v->a[68660] = sym_variable_name;
	v->a[68661] = state(1404);
	v->a[68662] = 2;
	v->a[68663] = sym_variable_assignment;
	v->a[68664] = aux_sym__variable_assignments_repeat1;
	v->a[68665] = actions(762);
	v->a[68666] = 19;
	v->a[68667] = anon_sym_LT;
	v->a[68668] = anon_sym_GT;
	v->a[68669] = anon_sym_GT_GT;
	v->a[68670] = anon_sym_AMP_GT;
	v->a[68671] = anon_sym_AMP_GT_GT;
	v->a[68672] = anon_sym_LT_AMP;
	v->a[68673] = anon_sym_GT_AMP;
	v->a[68674] = anon_sym_GT_PIPE;
	v->a[68675] = anon_sym_LT_AMP_DASH;
	v->a[68676] = anon_sym_GT_AMP_DASH;
	v->a[68677] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68678] = anon_sym_DOLLAR;
	v->a[68679] = anon_sym_DQUOTE;
	small_parse_table_3434(v);
}

void	small_parse_table_3434(t_small_parse_table_array *v)
{
	v->a[68680] = sym_raw_string;
	v->a[68681] = sym_number;
	v->a[68682] = anon_sym_DOLLAR_LBRACE;
	v->a[68683] = anon_sym_DOLLAR_LPAREN;
	v->a[68684] = anon_sym_BQUOTE;
	v->a[68685] = sym_word;
	v->a[68686] = 11;
	v->a[68687] = actions(3);
	v->a[68688] = 1;
	v->a[68689] = sym_comment;
	v->a[68690] = actions(764);
	v->a[68691] = 1;
	v->a[68692] = anon_sym_SEMI_SEMI;
	v->a[68693] = actions(2031);
	v->a[68694] = 1;
	v->a[68695] = aux_sym_heredoc_redirect_token1;
	v->a[68696] = actions(2066);
	v->a[68697] = 1;
	v->a[68698] = sym_file_descriptor;
	v->a[68699] = state(723);
	small_parse_table_3435(v);
}

/* EOF small_parse_table_686.c */
