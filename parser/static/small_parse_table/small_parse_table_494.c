/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_494.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2470(t_small_parse_table_array *v)
{
	v->a[49400] = actions(846);
	v->a[49401] = 2;
	v->a[49402] = anon_sym_SEMI_SEMI;
	v->a[49403] = anon_sym_SEMI;
	v->a[49404] = actions(848);
	v->a[49405] = 2;
	v->a[49406] = anon_sym_AMP_AMP;
	v->a[49407] = anon_sym_PIPE_PIPE;
	v->a[49408] = actions(850);
	v->a[49409] = 2;
	v->a[49410] = anon_sym_LT_LT;
	v->a[49411] = anon_sym_LT_LT_DASH;
	v->a[49412] = state(924);
	v->a[49413] = 3;
	v->a[49414] = sym_file_redirect;
	v->a[49415] = sym_heredoc_redirect;
	v->a[49416] = aux_sym_redirected_statement_repeat1;
	v->a[49417] = actions(1603);
	v->a[49418] = 7;
	v->a[49419] = anon_sym_LT;
	small_parse_table_2471(v);
}

void	small_parse_table_2471(t_small_parse_table_array *v)
{
	v->a[49420] = anon_sym_GT;
	v->a[49421] = anon_sym_GT_GT;
	v->a[49422] = anon_sym_LT_AMP;
	v->a[49423] = anon_sym_GT_AMP;
	v->a[49424] = anon_sym_GT_PIPE;
	v->a[49425] = anon_sym_LT_GT;
	v->a[49426] = 9;
	v->a[49427] = actions(3);
	v->a[49428] = 1;
	v->a[49429] = sym_comment;
	v->a[49430] = actions(752);
	v->a[49431] = 1;
	v->a[49432] = anon_sym_SEMI;
	v->a[49433] = actions(1595);
	v->a[49434] = 1;
	v->a[49435] = aux_sym_heredoc_redirect_token1;
	v->a[49436] = state(535);
	v->a[49437] = 1;
	v->a[49438] = sym_terminator;
	v->a[49439] = actions(748);
	small_parse_table_2472(v);
}

void	small_parse_table_2472(t_small_parse_table_array *v)
{
	v->a[49440] = 2;
	v->a[49441] = anon_sym_AMP_AMP;
	v->a[49442] = anon_sym_PIPE_PIPE;
	v->a[49443] = actions(750);
	v->a[49444] = 2;
	v->a[49445] = anon_sym_LT_LT;
	v->a[49446] = anon_sym_LT_LT_DASH;
	v->a[49447] = actions(842);
	v->a[49448] = 2;
	v->a[49449] = anon_sym_esac;
	v->a[49450] = anon_sym_SEMI_SEMI;
	v->a[49451] = state(931);
	v->a[49452] = 3;
	v->a[49453] = sym_file_redirect;
	v->a[49454] = sym_heredoc_redirect;
	v->a[49455] = aux_sym_redirected_statement_repeat1;
	v->a[49456] = actions(1593);
	v->a[49457] = 7;
	v->a[49458] = anon_sym_LT;
	v->a[49459] = anon_sym_GT;
	small_parse_table_2473(v);
}

void	small_parse_table_2473(t_small_parse_table_array *v)
{
	v->a[49460] = anon_sym_GT_GT;
	v->a[49461] = anon_sym_LT_AMP;
	v->a[49462] = anon_sym_GT_AMP;
	v->a[49463] = anon_sym_GT_PIPE;
	v->a[49464] = anon_sym_LT_GT;
	v->a[49465] = 6;
	v->a[49466] = actions(3);
	v->a[49467] = 1;
	v->a[49468] = sym_comment;
	v->a[49469] = actions(1690);
	v->a[49470] = 1;
	v->a[49471] = aux_sym_heredoc_redirect_token1;
	v->a[49472] = actions(850);
	v->a[49473] = 2;
	v->a[49474] = anon_sym_LT_LT;
	v->a[49475] = anon_sym_LT_LT_DASH;
	v->a[49476] = state(912);
	v->a[49477] = 3;
	v->a[49478] = sym_file_redirect;
	v->a[49479] = sym_heredoc_redirect;
	small_parse_table_2474(v);
}

void	small_parse_table_2474(t_small_parse_table_array *v)
{
	v->a[49480] = aux_sym_redirected_statement_repeat1;
	v->a[49481] = actions(1688);
	v->a[49482] = 6;
	v->a[49483] = anon_sym_PIPE;
	v->a[49484] = anon_sym_RPAREN;
	v->a[49485] = anon_sym_SEMI_SEMI;
	v->a[49486] = anon_sym_AMP_AMP;
	v->a[49487] = anon_sym_PIPE_PIPE;
	v->a[49488] = anon_sym_SEMI;
	v->a[49489] = actions(1597);
	v->a[49490] = 7;
	v->a[49491] = anon_sym_LT;
	v->a[49492] = anon_sym_GT;
	v->a[49493] = anon_sym_GT_GT;
	v->a[49494] = anon_sym_LT_AMP;
	v->a[49495] = anon_sym_GT_AMP;
	v->a[49496] = anon_sym_GT_PIPE;
	v->a[49497] = anon_sym_LT_GT;
	v->a[49498] = 5;
	v->a[49499] = actions(3);
	small_parse_table_2475(v);
}

/* EOF small_parse_table_494.c */
