/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_244.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1220(t_small_parse_table_array *v)
{
	v->a[24400] = anon_sym_LT_LT_EQ;
	v->a[24401] = anon_sym_GT_GT_EQ;
	v->a[24402] = anon_sym_AMP_EQ;
	v->a[24403] = anon_sym_CARET_EQ;
	v->a[24404] = anon_sym_PIPE_EQ;
	v->a[24405] = 12;
	v->a[24406] = actions(3);
	v->a[24407] = 1;
	v->a[24408] = sym_comment;
	v->a[24409] = actions(736);
	v->a[24410] = 1;
	v->a[24411] = anon_sym_PIPE;
	v->a[24412] = actions(746);
	v->a[24413] = 1;
	v->a[24414] = sym_file_descriptor;
	v->a[24415] = actions(842);
	v->a[24416] = 1;
	v->a[24417] = anon_sym_SEMI_SEMI;
	v->a[24418] = actions(957);
	v->a[24419] = 1;
	small_parse_table_1221(v);
}

void	small_parse_table_1221(t_small_parse_table_array *v)
{
	v->a[24420] = sym_variable_name;
	v->a[24421] = state(685);
	v->a[24422] = 1;
	v->a[24423] = sym_terminator;
	v->a[24424] = actions(744);
	v->a[24425] = 2;
	v->a[24426] = anon_sym_LT_LT;
	v->a[24427] = anon_sym_LT_LT_DASH;
	v->a[24428] = actions(955);
	v->a[24429] = 2;
	v->a[24430] = anon_sym_AMP_AMP;
	v->a[24431] = anon_sym_PIPE_PIPE;
	v->a[24432] = state(1134);
	v->a[24433] = 2;
	v->a[24434] = sym_variable_assignment;
	v->a[24435] = aux_sym__variable_assignments_repeat1;
	v->a[24436] = actions(740);
	v->a[24437] = 3;
	v->a[24438] = aux_sym_heredoc_redirect_token1;
	v->a[24439] = anon_sym_AMP;
	small_parse_table_1222(v);
}

void	small_parse_table_1222(t_small_parse_table_array *v)
{
	v->a[24440] = anon_sym_SEMI;
	v->a[24441] = state(1194);
	v->a[24442] = 3;
	v->a[24443] = sym_file_redirect;
	v->a[24444] = sym_heredoc_redirect;
	v->a[24445] = aux_sym_redirected_statement_repeat1;
	v->a[24446] = actions(734);
	v->a[24447] = 16;
	v->a[24448] = anon_sym_LT;
	v->a[24449] = anon_sym_GT;
	v->a[24450] = anon_sym_GT_GT;
	v->a[24451] = anon_sym_LT_AMP;
	v->a[24452] = anon_sym_GT_AMP;
	v->a[24453] = anon_sym_GT_PIPE;
	v->a[24454] = anon_sym_LT_GT;
	v->a[24455] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24456] = anon_sym_DOLLAR;
	v->a[24457] = anon_sym_DQUOTE;
	v->a[24458] = sym_raw_string;
	v->a[24459] = sym_number;
	small_parse_table_1223(v);
}

void	small_parse_table_1223(t_small_parse_table_array *v)
{
	v->a[24460] = anon_sym_DOLLAR_LBRACE;
	v->a[24461] = anon_sym_DOLLAR_LPAREN;
	v->a[24462] = anon_sym_BQUOTE;
	v->a[24463] = sym_word;
	v->a[24464] = 12;
	v->a[24465] = actions(3);
	v->a[24466] = 1;
	v->a[24467] = sym_comment;
	v->a[24468] = actions(552);
	v->a[24469] = 1;
	v->a[24470] = sym_file_descriptor;
	v->a[24471] = actions(871);
	v->a[24472] = 1;
	v->a[24473] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24474] = actions(873);
	v->a[24475] = 1;
	v->a[24476] = anon_sym_DOLLAR;
	v->a[24477] = actions(875);
	v->a[24478] = 1;
	v->a[24479] = anon_sym_DQUOTE;
	small_parse_table_1224(v);
}

void	small_parse_table_1224(t_small_parse_table_array *v)
{
	v->a[24480] = actions(877);
	v->a[24481] = 1;
	v->a[24482] = anon_sym_DOLLAR_LBRACE;
	v->a[24483] = actions(879);
	v->a[24484] = 1;
	v->a[24485] = anon_sym_DOLLAR_LPAREN;
	v->a[24486] = actions(881);
	v->a[24487] = 1;
	v->a[24488] = anon_sym_BQUOTE;
	v->a[24489] = state(263);
	v->a[24490] = 2;
	v->a[24491] = sym_concatenation;
	v->a[24492] = aux_sym_for_statement_repeat1;
	v->a[24493] = actions(947);
	v->a[24494] = 3;
	v->a[24495] = sym_raw_string;
	v->a[24496] = sym_number;
	v->a[24497] = sym_word;
	v->a[24498] = state(616);
	v->a[24499] = 5;
	small_parse_table_1225(v);
}

/* EOF small_parse_table_244.c */
