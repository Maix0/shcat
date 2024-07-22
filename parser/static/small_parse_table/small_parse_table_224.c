/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_224.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1120(t_small_parse_table_array *v)
{
	v->a[22400] = anon_sym_GT_GT_EQ;
	v->a[22401] = anon_sym_AMP_EQ;
	v->a[22402] = anon_sym_CARET_EQ;
	v->a[22403] = anon_sym_PIPE_EQ;
	v->a[22404] = anon_sym_EQ_EQ;
	v->a[22405] = anon_sym_BANG_EQ;
	v->a[22406] = anon_sym_LT_EQ;
	v->a[22407] = anon_sym_GT_EQ;
	v->a[22408] = anon_sym_QMARK;
	v->a[22409] = anon_sym_PLUS_PLUS2;
	v->a[22410] = anon_sym_DASH_DASH2;
	v->a[22411] = 12;
	v->a[22412] = actions(3);
	v->a[22413] = 1;
	v->a[22414] = sym_comment;
	v->a[22415] = actions(782);
	v->a[22416] = 1;
	v->a[22417] = anon_sym_PIPE;
	v->a[22418] = actions(784);
	v->a[22419] = 1;
	small_parse_table_1121(v);
}

void	small_parse_table_1121(t_small_parse_table_array *v)
{
	v->a[22420] = anon_sym_RPAREN;
	v->a[22421] = actions(792);
	v->a[22422] = 1;
	v->a[22423] = sym_file_descriptor;
	v->a[22424] = actions(794);
	v->a[22425] = 1;
	v->a[22426] = sym_variable_name;
	v->a[22427] = state(567);
	v->a[22428] = 1;
	v->a[22429] = sym_terminator;
	v->a[22430] = actions(788);
	v->a[22431] = 2;
	v->a[22432] = anon_sym_AMP_AMP;
	v->a[22433] = anon_sym_PIPE_PIPE;
	v->a[22434] = actions(790);
	v->a[22435] = 2;
	v->a[22436] = anon_sym_LT_LT;
	v->a[22437] = anon_sym_LT_LT_DASH;
	v->a[22438] = state(1109);
	v->a[22439] = 2;
	small_parse_table_1122(v);
}

void	small_parse_table_1122(t_small_parse_table_array *v)
{
	v->a[22440] = sym_variable_assignment;
	v->a[22441] = aux_sym__variable_assignments_repeat1;
	v->a[22442] = actions(786);
	v->a[22443] = 3;
	v->a[22444] = anon_sym_SEMI_SEMI;
	v->a[22445] = aux_sym_heredoc_redirect_token1;
	v->a[22446] = anon_sym_SEMI;
	v->a[22447] = state(1034);
	v->a[22448] = 3;
	v->a[22449] = sym_file_redirect;
	v->a[22450] = sym_heredoc_redirect;
	v->a[22451] = aux_sym_redirected_statement_repeat1;
	v->a[22452] = actions(780);
	v->a[22453] = 16;
	v->a[22454] = anon_sym_LT;
	v->a[22455] = anon_sym_GT;
	v->a[22456] = anon_sym_GT_GT;
	v->a[22457] = anon_sym_LT_AMP;
	v->a[22458] = anon_sym_GT_AMP;
	v->a[22459] = anon_sym_GT_PIPE;
	small_parse_table_1123(v);
}

void	small_parse_table_1123(t_small_parse_table_array *v)
{
	v->a[22460] = anon_sym_LT_GT;
	v->a[22461] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22462] = anon_sym_DOLLAR;
	v->a[22463] = anon_sym_DQUOTE;
	v->a[22464] = sym_raw_string;
	v->a[22465] = sym_number;
	v->a[22466] = anon_sym_DOLLAR_LBRACE;
	v->a[22467] = anon_sym_DOLLAR_LPAREN;
	v->a[22468] = anon_sym_BQUOTE;
	v->a[22469] = sym_word;
	v->a[22470] = 5;
	v->a[22471] = actions(3);
	v->a[22472] = 1;
	v->a[22473] = sym_comment;
	v->a[22474] = actions(678);
	v->a[22475] = 2;
	v->a[22476] = sym_file_descriptor;
	v->a[22477] = sym_variable_name;
	v->a[22478] = state(242);
	v->a[22479] = 2;
	small_parse_table_1124(v);
}

void	small_parse_table_1124(t_small_parse_table_array *v)
{
	v->a[22480] = sym_concatenation;
	v->a[22481] = aux_sym_for_statement_repeat1;
	v->a[22482] = state(486);
	v->a[22483] = 5;
	v->a[22484] = sym_arithmetic_expansion;
	v->a[22485] = sym_string;
	v->a[22486] = sym_simple_expansion;
	v->a[22487] = sym_expansion;
	v->a[22488] = sym_command_substitution;
	v->a[22489] = actions(676);
	v->a[22490] = 24;
	v->a[22491] = anon_sym_PIPE;
	v->a[22492] = anon_sym_SEMI_SEMI;
	v->a[22493] = anon_sym_AMP_AMP;
	v->a[22494] = anon_sym_PIPE_PIPE;
	v->a[22495] = anon_sym_LT;
	v->a[22496] = anon_sym_GT;
	v->a[22497] = anon_sym_GT_GT;
	v->a[22498] = anon_sym_LT_AMP;
	v->a[22499] = anon_sym_GT_AMP;
	small_parse_table_1125(v);
}

/* EOF small_parse_table_224.c */
