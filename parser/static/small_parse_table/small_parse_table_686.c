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
	v->a[68600] = 10;
	v->a[68601] = actions(3);
	v->a[68602] = 1;
	v->a[68603] = sym_comment;
	v->a[68604] = actions(445);
	v->a[68605] = 1;
	v->a[68606] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68607] = actions(449);
	v->a[68608] = 1;
	v->a[68609] = anon_sym_DQUOTE;
	v->a[68610] = actions(451);
	v->a[68611] = 1;
	v->a[68612] = anon_sym_DOLLAR_LBRACE;
	v->a[68613] = actions(453);
	v->a[68614] = 1;
	v->a[68615] = anon_sym_DOLLAR_LPAREN;
	v->a[68616] = actions(455);
	v->a[68617] = 1;
	v->a[68618] = anon_sym_BQUOTE;
	v->a[68619] = actions(2589);
	small_parse_table_3431(v);
}

void	small_parse_table_3431(t_small_parse_table_array *v)
{
	v->a[68620] = 1;
	v->a[68621] = sym__bare_dollar;
	v->a[68622] = actions(2731);
	v->a[68623] = 1;
	v->a[68624] = anon_sym_DOLLAR;
	v->a[68625] = actions(2587);
	v->a[68626] = 5;
	v->a[68627] = aux_sym_concatenation_token1;
	v->a[68628] = sym_raw_string;
	v->a[68629] = sym_number;
	v->a[68630] = sym__comment_word;
	v->a[68631] = sym_word;
	v->a[68632] = state(510);
	v->a[68633] = 5;
	v->a[68634] = sym_arithmetic_expansion;
	v->a[68635] = sym_string;
	v->a[68636] = sym_simple_expansion;
	v->a[68637] = sym_expansion;
	v->a[68638] = sym_command_substitution;
	v->a[68639] = 7;
	small_parse_table_3432(v);
}

void	small_parse_table_3432(t_small_parse_table_array *v)
{
	v->a[68640] = actions(3);
	v->a[68641] = 1;
	v->a[68642] = sym_comment;
	v->a[68643] = actions(1968);
	v->a[68644] = 1;
	v->a[68645] = aux_sym_heredoc_redirect_token1;
	v->a[68646] = actions(2736);
	v->a[68647] = 1;
	v->a[68648] = sym_file_descriptor;
	v->a[68649] = actions(1965);
	v->a[68650] = 2;
	v->a[68651] = anon_sym_LT_LT;
	v->a[68652] = anon_sym_LT_LT_DASH;
	v->a[68653] = actions(1960);
	v->a[68654] = 3;
	v->a[68655] = anon_sym_PIPE;
	v->a[68656] = anon_sym_AMP_AMP;
	v->a[68657] = anon_sym_PIPE_PIPE;
	v->a[68658] = state(1363);
	v->a[68659] = 3;
	small_parse_table_3433(v);
}

void	small_parse_table_3433(t_small_parse_table_array *v)
{
	v->a[68660] = sym_file_redirect;
	v->a[68661] = sym_heredoc_redirect;
	v->a[68662] = aux_sym_redirected_statement_repeat1;
	v->a[68663] = actions(2733);
	v->a[68664] = 7;
	v->a[68665] = anon_sym_LT;
	v->a[68666] = anon_sym_GT;
	v->a[68667] = anon_sym_GT_GT;
	v->a[68668] = anon_sym_LT_AMP;
	v->a[68669] = anon_sym_GT_AMP;
	v->a[68670] = anon_sym_GT_PIPE;
	v->a[68671] = anon_sym_LT_GT;
	v->a[68672] = 10;
	v->a[68673] = actions(3);
	v->a[68674] = 1;
	v->a[68675] = sym_comment;
	v->a[68676] = actions(962);
	v->a[68677] = 1;
	v->a[68678] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68679] = actions(964);
	small_parse_table_3434(v);
}

void	small_parse_table_3434(t_small_parse_table_array *v)
{
	v->a[68680] = 1;
	v->a[68681] = anon_sym_DOLLAR;
	v->a[68682] = actions(966);
	v->a[68683] = 1;
	v->a[68684] = anon_sym_DQUOTE;
	v->a[68685] = actions(968);
	v->a[68686] = 1;
	v->a[68687] = anon_sym_DOLLAR_LBRACE;
	v->a[68688] = actions(970);
	v->a[68689] = 1;
	v->a[68690] = anon_sym_DOLLAR_LPAREN;
	v->a[68691] = actions(972);
	v->a[68692] = 1;
	v->a[68693] = anon_sym_BQUOTE;
	v->a[68694] = state(325);
	v->a[68695] = 2;
	v->a[68696] = sym_concatenation;
	v->a[68697] = aux_sym_for_statement_repeat1;
	v->a[68698] = actions(1033);
	v->a[68699] = 3;
	small_parse_table_3435(v);
}

/* EOF small_parse_table_686.c */
