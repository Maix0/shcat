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
	v->a[27700] = sym__bare_dollar;
	v->a[27701] = state(441);
	v->a[27702] = 1;
	v->a[27703] = aux_sym_command_repeat2;
	v->a[27704] = state(904);
	v->a[27705] = 1;
	v->a[27706] = sym_concatenation;
	v->a[27707] = state(1482);
	v->a[27708] = 1;
	v->a[27709] = sym_subshell;
	v->a[27710] = actions(1035);
	v->a[27711] = 3;
	v->a[27712] = sym_raw_string;
	v->a[27713] = sym_number;
	v->a[27714] = sym_word;
	v->a[27715] = state(811);
	v->a[27716] = 5;
	v->a[27717] = sym_arithmetic_expansion;
	v->a[27718] = sym_string;
	v->a[27719] = sym_simple_expansion;
	small_parse_table_1386(v);
}

void	small_parse_table_1386(t_small_parse_table_array *v)
{
	v->a[27720] = sym_expansion;
	v->a[27721] = sym_command_substitution;
	v->a[27722] = actions(471);
	v->a[27723] = 12;
	v->a[27724] = anon_sym_PIPE;
	v->a[27725] = anon_sym_AMP_AMP;
	v->a[27726] = anon_sym_PIPE_PIPE;
	v->a[27727] = anon_sym_LT;
	v->a[27728] = anon_sym_GT;
	v->a[27729] = anon_sym_GT_GT;
	v->a[27730] = anon_sym_LT_AMP;
	v->a[27731] = anon_sym_GT_AMP;
	v->a[27732] = anon_sym_GT_PIPE;
	v->a[27733] = anon_sym_LT_GT;
	v->a[27734] = anon_sym_LT_LT;
	v->a[27735] = anon_sym_LT_LT_DASH;
	v->a[27736] = 11;
	v->a[27737] = actions(3);
	v->a[27738] = 1;
	v->a[27739] = sym_comment;
	small_parse_table_1387(v);
}

void	small_parse_table_1387(t_small_parse_table_array *v)
{
	v->a[27740] = actions(782);
	v->a[27741] = 1;
	v->a[27742] = anon_sym_PIPE;
	v->a[27743] = actions(792);
	v->a[27744] = 1;
	v->a[27745] = sym_file_descriptor;
	v->a[27746] = actions(1030);
	v->a[27747] = 1;
	v->a[27748] = sym_variable_name;
	v->a[27749] = state(616);
	v->a[27750] = 1;
	v->a[27751] = sym_terminator;
	v->a[27752] = actions(790);
	v->a[27753] = 2;
	v->a[27754] = anon_sym_LT_LT;
	v->a[27755] = anon_sym_LT_LT_DASH;
	v->a[27756] = actions(1028);
	v->a[27757] = 2;
	v->a[27758] = anon_sym_AMP_AMP;
	v->a[27759] = anon_sym_PIPE_PIPE;
	small_parse_table_1388(v);
}

void	small_parse_table_1388(t_small_parse_table_array *v)
{
	v->a[27760] = state(1137);
	v->a[27761] = 2;
	v->a[27762] = sym_variable_assignment;
	v->a[27763] = aux_sym__variable_assignments_repeat1;
	v->a[27764] = actions(786);
	v->a[27765] = 3;
	v->a[27766] = anon_sym_SEMI_SEMI;
	v->a[27767] = aux_sym_heredoc_redirect_token1;
	v->a[27768] = anon_sym_SEMI;
	v->a[27769] = state(1194);
	v->a[27770] = 3;
	v->a[27771] = sym_file_redirect;
	v->a[27772] = sym_heredoc_redirect;
	v->a[27773] = aux_sym_redirected_statement_repeat1;
	v->a[27774] = actions(780);
	v->a[27775] = 16;
	v->a[27776] = anon_sym_LT;
	v->a[27777] = anon_sym_GT;
	v->a[27778] = anon_sym_GT_GT;
	v->a[27779] = anon_sym_LT_AMP;
	small_parse_table_1389(v);
}

void	small_parse_table_1389(t_small_parse_table_array *v)
{
	v->a[27780] = anon_sym_GT_AMP;
	v->a[27781] = anon_sym_GT_PIPE;
	v->a[27782] = anon_sym_LT_GT;
	v->a[27783] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27784] = anon_sym_DOLLAR;
	v->a[27785] = anon_sym_DQUOTE;
	v->a[27786] = sym_raw_string;
	v->a[27787] = sym_number;
	v->a[27788] = anon_sym_DOLLAR_LBRACE;
	v->a[27789] = anon_sym_DOLLAR_LPAREN;
	v->a[27790] = anon_sym_BQUOTE;
	v->a[27791] = sym_word;
	v->a[27792] = 19;
	v->a[27793] = actions(3);
	v->a[27794] = 1;
	v->a[27795] = sym_comment;
	v->a[27796] = actions(1004);
	v->a[27797] = 1;
	v->a[27798] = anon_sym_PIPE;
	v->a[27799] = actions(1012);
	small_parse_table_1390(v);
}

/* EOF small_parse_table_277.c */
