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
	v->a[11700] = anon_sym_for;
	v->a[11701] = actions(13);
	v->a[11702] = 1;
	v->a[11703] = anon_sym_if;
	v->a[11704] = actions(15);
	v->a[11705] = 1;
	v->a[11706] = anon_sym_case;
	v->a[11707] = actions(17);
	v->a[11708] = 1;
	v->a[11709] = anon_sym_LPAREN;
	v->a[11710] = actions(19);
	v->a[11711] = 1;
	v->a[11712] = anon_sym_LBRACE;
	v->a[11713] = actions(41);
	v->a[11714] = 1;
	v->a[11715] = sym_word;
	v->a[11716] = actions(49);
	v->a[11717] = 1;
	v->a[11718] = anon_sym_BANG;
	v->a[11719] = actions(53);
	small_parse_table_586(v);
}

void	small_parse_table_586(t_small_parse_table_array *v)
{
	v->a[11720] = 1;
	v->a[11721] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11722] = actions(55);
	v->a[11723] = 1;
	v->a[11724] = anon_sym_DOLLAR;
	v->a[11725] = actions(57);
	v->a[11726] = 1;
	v->a[11727] = anon_sym_DQUOTE;
	v->a[11728] = actions(61);
	v->a[11729] = 1;
	v->a[11730] = anon_sym_DOLLAR_LBRACE;
	v->a[11731] = actions(63);
	v->a[11732] = 1;
	v->a[11733] = anon_sym_DOLLAR_LPAREN;
	v->a[11734] = actions(65);
	v->a[11735] = 1;
	v->a[11736] = anon_sym_BQUOTE;
	v->a[11737] = actions(67);
	v->a[11738] = 1;
	v->a[11739] = sym_variable_name;
	small_parse_table_587(v);
}

void	small_parse_table_587(t_small_parse_table_array *v)
{
	v->a[11740] = state(35);
	v->a[11741] = 1;
	v->a[11742] = aux_sym__terminated_statement;
	v->a[11743] = state(185);
	v->a[11744] = 1;
	v->a[11745] = sym_command_name;
	v->a[11746] = state(238);
	v->a[11747] = 1;
	v->a[11748] = sym_variable_assignment;
	v->a[11749] = state(411);
	v->a[11750] = 1;
	v->a[11751] = aux_sym_command_repeat1;
	v->a[11752] = state(551);
	v->a[11753] = 1;
	v->a[11754] = sym_file_redirect;
	v->a[11755] = state(555);
	v->a[11756] = 1;
	v->a[11757] = sym_concatenation;
	v->a[11758] = state(1001);
	v->a[11759] = 1;
	small_parse_table_588(v);
}

void	small_parse_table_588(t_small_parse_table_array *v)
{
	v->a[11760] = sym_pipeline;
	v->a[11761] = state(1126);
	v->a[11762] = 1;
	v->a[11763] = aux_sym_redirected_statement_repeat2;
	v->a[11764] = state(1561);
	v->a[11765] = 1;
	v->a[11766] = sym__statement_not_pipeline;
	v->a[11767] = actions(11);
	v->a[11768] = 2;
	v->a[11769] = anon_sym_while;
	v->a[11770] = anon_sym_until;
	v->a[11771] = actions(59);
	v->a[11772] = 2;
	v->a[11773] = sym_raw_string;
	v->a[11774] = sym_number;
	v->a[11775] = actions(51);
	v->a[11776] = 3;
	v->a[11777] = anon_sym_LT;
	v->a[11778] = anon_sym_GT;
	v->a[11779] = anon_sym_GT_GT;
	small_parse_table_589(v);
}

void	small_parse_table_589(t_small_parse_table_array *v)
{
	v->a[11780] = state(401);
	v->a[11781] = 5;
	v->a[11782] = sym_arithmetic_expansion;
	v->a[11783] = sym_string;
	v->a[11784] = sym_simple_expansion;
	v->a[11785] = sym_expansion;
	v->a[11786] = sym_command_substitution;
	v->a[11787] = state(958);
	v->a[11788] = 12;
	v->a[11789] = sym_redirected_statement;
	v->a[11790] = sym_for_statement;
	v->a[11791] = sym_while_statement;
	v->a[11792] = sym_if_statement;
	v->a[11793] = sym_case_statement;
	v->a[11794] = sym_function_definition;
	v->a[11795] = sym_compound_statement;
	v->a[11796] = sym_subshell;
	v->a[11797] = sym_list;
	v->a[11798] = sym_negated_command;
	v->a[11799] = sym_command;
	small_parse_table_590(v);
}

/* EOF small_parse_table_117.c */
