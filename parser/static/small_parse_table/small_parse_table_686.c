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
	v->a[68600] = anon_sym_AMP_AMP;
	v->a[68601] = anon_sym_PIPE_PIPE;
	v->a[68602] = anon_sym_LT;
	v->a[68603] = anon_sym_GT;
	v->a[68604] = anon_sym_GT_GT;
	v->a[68605] = anon_sym_AMP_GT;
	v->a[68606] = anon_sym_AMP_GT_GT;
	v->a[68607] = anon_sym_LT_AMP;
	v->a[68608] = anon_sym_GT_AMP;
	v->a[68609] = anon_sym_GT_PIPE;
	v->a[68610] = anon_sym_LT_AMP_DASH;
	v->a[68611] = anon_sym_GT_AMP_DASH;
	v->a[68612] = anon_sym_LT_LT;
	v->a[68613] = anon_sym_LT_LT_DASH;
	v->a[68614] = anon_sym_AMP;
	v->a[68615] = anon_sym_BQUOTE;
	v->a[68616] = anon_sym_SEMI;
	v->a[68617] = 10;
	v->a[68618] = actions(3);
	v->a[68619] = 1;
	small_parse_table_3431(v);
}

void	small_parse_table_3431(t_small_parse_table_array *v)
{
	v->a[68620] = sym_comment;
	v->a[68621] = actions(1033);
	v->a[68622] = 1;
	v->a[68623] = anon_sym_BQUOTE;
	v->a[68624] = actions(2350);
	v->a[68625] = 1;
	v->a[68626] = aux_sym_heredoc_redirect_token1;
	v->a[68627] = actions(2352);
	v->a[68628] = 1;
	v->a[68629] = sym_file_descriptor;
	v->a[68630] = actions(1062);
	v->a[68631] = 2;
	v->a[68632] = anon_sym_LT_LT;
	v->a[68633] = anon_sym_LT_LT_DASH;
	v->a[68634] = actions(1143);
	v->a[68635] = 2;
	v->a[68636] = anon_sym_AMP_AMP;
	v->a[68637] = anon_sym_PIPE_PIPE;
	v->a[68638] = actions(2348);
	v->a[68639] = 2;
	small_parse_table_3432(v);
}

void	small_parse_table_3432(t_small_parse_table_array *v)
{
	v->a[68640] = anon_sym_LT_AMP_DASH;
	v->a[68641] = anon_sym_GT_AMP_DASH;
	v->a[68642] = actions(1141);
	v->a[68643] = 3;
	v->a[68644] = anon_sym_SEMI_SEMI;
	v->a[68645] = anon_sym_AMP;
	v->a[68646] = anon_sym_SEMI;
	v->a[68647] = state(1095);
	v->a[68648] = 3;
	v->a[68649] = sym_file_redirect;
	v->a[68650] = sym_heredoc_redirect;
	v->a[68651] = aux_sym_redirected_statement_repeat1;
	v->a[68652] = actions(2346);
	v->a[68653] = 8;
	v->a[68654] = anon_sym_LT;
	v->a[68655] = anon_sym_GT;
	v->a[68656] = anon_sym_GT_GT;
	v->a[68657] = anon_sym_AMP_GT;
	v->a[68658] = anon_sym_AMP_GT_GT;
	v->a[68659] = anon_sym_LT_AMP;
	small_parse_table_3433(v);
}

void	small_parse_table_3433(t_small_parse_table_array *v)
{
	v->a[68660] = anon_sym_GT_AMP;
	v->a[68661] = anon_sym_GT_PIPE;
	v->a[68662] = 17;
	v->a[68663] = actions(3);
	v->a[68664] = 1;
	v->a[68665] = sym_comment;
	v->a[68666] = actions(2115);
	v->a[68667] = 1;
	v->a[68668] = anon_sym_LPAREN;
	v->a[68669] = actions(2119);
	v->a[68670] = 1;
	v->a[68671] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68672] = actions(2121);
	v->a[68673] = 1;
	v->a[68674] = anon_sym_DOLLAR;
	v->a[68675] = actions(2123);
	v->a[68676] = 1;
	v->a[68677] = anon_sym_DQUOTE;
	v->a[68678] = actions(2125);
	v->a[68679] = 1;
	small_parse_table_3434(v);
}

void	small_parse_table_3434(t_small_parse_table_array *v)
{
	v->a[68680] = aux_sym_number_token1;
	v->a[68681] = actions(2127);
	v->a[68682] = 1;
	v->a[68683] = aux_sym_number_token2;
	v->a[68684] = actions(2129);
	v->a[68685] = 1;
	v->a[68686] = anon_sym_DOLLAR_LBRACE;
	v->a[68687] = actions(2131);
	v->a[68688] = 1;
	v->a[68689] = anon_sym_DOLLAR_LPAREN;
	v->a[68690] = actions(2133);
	v->a[68691] = 1;
	v->a[68692] = anon_sym_BQUOTE;
	v->a[68693] = actions(2135);
	v->a[68694] = 1;
	v->a[68695] = sym_extglob_pattern;
	v->a[68696] = state(1241);
	v->a[68697] = 1;
	v->a[68698] = aux_sym_case_statement_repeat1;
	v->a[68699] = state(1786);
	small_parse_table_3435(v);
}

/* EOF small_parse_table_686.c */
