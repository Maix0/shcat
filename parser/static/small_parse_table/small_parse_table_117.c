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
	v->a[11700] = sym_list;
	v->a[11701] = sym_negated_command;
	v->a[11702] = sym_command;
	v->a[11703] = sym__variable_assignments;
	v->a[11704] = 31;
	v->a[11705] = actions(3);
	v->a[11706] = 1;
	v->a[11707] = sym_comment;
	v->a[11708] = actions(9);
	v->a[11709] = 1;
	v->a[11710] = anon_sym_for;
	v->a[11711] = actions(13);
	v->a[11712] = 1;
	v->a[11713] = anon_sym_if;
	v->a[11714] = actions(15);
	v->a[11715] = 1;
	v->a[11716] = anon_sym_case;
	v->a[11717] = actions(17);
	v->a[11718] = 1;
	v->a[11719] = anon_sym_LPAREN;
	small_parse_table_586(v);
}

void	small_parse_table_586(t_small_parse_table_array *v)
{
	v->a[11720] = actions(19);
	v->a[11721] = 1;
	v->a[11722] = anon_sym_LBRACE;
	v->a[11723] = actions(55);
	v->a[11724] = 1;
	v->a[11725] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11726] = actions(57);
	v->a[11727] = 1;
	v->a[11728] = anon_sym_DOLLAR;
	v->a[11729] = actions(59);
	v->a[11730] = 1;
	v->a[11731] = anon_sym_DQUOTE;
	v->a[11732] = actions(63);
	v->a[11733] = 1;
	v->a[11734] = anon_sym_DOLLAR_LBRACE;
	v->a[11735] = actions(65);
	v->a[11736] = 1;
	v->a[11737] = anon_sym_DOLLAR_LPAREN;
	v->a[11738] = actions(67);
	v->a[11739] = 1;
	small_parse_table_587(v);
}

void	small_parse_table_587(t_small_parse_table_array *v)
{
	v->a[11740] = anon_sym_BQUOTE;
	v->a[11741] = actions(211);
	v->a[11742] = 1;
	v->a[11743] = sym_word;
	v->a[11744] = actions(213);
	v->a[11745] = 1;
	v->a[11746] = anon_sym_BANG;
	v->a[11747] = actions(219);
	v->a[11748] = 1;
	v->a[11749] = sym_file_descriptor;
	v->a[11750] = actions(221);
	v->a[11751] = 1;
	v->a[11752] = sym_variable_name;
	v->a[11753] = state(125);
	v->a[11754] = 1;
	v->a[11755] = aux_sym__statements_repeat1;
	v->a[11756] = state(173);
	v->a[11757] = 1;
	v->a[11758] = sym_command_name;
	v->a[11759] = state(224);
	small_parse_table_588(v);
}

void	small_parse_table_588(t_small_parse_table_array *v)
{
	v->a[11760] = 1;
	v->a[11761] = sym_variable_assignment;
	v->a[11762] = state(603);
	v->a[11763] = 1;
	v->a[11764] = sym_concatenation;
	v->a[11765] = state(630);
	v->a[11766] = 1;
	v->a[11767] = sym_file_redirect;
	v->a[11768] = state(673);
	v->a[11769] = 1;
	v->a[11770] = aux_sym_command_repeat1;
	v->a[11771] = state(1020);
	v->a[11772] = 1;
	v->a[11773] = sym_pipeline;
	v->a[11774] = state(1136);
	v->a[11775] = 1;
	v->a[11776] = aux_sym_redirected_statement_repeat2;
	v->a[11777] = state(1898);
	v->a[11778] = 1;
	v->a[11779] = sym__statement_not_pipeline;
	small_parse_table_589(v);
}

void	small_parse_table_589(t_small_parse_table_array *v)
{
	v->a[11780] = state(2098);
	v->a[11781] = 1;
	v->a[11782] = sym__statements;
	v->a[11783] = actions(11);
	v->a[11784] = 2;
	v->a[11785] = anon_sym_while;
	v->a[11786] = anon_sym_until;
	v->a[11787] = actions(217);
	v->a[11788] = 2;
	v->a[11789] = sym_raw_string;
	v->a[11790] = sym_number;
	v->a[11791] = state(362);
	v->a[11792] = 5;
	v->a[11793] = sym_arithmetic_expansion;
	v->a[11794] = sym_string;
	v->a[11795] = sym_simple_expansion;
	v->a[11796] = sym_expansion;
	v->a[11797] = sym_command_substitution;
	v->a[11798] = actions(215);
	v->a[11799] = 7;
	small_parse_table_590(v);
}

/* EOF small_parse_table_117.c */
