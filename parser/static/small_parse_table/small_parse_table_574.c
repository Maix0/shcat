/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_574.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2870(t_small_parse_table_array *v)
{
	v->a[57400] = sym_heredoc_redirect;
	v->a[57401] = aux_sym_redirected_statement_repeat1;
	v->a[57402] = actions(960);
	v->a[57403] = 15;
	v->a[57404] = anon_sym_PIPE;
	v->a[57405] = anon_sym_SEMI_SEMI;
	v->a[57406] = anon_sym_AMP_AMP;
	v->a[57407] = anon_sym_PIPE_PIPE;
	v->a[57408] = anon_sym_LT;
	v->a[57409] = anon_sym_GT;
	v->a[57410] = anon_sym_GT_GT;
	v->a[57411] = anon_sym_LT_AMP;
	v->a[57412] = anon_sym_GT_AMP;
	v->a[57413] = anon_sym_GT_PIPE;
	v->a[57414] = anon_sym_LT_GT;
	v->a[57415] = anon_sym_LT_LT;
	v->a[57416] = anon_sym_LT_LT_DASH;
	v->a[57417] = anon_sym_AMP;
	v->a[57418] = anon_sym_SEMI;
	v->a[57419] = 10;
	small_parse_table_2871(v);
}

void	small_parse_table_2871(t_small_parse_table_array *v)
{
	v->a[57420] = actions(3);
	v->a[57421] = 1;
	v->a[57422] = sym_comment;
	v->a[57423] = actions(736);
	v->a[57424] = 1;
	v->a[57425] = anon_sym_PIPE;
	v->a[57426] = actions(1865);
	v->a[57427] = 1;
	v->a[57428] = aux_sym_heredoc_redirect_token1;
	v->a[57429] = actions(1889);
	v->a[57430] = 1;
	v->a[57431] = sym_file_descriptor;
	v->a[57432] = state(785);
	v->a[57433] = 1;
	v->a[57434] = sym_terminator;
	v->a[57435] = actions(744);
	v->a[57436] = 2;
	v->a[57437] = anon_sym_LT_LT;
	v->a[57438] = anon_sym_LT_LT_DASH;
	v->a[57439] = actions(955);
	small_parse_table_2872(v);
}

void	small_parse_table_2872(t_small_parse_table_array *v)
{
	v->a[57440] = 2;
	v->a[57441] = anon_sym_AMP_AMP;
	v->a[57442] = anon_sym_PIPE_PIPE;
	v->a[57443] = actions(740);
	v->a[57444] = 3;
	v->a[57445] = anon_sym_SEMI_SEMI;
	v->a[57446] = anon_sym_AMP;
	v->a[57447] = anon_sym_SEMI;
	v->a[57448] = state(1194);
	v->a[57449] = 3;
	v->a[57450] = sym_file_redirect;
	v->a[57451] = sym_heredoc_redirect;
	v->a[57452] = aux_sym_redirected_statement_repeat1;
	v->a[57453] = actions(1887);
	v->a[57454] = 7;
	v->a[57455] = anon_sym_LT;
	v->a[57456] = anon_sym_GT;
	v->a[57457] = anon_sym_GT_GT;
	v->a[57458] = anon_sym_LT_AMP;
	v->a[57459] = anon_sym_GT_AMP;
	small_parse_table_2873(v);
}

void	small_parse_table_2873(t_small_parse_table_array *v)
{
	v->a[57460] = anon_sym_GT_PIPE;
	v->a[57461] = anon_sym_LT_GT;
	v->a[57462] = 10;
	v->a[57463] = actions(3);
	v->a[57464] = 1;
	v->a[57465] = sym_comment;
	v->a[57466] = actions(738);
	v->a[57467] = 1;
	v->a[57468] = anon_sym_RPAREN;
	v->a[57469] = actions(1865);
	v->a[57470] = 1;
	v->a[57471] = aux_sym_heredoc_redirect_token1;
	v->a[57472] = actions(1881);
	v->a[57473] = 1;
	v->a[57474] = sym_file_descriptor;
	v->a[57475] = state(631);
	v->a[57476] = 1;
	v->a[57477] = sym_terminator;
	v->a[57478] = actions(742);
	v->a[57479] = 2;
	small_parse_table_2874(v);
}

void	small_parse_table_2874(t_small_parse_table_array *v)
{
	v->a[57480] = anon_sym_AMP_AMP;
	v->a[57481] = anon_sym_PIPE_PIPE;
	v->a[57482] = actions(744);
	v->a[57483] = 2;
	v->a[57484] = anon_sym_LT_LT;
	v->a[57485] = anon_sym_LT_LT_DASH;
	v->a[57486] = actions(740);
	v->a[57487] = 3;
	v->a[57488] = anon_sym_SEMI_SEMI;
	v->a[57489] = anon_sym_AMP;
	v->a[57490] = anon_sym_SEMI;
	v->a[57491] = state(1080);
	v->a[57492] = 3;
	v->a[57493] = sym_file_redirect;
	v->a[57494] = sym_heredoc_redirect;
	v->a[57495] = aux_sym_redirected_statement_repeat1;
	v->a[57496] = actions(1879);
	v->a[57497] = 7;
	v->a[57498] = anon_sym_LT;
	v->a[57499] = anon_sym_GT;
	small_parse_table_2875(v);
}

/* EOF small_parse_table_574.c */
