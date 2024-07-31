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
	v->a[45600] = aux_sym_redirected_statement_repeat1;
	v->a[45601] = actions(1597);
	v->a[45602] = 7;
	v->a[45603] = anon_sym_LT;
	v->a[45604] = anon_sym_GT;
	v->a[45605] = anon_sym_GT_GT;
	v->a[45606] = anon_sym_LT_AMP;
	v->a[45607] = anon_sym_GT_AMP;
	v->a[45608] = anon_sym_GT_PIPE;
	v->a[45609] = anon_sym_LT_GT;
	v->a[45610] = 6;
	v->a[45611] = actions(3);
	v->a[45612] = 1;
	v->a[45613] = sym_comment;
	v->a[45614] = actions(1599);
	v->a[45615] = 1;
	v->a[45616] = aux_sym_concatenation_token1;
	v->a[45617] = actions(1601);
	v->a[45618] = 1;
	v->a[45619] = sym__concat;
	small_parse_table_2281(v);
}

void	small_parse_table_2281(t_small_parse_table_array *v)
{
	v->a[45620] = state(722);
	v->a[45621] = 1;
	v->a[45622] = aux_sym_concatenation_repeat1;
	v->a[45623] = actions(1001);
	v->a[45624] = 3;
	v->a[45625] = sym_variable_name;
	v->a[45626] = ts_builtin_sym_end;
	v->a[45627] = aux_sym_heredoc_redirect_token1;
	v->a[45628] = actions(997);
	v->a[45629] = 14;
	v->a[45630] = anon_sym_PIPE;
	v->a[45631] = anon_sym_SEMI_SEMI;
	v->a[45632] = anon_sym_AMP_AMP;
	v->a[45633] = anon_sym_PIPE_PIPE;
	v->a[45634] = anon_sym_LT;
	v->a[45635] = anon_sym_GT;
	v->a[45636] = anon_sym_GT_GT;
	v->a[45637] = anon_sym_LT_AMP;
	v->a[45638] = anon_sym_GT_AMP;
	v->a[45639] = anon_sym_GT_PIPE;
	small_parse_table_2282(v);
}

void	small_parse_table_2282(t_small_parse_table_array *v)
{
	v->a[45640] = anon_sym_LT_GT;
	v->a[45641] = anon_sym_LT_LT;
	v->a[45642] = anon_sym_LT_LT_DASH;
	v->a[45643] = anon_sym_SEMI;
	v->a[45644] = 10;
	v->a[45645] = actions(3);
	v->a[45646] = 1;
	v->a[45647] = sym_comment;
	v->a[45648] = actions(746);
	v->a[45649] = 1;
	v->a[45650] = anon_sym_PIPE;
	v->a[45651] = actions(752);
	v->a[45652] = 1;
	v->a[45653] = anon_sym_SEMI;
	v->a[45654] = actions(1595);
	v->a[45655] = 1;
	v->a[45656] = aux_sym_heredoc_redirect_token1;
	v->a[45657] = state(507);
	v->a[45658] = 1;
	v->a[45659] = sym_terminator;
	small_parse_table_2283(v);
}

void	small_parse_table_2283(t_small_parse_table_array *v)
{
	v->a[45660] = actions(744);
	v->a[45661] = 2;
	v->a[45662] = anon_sym_esac;
	v->a[45663] = anon_sym_SEMI_SEMI;
	v->a[45664] = actions(748);
	v->a[45665] = 2;
	v->a[45666] = anon_sym_AMP_AMP;
	v->a[45667] = anon_sym_PIPE_PIPE;
	v->a[45668] = actions(750);
	v->a[45669] = 2;
	v->a[45670] = anon_sym_LT_LT;
	v->a[45671] = anon_sym_LT_LT_DASH;
	v->a[45672] = state(931);
	v->a[45673] = 3;
	v->a[45674] = sym_file_redirect;
	v->a[45675] = sym_heredoc_redirect;
	v->a[45676] = aux_sym_redirected_statement_repeat1;
	v->a[45677] = actions(1593);
	v->a[45678] = 7;
	v->a[45679] = anon_sym_LT;
	small_parse_table_2284(v);
}

void	small_parse_table_2284(t_small_parse_table_array *v)
{
	v->a[45680] = anon_sym_GT;
	v->a[45681] = anon_sym_GT_GT;
	v->a[45682] = anon_sym_LT_AMP;
	v->a[45683] = anon_sym_GT_AMP;
	v->a[45684] = anon_sym_GT_PIPE;
	v->a[45685] = anon_sym_LT_GT;
	v->a[45686] = 10;
	v->a[45687] = actions(3);
	v->a[45688] = 1;
	v->a[45689] = sym_comment;
	v->a[45690] = actions(746);
	v->a[45691] = 1;
	v->a[45692] = anon_sym_PIPE;
	v->a[45693] = actions(865);
	v->a[45694] = 1;
	v->a[45695] = ts_builtin_sym_end;
	v->a[45696] = actions(1605);
	v->a[45697] = 1;
	v->a[45698] = aux_sym_heredoc_redirect_token1;
	v->a[45699] = state(625);
	small_parse_table_2285(v);
}

/* EOF small_parse_table_456.c */
