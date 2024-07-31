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
	v->a[27700] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27701] = anon_sym_DOLLAR;
	v->a[27702] = anon_sym_DQUOTE;
	v->a[27703] = sym_raw_string;
	v->a[27704] = sym_number;
	v->a[27705] = anon_sym_DOLLAR_LBRACE;
	v->a[27706] = anon_sym_DOLLAR_LPAREN;
	v->a[27707] = anon_sym_BQUOTE;
	v->a[27708] = sym_word;
	v->a[27709] = anon_sym_SEMI;
	v->a[27710] = 5;
	v->a[27711] = actions(3);
	v->a[27712] = 1;
	v->a[27713] = sym_comment;
	v->a[27714] = actions(489);
	v->a[27715] = 1;
	v->a[27716] = sym_variable_name;
	v->a[27717] = state(354);
	v->a[27718] = 2;
	v->a[27719] = sym_concatenation;
	small_parse_table_1386(v);
}

void	small_parse_table_1386(t_small_parse_table_array *v)
{
	v->a[27720] = aux_sym_for_statement_repeat1;
	v->a[27721] = state(633);
	v->a[27722] = 5;
	v->a[27723] = sym_arithmetic_expansion;
	v->a[27724] = sym_string;
	v->a[27725] = sym_simple_expansion;
	v->a[27726] = sym_expansion;
	v->a[27727] = sym_command_substitution;
	v->a[27728] = actions(487);
	v->a[27729] = 21;
	v->a[27730] = anon_sym_PIPE;
	v->a[27731] = anon_sym_AMP_AMP;
	v->a[27732] = anon_sym_PIPE_PIPE;
	v->a[27733] = anon_sym_LT;
	v->a[27734] = anon_sym_GT;
	v->a[27735] = anon_sym_GT_GT;
	v->a[27736] = anon_sym_LT_AMP;
	v->a[27737] = anon_sym_GT_AMP;
	v->a[27738] = anon_sym_GT_PIPE;
	v->a[27739] = anon_sym_LT_GT;
	small_parse_table_1387(v);
}

void	small_parse_table_1387(t_small_parse_table_array *v)
{
	v->a[27740] = anon_sym_LT_LT;
	v->a[27741] = anon_sym_LT_LT_DASH;
	v->a[27742] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27743] = anon_sym_DOLLAR;
	v->a[27744] = anon_sym_DQUOTE;
	v->a[27745] = sym_raw_string;
	v->a[27746] = sym_number;
	v->a[27747] = anon_sym_DOLLAR_LBRACE;
	v->a[27748] = anon_sym_DOLLAR_LPAREN;
	v->a[27749] = anon_sym_BQUOTE;
	v->a[27750] = sym_word;
	v->a[27751] = 6;
	v->a[27752] = actions(3);
	v->a[27753] = 1;
	v->a[27754] = sym_comment;
	v->a[27755] = actions(1069);
	v->a[27756] = 1;
	v->a[27757] = sym_variable_name;
	v->a[27758] = actions(1093);
	v->a[27759] = 1;
	small_parse_table_1388(v);
}

void	small_parse_table_1388(t_small_parse_table_array *v)
{
	v->a[27760] = aux_sym_concatenation_token1;
	v->a[27761] = actions(1099);
	v->a[27762] = 1;
	v->a[27763] = sym__concat;
	v->a[27764] = state(347);
	v->a[27765] = 1;
	v->a[27766] = aux_sym_concatenation_repeat1;
	v->a[27767] = actions(1071);
	v->a[27768] = 25;
	v->a[27769] = anon_sym_PIPE;
	v->a[27770] = anon_sym_RPAREN;
	v->a[27771] = anon_sym_SEMI_SEMI;
	v->a[27772] = anon_sym_AMP_AMP;
	v->a[27773] = anon_sym_PIPE_PIPE;
	v->a[27774] = anon_sym_LT;
	v->a[27775] = anon_sym_GT;
	v->a[27776] = anon_sym_GT_GT;
	v->a[27777] = anon_sym_LT_AMP;
	v->a[27778] = anon_sym_GT_AMP;
	v->a[27779] = anon_sym_GT_PIPE;
	small_parse_table_1389(v);
}

void	small_parse_table_1389(t_small_parse_table_array *v)
{
	v->a[27780] = anon_sym_LT_GT;
	v->a[27781] = anon_sym_LT_LT;
	v->a[27782] = anon_sym_LT_LT_DASH;
	v->a[27783] = aux_sym_heredoc_redirect_token1;
	v->a[27784] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27785] = anon_sym_DOLLAR;
	v->a[27786] = anon_sym_DQUOTE;
	v->a[27787] = sym_raw_string;
	v->a[27788] = sym_number;
	v->a[27789] = anon_sym_DOLLAR_LBRACE;
	v->a[27790] = anon_sym_DOLLAR_LPAREN;
	v->a[27791] = anon_sym_BQUOTE;
	v->a[27792] = sym_word;
	v->a[27793] = anon_sym_SEMI;
	v->a[27794] = 6;
	v->a[27795] = actions(3);
	v->a[27796] = 1;
	v->a[27797] = sym_comment;
	v->a[27798] = actions(1013);
	v->a[27799] = 1;
	small_parse_table_1390(v);
}

/* EOF small_parse_table_277.c */
