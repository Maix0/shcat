/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_67.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_335(t_small_parse_table_array *v)
{
	v->a[6700] = sym_raw_string;
	v->a[6701] = sym_number;
	v->a[6702] = actions(51);
	v->a[6703] = 3;
	v->a[6704] = anon_sym_LT;
	v->a[6705] = anon_sym_GT;
	v->a[6706] = anon_sym_GT_GT;
	v->a[6707] = state(401);
	v->a[6708] = 5;
	v->a[6709] = sym_arithmetic_expansion;
	v->a[6710] = sym_string;
	v->a[6711] = sym_simple_expansion;
	v->a[6712] = sym_expansion;
	v->a[6713] = sym_command_substitution;
	v->a[6714] = state(820);
	v->a[6715] = 12;
	v->a[6716] = sym_redirected_statement;
	v->a[6717] = sym_for_statement;
	v->a[6718] = sym_while_statement;
	v->a[6719] = sym_if_statement;
	small_parse_table_336(v);
}

void	small_parse_table_336(t_small_parse_table_array *v)
{
	v->a[6720] = sym_case_statement;
	v->a[6721] = sym_function_definition;
	v->a[6722] = sym_compound_statement;
	v->a[6723] = sym_subshell;
	v->a[6724] = sym_list;
	v->a[6725] = sym_negated_command;
	v->a[6726] = sym_command;
	v->a[6727] = sym__variable_assignments;
	v->a[6728] = 30;
	v->a[6729] = actions(3);
	v->a[6730] = 1;
	v->a[6731] = sym_comment;
	v->a[6732] = actions(9);
	v->a[6733] = 1;
	v->a[6734] = anon_sym_for;
	v->a[6735] = actions(13);
	v->a[6736] = 1;
	v->a[6737] = anon_sym_if;
	v->a[6738] = actions(15);
	v->a[6739] = 1;
	small_parse_table_337(v);
}

void	small_parse_table_337(t_small_parse_table_array *v)
{
	v->a[6740] = anon_sym_case;
	v->a[6741] = actions(17);
	v->a[6742] = 1;
	v->a[6743] = anon_sym_LPAREN;
	v->a[6744] = actions(19);
	v->a[6745] = 1;
	v->a[6746] = anon_sym_LBRACE;
	v->a[6747] = actions(41);
	v->a[6748] = 1;
	v->a[6749] = sym_word;
	v->a[6750] = actions(49);
	v->a[6751] = 1;
	v->a[6752] = anon_sym_BANG;
	v->a[6753] = actions(53);
	v->a[6754] = 1;
	v->a[6755] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6756] = actions(55);
	v->a[6757] = 1;
	v->a[6758] = anon_sym_DOLLAR;
	v->a[6759] = actions(57);
	small_parse_table_338(v);
}

void	small_parse_table_338(t_small_parse_table_array *v)
{
	v->a[6760] = 1;
	v->a[6761] = anon_sym_DQUOTE;
	v->a[6762] = actions(61);
	v->a[6763] = 1;
	v->a[6764] = anon_sym_DOLLAR_LBRACE;
	v->a[6765] = actions(63);
	v->a[6766] = 1;
	v->a[6767] = anon_sym_DOLLAR_LPAREN;
	v->a[6768] = actions(65);
	v->a[6769] = 1;
	v->a[6770] = anon_sym_BQUOTE;
	v->a[6771] = actions(67);
	v->a[6772] = 1;
	v->a[6773] = sym_variable_name;
	v->a[6774] = actions(226);
	v->a[6775] = 1;
	v->a[6776] = anon_sym_done;
	v->a[6777] = state(38);
	v->a[6778] = 1;
	v->a[6779] = aux_sym__terminated_statement;
	small_parse_table_339(v);
}

void	small_parse_table_339(t_small_parse_table_array *v)
{
	v->a[6780] = state(185);
	v->a[6781] = 1;
	v->a[6782] = sym_command_name;
	v->a[6783] = state(237);
	v->a[6784] = 1;
	v->a[6785] = sym_variable_assignment;
	v->a[6786] = state(411);
	v->a[6787] = 1;
	v->a[6788] = aux_sym_command_repeat1;
	v->a[6789] = state(551);
	v->a[6790] = 1;
	v->a[6791] = sym_file_redirect;
	v->a[6792] = state(555);
	v->a[6793] = 1;
	v->a[6794] = sym_concatenation;
	v->a[6795] = state(1059);
	v->a[6796] = 1;
	v->a[6797] = sym_pipeline;
	v->a[6798] = state(1126);
	v->a[6799] = 1;
	small_parse_table_340(v);
}

/* EOF small_parse_table_67.c */
