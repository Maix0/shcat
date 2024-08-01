/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_454.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2270(t_small_parse_table_array *v)
{
	v->a[45400] = state(552);
	v->a[45401] = 1;
	v->a[45402] = sym_terminator;
	v->a[45403] = actions(593);
	v->a[45404] = 2;
	v->a[45405] = anon_sym_SEMI_SEMI;
	v->a[45406] = anon_sym_SEMI;
	v->a[45407] = actions(762);
	v->a[45408] = 2;
	v->a[45409] = anon_sym_AMP_AMP;
	v->a[45410] = anon_sym_PIPE_PIPE;
	v->a[45411] = actions(1880);
	v->a[45412] = 3;
	v->a[45413] = anon_sym_LT;
	v->a[45414] = anon_sym_GT;
	v->a[45415] = anon_sym_GT_GT;
	v->a[45416] = state(925);
	v->a[45417] = 3;
	v->a[45418] = sym_file_redirect;
	v->a[45419] = sym_heredoc_redirect;
	small_parse_table_2271(v);
}

void	small_parse_table_2271(t_small_parse_table_array *v)
{
	v->a[45420] = aux_sym_redirected_statement_repeat1;
	v->a[45421] = 5;
	v->a[45422] = actions(3);
	v->a[45423] = 1;
	v->a[45424] = sym_comment;
	v->a[45425] = actions(1952);
	v->a[45426] = 1;
	v->a[45427] = aux_sym_heredoc_redirect_token1;
	v->a[45428] = actions(1988);
	v->a[45429] = 1;
	v->a[45430] = sym_variable_name;
	v->a[45431] = state(964);
	v->a[45432] = 2;
	v->a[45433] = sym_variable_assignment;
	v->a[45434] = aux_sym__variable_assignments_repeat1;
	v->a[45435] = actions(1954);
	v->a[45436] = 10;
	v->a[45437] = anon_sym_PIPE;
	v->a[45438] = anon_sym_RPAREN;
	v->a[45439] = anon_sym_SEMI_SEMI;
	small_parse_table_2272(v);
}

void	small_parse_table_2272(t_small_parse_table_array *v)
{
	v->a[45440] = anon_sym_AMP_AMP;
	v->a[45441] = anon_sym_PIPE_PIPE;
	v->a[45442] = anon_sym_LT;
	v->a[45443] = anon_sym_GT;
	v->a[45444] = anon_sym_GT_GT;
	v->a[45445] = anon_sym_LT_LT;
	v->a[45446] = anon_sym_SEMI;
	v->a[45447] = 5;
	v->a[45448] = actions(3);
	v->a[45449] = 1;
	v->a[45450] = sym_comment;
	v->a[45451] = actions(1963);
	v->a[45452] = 1;
	v->a[45453] = aux_sym_heredoc_redirect_token1;
	v->a[45454] = actions(1990);
	v->a[45455] = 1;
	v->a[45456] = sym_variable_name;
	v->a[45457] = state(964);
	v->a[45458] = 2;
	v->a[45459] = sym_variable_assignment;
	small_parse_table_2273(v);
}

void	small_parse_table_2273(t_small_parse_table_array *v)
{
	v->a[45460] = aux_sym__variable_assignments_repeat1;
	v->a[45461] = actions(1961);
	v->a[45462] = 10;
	v->a[45463] = anon_sym_PIPE;
	v->a[45464] = anon_sym_RPAREN;
	v->a[45465] = anon_sym_SEMI_SEMI;
	v->a[45466] = anon_sym_AMP_AMP;
	v->a[45467] = anon_sym_PIPE_PIPE;
	v->a[45468] = anon_sym_LT;
	v->a[45469] = anon_sym_GT;
	v->a[45470] = anon_sym_GT_GT;
	v->a[45471] = anon_sym_LT_LT;
	v->a[45472] = anon_sym_SEMI;
	v->a[45473] = 5;
	v->a[45474] = actions(3);
	v->a[45475] = 1;
	v->a[45476] = sym_comment;
	v->a[45477] = actions(1993);
	v->a[45478] = 1;
	v->a[45479] = sym_variable_name;
	small_parse_table_2274(v);
}

void	small_parse_table_2274(t_small_parse_table_array *v)
{
	v->a[45480] = actions(1963);
	v->a[45481] = 2;
	v->a[45482] = ts_builtin_sym_end;
	v->a[45483] = aux_sym_heredoc_redirect_token1;
	v->a[45484] = state(965);
	v->a[45485] = 2;
	v->a[45486] = sym_variable_assignment;
	v->a[45487] = aux_sym__variable_assignments_repeat1;
	v->a[45488] = actions(1961);
	v->a[45489] = 9;
	v->a[45490] = anon_sym_PIPE;
	v->a[45491] = anon_sym_SEMI_SEMI;
	v->a[45492] = anon_sym_AMP_AMP;
	v->a[45493] = anon_sym_PIPE_PIPE;
	v->a[45494] = anon_sym_LT;
	v->a[45495] = anon_sym_GT;
	v->a[45496] = anon_sym_GT_GT;
	v->a[45497] = anon_sym_LT_LT;
	v->a[45498] = anon_sym_SEMI;
	v->a[45499] = 9;
	small_parse_table_2275(v);
}

/* EOF small_parse_table_454.c */
