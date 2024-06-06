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
	v->a[27700] = aux_sym_number_token2;
	v->a[27701] = anon_sym_DOLLAR_LBRACE;
	v->a[27702] = anon_sym_DOLLAR_LPAREN;
	v->a[27703] = anon_sym_BQUOTE;
	v->a[27704] = anon_sym_DOLLAR_BQUOTE;
	v->a[27705] = aux_sym__simple_variable_name_token1;
	v->a[27706] = sym_word;
	v->a[27707] = anon_sym_SEMI;
	v->a[27708] = 11;
	v->a[27709] = actions(3);
	v->a[27710] = 1;
	v->a[27711] = sym_comment;
	v->a[27712] = actions(3241);
	v->a[27713] = 1;
	v->a[27714] = sym_variable_name;
	v->a[27715] = actions(3302);
	v->a[27716] = 1;
	v->a[27717] = aux_sym_heredoc_redirect_token1;
	v->a[27718] = actions(2516);
	v->a[27719] = 2;
	small_parse_table_1386(v);
}

void	small_parse_table_1386(t_small_parse_table_array *v)
{
	v->a[27720] = anon_sym_PIPE;
	v->a[27721] = anon_sym_PIPE_AMP;
	v->a[27722] = actions(2945);
	v->a[27723] = 2;
	v->a[27724] = anon_sym_LT_LT;
	v->a[27725] = anon_sym_LT_LT_DASH;
	v->a[27726] = actions(3300);
	v->a[27727] = 2;
	v->a[27728] = anon_sym_AMP_AMP;
	v->a[27729] = anon_sym_PIPE_PIPE;
	v->a[27730] = state(2166);
	v->a[27731] = 2;
	v->a[27732] = sym_variable_assignment;
	v->a[27733] = aux_sym_variable_assignments_repeat1;
	v->a[27734] = actions(2526);
	v->a[27735] = 3;
	v->a[27736] = sym_file_descriptor;
	v->a[27737] = sym_test_operator;
	v->a[27738] = sym__brace_start;
	v->a[27739] = actions(3298);
	small_parse_table_1387(v);
}

void	small_parse_table_1387(t_small_parse_table_array *v)
{
	v->a[27740] = 3;
	v->a[27741] = anon_sym_SEMI_SEMI;
	v->a[27742] = anon_sym_AMP;
	v->a[27743] = anon_sym_SEMI;
	v->a[27744] = state(2295);
	v->a[27745] = 3;
	v->a[27746] = sym_file_redirect;
	v->a[27747] = sym_heredoc_redirect;
	v->a[27748] = aux_sym_redirected_statement_repeat1;
	v->a[27749] = actions(2512);
	v->a[27750] = 22;
	v->a[27751] = anon_sym_LT;
	v->a[27752] = anon_sym_GT;
	v->a[27753] = anon_sym_GT_GT;
	v->a[27754] = anon_sym_AMP_GT;
	v->a[27755] = anon_sym_AMP_GT_GT;
	v->a[27756] = anon_sym_LT_AMP;
	v->a[27757] = anon_sym_GT_AMP;
	v->a[27758] = anon_sym_GT_PIPE;
	v->a[27759] = anon_sym_LT_AMP_DASH;
	small_parse_table_1388(v);
}

void	small_parse_table_1388(t_small_parse_table_array *v)
{
	v->a[27760] = anon_sym_GT_AMP_DASH;
	v->a[27761] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27762] = anon_sym_DOLLAR;
	v->a[27763] = sym__special_character;
	v->a[27764] = anon_sym_DQUOTE;
	v->a[27765] = sym_raw_string;
	v->a[27766] = aux_sym_number_token1;
	v->a[27767] = aux_sym_number_token2;
	v->a[27768] = anon_sym_DOLLAR_LBRACE;
	v->a[27769] = anon_sym_DOLLAR_LPAREN;
	v->a[27770] = anon_sym_BQUOTE;
	v->a[27771] = anon_sym_DOLLAR_BQUOTE;
	v->a[27772] = sym_word;
	v->a[27773] = 3;
	v->a[27774] = actions(3);
	v->a[27775] = 1;
	v->a[27776] = sym_comment;
	v->a[27777] = actions(2778);
	v->a[27778] = 5;
	v->a[27779] = sym_file_descriptor;
	small_parse_table_1389(v);
}

void	small_parse_table_1389(t_small_parse_table_array *v)
{
	v->a[27780] = sym__concat;
	v->a[27781] = sym_test_operator;
	v->a[27782] = sym__brace_start;
	v->a[27783] = aux_sym_heredoc_redirect_token1;
	v->a[27784] = actions(2776);
	v->a[27785] = 36;
	v->a[27786] = anon_sym_esac;
	v->a[27787] = anon_sym_PIPE;
	v->a[27788] = anon_sym_SEMI_SEMI;
	v->a[27789] = anon_sym_SEMI_AMP;
	v->a[27790] = anon_sym_SEMI_SEMI_AMP;
	v->a[27791] = anon_sym_PIPE_AMP;
	v->a[27792] = anon_sym_AMP_AMP;
	v->a[27793] = anon_sym_PIPE_PIPE;
	v->a[27794] = anon_sym_LT;
	v->a[27795] = anon_sym_GT;
	v->a[27796] = anon_sym_GT_GT;
	v->a[27797] = anon_sym_AMP_GT;
	v->a[27798] = anon_sym_AMP_GT_GT;
	v->a[27799] = anon_sym_LT_AMP;
	small_parse_table_1390(v);
}

/* EOF small_parse_table_277.c */
