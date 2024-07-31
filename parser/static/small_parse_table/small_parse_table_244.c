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
	v->a[24400] = 1;
	v->a[24401] = sym_comment;
	v->a[24402] = actions(922);
	v->a[24403] = 1;
	v->a[24404] = anon_sym_PIPE;
	v->a[24405] = actions(930);
	v->a[24406] = 1;
	v->a[24407] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24408] = actions(932);
	v->a[24409] = 1;
	v->a[24410] = anon_sym_DOLLAR;
	v->a[24411] = actions(934);
	v->a[24412] = 1;
	v->a[24413] = anon_sym_DQUOTE;
	v->a[24414] = actions(936);
	v->a[24415] = 1;
	v->a[24416] = anon_sym_DOLLAR_LBRACE;
	v->a[24417] = actions(938);
	v->a[24418] = 1;
	v->a[24419] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1221(v);
}

void	small_parse_table_1221(t_small_parse_table_array *v)
{
	v->a[24420] = actions(940);
	v->a[24421] = 1;
	v->a[24422] = anon_sym_BQUOTE;
	v->a[24423] = actions(954);
	v->a[24424] = 1;
	v->a[24425] = aux_sym_heredoc_redirect_token1;
	v->a[24426] = state(1066);
	v->a[24427] = 1;
	v->a[24428] = aux_sym__heredoc_command;
	v->a[24429] = state(1465);
	v->a[24430] = 1;
	v->a[24431] = sym_concatenation;
	v->a[24432] = state(1631);
	v->a[24433] = 1;
	v->a[24434] = sym__heredoc_pipeline;
	v->a[24435] = state(1708);
	v->a[24436] = 1;
	v->a[24437] = sym__heredoc_expression;
	v->a[24438] = actions(924);
	v->a[24439] = 2;
	small_parse_table_1222(v);
}

void	small_parse_table_1222(t_small_parse_table_array *v)
{
	v->a[24440] = anon_sym_AMP_AMP;
	v->a[24441] = anon_sym_PIPE_PIPE;
	v->a[24442] = state(1302);
	v->a[24443] = 2;
	v->a[24444] = sym_file_redirect;
	v->a[24445] = aux_sym_redirected_statement_repeat2;
	v->a[24446] = actions(920);
	v->a[24447] = 3;
	v->a[24448] = sym_raw_string;
	v->a[24449] = sym_number;
	v->a[24450] = sym_word;
	v->a[24451] = state(1287);
	v->a[24452] = 5;
	v->a[24453] = sym_arithmetic_expansion;
	v->a[24454] = sym_string;
	v->a[24455] = sym_simple_expansion;
	v->a[24456] = sym_expansion;
	v->a[24457] = sym_command_substitution;
	v->a[24458] = actions(926);
	v->a[24459] = 7;
	small_parse_table_1223(v);
}

void	small_parse_table_1223(t_small_parse_table_array *v)
{
	v->a[24460] = anon_sym_LT;
	v->a[24461] = anon_sym_GT;
	v->a[24462] = anon_sym_GT_GT;
	v->a[24463] = anon_sym_LT_AMP;
	v->a[24464] = anon_sym_GT_AMP;
	v->a[24465] = anon_sym_GT_PIPE;
	v->a[24466] = anon_sym_LT_GT;
	v->a[24467] = 6;
	v->a[24468] = actions(3);
	v->a[24469] = 1;
	v->a[24470] = sym_comment;
	v->a[24471] = actions(862);
	v->a[24472] = 1;
	v->a[24473] = sym_variable_name;
	v->a[24474] = state(959);
	v->a[24475] = 2;
	v->a[24476] = sym_variable_assignment;
	v->a[24477] = aux_sym__variable_assignments_repeat1;
	v->a[24478] = state(918);
	v->a[24479] = 3;
	small_parse_table_1224(v);
}

void	small_parse_table_1224(t_small_parse_table_array *v)
{
	v->a[24480] = sym_file_redirect;
	v->a[24481] = sym_heredoc_redirect;
	v->a[24482] = aux_sym_redirected_statement_repeat1;
	v->a[24483] = actions(742);
	v->a[24484] = 9;
	v->a[24485] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24486] = anon_sym_DOLLAR;
	v->a[24487] = anon_sym_DQUOTE;
	v->a[24488] = sym_raw_string;
	v->a[24489] = sym_number;
	v->a[24490] = anon_sym_DOLLAR_LBRACE;
	v->a[24491] = anon_sym_DOLLAR_LPAREN;
	v->a[24492] = anon_sym_BQUOTE;
	v->a[24493] = sym_word;
	v->a[24494] = actions(746);
	v->a[24495] = 16;
	v->a[24496] = anon_sym_PIPE;
	v->a[24497] = anon_sym_RPAREN;
	v->a[24498] = anon_sym_SEMI_SEMI;
	v->a[24499] = anon_sym_AMP_AMP;
	small_parse_table_1225(v);
}

/* EOF small_parse_table_244.c */
