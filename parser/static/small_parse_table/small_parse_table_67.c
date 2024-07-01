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
	v->a[6700] = anon_sym_GT_GT;
	v->a[6701] = anon_sym_LT_AMP;
	v->a[6702] = anon_sym_GT_AMP;
	v->a[6703] = anon_sym_GT_PIPE;
	v->a[6704] = state(1094);
	v->a[6705] = 12;
	v->a[6706] = sym_redirected_statement;
	v->a[6707] = sym_for_statement;
	v->a[6708] = sym_while_statement;
	v->a[6709] = sym_if_statement;
	v->a[6710] = sym_case_statement;
	v->a[6711] = sym_function_definition;
	v->a[6712] = sym_compound_statement;
	v->a[6713] = sym_subshell;
	v->a[6714] = sym_list;
	v->a[6715] = sym_negated_command;
	v->a[6716] = sym_command;
	v->a[6717] = sym__variable_assignments;
	v->a[6718] = 32;
	v->a[6719] = actions(3);
	small_parse_table_336(v);
}

void	small_parse_table_336(t_small_parse_table_array *v)
{
	v->a[6720] = 1;
	v->a[6721] = sym_comment;
	v->a[6722] = actions(9);
	v->a[6723] = 1;
	v->a[6724] = anon_sym_for;
	v->a[6725] = actions(13);
	v->a[6726] = 1;
	v->a[6727] = anon_sym_if;
	v->a[6728] = actions(15);
	v->a[6729] = 1;
	v->a[6730] = anon_sym_case;
	v->a[6731] = actions(17);
	v->a[6732] = 1;
	v->a[6733] = anon_sym_LPAREN;
	v->a[6734] = actions(19);
	v->a[6735] = 1;
	v->a[6736] = anon_sym_LBRACE;
	v->a[6737] = actions(59);
	v->a[6738] = 1;
	v->a[6739] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_337(v);
}

void	small_parse_table_337(t_small_parse_table_array *v)
{
	v->a[6740] = actions(61);
	v->a[6741] = 1;
	v->a[6742] = anon_sym_DOLLAR;
	v->a[6743] = actions(63);
	v->a[6744] = 1;
	v->a[6745] = anon_sym_DQUOTE;
	v->a[6746] = actions(67);
	v->a[6747] = 1;
	v->a[6748] = anon_sym_DOLLAR_LBRACE;
	v->a[6749] = actions(69);
	v->a[6750] = 1;
	v->a[6751] = anon_sym_DOLLAR_LPAREN;
	v->a[6752] = actions(71);
	v->a[6753] = 1;
	v->a[6754] = anon_sym_BQUOTE;
	v->a[6755] = actions(73);
	v->a[6756] = 1;
	v->a[6757] = sym_file_descriptor;
	v->a[6758] = actions(75);
	v->a[6759] = 1;
	small_parse_table_338(v);
}

void	small_parse_table_338(t_small_parse_table_array *v)
{
	v->a[6760] = sym_variable_name;
	v->a[6761] = actions(240);
	v->a[6762] = 1;
	v->a[6763] = sym_word;
	v->a[6764] = actions(242);
	v->a[6765] = 1;
	v->a[6766] = anon_sym_BANG;
	v->a[6767] = state(136);
	v->a[6768] = 1;
	v->a[6769] = aux_sym__statements_repeat1;
	v->a[6770] = state(188);
	v->a[6771] = 1;
	v->a[6772] = sym_command_name;
	v->a[6773] = state(297);
	v->a[6774] = 1;
	v->a[6775] = sym_variable_assignment;
	v->a[6776] = state(650);
	v->a[6777] = 1;
	v->a[6778] = sym_concatenation;
	v->a[6779] = state(749);
	small_parse_table_339(v);
}

void	small_parse_table_339(t_small_parse_table_array *v)
{
	v->a[6780] = 1;
	v->a[6781] = aux_sym_command_repeat1;
	v->a[6782] = state(795);
	v->a[6783] = 1;
	v->a[6784] = sym_file_redirect;
	v->a[6785] = state(1154);
	v->a[6786] = 1;
	v->a[6787] = sym_pipeline;
	v->a[6788] = state(1240);
	v->a[6789] = 1;
	v->a[6790] = aux_sym_redirected_statement_repeat2;
	v->a[6791] = state(2119);
	v->a[6792] = 1;
	v->a[6793] = sym__statement_not_pipeline;
	v->a[6794] = state(2147);
	v->a[6795] = 1;
	v->a[6796] = sym__statements;
	v->a[6797] = actions(11);
	v->a[6798] = 2;
	v->a[6799] = anon_sym_while;
	small_parse_table_340(v);
}

/* EOF small_parse_table_67.c */
