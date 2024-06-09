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
	v->a[11700] = state(582);
	v->a[11701] = 1;
	v->a[11702] = sym_concatenation;
	v->a[11703] = state(723);
	v->a[11704] = 1;
	v->a[11705] = sym_file_redirect;
	v->a[11706] = state(1100);
	v->a[11707] = 1;
	v->a[11708] = sym_pipeline;
	v->a[11709] = state(1196);
	v->a[11710] = 1;
	v->a[11711] = aux_sym_redirected_statement_repeat2;
	v->a[11712] = state(2037);
	v->a[11713] = 1;
	v->a[11714] = sym__statement_not_pipeline;
	v->a[11715] = state(2208);
	v->a[11716] = 1;
	v->a[11717] = sym__statements;
	v->a[11718] = actions(11);
	v->a[11719] = 2;
	small_parse_table_586(v);
}

void	small_parse_table_586(t_small_parse_table_array *v)
{
	v->a[11720] = anon_sym_while;
	v->a[11721] = anon_sym_until;
	v->a[11722] = actions(254);
	v->a[11723] = 2;
	v->a[11724] = anon_sym_LT_AMP_DASH;
	v->a[11725] = anon_sym_GT_AMP_DASH;
	v->a[11726] = state(295);
	v->a[11727] = 6;
	v->a[11728] = sym_arithmetic_expansion;
	v->a[11729] = sym_string;
	v->a[11730] = sym_number;
	v->a[11731] = sym_simple_expansion;
	v->a[11732] = sym_expansion;
	v->a[11733] = sym_command_substitution;
	v->a[11734] = actions(252);
	v->a[11735] = 8;
	v->a[11736] = anon_sym_LT;
	v->a[11737] = anon_sym_GT;
	v->a[11738] = anon_sym_GT_GT;
	v->a[11739] = anon_sym_AMP_GT;
	small_parse_table_587(v);
}

void	small_parse_table_587(t_small_parse_table_array *v)
{
	v->a[11740] = anon_sym_AMP_GT_GT;
	v->a[11741] = anon_sym_LT_AMP;
	v->a[11742] = anon_sym_GT_AMP;
	v->a[11743] = anon_sym_GT_PIPE;
	v->a[11744] = state(1031);
	v->a[11745] = 12;
	v->a[11746] = sym_redirected_statement;
	v->a[11747] = sym_for_statement;
	v->a[11748] = sym_while_statement;
	v->a[11749] = sym_if_statement;
	v->a[11750] = sym_case_statement;
	v->a[11751] = sym_function_definition;
	v->a[11752] = sym_compound_statement;
	v->a[11753] = sym_subshell;
	v->a[11754] = sym_list;
	v->a[11755] = sym_negated_command;
	v->a[11756] = sym_command;
	v->a[11757] = sym_variable_assignments;
	v->a[11758] = 34;
	v->a[11759] = actions(3);
	small_parse_table_588(v);
}

void	small_parse_table_588(t_small_parse_table_array *v)
{
	v->a[11760] = 1;
	v->a[11761] = sym_comment;
	v->a[11762] = actions(9);
	v->a[11763] = 1;
	v->a[11764] = anon_sym_for;
	v->a[11765] = actions(13);
	v->a[11766] = 1;
	v->a[11767] = anon_sym_if;
	v->a[11768] = actions(15);
	v->a[11769] = 1;
	v->a[11770] = anon_sym_case;
	v->a[11771] = actions(17);
	v->a[11772] = 1;
	v->a[11773] = anon_sym_LPAREN;
	v->a[11774] = actions(19);
	v->a[11775] = 1;
	v->a[11776] = anon_sym_LBRACE;
	v->a[11777] = actions(63);
	v->a[11778] = 1;
	v->a[11779] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_589(v);
}

void	small_parse_table_589(t_small_parse_table_array *v)
{
	v->a[11780] = actions(65);
	v->a[11781] = 1;
	v->a[11782] = anon_sym_DOLLAR;
	v->a[11783] = actions(67);
	v->a[11784] = 1;
	v->a[11785] = anon_sym_DQUOTE;
	v->a[11786] = actions(71);
	v->a[11787] = 1;
	v->a[11788] = aux_sym_number_token1;
	v->a[11789] = actions(73);
	v->a[11790] = 1;
	v->a[11791] = aux_sym_number_token2;
	v->a[11792] = actions(75);
	v->a[11793] = 1;
	v->a[11794] = anon_sym_DOLLAR_LBRACE;
	v->a[11795] = actions(77);
	v->a[11796] = 1;
	v->a[11797] = anon_sym_DOLLAR_LPAREN;
	v->a[11798] = actions(79);
	v->a[11799] = 1;
	small_parse_table_590(v);
}

/* EOF small_parse_table_117.c */
