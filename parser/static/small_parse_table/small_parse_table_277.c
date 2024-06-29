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
	v->a[27700] = 29;
	v->a[27701] = anon_sym_LPAREN;
	v->a[27702] = anon_sym_PIPE;
	v->a[27703] = anon_sym_SEMI_SEMI;
	v->a[27704] = anon_sym_AMP_AMP;
	v->a[27705] = anon_sym_PIPE_PIPE;
	v->a[27706] = anon_sym_LT;
	v->a[27707] = anon_sym_GT;
	v->a[27708] = anon_sym_GT_GT;
	v->a[27709] = anon_sym_AMP_GT;
	v->a[27710] = anon_sym_AMP_GT_GT;
	v->a[27711] = anon_sym_LT_AMP;
	v->a[27712] = anon_sym_GT_AMP;
	v->a[27713] = anon_sym_GT_PIPE;
	v->a[27714] = anon_sym_LT_AMP_DASH;
	v->a[27715] = anon_sym_GT_AMP_DASH;
	v->a[27716] = anon_sym_LT_LT;
	v->a[27717] = anon_sym_LT_LT_DASH;
	v->a[27718] = aux_sym_heredoc_redirect_token1;
	v->a[27719] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1386(v);
}

void	small_parse_table_1386(t_small_parse_table_array *v)
{
	v->a[27720] = anon_sym_AMP;
	v->a[27721] = anon_sym_DOLLAR;
	v->a[27722] = anon_sym_DQUOTE;
	v->a[27723] = sym_raw_string;
	v->a[27724] = sym_number;
	v->a[27725] = anon_sym_DOLLAR_LBRACE;
	v->a[27726] = anon_sym_DOLLAR_LPAREN;
	v->a[27727] = anon_sym_BQUOTE;
	v->a[27728] = sym_word;
	v->a[27729] = anon_sym_SEMI;
	v->a[27730] = 7;
	v->a[27731] = actions(3);
	v->a[27732] = 1;
	v->a[27733] = sym_comment;
	v->a[27734] = actions(875);
	v->a[27735] = 1;
	v->a[27736] = sym_file_descriptor;
	v->a[27737] = actions(895);
	v->a[27738] = 1;
	v->a[27739] = sym_variable_name;
	small_parse_table_1387(v);
}

void	small_parse_table_1387(t_small_parse_table_array *v)
{
	v->a[27740] = state(1270);
	v->a[27741] = 2;
	v->a[27742] = sym_variable_assignment;
	v->a[27743] = aux_sym__variable_assignments_repeat1;
	v->a[27744] = state(1256);
	v->a[27745] = 3;
	v->a[27746] = sym_file_redirect;
	v->a[27747] = sym_heredoc_redirect;
	v->a[27748] = aux_sym_redirected_statement_repeat1;
	v->a[27749] = actions(762);
	v->a[27750] = 9;
	v->a[27751] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27752] = anon_sym_DOLLAR;
	v->a[27753] = anon_sym_DQUOTE;
	v->a[27754] = sym_raw_string;
	v->a[27755] = sym_number;
	v->a[27756] = anon_sym_DOLLAR_LBRACE;
	v->a[27757] = anon_sym_DOLLAR_LPAREN;
	v->a[27758] = anon_sym_BQUOTE;
	v->a[27759] = sym_word;
	small_parse_table_1388(v);
}

void	small_parse_table_1388(t_small_parse_table_array *v)
{
	v->a[27760] = actions(766);
	v->a[27761] = 19;
	v->a[27762] = anon_sym_PIPE;
	v->a[27763] = anon_sym_SEMI_SEMI;
	v->a[27764] = anon_sym_AMP_AMP;
	v->a[27765] = anon_sym_PIPE_PIPE;
	v->a[27766] = anon_sym_LT;
	v->a[27767] = anon_sym_GT;
	v->a[27768] = anon_sym_GT_GT;
	v->a[27769] = anon_sym_AMP_GT;
	v->a[27770] = anon_sym_AMP_GT_GT;
	v->a[27771] = anon_sym_LT_AMP;
	v->a[27772] = anon_sym_GT_AMP;
	v->a[27773] = anon_sym_GT_PIPE;
	v->a[27774] = anon_sym_LT_AMP_DASH;
	v->a[27775] = anon_sym_GT_AMP_DASH;
	v->a[27776] = anon_sym_LT_LT;
	v->a[27777] = anon_sym_LT_LT_DASH;
	v->a[27778] = aux_sym_heredoc_redirect_token1;
	v->a[27779] = anon_sym_AMP;
	small_parse_table_1389(v);
}

void	small_parse_table_1389(t_small_parse_table_array *v)
{
	v->a[27780] = anon_sym_SEMI;
	v->a[27781] = 8;
	v->a[27782] = actions(3);
	v->a[27783] = 1;
	v->a[27784] = sym_comment;
	v->a[27785] = actions(766);
	v->a[27786] = 1;
	v->a[27787] = anon_sym_PIPE;
	v->a[27788] = actions(774);
	v->a[27789] = 1;
	v->a[27790] = sym_file_descriptor;
	v->a[27791] = actions(895);
	v->a[27792] = 1;
	v->a[27793] = sym_variable_name;
	v->a[27794] = state(1270);
	v->a[27795] = 2;
	v->a[27796] = sym_variable_assignment;
	v->a[27797] = aux_sym__variable_assignments_repeat1;
	v->a[27798] = state(1256);
	v->a[27799] = 3;
	small_parse_table_1390(v);
}

/* EOF small_parse_table_277.c */
