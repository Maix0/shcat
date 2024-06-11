/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_774.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3870(t_small_parse_table_array *v)
{
	v->a[77400] = anon_sym_DOLLAR_LPAREN;
	v->a[77401] = anon_sym_BQUOTE;
	v->a[77402] = sym_word;
	v->a[77403] = 7;
	v->a[77404] = actions(3);
	v->a[77405] = 1;
	v->a[77406] = sym_comment;
	v->a[77407] = actions(2626);
	v->a[77408] = 1;
	v->a[77409] = aux_sym_heredoc_redirect_token1;
	v->a[77410] = actions(2866);
	v->a[77411] = 1;
	v->a[77412] = sym_file_descriptor;
	v->a[77413] = actions(2160);
	v->a[77414] = 2;
	v->a[77415] = anon_sym_LT_AMP_DASH;
	v->a[77416] = anon_sym_GT_AMP_DASH;
	v->a[77417] = state(1365);
	v->a[77418] = 2;
	v->a[77419] = sym_file_redirect;
	small_parse_table_3871(v);
}

void	small_parse_table_3871(t_small_parse_table_array *v)
{
	v->a[77420] = aux_sym_redirected_statement_repeat2;
	v->a[77421] = actions(2158);
	v->a[77422] = 8;
	v->a[77423] = anon_sym_LT;
	v->a[77424] = anon_sym_GT;
	v->a[77425] = anon_sym_GT_GT;
	v->a[77426] = anon_sym_AMP_GT;
	v->a[77427] = anon_sym_AMP_GT_GT;
	v->a[77428] = anon_sym_LT_AMP;
	v->a[77429] = anon_sym_GT_AMP;
	v->a[77430] = anon_sym_GT_PIPE;
	v->a[77431] = actions(2624);
	v->a[77432] = 9;
	v->a[77433] = anon_sym_PIPE;
	v->a[77434] = anon_sym_SEMI_SEMI;
	v->a[77435] = anon_sym_AMP_AMP;
	v->a[77436] = anon_sym_PIPE_PIPE;
	v->a[77437] = anon_sym_LT_LT;
	v->a[77438] = anon_sym_LT_LT_DASH;
	v->a[77439] = anon_sym_AMP;
	small_parse_table_3872(v);
}

void	small_parse_table_3872(t_small_parse_table_array *v)
{
	v->a[77440] = anon_sym_BQUOTE;
	v->a[77441] = anon_sym_SEMI;
	v->a[77442] = 7;
	v->a[77443] = actions(3);
	v->a[77444] = 1;
	v->a[77445] = sym_comment;
	v->a[77446] = actions(2685);
	v->a[77447] = 1;
	v->a[77448] = aux_sym_heredoc_redirect_token1;
	v->a[77449] = actions(2699);
	v->a[77450] = 1;
	v->a[77451] = sym_file_descriptor;
	v->a[77452] = actions(2180);
	v->a[77453] = 2;
	v->a[77454] = anon_sym_LT_AMP_DASH;
	v->a[77455] = anon_sym_GT_AMP_DASH;
	v->a[77456] = state(1409);
	v->a[77457] = 2;
	v->a[77458] = sym_file_redirect;
	v->a[77459] = aux_sym_redirected_statement_repeat2;
	small_parse_table_3873(v);
}

void	small_parse_table_3873(t_small_parse_table_array *v)
{
	v->a[77460] = actions(2178);
	v->a[77461] = 8;
	v->a[77462] = anon_sym_LT;
	v->a[77463] = anon_sym_GT;
	v->a[77464] = anon_sym_GT_GT;
	v->a[77465] = anon_sym_AMP_GT;
	v->a[77466] = anon_sym_AMP_GT_GT;
	v->a[77467] = anon_sym_LT_AMP;
	v->a[77468] = anon_sym_GT_AMP;
	v->a[77469] = anon_sym_GT_PIPE;
	v->a[77470] = actions(2683);
	v->a[77471] = 9;
	v->a[77472] = anon_sym_esac;
	v->a[77473] = anon_sym_PIPE;
	v->a[77474] = anon_sym_SEMI_SEMI;
	v->a[77475] = anon_sym_AMP_AMP;
	v->a[77476] = anon_sym_PIPE_PIPE;
	v->a[77477] = anon_sym_LT_LT;
	v->a[77478] = anon_sym_LT_LT_DASH;
	v->a[77479] = anon_sym_AMP;
	small_parse_table_3874(v);
}

void	small_parse_table_3874(t_small_parse_table_array *v)
{
	v->a[77480] = anon_sym_SEMI;
	v->a[77481] = 3;
	v->a[77482] = actions(3);
	v->a[77483] = 1;
	v->a[77484] = sym_comment;
	v->a[77485] = actions(2868);
	v->a[77486] = 3;
	v->a[77487] = sym_file_descriptor;
	v->a[77488] = ts_builtin_sym_end;
	v->a[77489] = aux_sym_heredoc_redirect_token1;
	v->a[77490] = actions(2870);
	v->a[77491] = 20;
	v->a[77492] = anon_sym_PIPE;
	v->a[77493] = anon_sym_RPAREN;
	v->a[77494] = anon_sym_SEMI_SEMI;
	v->a[77495] = anon_sym_AMP_AMP;
	v->a[77496] = anon_sym_PIPE_PIPE;
	v->a[77497] = anon_sym_LT;
	v->a[77498] = anon_sym_GT;
	v->a[77499] = anon_sym_GT_GT;
	small_parse_table_3875(v);
}

/* EOF small_parse_table_774.c */
