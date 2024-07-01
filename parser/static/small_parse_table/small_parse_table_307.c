/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_307.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1535(t_small_parse_table_array *v)
{
	v->a[30700] = anon_sym_DOLLAR_LBRACE;
	v->a[30701] = anon_sym_DOLLAR_LPAREN;
	v->a[30702] = anon_sym_BQUOTE;
	v->a[30703] = sym_word;
	v->a[30704] = anon_sym_SEMI;
	v->a[30705] = 14;
	v->a[30706] = actions(3);
	v->a[30707] = 1;
	v->a[30708] = sym_comment;
	v->a[30709] = actions(459);
	v->a[30710] = 1;
	v->a[30711] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30712] = actions(461);
	v->a[30713] = 1;
	v->a[30714] = anon_sym_DOLLAR;
	v->a[30715] = actions(463);
	v->a[30716] = 1;
	v->a[30717] = anon_sym_DQUOTE;
	v->a[30718] = actions(465);
	v->a[30719] = 1;
	small_parse_table_1536(v);
}

void	small_parse_table_1536(t_small_parse_table_array *v)
{
	v->a[30720] = anon_sym_DOLLAR_LBRACE;
	v->a[30721] = actions(467);
	v->a[30722] = 1;
	v->a[30723] = anon_sym_DOLLAR_LPAREN;
	v->a[30724] = actions(469);
	v->a[30725] = 1;
	v->a[30726] = anon_sym_BQUOTE;
	v->a[30727] = actions(471);
	v->a[30728] = 1;
	v->a[30729] = sym__bare_dollar;
	v->a[30730] = actions(560);
	v->a[30731] = 1;
	v->a[30732] = sym_file_descriptor;
	v->a[30733] = state(387);
	v->a[30734] = 1;
	v->a[30735] = aux_sym_command_repeat2;
	v->a[30736] = state(627);
	v->a[30737] = 1;
	v->a[30738] = sym_concatenation;
	v->a[30739] = actions(910);
	small_parse_table_1537(v);
}

void	small_parse_table_1537(t_small_parse_table_array *v)
{
	v->a[30740] = 3;
	v->a[30741] = sym_raw_string;
	v->a[30742] = sym_number;
	v->a[30743] = sym_word;
	v->a[30744] = state(759);
	v->a[30745] = 5;
	v->a[30746] = sym_arithmetic_expansion;
	v->a[30747] = sym_string;
	v->a[30748] = sym_simple_expansion;
	v->a[30749] = sym_expansion;
	v->a[30750] = sym_command_substitution;
	v->a[30751] = actions(562);
	v->a[30752] = 13;
	v->a[30753] = anon_sym_PIPE;
	v->a[30754] = anon_sym_AMP_AMP;
	v->a[30755] = anon_sym_PIPE_PIPE;
	v->a[30756] = anon_sym_LT;
	v->a[30757] = anon_sym_GT;
	v->a[30758] = anon_sym_GT_GT;
	v->a[30759] = anon_sym_LT_AMP;
	small_parse_table_1538(v);
}

void	small_parse_table_1538(t_small_parse_table_array *v)
{
	v->a[30760] = anon_sym_GT_AMP;
	v->a[30761] = anon_sym_GT_PIPE;
	v->a[30762] = anon_sym_LT_GT;
	v->a[30763] = anon_sym_LT_LT;
	v->a[30764] = anon_sym_LT_LT_DASH;
	v->a[30765] = aux_sym_heredoc_redirect_token1;
	v->a[30766] = 20;
	v->a[30767] = actions(3);
	v->a[30768] = 1;
	v->a[30769] = sym_comment;
	v->a[30770] = actions(321);
	v->a[30771] = 1;
	v->a[30772] = anon_sym_LPAREN;
	v->a[30773] = actions(329);
	v->a[30774] = 1;
	v->a[30775] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30776] = actions(331);
	v->a[30777] = 1;
	v->a[30778] = anon_sym_DOLLAR;
	v->a[30779] = actions(333);
	small_parse_table_1539(v);
}

void	small_parse_table_1539(t_small_parse_table_array *v)
{
	v->a[30780] = 1;
	v->a[30781] = anon_sym_DQUOTE;
	v->a[30782] = actions(337);
	v->a[30783] = 1;
	v->a[30784] = anon_sym_DOLLAR_LBRACE;
	v->a[30785] = actions(339);
	v->a[30786] = 1;
	v->a[30787] = anon_sym_DOLLAR_LPAREN;
	v->a[30788] = actions(341);
	v->a[30789] = 1;
	v->a[30790] = anon_sym_BQUOTE;
	v->a[30791] = actions(345);
	v->a[30792] = 1;
	v->a[30793] = sym_variable_name;
	v->a[30794] = actions(1152);
	v->a[30795] = 1;
	v->a[30796] = sym_file_descriptor;
	v->a[30797] = state(364);
	v->a[30798] = 1;
	v->a[30799] = sym_command_name;
	small_parse_table_1540(v);
}

/* EOF small_parse_table_307.c */
