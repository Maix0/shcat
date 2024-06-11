/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_277.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1385(t_small_parse_table_array *v)
{
	v->a[27700] = sym_heredoc_redirect;
	v->a[27701] = aux_sym_redirected_statement_repeat1;
	v->a[27702] = actions(809);
	v->a[27703] = 8;
	v->a[27704] = anon_sym_SEMI_SEMI;
	v->a[27705] = anon_sym_AMP_AMP;
	v->a[27706] = anon_sym_PIPE_PIPE;
	v->a[27707] = anon_sym_LT_LT;
	v->a[27708] = anon_sym_LT_LT_DASH;
	v->a[27709] = aux_sym_heredoc_redirect_token1;
	v->a[27710] = anon_sym_AMP;
	v->a[27711] = anon_sym_SEMI;
	v->a[27712] = actions(805);
	v->a[27713] = 19;
	v->a[27714] = anon_sym_LT;
	v->a[27715] = anon_sym_GT;
	v->a[27716] = anon_sym_GT_GT;
	v->a[27717] = anon_sym_AMP_GT;
	v->a[27718] = anon_sym_AMP_GT_GT;
	v->a[27719] = anon_sym_LT_AMP;
	small_parse_table_1386(v);
}

void	small_parse_table_1386(t_small_parse_table_array *v)
{
	v->a[27720] = anon_sym_GT_AMP;
	v->a[27721] = anon_sym_GT_PIPE;
	v->a[27722] = anon_sym_LT_AMP_DASH;
	v->a[27723] = anon_sym_GT_AMP_DASH;
	v->a[27724] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27725] = anon_sym_DOLLAR;
	v->a[27726] = anon_sym_DQUOTE;
	v->a[27727] = sym_raw_string;
	v->a[27728] = sym_number;
	v->a[27729] = anon_sym_DOLLAR_LBRACE;
	v->a[27730] = anon_sym_DOLLAR_LPAREN;
	v->a[27731] = anon_sym_BQUOTE;
	v->a[27732] = sym_word;
	v->a[27733] = 6;
	v->a[27734] = actions(3);
	v->a[27735] = 1;
	v->a[27736] = sym_comment;
	v->a[27737] = actions(989);
	v->a[27738] = 1;
	v->a[27739] = aux_sym_concatenation_token1;
	small_parse_table_1387(v);
}

void	small_parse_table_1387(t_small_parse_table_array *v)
{
	v->a[27740] = actions(1051);
	v->a[27741] = 1;
	v->a[27742] = sym__concat;
	v->a[27743] = state(302);
	v->a[27744] = 1;
	v->a[27745] = aux_sym_concatenation_repeat1;
	v->a[27746] = actions(972);
	v->a[27747] = 2;
	v->a[27748] = sym_file_descriptor;
	v->a[27749] = sym__bare_dollar;
	v->a[27750] = actions(974);
	v->a[27751] = 30;
	v->a[27752] = anon_sym_LPAREN;
	v->a[27753] = anon_sym_PIPE;
	v->a[27754] = anon_sym_RPAREN;
	v->a[27755] = anon_sym_SEMI_SEMI;
	v->a[27756] = anon_sym_AMP_AMP;
	v->a[27757] = anon_sym_PIPE_PIPE;
	v->a[27758] = anon_sym_LT;
	v->a[27759] = anon_sym_GT;
	small_parse_table_1388(v);
}

void	small_parse_table_1388(t_small_parse_table_array *v)
{
	v->a[27760] = anon_sym_GT_GT;
	v->a[27761] = anon_sym_AMP_GT;
	v->a[27762] = anon_sym_AMP_GT_GT;
	v->a[27763] = anon_sym_LT_AMP;
	v->a[27764] = anon_sym_GT_AMP;
	v->a[27765] = anon_sym_GT_PIPE;
	v->a[27766] = anon_sym_LT_AMP_DASH;
	v->a[27767] = anon_sym_GT_AMP_DASH;
	v->a[27768] = anon_sym_LT_LT;
	v->a[27769] = anon_sym_LT_LT_DASH;
	v->a[27770] = aux_sym_heredoc_redirect_token1;
	v->a[27771] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27772] = anon_sym_AMP;
	v->a[27773] = anon_sym_DOLLAR;
	v->a[27774] = anon_sym_DQUOTE;
	v->a[27775] = sym_raw_string;
	v->a[27776] = sym_number;
	v->a[27777] = anon_sym_DOLLAR_LBRACE;
	v->a[27778] = anon_sym_DOLLAR_LPAREN;
	v->a[27779] = anon_sym_BQUOTE;
	small_parse_table_1389(v);
}

void	small_parse_table_1389(t_small_parse_table_array *v)
{
	v->a[27780] = sym_word;
	v->a[27781] = anon_sym_SEMI;
	v->a[27782] = 10;
	v->a[27783] = actions(3);
	v->a[27784] = 1;
	v->a[27785] = sym_comment;
	v->a[27786] = actions(807);
	v->a[27787] = 1;
	v->a[27788] = anon_sym_PIPE;
	v->a[27789] = actions(811);
	v->a[27790] = 1;
	v->a[27791] = sym_file_descriptor;
	v->a[27792] = actions(967);
	v->a[27793] = 1;
	v->a[27794] = sym_variable_name;
	v->a[27795] = actions(861);
	v->a[27796] = 2;
	v->a[27797] = anon_sym_LT_LT;
	v->a[27798] = anon_sym_LT_LT_DASH;
	v->a[27799] = actions(965);
	small_parse_table_1390(v);
}

/* EOF small_parse_table_277.c */
