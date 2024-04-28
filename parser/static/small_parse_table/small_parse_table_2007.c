/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2007.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10035(t_small_parse_table_array *v)
{
	v->a[200700] = sym_number;
	v->a[200701] = sym_simple_expansion;
	v->a[200702] = sym_expansion;
	v->a[200703] = sym_command_substitution;
	v->a[200704] = sym_process_substitution;
	v->a[200705] = 20;
	v->a[200706] = actions(71);
	v->a[200707] = 1;
	v->a[200708] = sym_comment;
	v->a[200709] = actions(3391);
	v->a[200710] = 1;
	v->a[200711] = sym_word;
	v->a[200712] = actions(3397);
	v->a[200713] = 1;
	v->a[200714] = anon_sym_DOLLAR;
	v->a[200715] = actions(3401);
	v->a[200716] = 1;
	v->a[200717] = aux_sym_number_token1;
	v->a[200718] = actions(3403);
	v->a[200719] = 1;
	small_parse_table_10036(v);
}

void	small_parse_table_10036(t_small_parse_table_array *v)
{
	v->a[200720] = aux_sym_number_token2;
	v->a[200721] = actions(3407);
	v->a[200722] = 1;
	v->a[200723] = anon_sym_DOLLAR_LPAREN;
	v->a[200724] = actions(3415);
	v->a[200725] = 1;
	v->a[200726] = sym_test_operator;
	v->a[200727] = actions(3417);
	v->a[200728] = 1;
	v->a[200729] = sym__brace_start;
	v->a[200730] = actions(8926);
	v->a[200731] = 1;
	v->a[200732] = anon_sym_DOLLAR_LBRACK;
	v->a[200733] = actions(8930);
	v->a[200734] = 1;
	v->a[200735] = anon_sym_DQUOTE;
	v->a[200736] = actions(8934);
	v->a[200737] = 1;
	v->a[200738] = anon_sym_DOLLAR_LBRACE;
	v->a[200739] = actions(8936);
	small_parse_table_10037(v);
}

void	small_parse_table_10037(t_small_parse_table_array *v)
{
	v->a[200740] = 1;
	v->a[200741] = anon_sym_BQUOTE;
	v->a[200742] = actions(8938);
	v->a[200743] = 1;
	v->a[200744] = anon_sym_DOLLAR_BQUOTE;
	v->a[200745] = actions(9160);
	v->a[200746] = 1;
	v->a[200747] = sym__special_character;
	v->a[200748] = state(2161);
	v->a[200749] = 1;
	v->a[200750] = aux_sym__literal_repeat1;
	v->a[200751] = actions(8924);
	v->a[200752] = 2;
	v->a[200753] = anon_sym_LPAREN_LPAREN;
	v->a[200754] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[200755] = actions(8940);
	v->a[200756] = 2;
	v->a[200757] = anon_sym_LT_LPAREN;
	v->a[200758] = anon_sym_GT_LPAREN;
	v->a[200759] = actions(9162);
	small_parse_table_10038(v);
}

void	small_parse_table_10038(t_small_parse_table_array *v)
{
	v->a[200760] = 2;
	v->a[200761] = sym_raw_string;
	v->a[200762] = sym_ansi_c_string;
	v->a[200763] = state(691);
	v->a[200764] = 2;
	v->a[200765] = sym_concatenation;
	v->a[200766] = aux_sym_for_statement_repeat1;
	v->a[200767] = state(1711);
	v->a[200768] = 9;
	v->a[200769] = sym_arithmetic_expansion;
	v->a[200770] = sym_brace_expression;
	v->a[200771] = sym_string;
	v->a[200772] = sym_translated_string;
	v->a[200773] = sym_number;
	v->a[200774] = sym_simple_expansion;
	v->a[200775] = sym_expansion;
	v->a[200776] = sym_command_substitution;
	v->a[200777] = sym_process_substitution;
	v->a[200778] = 19;
	v->a[200779] = actions(3);
	small_parse_table_10039(v);
}

void	small_parse_table_10039(t_small_parse_table_array *v)
{
	v->a[200780] = 1;
	v->a[200781] = sym_comment;
	v->a[200782] = actions(363);
	v->a[200783] = 1;
	v->a[200784] = anon_sym_DOLLAR_LBRACK;
	v->a[200785] = actions(367);
	v->a[200786] = 1;
	v->a[200787] = anon_sym_DOLLAR;
	v->a[200788] = actions(371);
	v->a[200789] = 1;
	v->a[200790] = anon_sym_DQUOTE;
	v->a[200791] = actions(375);
	v->a[200792] = 1;
	v->a[200793] = aux_sym_number_token1;
	v->a[200794] = actions(377);
	v->a[200795] = 1;
	v->a[200796] = aux_sym_number_token2;
	v->a[200797] = actions(379);
	v->a[200798] = 1;
	v->a[200799] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_10040(v);
}

/* EOF small_parse_table_2007.c */
