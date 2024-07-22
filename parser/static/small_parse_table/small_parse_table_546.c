/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_546.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2730(t_small_parse_table_array *v)
{
	v->a[54600] = actions(790);
	v->a[54601] = 2;
	v->a[54602] = anon_sym_LT_LT;
	v->a[54603] = anon_sym_LT_LT_DASH;
	v->a[54604] = actions(1059);
	v->a[54605] = 2;
	v->a[54606] = anon_sym_AMP_AMP;
	v->a[54607] = anon_sym_PIPE_PIPE;
	v->a[54608] = state(1062);
	v->a[54609] = 3;
	v->a[54610] = sym_file_redirect;
	v->a[54611] = sym_heredoc_redirect;
	v->a[54612] = aux_sym_redirected_statement_repeat1;
	v->a[54613] = actions(1886);
	v->a[54614] = 7;
	v->a[54615] = anon_sym_LT;
	v->a[54616] = anon_sym_GT;
	v->a[54617] = anon_sym_GT_GT;
	v->a[54618] = anon_sym_LT_AMP;
	v->a[54619] = anon_sym_GT_AMP;
	small_parse_table_2731(v);
}

void	small_parse_table_2731(t_small_parse_table_array *v)
{
	v->a[54620] = anon_sym_GT_PIPE;
	v->a[54621] = anon_sym_LT_GT;
	v->a[54622] = 11;
	v->a[54623] = actions(3);
	v->a[54624] = 1;
	v->a[54625] = sym_comment;
	v->a[54626] = actions(782);
	v->a[54627] = 1;
	v->a[54628] = anon_sym_PIPE;
	v->a[54629] = actions(784);
	v->a[54630] = 1;
	v->a[54631] = anon_sym_BQUOTE;
	v->a[54632] = actions(1888);
	v->a[54633] = 1;
	v->a[54634] = aux_sym_heredoc_redirect_token1;
	v->a[54635] = actions(1890);
	v->a[54636] = 1;
	v->a[54637] = sym_file_descriptor;
	v->a[54638] = state(816);
	v->a[54639] = 1;
	small_parse_table_2732(v);
}

void	small_parse_table_2732(t_small_parse_table_array *v)
{
	v->a[54640] = sym_terminator;
	v->a[54641] = actions(786);
	v->a[54642] = 2;
	v->a[54643] = anon_sym_SEMI_SEMI;
	v->a[54644] = anon_sym_SEMI;
	v->a[54645] = actions(790);
	v->a[54646] = 2;
	v->a[54647] = anon_sym_LT_LT;
	v->a[54648] = anon_sym_LT_LT_DASH;
	v->a[54649] = actions(1059);
	v->a[54650] = 2;
	v->a[54651] = anon_sym_AMP_AMP;
	v->a[54652] = anon_sym_PIPE_PIPE;
	v->a[54653] = state(1062);
	v->a[54654] = 3;
	v->a[54655] = sym_file_redirect;
	v->a[54656] = sym_heredoc_redirect;
	v->a[54657] = aux_sym_redirected_statement_repeat1;
	v->a[54658] = actions(1886);
	v->a[54659] = 7;
	small_parse_table_2733(v);
}

void	small_parse_table_2733(t_small_parse_table_array *v)
{
	v->a[54660] = anon_sym_LT;
	v->a[54661] = anon_sym_GT;
	v->a[54662] = anon_sym_GT_GT;
	v->a[54663] = anon_sym_LT_AMP;
	v->a[54664] = anon_sym_GT_AMP;
	v->a[54665] = anon_sym_GT_PIPE;
	v->a[54666] = anon_sym_LT_GT;
	v->a[54667] = 6;
	v->a[54668] = actions(3);
	v->a[54669] = 1;
	v->a[54670] = sym_comment;
	v->a[54671] = actions(1906);
	v->a[54672] = 1;
	v->a[54673] = aux_sym_concatenation_token1;
	v->a[54674] = actions(1909);
	v->a[54675] = 1;
	v->a[54676] = sym__concat;
	v->a[54677] = state(963);
	v->a[54678] = 1;
	v->a[54679] = aux_sym_concatenation_repeat1;
	small_parse_table_2734(v);
}

void	small_parse_table_2734(t_small_parse_table_array *v)
{
	v->a[54680] = actions(1110);
	v->a[54681] = 2;
	v->a[54682] = sym_file_descriptor;
	v->a[54683] = sym_variable_name;
	v->a[54684] = actions(1105);
	v->a[54685] = 16;
	v->a[54686] = anon_sym_LT;
	v->a[54687] = anon_sym_GT;
	v->a[54688] = anon_sym_GT_GT;
	v->a[54689] = anon_sym_LT_AMP;
	v->a[54690] = anon_sym_GT_AMP;
	v->a[54691] = anon_sym_GT_PIPE;
	v->a[54692] = anon_sym_LT_GT;
	v->a[54693] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54694] = anon_sym_DOLLAR;
	v->a[54695] = anon_sym_DQUOTE;
	v->a[54696] = sym_raw_string;
	v->a[54697] = sym_number;
	v->a[54698] = anon_sym_DOLLAR_LBRACE;
	v->a[54699] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2735(v);
}

/* EOF small_parse_table_546.c */
