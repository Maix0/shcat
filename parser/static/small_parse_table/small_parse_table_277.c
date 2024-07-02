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
	v->a[27700] = anon_sym_LT;
	v->a[27701] = anon_sym_GT;
	v->a[27702] = actions(983);
	v->a[27703] = 2;
	v->a[27704] = anon_sym_EQ_EQ;
	v->a[27705] = anon_sym_BANG_EQ;
	v->a[27706] = actions(985);
	v->a[27707] = 2;
	v->a[27708] = anon_sym_LT_EQ;
	v->a[27709] = anon_sym_GT_EQ;
	v->a[27710] = actions(951);
	v->a[27711] = 3;
	v->a[27712] = anon_sym_STAR;
	v->a[27713] = anon_sym_SLASH;
	v->a[27714] = anon_sym_PERCENT;
	v->a[27715] = actions(662);
	v->a[27716] = 14;
	v->a[27717] = anon_sym_RPAREN;
	v->a[27718] = anon_sym_AMP_AMP;
	v->a[27719] = anon_sym_PIPE_PIPE;
	small_parse_table_1386(v);
}

void	small_parse_table_1386(t_small_parse_table_array *v)
{
	v->a[27720] = anon_sym_PLUS_EQ;
	v->a[27721] = anon_sym_DASH_EQ;
	v->a[27722] = anon_sym_STAR_EQ;
	v->a[27723] = anon_sym_SLASH_EQ;
	v->a[27724] = anon_sym_PERCENT_EQ;
	v->a[27725] = anon_sym_LT_LT_EQ;
	v->a[27726] = anon_sym_GT_GT_EQ;
	v->a[27727] = anon_sym_AMP_EQ;
	v->a[27728] = anon_sym_CARET_EQ;
	v->a[27729] = anon_sym_PIPE_EQ;
	v->a[27730] = anon_sym_QMARK;
	v->a[27731] = 11;
	v->a[27732] = actions(3);
	v->a[27733] = 1;
	v->a[27734] = sym_comment;
	v->a[27735] = actions(692);
	v->a[27736] = 1;
	v->a[27737] = anon_sym_PIPE;
	v->a[27738] = actions(702);
	v->a[27739] = 1;
	small_parse_table_1387(v);
}

void	small_parse_table_1387(t_small_parse_table_array *v)
{
	v->a[27740] = sym_file_descriptor;
	v->a[27741] = actions(916);
	v->a[27742] = 1;
	v->a[27743] = sym_variable_name;
	v->a[27744] = state(834);
	v->a[27745] = 1;
	v->a[27746] = sym_terminator;
	v->a[27747] = actions(700);
	v->a[27748] = 2;
	v->a[27749] = anon_sym_LT_LT;
	v->a[27750] = anon_sym_LT_LT_DASH;
	v->a[27751] = actions(914);
	v->a[27752] = 2;
	v->a[27753] = anon_sym_AMP_AMP;
	v->a[27754] = anon_sym_PIPE_PIPE;
	v->a[27755] = state(1181);
	v->a[27756] = 2;
	v->a[27757] = sym_variable_assignment;
	v->a[27758] = aux_sym__variable_assignments_repeat1;
	v->a[27759] = state(1134);
	small_parse_table_1388(v);
}

void	small_parse_table_1388(t_small_parse_table_array *v)
{
	v->a[27760] = 3;
	v->a[27761] = sym_file_redirect;
	v->a[27762] = sym_heredoc_redirect;
	v->a[27763] = aux_sym_redirected_statement_repeat1;
	v->a[27764] = actions(696);
	v->a[27765] = 4;
	v->a[27766] = anon_sym_SEMI_SEMI;
	v->a[27767] = aux_sym_heredoc_redirect_token1;
	v->a[27768] = anon_sym_AMP;
	v->a[27769] = anon_sym_SEMI;
	v->a[27770] = actions(690);
	v->a[27771] = 16;
	v->a[27772] = anon_sym_LT;
	v->a[27773] = anon_sym_GT;
	v->a[27774] = anon_sym_GT_GT;
	v->a[27775] = anon_sym_LT_AMP;
	v->a[27776] = anon_sym_GT_AMP;
	v->a[27777] = anon_sym_GT_PIPE;
	v->a[27778] = anon_sym_LT_GT;
	v->a[27779] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1389(v);
}

void	small_parse_table_1389(t_small_parse_table_array *v)
{
	v->a[27780] = anon_sym_DOLLAR;
	v->a[27781] = anon_sym_DQUOTE;
	v->a[27782] = sym_raw_string;
	v->a[27783] = sym_number;
	v->a[27784] = anon_sym_DOLLAR_LBRACE;
	v->a[27785] = anon_sym_DOLLAR_LPAREN;
	v->a[27786] = anon_sym_BQUOTE;
	v->a[27787] = sym_word;
	v->a[27788] = 17;
	v->a[27789] = actions(668);
	v->a[27790] = 1;
	v->a[27791] = anon_sym_AMP;
	v->a[27792] = actions(680);
	v->a[27793] = 1;
	v->a[27794] = sym_comment;
	v->a[27795] = actions(730);
	v->a[27796] = 1;
	v->a[27797] = anon_sym_CARET;
	v->a[27798] = actions(732);
	v->a[27799] = 1;
	small_parse_table_1390(v);
}

/* EOF small_parse_table_277.c */
