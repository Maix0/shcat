/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_117.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_585(t_small_parse_table_array *v)
{
	v->a[11700] = sym_comment;
	v->a[11701] = actions(671);
	v->a[11702] = 1;
	v->a[11703] = anon_sym_LPAREN_LPAREN;
	v->a[11704] = actions(677);
	v->a[11705] = 1;
	v->a[11706] = anon_sym_LPAREN;
	v->a[11707] = actions(693);
	v->a[11708] = 1;
	v->a[11709] = anon_sym_LBRACK;
	v->a[11710] = actions(695);
	v->a[11711] = 1;
	v->a[11712] = anon_sym_LBRACK_LBRACK;
	v->a[11713] = actions(705);
	v->a[11714] = 1;
	v->a[11715] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11716] = actions(707);
	v->a[11717] = 1;
	v->a[11718] = anon_sym_DOLLAR_LBRACK;
	v->a[11719] = actions(709);
	small_parse_table_586(v);
}

void	small_parse_table_586(t_small_parse_table_array *v)
{
	v->a[11720] = 1;
	v->a[11721] = anon_sym_DOLLAR;
	v->a[11722] = actions(711);
	v->a[11723] = 1;
	v->a[11724] = sym__special_character;
	v->a[11725] = actions(713);
	v->a[11726] = 1;
	v->a[11727] = anon_sym_DQUOTE;
	v->a[11728] = actions(717);
	v->a[11729] = 1;
	v->a[11730] = aux_sym_number_token1;
	v->a[11731] = actions(719);
	v->a[11732] = 1;
	v->a[11733] = aux_sym_number_token2;
	v->a[11734] = actions(721);
	v->a[11735] = 1;
	v->a[11736] = anon_sym_DOLLAR_LBRACE;
	v->a[11737] = actions(723);
	v->a[11738] = 1;
	v->a[11739] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_587(v);
}

void	small_parse_table_587(t_small_parse_table_array *v)
{
	v->a[11740] = actions(725);
	v->a[11741] = 1;
	v->a[11742] = anon_sym_BQUOTE;
	v->a[11743] = actions(727);
	v->a[11744] = 1;
	v->a[11745] = anon_sym_DOLLAR_BQUOTE;
	v->a[11746] = actions(733);
	v->a[11747] = 1;
	v->a[11748] = sym_variable_name;
	v->a[11749] = actions(735);
	v->a[11750] = 1;
	v->a[11751] = sym_test_operator;
	v->a[11752] = actions(737);
	v->a[11753] = 1;
	v->a[11754] = sym__brace_start;
	v->a[11755] = actions(1394);
	v->a[11756] = 1;
	v->a[11757] = anon_sym_LT_LT_LT;
	v->a[11758] = actions(1396);
	v->a[11759] = 1;
	small_parse_table_588(v);
}

void	small_parse_table_588(t_small_parse_table_array *v)
{
	v->a[11760] = sym_file_descriptor;
	v->a[11761] = actions(2971);
	v->a[11762] = 1;
	v->a[11763] = sym_word;
	v->a[11764] = state(530);
	v->a[11765] = 1;
	v->a[11766] = sym_command_name;
	v->a[11767] = state(989);
	v->a[11768] = 1;
	v->a[11769] = aux_sym_command_repeat1;
	v->a[11770] = state(1026);
	v->a[11771] = 1;
	v->a[11772] = aux_sym__literal_repeat1;
	v->a[11773] = state(1169);
	v->a[11774] = 1;
	v->a[11775] = sym_concatenation;
	v->a[11776] = state(1909);
	v->a[11777] = 1;
	v->a[11778] = sym_variable_assignment;
	v->a[11779] = state(5046);
	small_parse_table_589(v);
}

void	small_parse_table_589(t_small_parse_table_array *v)
{
	v->a[11780] = 1;
	v->a[11781] = sym_command;
	v->a[11782] = state(6760);
	v->a[11783] = 1;
	v->a[11784] = sym_subscript;
	v->a[11785] = actions(715);
	v->a[11786] = 2;
	v->a[11787] = sym_raw_string;
	v->a[11788] = sym_ansi_c_string;
	v->a[11789] = actions(729);
	v->a[11790] = 2;
	v->a[11791] = anon_sym_LT_LPAREN;
	v->a[11792] = anon_sym_GT_LPAREN;
	v->a[11793] = actions(1392);
	v->a[11794] = 2;
	v->a[11795] = anon_sym_LT_AMP_DASH;
	v->a[11796] = anon_sym_GT_AMP_DASH;
	v->a[11797] = state(3581);
	v->a[11798] = 2;
	v->a[11799] = sym_file_redirect;
	small_parse_table_590(v);
}

/* EOF small_parse_table_117.c */
