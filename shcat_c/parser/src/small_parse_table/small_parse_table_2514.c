/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2514.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12570(t_small_parse_table_array *v)
{
	v->a[251400] = actions(11315);
	v->a[251401] = 1;
	v->a[251402] = aux_sym_heredoc_redirect_token1;
	v->a[251403] = actions(11634);
	v->a[251404] = 1;
	v->a[251405] = anon_sym_LT_LT_LT;
	v->a[251406] = actions(11637);
	v->a[251407] = 1;
	v->a[251408] = sym_file_descriptor;
	v->a[251409] = actions(11631);
	v->a[251410] = 2;
	v->a[251411] = anon_sym_LT_AMP_DASH;
	v->a[251412] = anon_sym_GT_AMP_DASH;
	v->a[251413] = state(4517);
	v->a[251414] = 3;
	v->a[251415] = sym_file_redirect;
	v->a[251416] = sym_herestring_redirect;
	v->a[251417] = aux_sym_redirected_statement_repeat2;
	v->a[251418] = actions(11628);
	v->a[251419] = 8;
	small_parse_table_12571(v);
}

void	small_parse_table_12571(t_small_parse_table_array *v)
{
	v->a[251420] = anon_sym_LT;
	v->a[251421] = anon_sym_GT;
	v->a[251422] = anon_sym_GT_GT;
	v->a[251423] = anon_sym_AMP_GT;
	v->a[251424] = anon_sym_AMP_GT_GT;
	v->a[251425] = anon_sym_LT_AMP;
	v->a[251426] = anon_sym_GT_AMP;
	v->a[251427] = anon_sym_GT_PIPE;
	v->a[251428] = actions(11307);
	v->a[251429] = 10;
	v->a[251430] = anon_sym_SEMI;
	v->a[251431] = anon_sym_PIPE_PIPE;
	v->a[251432] = anon_sym_AMP_AMP;
	v->a[251433] = anon_sym_PIPE;
	v->a[251434] = anon_sym_AMP;
	v->a[251435] = anon_sym_LT_LT;
	v->a[251436] = anon_sym_RPAREN;
	v->a[251437] = anon_sym_SEMI_SEMI;
	v->a[251438] = anon_sym_PIPE_AMP;
	v->a[251439] = anon_sym_LT_LT_DASH;
	small_parse_table_12572(v);
}

void	small_parse_table_12572(t_small_parse_table_array *v)
{
	v->a[251440] = 6;
	v->a[251441] = actions(3);
	v->a[251442] = 1;
	v->a[251443] = sym_comment;
	v->a[251444] = actions(11512);
	v->a[251445] = 1;
	v->a[251446] = aux_sym_concatenation_token1;
	v->a[251447] = actions(11514);
	v->a[251448] = 1;
	v->a[251449] = sym__concat;
	v->a[251450] = state(4510);
	v->a[251451] = 1;
	v->a[251452] = aux_sym_concatenation_repeat1;
	v->a[251453] = actions(2074);
	v->a[251454] = 3;
	v->a[251455] = sym_file_descriptor;
	v->a[251456] = ts_builtin_sym_end;
	v->a[251457] = aux_sym_heredoc_redirect_token1;
	v->a[251458] = actions(2072);
	v->a[251459] = 20;
	small_parse_table_12573(v);
}

void	small_parse_table_12573(t_small_parse_table_array *v)
{
	v->a[251460] = anon_sym_SEMI;
	v->a[251461] = anon_sym_PIPE_PIPE;
	v->a[251462] = anon_sym_AMP_AMP;
	v->a[251463] = anon_sym_PIPE;
	v->a[251464] = anon_sym_AMP;
	v->a[251465] = anon_sym_LT;
	v->a[251466] = anon_sym_GT;
	v->a[251467] = anon_sym_LT_LT;
	v->a[251468] = anon_sym_GT_GT;
	v->a[251469] = anon_sym_SEMI_SEMI;
	v->a[251470] = anon_sym_PIPE_AMP;
	v->a[251471] = anon_sym_AMP_GT;
	v->a[251472] = anon_sym_AMP_GT_GT;
	v->a[251473] = anon_sym_LT_AMP;
	v->a[251474] = anon_sym_GT_AMP;
	v->a[251475] = anon_sym_GT_PIPE;
	v->a[251476] = anon_sym_LT_AMP_DASH;
	v->a[251477] = anon_sym_GT_AMP_DASH;
	v->a[251478] = anon_sym_LT_LT_DASH;
	v->a[251479] = anon_sym_LT_LT_LT;
	small_parse_table_12574(v);
}

void	small_parse_table_12574(t_small_parse_table_array *v)
{
	v->a[251480] = 6;
	v->a[251481] = actions(3);
	v->a[251482] = 1;
	v->a[251483] = sym_comment;
	v->a[251484] = actions(11640);
	v->a[251485] = 1;
	v->a[251486] = sym_variable_name;
	v->a[251487] = state(6757);
	v->a[251488] = 1;
	v->a[251489] = sym_subscript;
	v->a[251490] = state(4519);
	v->a[251491] = 2;
	v->a[251492] = sym_variable_assignment;
	v->a[251493] = aux_sym_variable_assignments_repeat1;
	v->a[251494] = actions(11290);
	v->a[251495] = 3;
	v->a[251496] = sym_file_descriptor;
	v->a[251497] = ts_builtin_sym_end;
	v->a[251498] = aux_sym_heredoc_redirect_token1;
	v->a[251499] = actions(11288);
	small_parse_table_12575(v);
}

/* EOF small_parse_table_2514.c */
