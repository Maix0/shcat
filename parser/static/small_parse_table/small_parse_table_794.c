/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_794.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3970(t_small_parse_table_array *v)
{
	v->a[79400] = 1;
	v->a[79401] = sym_comment;
	v->a[79402] = actions(3442);
	v->a[79403] = 1;
	v->a[79404] = aux_sym_heredoc_redirect_token1;
	v->a[79405] = actions(3444);
	v->a[79406] = 1;
	v->a[79407] = aux_sym_concatenation_token1;
	v->a[79408] = actions(3446);
	v->a[79409] = 1;
	v->a[79410] = sym__concat;
	v->a[79411] = actions(3456);
	v->a[79412] = 1;
	v->a[79413] = anon_sym_in;
	v->a[79414] = state(1740);
	v->a[79415] = 1;
	v->a[79416] = aux_sym_concatenation_repeat1;
	v->a[79417] = state(2030);
	v->a[79418] = 1;
	v->a[79419] = sym_terminator;
	small_parse_table_3971(v);
}

void	small_parse_table_3971(t_small_parse_table_array *v)
{
	v->a[79420] = actions(1893);
	v->a[79421] = 3;
	v->a[79422] = anon_sym_SEMI_SEMI;
	v->a[79423] = anon_sym_AMP;
	v->a[79424] = anon_sym_SEMI;
	v->a[79425] = 7;
	v->a[79426] = actions(664);
	v->a[79427] = 1;
	v->a[79428] = sym_comment;
	v->a[79429] = actions(3460);
	v->a[79430] = 1;
	v->a[79431] = anon_sym_DQUOTE;
	v->a[79432] = actions(3462);
	v->a[79433] = 1;
	v->a[79434] = anon_sym_DOLLAR_LBRACE;
	v->a[79435] = actions(3464);
	v->a[79436] = 1;
	v->a[79437] = anon_sym_DOLLAR_LPAREN;
	v->a[79438] = actions(3466);
	v->a[79439] = 1;
	small_parse_table_3972(v);
}

void	small_parse_table_3972(t_small_parse_table_array *v)
{
	v->a[79440] = anon_sym_BQUOTE;
	v->a[79441] = actions(3458);
	v->a[79442] = 2;
	v->a[79443] = anon_sym_PIPE;
	v->a[79444] = anon_sym_RPAREN;
	v->a[79445] = state(1873);
	v->a[79446] = 3;
	v->a[79447] = sym_string;
	v->a[79448] = sym_expansion;
	v->a[79449] = sym_command_substitution;
	v->a[79450] = 5;
	v->a[79451] = actions(664);
	v->a[79452] = 1;
	v->a[79453] = sym_comment;
	v->a[79454] = actions(3432);
	v->a[79455] = 1;
	v->a[79456] = anon_sym_LT_LT;
	v->a[79457] = actions(3434);
	v->a[79458] = 1;
	v->a[79459] = anon_sym_LT_LT_DASH;
	small_parse_table_3973(v);
}

void	small_parse_table_3973(t_small_parse_table_array *v)
{
	v->a[79460] = actions(3468);
	v->a[79461] = 2;
	v->a[79462] = anon_sym_LT;
	v->a[79463] = anon_sym_GT;
	v->a[79464] = actions(3470);
	v->a[79465] = 5;
	v->a[79466] = anon_sym_GT_GT;
	v->a[79467] = anon_sym_LT_AMP;
	v->a[79468] = anon_sym_GT_AMP;
	v->a[79469] = anon_sym_GT_PIPE;
	v->a[79470] = anon_sym_LT_GT;
	v->a[79471] = 5;
	v->a[79472] = actions(664);
	v->a[79473] = 1;
	v->a[79474] = sym_comment;
	v->a[79475] = actions(3476);
	v->a[79476] = 1;
	v->a[79477] = anon_sym_LT_LT;
	v->a[79478] = actions(3478);
	v->a[79479] = 1;
	small_parse_table_3974(v);
}

void	small_parse_table_3974(t_small_parse_table_array *v)
{
	v->a[79480] = anon_sym_LT_LT_DASH;
	v->a[79481] = actions(3472);
	v->a[79482] = 2;
	v->a[79483] = anon_sym_LT;
	v->a[79484] = anon_sym_GT;
	v->a[79485] = actions(3474);
	v->a[79486] = 5;
	v->a[79487] = anon_sym_GT_GT;
	v->a[79488] = anon_sym_LT_AMP;
	v->a[79489] = anon_sym_GT_AMP;
	v->a[79490] = anon_sym_GT_PIPE;
	v->a[79491] = anon_sym_LT_GT;
	v->a[79492] = 8;
	v->a[79493] = actions(3);
	v->a[79494] = 1;
	v->a[79495] = sym_comment;
	v->a[79496] = actions(3442);
	v->a[79497] = 1;
	v->a[79498] = aux_sym_heredoc_redirect_token1;
	v->a[79499] = actions(3444);
	small_parse_table_3975(v);
}

/* EOF small_parse_table_794.c */
