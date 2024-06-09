/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_684.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3420(t_small_parse_table_array *v)
{
	v->a[68400] = anon_sym_AMP_GT_GT;
	v->a[68401] = anon_sym_LT_AMP;
	v->a[68402] = anon_sym_GT_AMP;
	v->a[68403] = anon_sym_GT_PIPE;
	v->a[68404] = anon_sym_LT_AMP_DASH;
	v->a[68405] = anon_sym_GT_AMP_DASH;
	v->a[68406] = anon_sym_LT_LT;
	v->a[68407] = anon_sym_LT_LT_DASH;
	v->a[68408] = anon_sym_AMP;
	v->a[68409] = anon_sym_BQUOTE;
	v->a[68410] = anon_sym_SEMI;
	v->a[68411] = 11;
	v->a[68412] = actions(3);
	v->a[68413] = 1;
	v->a[68414] = sym_comment;
	v->a[68415] = actions(1002);
	v->a[68416] = 1;
	v->a[68417] = anon_sym_PIPE;
	v->a[68418] = actions(1033);
	v->a[68419] = 1;
	small_parse_table_3421(v);
}

void	small_parse_table_3421(t_small_parse_table_array *v)
{
	v->a[68420] = anon_sym_SEMI_SEMI;
	v->a[68421] = actions(2365);
	v->a[68422] = 1;
	v->a[68423] = aux_sym_heredoc_redirect_token1;
	v->a[68424] = actions(2460);
	v->a[68425] = 1;
	v->a[68426] = sym_file_descriptor;
	v->a[68427] = actions(1062);
	v->a[68428] = 2;
	v->a[68429] = anon_sym_LT_LT;
	v->a[68430] = anon_sym_LT_LT_DASH;
	v->a[68431] = actions(1077);
	v->a[68432] = 2;
	v->a[68433] = anon_sym_AMP;
	v->a[68434] = anon_sym_SEMI;
	v->a[68435] = actions(1093);
	v->a[68436] = 2;
	v->a[68437] = anon_sym_AMP_AMP;
	v->a[68438] = anon_sym_PIPE_PIPE;
	v->a[68439] = actions(2456);
	small_parse_table_3422(v);
}

void	small_parse_table_3422(t_small_parse_table_array *v)
{
	v->a[68440] = 2;
	v->a[68441] = anon_sym_LT_AMP_DASH;
	v->a[68442] = anon_sym_GT_AMP_DASH;
	v->a[68443] = state(1160);
	v->a[68444] = 3;
	v->a[68445] = sym_file_redirect;
	v->a[68446] = sym_heredoc_redirect;
	v->a[68447] = aux_sym_redirected_statement_repeat1;
	v->a[68448] = actions(2454);
	v->a[68449] = 8;
	v->a[68450] = anon_sym_LT;
	v->a[68451] = anon_sym_GT;
	v->a[68452] = anon_sym_GT_GT;
	v->a[68453] = anon_sym_AMP_GT;
	v->a[68454] = anon_sym_AMP_GT_GT;
	v->a[68455] = anon_sym_LT_AMP;
	v->a[68456] = anon_sym_GT_AMP;
	v->a[68457] = anon_sym_GT_PIPE;
	v->a[68458] = 3;
	v->a[68459] = actions(3);
	small_parse_table_3423(v);
}

void	small_parse_table_3423(t_small_parse_table_array *v)
{
	v->a[68460] = 1;
	v->a[68461] = sym_comment;
	v->a[68462] = actions(2494);
	v->a[68463] = 3;
	v->a[68464] = sym_file_descriptor;
	v->a[68465] = ts_builtin_sym_end;
	v->a[68466] = aux_sym_heredoc_redirect_token1;
	v->a[68467] = actions(2496);
	v->a[68468] = 20;
	v->a[68469] = anon_sym_PIPE;
	v->a[68470] = anon_sym_RPAREN;
	v->a[68471] = anon_sym_SEMI_SEMI;
	v->a[68472] = anon_sym_AMP_AMP;
	v->a[68473] = anon_sym_PIPE_PIPE;
	v->a[68474] = anon_sym_LT;
	v->a[68475] = anon_sym_GT;
	v->a[68476] = anon_sym_GT_GT;
	v->a[68477] = anon_sym_AMP_GT;
	v->a[68478] = anon_sym_AMP_GT_GT;
	v->a[68479] = anon_sym_LT_AMP;
	small_parse_table_3424(v);
}

void	small_parse_table_3424(t_small_parse_table_array *v)
{
	v->a[68480] = anon_sym_GT_AMP;
	v->a[68481] = anon_sym_GT_PIPE;
	v->a[68482] = anon_sym_LT_AMP_DASH;
	v->a[68483] = anon_sym_GT_AMP_DASH;
	v->a[68484] = anon_sym_LT_LT;
	v->a[68485] = anon_sym_LT_LT_DASH;
	v->a[68486] = anon_sym_AMP;
	v->a[68487] = anon_sym_BQUOTE;
	v->a[68488] = anon_sym_SEMI;
	v->a[68489] = 5;
	v->a[68490] = actions(3);
	v->a[68491] = 1;
	v->a[68492] = sym_comment;
	v->a[68493] = actions(2502);
	v->a[68494] = 1;
	v->a[68495] = sym_variable_name;
	v->a[68496] = actions(2267);
	v->a[68497] = 2;
	v->a[68498] = sym_file_descriptor;
	v->a[68499] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3425(v);
}

/* EOF small_parse_table_684.c */
