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
	v->a[6700] = anon_sym_BANG;
	v->a[6701] = actions(170);
	v->a[6702] = 1;
	v->a[6703] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6704] = actions(173);
	v->a[6705] = 1;
	v->a[6706] = anon_sym_DOLLAR;
	v->a[6707] = actions(176);
	v->a[6708] = 1;
	v->a[6709] = anon_sym_DQUOTE;
	v->a[6710] = actions(182);
	v->a[6711] = 1;
	v->a[6712] = anon_sym_DOLLAR_LBRACE;
	v->a[6713] = actions(185);
	v->a[6714] = 1;
	v->a[6715] = anon_sym_DOLLAR_LPAREN;
	v->a[6716] = actions(188);
	v->a[6717] = 1;
	v->a[6718] = anon_sym_BQUOTE;
	v->a[6719] = actions(191);
	small_parse_table_336(v);
}

void	small_parse_table_336(t_small_parse_table_array *v)
{
	v->a[6720] = 1;
	v->a[6721] = sym_file_descriptor;
	v->a[6722] = actions(194);
	v->a[6723] = 1;
	v->a[6724] = sym_variable_name;
	v->a[6725] = state(57);
	v->a[6726] = 1;
	v->a[6727] = aux_sym__terminated_statement;
	v->a[6728] = state(182);
	v->a[6729] = 1;
	v->a[6730] = sym_command_name;
	v->a[6731] = state(337);
	v->a[6732] = 1;
	v->a[6733] = sym_variable_assignment;
	v->a[6734] = state(584);
	v->a[6735] = 1;
	v->a[6736] = sym_concatenation;
	v->a[6737] = state(620);
	v->a[6738] = 1;
	v->a[6739] = sym_file_redirect;
	small_parse_table_337(v);
}

void	small_parse_table_337(t_small_parse_table_array *v)
{
	v->a[6740] = state(623);
	v->a[6741] = 1;
	v->a[6742] = aux_sym_command_repeat1;
	v->a[6743] = state(1105);
	v->a[6744] = 1;
	v->a[6745] = sym_pipeline;
	v->a[6746] = state(1201);
	v->a[6747] = 1;
	v->a[6748] = aux_sym_redirected_statement_repeat2;
	v->a[6749] = state(1911);
	v->a[6750] = 1;
	v->a[6751] = sym__statement_not_pipeline;
	v->a[6752] = actions(147);
	v->a[6753] = 2;
	v->a[6754] = anon_sym_while;
	v->a[6755] = anon_sym_until;
	v->a[6756] = actions(179);
	v->a[6757] = 2;
	v->a[6758] = sym_raw_string;
	v->a[6759] = sym_number;
	small_parse_table_338(v);
}

void	small_parse_table_338(t_small_parse_table_array *v)
{
	v->a[6760] = state(433);
	v->a[6761] = 5;
	v->a[6762] = sym_arithmetic_expansion;
	v->a[6763] = sym_string;
	v->a[6764] = sym_simple_expansion;
	v->a[6765] = sym_expansion;
	v->a[6766] = sym_command_substitution;
	v->a[6767] = actions(167);
	v->a[6768] = 7;
	v->a[6769] = anon_sym_LT;
	v->a[6770] = anon_sym_GT;
	v->a[6771] = anon_sym_GT_GT;
	v->a[6772] = anon_sym_LT_AMP;
	v->a[6773] = anon_sym_GT_AMP;
	v->a[6774] = anon_sym_GT_PIPE;
	v->a[6775] = anon_sym_LT_GT;
	v->a[6776] = state(1013);
	v->a[6777] = 12;
	v->a[6778] = sym_redirected_statement;
	v->a[6779] = sym_for_statement;
	small_parse_table_339(v);
}

void	small_parse_table_339(t_small_parse_table_array *v)
{
	v->a[6780] = sym_while_statement;
	v->a[6781] = sym_if_statement;
	v->a[6782] = sym_case_statement;
	v->a[6783] = sym_function_definition;
	v->a[6784] = sym_compound_statement;
	v->a[6785] = sym_subshell;
	v->a[6786] = sym_list;
	v->a[6787] = sym_negated_command;
	v->a[6788] = sym_command;
	v->a[6789] = sym__variable_assignments;
	v->a[6790] = 31;
	v->a[6791] = actions(3);
	v->a[6792] = 1;
	v->a[6793] = sym_comment;
	v->a[6794] = actions(9);
	v->a[6795] = 1;
	v->a[6796] = anon_sym_for;
	v->a[6797] = actions(13);
	v->a[6798] = 1;
	v->a[6799] = anon_sym_if;
	small_parse_table_340(v);
}

/* EOF small_parse_table_67.c */
