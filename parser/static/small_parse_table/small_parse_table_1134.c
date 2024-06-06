/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1134.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5670(t_small_parse_table_array *v)
{
	v->a[113400] = sym_simple_expansion;
	v->a[113401] = sym_expansion;
	v->a[113402] = sym_command_substitution;
	v->a[113403] = 7;
	v->a[113404] = actions(3);
	v->a[113405] = 1;
	v->a[113406] = sym_comment;
	v->a[113407] = actions(5281);
	v->a[113408] = 1;
	v->a[113409] = aux_sym_heredoc_redirect_token1;
	v->a[113410] = actions(6557);
	v->a[113411] = 1;
	v->a[113412] = sym_file_descriptor;
	v->a[113413] = actions(6554);
	v->a[113414] = 2;
	v->a[113415] = anon_sym_LT_AMP_DASH;
	v->a[113416] = anon_sym_GT_AMP_DASH;
	v->a[113417] = state(2405);
	v->a[113418] = 2;
	v->a[113419] = sym_file_redirect;
	small_parse_table_5671(v);
}

void	small_parse_table_5671(t_small_parse_table_array *v)
{
	v->a[113420] = aux_sym_redirected_statement_repeat2;
	v->a[113421] = actions(6551);
	v->a[113422] = 8;
	v->a[113423] = anon_sym_LT;
	v->a[113424] = anon_sym_GT;
	v->a[113425] = anon_sym_GT_GT;
	v->a[113426] = anon_sym_AMP_GT;
	v->a[113427] = anon_sym_AMP_GT_GT;
	v->a[113428] = anon_sym_LT_AMP;
	v->a[113429] = anon_sym_GT_AMP;
	v->a[113430] = anon_sym_GT_PIPE;
	v->a[113431] = actions(5273);
	v->a[113432] = 9;
	v->a[113433] = anon_sym_PIPE;
	v->a[113434] = anon_sym_SEMI_SEMI;
	v->a[113435] = anon_sym_PIPE_AMP;
	v->a[113436] = anon_sym_AMP_AMP;
	v->a[113437] = anon_sym_PIPE_PIPE;
	v->a[113438] = anon_sym_LT_LT;
	v->a[113439] = anon_sym_LT_LT_DASH;
	small_parse_table_5672(v);
}

void	small_parse_table_5672(t_small_parse_table_array *v)
{
	v->a[113440] = anon_sym_AMP;
	v->a[113441] = anon_sym_SEMI;
	v->a[113442] = 5;
	v->a[113443] = actions(3);
	v->a[113444] = 1;
	v->a[113445] = sym_comment;
	v->a[113446] = state(2406);
	v->a[113447] = 1;
	v->a[113448] = aux_sym_pipeline_repeat1;
	v->a[113449] = actions(6560);
	v->a[113450] = 2;
	v->a[113451] = anon_sym_PIPE;
	v->a[113452] = anon_sym_PIPE_AMP;
	v->a[113453] = actions(5367);
	v->a[113454] = 3;
	v->a[113455] = sym_file_descriptor;
	v->a[113456] = ts_builtin_sym_end;
	v->a[113457] = aux_sym_heredoc_redirect_token1;
	v->a[113458] = actions(5362);
	v->a[113459] = 17;
	small_parse_table_5673(v);
}

void	small_parse_table_5673(t_small_parse_table_array *v)
{
	v->a[113460] = anon_sym_SEMI_SEMI;
	v->a[113461] = anon_sym_AMP_AMP;
	v->a[113462] = anon_sym_PIPE_PIPE;
	v->a[113463] = anon_sym_LT;
	v->a[113464] = anon_sym_GT;
	v->a[113465] = anon_sym_GT_GT;
	v->a[113466] = anon_sym_AMP_GT;
	v->a[113467] = anon_sym_AMP_GT_GT;
	v->a[113468] = anon_sym_LT_AMP;
	v->a[113469] = anon_sym_GT_AMP;
	v->a[113470] = anon_sym_GT_PIPE;
	v->a[113471] = anon_sym_LT_AMP_DASH;
	v->a[113472] = anon_sym_GT_AMP_DASH;
	v->a[113473] = anon_sym_LT_LT;
	v->a[113474] = anon_sym_LT_LT_DASH;
	v->a[113475] = anon_sym_AMP;
	v->a[113476] = anon_sym_SEMI;
	v->a[113477] = 3;
	v->a[113478] = actions(3);
	v->a[113479] = 1;
	small_parse_table_5674(v);
}

void	small_parse_table_5674(t_small_parse_table_array *v)
{
	v->a[113480] = sym_comment;
	v->a[113481] = actions(6137);
	v->a[113482] = 2;
	v->a[113483] = sym_file_descriptor;
	v->a[113484] = aux_sym_heredoc_redirect_token1;
	v->a[113485] = actions(6139);
	v->a[113486] = 21;
	v->a[113487] = anon_sym_PIPE;
	v->a[113488] = anon_sym_SEMI_SEMI;
	v->a[113489] = anon_sym_SEMI_AMP;
	v->a[113490] = anon_sym_SEMI_SEMI_AMP;
	v->a[113491] = anon_sym_PIPE_AMP;
	v->a[113492] = anon_sym_AMP_AMP;
	v->a[113493] = anon_sym_PIPE_PIPE;
	v->a[113494] = anon_sym_LT;
	v->a[113495] = anon_sym_GT;
	v->a[113496] = anon_sym_GT_GT;
	v->a[113497] = anon_sym_AMP_GT;
	v->a[113498] = anon_sym_AMP_GT_GT;
	v->a[113499] = anon_sym_LT_AMP;
	small_parse_table_5675(v);
}

/* EOF small_parse_table_1134.c */
