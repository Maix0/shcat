/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_916.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4580(t_small_parse_table_array *v)
{
	v->a[91600] = 1;
	v->a[91601] = sym__heredoc_body_beginning;
	v->a[91602] = state(1336);
	v->a[91603] = 1;
	v->a[91604] = sym__simple_heredoc_body;
	v->a[91605] = state(1368);
	v->a[91606] = 1;
	v->a[91607] = sym__heredoc_body;
	v->a[91608] = state(2220);
	v->a[91609] = 1;
	v->a[91610] = sym_heredoc_body;
	v->a[91611] = 4;
	v->a[91612] = actions(870);
	v->a[91613] = 1;
	v->a[91614] = sym_comment;
	v->a[91615] = state(2050);
	v->a[91616] = 1;
	v->a[91617] = aux_sym_concatenation_repeat1;
	v->a[91618] = actions(3988);
	v->a[91619] = 2;
	small_parse_table_4581(v);
}

void	small_parse_table_4581(t_small_parse_table_array *v)
{
	v->a[91620] = sym__concat;
	v->a[91621] = aux_sym_concatenation_token1;
	v->a[91622] = actions(4034);
	v->a[91623] = 2;
	v->a[91624] = anon_sym_PIPE;
	v->a[91625] = anon_sym_RPAREN;
	v->a[91626] = 2;
	v->a[91627] = actions(870);
	v->a[91628] = 1;
	v->a[91629] = sym_comment;
	v->a[91630] = actions(1037);
	v->a[91631] = 5;
	v->a[91632] = sym__concat;
	v->a[91633] = anon_sym_PIPE;
	v->a[91634] = anon_sym_RPAREN;
	v->a[91635] = anon_sym_RBRACE;
	v->a[91636] = aux_sym_concatenation_token1;
	v->a[91637] = 5;
	v->a[91638] = actions(870);
	v->a[91639] = 1;
	small_parse_table_4582(v);
}

void	small_parse_table_4582(t_small_parse_table_array *v)
{
	v->a[91640] = sym_comment;
	v->a[91641] = actions(4018);
	v->a[91642] = 1;
	v->a[91643] = sym__heredoc_body_beginning;
	v->a[91644] = actions(4022);
	v->a[91645] = 1;
	v->a[91646] = sym_simple_heredoc_body;
	v->a[91647] = state(2258);
	v->a[91648] = 1;
	v->a[91649] = sym_heredoc_body;
	v->a[91650] = state(1188);
	v->a[91651] = 2;
	v->a[91652] = sym__heredoc_body;
	v->a[91653] = sym__simple_heredoc_body;
	v->a[91654] = 2;
	v->a[91655] = actions(870);
	v->a[91656] = 1;
	v->a[91657] = sym_comment;
	v->a[91658] = actions(1033);
	v->a[91659] = 5;
	small_parse_table_4583(v);
}

void	small_parse_table_4583(t_small_parse_table_array *v)
{
	v->a[91660] = sym__concat;
	v->a[91661] = anon_sym_PIPE;
	v->a[91662] = anon_sym_RPAREN;
	v->a[91663] = anon_sym_RBRACE;
	v->a[91664] = aux_sym_concatenation_token1;
	v->a[91665] = 5;
	v->a[91666] = actions(870);
	v->a[91667] = 1;
	v->a[91668] = sym_comment;
	v->a[91669] = actions(4018);
	v->a[91670] = 1;
	v->a[91671] = sym__heredoc_body_beginning;
	v->a[91672] = actions(4020);
	v->a[91673] = 1;
	v->a[91674] = sym_simple_heredoc_body;
	v->a[91675] = state(2221);
	v->a[91676] = 1;
	v->a[91677] = sym_heredoc_body;
	v->a[91678] = state(1687);
	v->a[91679] = 2;
	small_parse_table_4584(v);
}

void	small_parse_table_4584(t_small_parse_table_array *v)
{
	v->a[91680] = sym__heredoc_body;
	v->a[91681] = sym__simple_heredoc_body;
	v->a[91682] = 2;
	v->a[91683] = actions(870);
	v->a[91684] = 1;
	v->a[91685] = sym_comment;
	v->a[91686] = actions(1041);
	v->a[91687] = 5;
	v->a[91688] = sym__concat;
	v->a[91689] = anon_sym_PIPE;
	v->a[91690] = anon_sym_RPAREN;
	v->a[91691] = anon_sym_RBRACE;
	v->a[91692] = aux_sym_concatenation_token1;
	v->a[91693] = 2;
	v->a[91694] = actions(870);
	v->a[91695] = 1;
	v->a[91696] = sym_comment;
	v->a[91697] = actions(1009);
	v->a[91698] = 5;
	v->a[91699] = sym__concat;
	small_parse_table_4585(v);
}

/* EOF small_parse_table_916.c */
