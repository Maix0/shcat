/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_456.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2280(t_small_parse_table_array *v)
{
	v->a[45600] = sym_terminator;
	v->a[45601] = actions(593);
	v->a[45602] = 2;
	v->a[45603] = anon_sym_SEMI_SEMI;
	v->a[45604] = anon_sym_SEMI;
	v->a[45605] = actions(762);
	v->a[45606] = 2;
	v->a[45607] = anon_sym_AMP_AMP;
	v->a[45608] = anon_sym_PIPE_PIPE;
	v->a[45609] = actions(1880);
	v->a[45610] = 3;
	v->a[45611] = anon_sym_LT;
	v->a[45612] = anon_sym_GT;
	v->a[45613] = anon_sym_GT_GT;
	v->a[45614] = state(925);
	v->a[45615] = 3;
	v->a[45616] = sym_file_redirect;
	v->a[45617] = sym_heredoc_redirect;
	v->a[45618] = aux_sym_redirected_statement_repeat1;
	v->a[45619] = 5;
	small_parse_table_2281(v);
}

void	small_parse_table_2281(t_small_parse_table_array *v)
{
	v->a[45620] = actions(3);
	v->a[45621] = 1;
	v->a[45622] = sym_comment;
	v->a[45623] = actions(1952);
	v->a[45624] = 1;
	v->a[45625] = aux_sym_heredoc_redirect_token1;
	v->a[45626] = actions(2001);
	v->a[45627] = 1;
	v->a[45628] = sym_variable_name;
	v->a[45629] = state(934);
	v->a[45630] = 2;
	v->a[45631] = sym_variable_assignment;
	v->a[45632] = aux_sym__variable_assignments_repeat1;
	v->a[45633] = actions(1954);
	v->a[45634] = 10;
	v->a[45635] = anon_sym_esac;
	v->a[45636] = anon_sym_PIPE;
	v->a[45637] = anon_sym_SEMI_SEMI;
	v->a[45638] = anon_sym_AMP_AMP;
	v->a[45639] = anon_sym_PIPE_PIPE;
	small_parse_table_2282(v);
}

void	small_parse_table_2282(t_small_parse_table_array *v)
{
	v->a[45640] = anon_sym_LT;
	v->a[45641] = anon_sym_GT;
	v->a[45642] = anon_sym_GT_GT;
	v->a[45643] = anon_sym_LT_LT;
	v->a[45644] = anon_sym_SEMI;
	v->a[45645] = 6;
	v->a[45646] = actions(3);
	v->a[45647] = 1;
	v->a[45648] = sym_comment;
	v->a[45649] = actions(584);
	v->a[45650] = 1;
	v->a[45651] = anon_sym_LT_LT;
	v->a[45652] = actions(1938);
	v->a[45653] = 1;
	v->a[45654] = aux_sym_heredoc_redirect_token1;
	v->a[45655] = actions(1876);
	v->a[45656] = 3;
	v->a[45657] = anon_sym_LT;
	v->a[45658] = anon_sym_GT;
	v->a[45659] = anon_sym_GT_GT;
	small_parse_table_2283(v);
}

void	small_parse_table_2283(t_small_parse_table_array *v)
{
	v->a[45660] = state(935);
	v->a[45661] = 3;
	v->a[45662] = sym_file_redirect;
	v->a[45663] = sym_heredoc_redirect;
	v->a[45664] = aux_sym_redirected_statement_repeat1;
	v->a[45665] = actions(1936);
	v->a[45666] = 6;
	v->a[45667] = anon_sym_esac;
	v->a[45668] = anon_sym_PIPE;
	v->a[45669] = anon_sym_SEMI_SEMI;
	v->a[45670] = anon_sym_AMP_AMP;
	v->a[45671] = anon_sym_PIPE_PIPE;
	v->a[45672] = anon_sym_SEMI;
	v->a[45673] = 10;
	v->a[45674] = actions(3);
	v->a[45675] = 1;
	v->a[45676] = sym_comment;
	v->a[45677] = actions(578);
	v->a[45678] = 1;
	v->a[45679] = anon_sym_SEMI_SEMI;
	small_parse_table_2284(v);
}

void	small_parse_table_2284(t_small_parse_table_array *v)
{
	v->a[45680] = actions(580);
	v->a[45681] = 1;
	v->a[45682] = anon_sym_PIPE;
	v->a[45683] = actions(593);
	v->a[45684] = 1;
	v->a[45685] = anon_sym_SEMI;
	v->a[45686] = actions(597);
	v->a[45687] = 1;
	v->a[45688] = anon_sym_LT_LT;
	v->a[45689] = actions(1870);
	v->a[45690] = 1;
	v->a[45691] = aux_sym_heredoc_redirect_token1;
	v->a[45692] = state(428);
	v->a[45693] = 1;
	v->a[45694] = sym_terminator;
	v->a[45695] = actions(769);
	v->a[45696] = 2;
	v->a[45697] = anon_sym_AMP_AMP;
	v->a[45698] = anon_sym_PIPE_PIPE;
	v->a[45699] = actions(1924);
	small_parse_table_2285(v);
}

/* EOF small_parse_table_456.c */
