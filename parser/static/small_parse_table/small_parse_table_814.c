/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_814.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4070(t_small_parse_table_array *v)
{
	v->a[81400] = sym__heredoc_body;
	v->a[81401] = state(1119);
	v->a[81402] = 1;
	v->a[81403] = sym__simple_heredoc_body;
	v->a[81404] = state(2107);
	v->a[81405] = 1;
	v->a[81406] = sym_heredoc_body;
	v->a[81407] = 2;
	v->a[81408] = actions(680);
	v->a[81409] = 1;
	v->a[81410] = sym_comment;
	v->a[81411] = actions(839);
	v->a[81412] = 5;
	v->a[81413] = sym__concat;
	v->a[81414] = anon_sym_PIPE;
	v->a[81415] = anon_sym_RPAREN;
	v->a[81416] = anon_sym_RBRACE;
	v->a[81417] = aux_sym_concatenation_token1;
	v->a[81418] = 5;
	v->a[81419] = actions(680);
	small_parse_table_4071(v);
}

void	small_parse_table_4071(t_small_parse_table_array *v)
{
	v->a[81420] = 1;
	v->a[81421] = sym_comment;
	v->a[81422] = actions(3636);
	v->a[81423] = 1;
	v->a[81424] = sym__heredoc_body_beginning;
	v->a[81425] = actions(3643);
	v->a[81426] = 1;
	v->a[81427] = sym_simple_heredoc_body;
	v->a[81428] = state(2107);
	v->a[81429] = 1;
	v->a[81430] = sym_heredoc_body;
	v->a[81431] = state(1175);
	v->a[81432] = 2;
	v->a[81433] = sym__heredoc_body;
	v->a[81434] = sym__simple_heredoc_body;
	v->a[81435] = 4;
	v->a[81436] = actions(680);
	v->a[81437] = 1;
	v->a[81438] = sym_comment;
	v->a[81439] = state(1825);
	small_parse_table_4072(v);
}

void	small_parse_table_4072(t_small_parse_table_array *v)
{
	v->a[81440] = 1;
	v->a[81441] = aux_sym_concatenation_repeat1;
	v->a[81442] = actions(3606);
	v->a[81443] = 2;
	v->a[81444] = sym__concat;
	v->a[81445] = aux_sym_concatenation_token1;
	v->a[81446] = actions(3647);
	v->a[81447] = 2;
	v->a[81448] = anon_sym_PIPE;
	v->a[81449] = anon_sym_RPAREN;
	v->a[81450] = 5;
	v->a[81451] = actions(680);
	v->a[81452] = 1;
	v->a[81453] = sym_comment;
	v->a[81454] = actions(3634);
	v->a[81455] = 1;
	v->a[81456] = sym_simple_heredoc_body;
	v->a[81457] = actions(3636);
	v->a[81458] = 1;
	v->a[81459] = sym__heredoc_body_beginning;
	small_parse_table_4073(v);
}

void	small_parse_table_4073(t_small_parse_table_array *v)
{
	v->a[81460] = state(2017);
	v->a[81461] = 1;
	v->a[81462] = sym_heredoc_body;
	v->a[81463] = state(1258);
	v->a[81464] = 2;
	v->a[81465] = sym__heredoc_body;
	v->a[81466] = sym__simple_heredoc_body;
	v->a[81467] = 2;
	v->a[81468] = actions(680);
	v->a[81469] = 1;
	v->a[81470] = sym_comment;
	v->a[81471] = actions(709);
	v->a[81472] = 5;
	v->a[81473] = sym__concat;
	v->a[81474] = anon_sym_PIPE;
	v->a[81475] = anon_sym_RPAREN;
	v->a[81476] = anon_sym_RBRACE;
	v->a[81477] = aux_sym_concatenation_token1;
	v->a[81478] = 2;
	v->a[81479] = actions(680);
	small_parse_table_4074(v);
}

void	small_parse_table_4074(t_small_parse_table_array *v)
{
	v->a[81480] = 1;
	v->a[81481] = sym_comment;
	v->a[81482] = actions(744);
	v->a[81483] = 5;
	v->a[81484] = sym__concat;
	v->a[81485] = anon_sym_PIPE;
	v->a[81486] = anon_sym_RPAREN;
	v->a[81487] = anon_sym_RBRACE;
	v->a[81488] = aux_sym_concatenation_token1;
	v->a[81489] = 6;
	v->a[81490] = actions(680);
	v->a[81491] = 1;
	v->a[81492] = sym_comment;
	v->a[81493] = actions(3636);
	v->a[81494] = 1;
	v->a[81495] = sym__heredoc_body_beginning;
	v->a[81496] = actions(3643);
	v->a[81497] = 1;
	v->a[81498] = sym_simple_heredoc_body;
	v->a[81499] = state(1141);
	small_parse_table_4075(v);
}

/* EOF small_parse_table_814.c */
