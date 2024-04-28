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
	v->a[27700] = sym_translated_string;
	v->a[27701] = sym_number;
	v->a[27702] = sym_simple_expansion;
	v->a[27703] = sym_expansion;
	v->a[27704] = sym_command_substitution;
	v->a[27705] = sym_process_substitution;
	v->a[27706] = actions(2498);
	v->a[27707] = 20;
	v->a[27708] = anon_sym_SEMI;
	v->a[27709] = anon_sym_PIPE_PIPE;
	v->a[27710] = anon_sym_AMP_AMP;
	v->a[27711] = anon_sym_PIPE;
	v->a[27712] = anon_sym_AMP;
	v->a[27713] = anon_sym_LT;
	v->a[27714] = anon_sym_GT;
	v->a[27715] = anon_sym_LT_LT;
	v->a[27716] = anon_sym_GT_GT;
	v->a[27717] = anon_sym_SEMI_SEMI;
	v->a[27718] = anon_sym_PIPE_AMP;
	v->a[27719] = anon_sym_AMP_GT;
	small_parse_table_1386(v);
}

void	small_parse_table_1386(t_small_parse_table_array *v)
{
	v->a[27720] = anon_sym_AMP_GT_GT;
	v->a[27721] = anon_sym_LT_AMP;
	v->a[27722] = anon_sym_GT_AMP;
	v->a[27723] = anon_sym_GT_PIPE;
	v->a[27724] = anon_sym_LT_AMP_DASH;
	v->a[27725] = anon_sym_GT_AMP_DASH;
	v->a[27726] = anon_sym_LT_LT_DASH;
	v->a[27727] = anon_sym_BQUOTE;
	v->a[27728] = 20;
	v->a[27729] = actions(3);
	v->a[27730] = 1;
	v->a[27731] = sym_comment;
	v->a[27732] = actions(4078);
	v->a[27733] = 1;
	v->a[27734] = anon_sym_DOLLAR_LBRACK;
	v->a[27735] = actions(4080);
	v->a[27736] = 1;
	v->a[27737] = anon_sym_DOLLAR;
	v->a[27738] = actions(4084);
	v->a[27739] = 1;
	small_parse_table_1387(v);
}

void	small_parse_table_1387(t_small_parse_table_array *v)
{
	v->a[27740] = anon_sym_DQUOTE;
	v->a[27741] = actions(4086);
	v->a[27742] = 1;
	v->a[27743] = aux_sym_number_token1;
	v->a[27744] = actions(4088);
	v->a[27745] = 1;
	v->a[27746] = aux_sym_number_token2;
	v->a[27747] = actions(4090);
	v->a[27748] = 1;
	v->a[27749] = anon_sym_DOLLAR_LBRACE;
	v->a[27750] = actions(4092);
	v->a[27751] = 1;
	v->a[27752] = anon_sym_DOLLAR_LPAREN;
	v->a[27753] = actions(4096);
	v->a[27754] = 1;
	v->a[27755] = anon_sym_DOLLAR_BQUOTE;
	v->a[27756] = actions(4102);
	v->a[27757] = 1;
	v->a[27758] = sym__brace_start;
	v->a[27759] = actions(4362);
	small_parse_table_1388(v);
}

void	small_parse_table_1388(t_small_parse_table_array *v)
{
	v->a[27760] = 1;
	v->a[27761] = sym__special_character;
	v->a[27762] = actions(4368);
	v->a[27763] = 1;
	v->a[27764] = sym_test_operator;
	v->a[27765] = state(4521);
	v->a[27766] = 1;
	v->a[27767] = aux_sym__literal_repeat1;
	v->a[27768] = state(5023);
	v->a[27769] = 1;
	v->a[27770] = sym_concatenation;
	v->a[27771] = actions(2496);
	v->a[27772] = 2;
	v->a[27773] = sym_file_descriptor;
	v->a[27774] = aux_sym_heredoc_redirect_token1;
	v->a[27775] = actions(4076);
	v->a[27776] = 2;
	v->a[27777] = anon_sym_LPAREN_LPAREN;
	v->a[27778] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27779] = actions(4098);
	small_parse_table_1389(v);
}

void	small_parse_table_1389(t_small_parse_table_array *v)
{
	v->a[27780] = 2;
	v->a[27781] = anon_sym_LT_LPAREN;
	v->a[27782] = anon_sym_GT_LPAREN;
	v->a[27783] = actions(4366);
	v->a[27784] = 3;
	v->a[27785] = sym_raw_string;
	v->a[27786] = sym_ansi_c_string;
	v->a[27787] = sym_word;
	v->a[27788] = state(4627);
	v->a[27789] = 9;
	v->a[27790] = sym_arithmetic_expansion;
	v->a[27791] = sym_brace_expression;
	v->a[27792] = sym_string;
	v->a[27793] = sym_translated_string;
	v->a[27794] = sym_number;
	v->a[27795] = sym_simple_expansion;
	v->a[27796] = sym_expansion;
	v->a[27797] = sym_command_substitution;
	v->a[27798] = sym_process_substitution;
	v->a[27799] = actions(2494);
	small_parse_table_1390(v);
}

/* EOF small_parse_table_277.c */
