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
	v->a[27700] = sym_string;
	v->a[27701] = sym_simple_expansion;
	v->a[27702] = sym_expansion;
	v->a[27703] = sym_command_substitution;
	v->a[27704] = actions(457);
	v->a[27705] = 14;
	v->a[27706] = anon_sym_PIPE;
	v->a[27707] = anon_sym_AMP_AMP;
	v->a[27708] = anon_sym_PIPE_PIPE;
	v->a[27709] = anon_sym_LT;
	v->a[27710] = anon_sym_GT;
	v->a[27711] = anon_sym_GT_GT;
	v->a[27712] = anon_sym_LT_AMP;
	v->a[27713] = anon_sym_GT_AMP;
	v->a[27714] = anon_sym_GT_PIPE;
	v->a[27715] = anon_sym_LT_AMP_DASH;
	v->a[27716] = anon_sym_GT_AMP_DASH;
	v->a[27717] = anon_sym_LT_LT;
	v->a[27718] = anon_sym_LT_LT_DASH;
	v->a[27719] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1386(v);
}

void	small_parse_table_1386(t_small_parse_table_array *v)
{
	v->a[27720] = 20;
	v->a[27721] = actions(3);
	v->a[27722] = 1;
	v->a[27723] = sym_comment;
	v->a[27724] = actions(894);
	v->a[27725] = 1;
	v->a[27726] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27727] = actions(896);
	v->a[27728] = 1;
	v->a[27729] = anon_sym_DOLLAR;
	v->a[27730] = actions(898);
	v->a[27731] = 1;
	v->a[27732] = anon_sym_DQUOTE;
	v->a[27733] = actions(900);
	v->a[27734] = 1;
	v->a[27735] = anon_sym_DOLLAR_LBRACE;
	v->a[27736] = actions(902);
	v->a[27737] = 1;
	v->a[27738] = anon_sym_DOLLAR_LPAREN;
	v->a[27739] = actions(904);
	small_parse_table_1387(v);
}

void	small_parse_table_1387(t_small_parse_table_array *v)
{
	v->a[27740] = 1;
	v->a[27741] = anon_sym_BQUOTE;
	v->a[27742] = actions(906);
	v->a[27743] = 1;
	v->a[27744] = sym_file_descriptor;
	v->a[27745] = actions(1047);
	v->a[27746] = 1;
	v->a[27747] = aux_sym_heredoc_redirect_token1;
	v->a[27748] = state(1494);
	v->a[27749] = 1;
	v->a[27750] = aux_sym__heredoc_command;
	v->a[27751] = state(1937);
	v->a[27752] = 1;
	v->a[27753] = sym_concatenation;
	v->a[27754] = state(2162);
	v->a[27755] = 1;
	v->a[27756] = sym__heredoc_expression;
	v->a[27757] = state(2164);
	v->a[27758] = 1;
	v->a[27759] = sym__heredoc_pipeline;
	small_parse_table_1388(v);
}

void	small_parse_table_1388(t_small_parse_table_array *v)
{
	v->a[27760] = actions(884);
	v->a[27761] = 2;
	v->a[27762] = anon_sym_PIPE;
	v->a[27763] = anon_sym_PIPE_AMP;
	v->a[27764] = actions(886);
	v->a[27765] = 2;
	v->a[27766] = anon_sym_AMP_AMP;
	v->a[27767] = anon_sym_PIPE_PIPE;
	v->a[27768] = actions(890);
	v->a[27769] = 2;
	v->a[27770] = anon_sym_LT_AMP_DASH;
	v->a[27771] = anon_sym_GT_AMP_DASH;
	v->a[27772] = state(1611);
	v->a[27773] = 2;
	v->a[27774] = sym_file_redirect;
	v->a[27775] = aux_sym_redirected_statement_repeat2;
	v->a[27776] = actions(882);
	v->a[27777] = 3;
	v->a[27778] = sym_raw_string;
	v->a[27779] = sym_number;
	small_parse_table_1389(v);
}

void	small_parse_table_1389(t_small_parse_table_array *v)
{
	v->a[27780] = sym_word;
	v->a[27781] = state(1774);
	v->a[27782] = 5;
	v->a[27783] = sym_arithmetic_expansion;
	v->a[27784] = sym_string;
	v->a[27785] = sym_simple_expansion;
	v->a[27786] = sym_expansion;
	v->a[27787] = sym_command_substitution;
	v->a[27788] = actions(888);
	v->a[27789] = 6;
	v->a[27790] = anon_sym_LT;
	v->a[27791] = anon_sym_GT;
	v->a[27792] = anon_sym_GT_GT;
	v->a[27793] = anon_sym_LT_AMP;
	v->a[27794] = anon_sym_GT_AMP;
	v->a[27795] = anon_sym_GT_PIPE;
	v->a[27796] = 11;
	v->a[27797] = actions(858);
	v->a[27798] = 1;
	v->a[27799] = anon_sym_AMP;
	small_parse_table_1390(v);
}

/* EOF small_parse_table_277.c */
