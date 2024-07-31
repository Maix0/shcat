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
	v->a[54600] = anon_sym_SEMI;
	v->a[54601] = 5;
	v->a[54602] = actions(3);
	v->a[54603] = 1;
	v->a[54604] = sym_comment;
	v->a[54605] = actions(1752);
	v->a[54606] = 1;
	v->a[54607] = aux_sym_heredoc_redirect_token1;
	v->a[54608] = state(1121);
	v->a[54609] = 2;
	v->a[54610] = sym_file_redirect;
	v->a[54611] = aux_sym_redirected_statement_repeat2;
	v->a[54612] = actions(1676);
	v->a[54613] = 7;
	v->a[54614] = anon_sym_LT;
	v->a[54615] = anon_sym_GT;
	v->a[54616] = anon_sym_GT_GT;
	v->a[54617] = anon_sym_LT_AMP;
	v->a[54618] = anon_sym_GT_AMP;
	v->a[54619] = anon_sym_GT_PIPE;
	small_parse_table_2731(v);
}

void	small_parse_table_2731(t_small_parse_table_array *v)
{
	v->a[54620] = anon_sym_LT_GT;
	v->a[54621] = actions(1754);
	v->a[54622] = 7;
	v->a[54623] = anon_sym_PIPE;
	v->a[54624] = anon_sym_SEMI_SEMI;
	v->a[54625] = anon_sym_AMP_AMP;
	v->a[54626] = anon_sym_PIPE_PIPE;
	v->a[54627] = anon_sym_LT_LT;
	v->a[54628] = anon_sym_LT_LT_DASH;
	v->a[54629] = anon_sym_SEMI;
	v->a[54630] = 10;
	v->a[54631] = actions(3);
	v->a[54632] = 1;
	v->a[54633] = sym_comment;
	v->a[54634] = actions(2157);
	v->a[54635] = 1;
	v->a[54636] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54637] = actions(2159);
	v->a[54638] = 1;
	v->a[54639] = anon_sym_DOLLAR;
	small_parse_table_2732(v);
}

void	small_parse_table_2732(t_small_parse_table_array *v)
{
	v->a[54640] = actions(2161);
	v->a[54641] = 1;
	v->a[54642] = anon_sym_DQUOTE;
	v->a[54643] = actions(2163);
	v->a[54644] = 1;
	v->a[54645] = anon_sym_DOLLAR_LBRACE;
	v->a[54646] = actions(2165);
	v->a[54647] = 1;
	v->a[54648] = anon_sym_DOLLAR_LPAREN;
	v->a[54649] = actions(2167);
	v->a[54650] = 1;
	v->a[54651] = anon_sym_BQUOTE;
	v->a[54652] = actions(2169);
	v->a[54653] = 1;
	v->a[54654] = sym__bare_dollar;
	v->a[54655] = actions(2155);
	v->a[54656] = 5;
	v->a[54657] = aux_sym_concatenation_token1;
	v->a[54658] = sym_raw_string;
	v->a[54659] = sym_number;
	small_parse_table_2733(v);
}

void	small_parse_table_2733(t_small_parse_table_array *v)
{
	v->a[54660] = sym__comment_word;
	v->a[54661] = sym_word;
	v->a[54662] = state(1494);
	v->a[54663] = 5;
	v->a[54664] = sym_arithmetic_expansion;
	v->a[54665] = sym_string;
	v->a[54666] = sym_simple_expansion;
	v->a[54667] = sym_expansion;
	v->a[54668] = sym_command_substitution;
	v->a[54669] = 10;
	v->a[54670] = actions(3);
	v->a[54671] = 1;
	v->a[54672] = sym_comment;
	v->a[54673] = actions(930);
	v->a[54674] = 1;
	v->a[54675] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54676] = actions(934);
	v->a[54677] = 1;
	v->a[54678] = anon_sym_DQUOTE;
	v->a[54679] = actions(936);
	small_parse_table_2734(v);
}

void	small_parse_table_2734(t_small_parse_table_array *v)
{
	v->a[54680] = 1;
	v->a[54681] = anon_sym_DOLLAR_LBRACE;
	v->a[54682] = actions(938);
	v->a[54683] = 1;
	v->a[54684] = anon_sym_DOLLAR_LPAREN;
	v->a[54685] = actions(940);
	v->a[54686] = 1;
	v->a[54687] = anon_sym_BQUOTE;
	v->a[54688] = actions(1940);
	v->a[54689] = 1;
	v->a[54690] = sym__bare_dollar;
	v->a[54691] = actions(2171);
	v->a[54692] = 1;
	v->a[54693] = anon_sym_DOLLAR;
	v->a[54694] = actions(1936);
	v->a[54695] = 5;
	v->a[54696] = aux_sym_concatenation_token1;
	v->a[54697] = sym_raw_string;
	v->a[54698] = sym_number;
	v->a[54699] = sym__comment_word;
	small_parse_table_2735(v);
}

/* EOF small_parse_table_546.c */
