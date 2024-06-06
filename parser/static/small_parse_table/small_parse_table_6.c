/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_6.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_30(t_small_parse_table_array *v)
{
	v->a[600] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[601] = anon_sym_AMP;
	v->a[602] = sym__special_character;
	v->a[603] = anon_sym_DQUOTE;
	v->a[604] = sym_raw_string;
	v->a[605] = aux_sym_number_token1;
	v->a[606] = aux_sym_number_token2;
	v->a[607] = anon_sym_DOLLAR_LBRACE;
	v->a[608] = anon_sym_DOLLAR_LPAREN;
	v->a[609] = anon_sym_BQUOTE;
	v->a[610] = anon_sym_DOLLAR_BQUOTE;
	v->a[611] = sym_word;
	v->a[612] = anon_sym_SEMI;
	v->a[613] = 6;
	v->a[614] = actions(3);
	v->a[615] = 1;
	v->a[616] = sym_comment;
	v->a[617] = actions(834);
	v->a[618] = 1;
	v->a[619] = sym_variable_name;
	small_parse_table_31(v);
}

void	small_parse_table_31(t_small_parse_table_array *v)
{
	v->a[620] = actions(832);
	v->a[621] = 2;
	v->a[622] = aux_sym__simple_variable_name_token1;
	v->a[623] = aux_sym__multiline_variable_name_token1;
	v->a[624] = actions(828);
	v->a[625] = 4;
	v->a[626] = sym_file_descriptor;
	v->a[627] = sym_test_operator;
	v->a[628] = sym__bare_dollar;
	v->a[629] = sym__brace_start;
	v->a[630] = actions(830);
	v->a[631] = 9;
	v->a[632] = anon_sym_BANG;
	v->a[633] = anon_sym_DASH;
	v->a[634] = anon_sym_STAR;
	v->a[635] = anon_sym_QMARK;
	v->a[636] = anon_sym_DOLLAR;
	v->a[637] = anon_sym_POUND;
	v->a[638] = anon_sym_AT;
	v->a[639] = anon_sym_0;
	small_parse_table_32(v);
}

void	small_parse_table_32(t_small_parse_table_array *v)
{
	v->a[640] = anon_sym__;
	v->a[641] = actions(826);
	v->a[642] = 34;
	v->a[643] = anon_sym_LPAREN;
	v->a[644] = anon_sym_PIPE;
	v->a[645] = anon_sym_SEMI_SEMI;
	v->a[646] = anon_sym_SEMI_AMP;
	v->a[647] = anon_sym_SEMI_SEMI_AMP;
	v->a[648] = anon_sym_PIPE_AMP;
	v->a[649] = anon_sym_AMP_AMP;
	v->a[650] = anon_sym_PIPE_PIPE;
	v->a[651] = anon_sym_LT;
	v->a[652] = anon_sym_GT;
	v->a[653] = anon_sym_GT_GT;
	v->a[654] = anon_sym_AMP_GT;
	v->a[655] = anon_sym_AMP_GT_GT;
	v->a[656] = anon_sym_LT_AMP;
	v->a[657] = anon_sym_GT_AMP;
	v->a[658] = anon_sym_GT_PIPE;
	v->a[659] = anon_sym_LT_AMP_DASH;
	small_parse_table_33(v);
}

void	small_parse_table_33(t_small_parse_table_array *v)
{
	v->a[660] = anon_sym_GT_AMP_DASH;
	v->a[661] = anon_sym_LT_LT;
	v->a[662] = anon_sym_LT_LT_DASH;
	v->a[663] = aux_sym_heredoc_redirect_token1;
	v->a[664] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[665] = anon_sym_AMP;
	v->a[666] = sym__special_character;
	v->a[667] = anon_sym_DQUOTE;
	v->a[668] = sym_raw_string;
	v->a[669] = aux_sym_number_token1;
	v->a[670] = aux_sym_number_token2;
	v->a[671] = anon_sym_DOLLAR_LBRACE;
	v->a[672] = anon_sym_DOLLAR_LPAREN;
	v->a[673] = anon_sym_BQUOTE;
	v->a[674] = anon_sym_DOLLAR_BQUOTE;
	v->a[675] = sym_word;
	v->a[676] = anon_sym_SEMI;
	v->a[677] = 6;
	v->a[678] = actions(3);
	v->a[679] = 1;
	small_parse_table_34(v);
}

void	small_parse_table_34(t_small_parse_table_array *v)
{
	v->a[680] = sym_comment;
	v->a[681] = actions(840);
	v->a[682] = 1;
	v->a[683] = sym_variable_name;
	v->a[684] = actions(838);
	v->a[685] = 2;
	v->a[686] = aux_sym__simple_variable_name_token1;
	v->a[687] = aux_sym__multiline_variable_name_token1;
	v->a[688] = actions(828);
	v->a[689] = 4;
	v->a[690] = sym_file_descriptor;
	v->a[691] = sym_test_operator;
	v->a[692] = sym__bare_dollar;
	v->a[693] = sym__brace_start;
	v->a[694] = actions(836);
	v->a[695] = 9;
	v->a[696] = anon_sym_BANG;
	v->a[697] = anon_sym_DASH;
	v->a[698] = anon_sym_STAR;
	v->a[699] = anon_sym_QMARK;
	small_parse_table_35(v);
}

/* EOF small_parse_table_6.c */
