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
	v->a[6700] = 1;
	v->a[6701] = sym_command_name;
	v->a[6702] = state(297);
	v->a[6703] = 1;
	v->a[6704] = sym_variable_assignment;
	v->a[6705] = state(582);
	v->a[6706] = 1;
	v->a[6707] = sym_concatenation;
	v->a[6708] = state(614);
	v->a[6709] = 1;
	v->a[6710] = aux_sym_command_repeat1;
	v->a[6711] = state(769);
	v->a[6712] = 1;
	v->a[6713] = sym_file_redirect;
	v->a[6714] = state(1133);
	v->a[6715] = 1;
	v->a[6716] = aux_sym_redirected_statement_repeat2;
	v->a[6717] = state(1142);
	v->a[6718] = 1;
	v->a[6719] = sym_pipeline;
	small_parse_table_336(v);
}

void	small_parse_table_336(t_small_parse_table_array *v)
{
	v->a[6720] = state(2041);
	v->a[6721] = 1;
	v->a[6722] = sym__statement_not_pipeline;
	v->a[6723] = state(2219);
	v->a[6724] = 1;
	v->a[6725] = sym__statements;
	v->a[6726] = actions(11);
	v->a[6727] = 2;
	v->a[6728] = anon_sym_while;
	v->a[6729] = anon_sym_until;
	v->a[6730] = actions(61);
	v->a[6731] = 2;
	v->a[6732] = anon_sym_LT_AMP_DASH;
	v->a[6733] = anon_sym_GT_AMP_DASH;
	v->a[6734] = state(397);
	v->a[6735] = 6;
	v->a[6736] = sym_arithmetic_expansion;
	v->a[6737] = sym_string;
	v->a[6738] = sym_number;
	v->a[6739] = sym_simple_expansion;
	small_parse_table_337(v);
}

void	small_parse_table_337(t_small_parse_table_array *v)
{
	v->a[6740] = sym_expansion;
	v->a[6741] = sym_command_substitution;
	v->a[6742] = actions(59);
	v->a[6743] = 8;
	v->a[6744] = anon_sym_LT;
	v->a[6745] = anon_sym_GT;
	v->a[6746] = anon_sym_GT_GT;
	v->a[6747] = anon_sym_AMP_GT;
	v->a[6748] = anon_sym_AMP_GT_GT;
	v->a[6749] = anon_sym_LT_AMP;
	v->a[6750] = anon_sym_GT_AMP;
	v->a[6751] = anon_sym_GT_PIPE;
	v->a[6752] = state(1071);
	v->a[6753] = 12;
	v->a[6754] = sym_redirected_statement;
	v->a[6755] = sym_for_statement;
	v->a[6756] = sym_while_statement;
	v->a[6757] = sym_if_statement;
	v->a[6758] = sym_case_statement;
	v->a[6759] = sym_function_definition;
	small_parse_table_338(v);
}

void	small_parse_table_338(t_small_parse_table_array *v)
{
	v->a[6760] = sym_compound_statement;
	v->a[6761] = sym_subshell;
	v->a[6762] = sym_list;
	v->a[6763] = sym_negated_command;
	v->a[6764] = sym_command;
	v->a[6765] = sym_variable_assignments;
	v->a[6766] = 34;
	v->a[6767] = actions(3);
	v->a[6768] = 1;
	v->a[6769] = sym_comment;
	v->a[6770] = actions(9);
	v->a[6771] = 1;
	v->a[6772] = anon_sym_for;
	v->a[6773] = actions(13);
	v->a[6774] = 1;
	v->a[6775] = anon_sym_if;
	v->a[6776] = actions(15);
	v->a[6777] = 1;
	v->a[6778] = anon_sym_case;
	v->a[6779] = actions(17);
	small_parse_table_339(v);
}

void	small_parse_table_339(t_small_parse_table_array *v)
{
	v->a[6780] = 1;
	v->a[6781] = anon_sym_LPAREN;
	v->a[6782] = actions(19);
	v->a[6783] = 1;
	v->a[6784] = anon_sym_LBRACE;
	v->a[6785] = actions(63);
	v->a[6786] = 1;
	v->a[6787] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6788] = actions(65);
	v->a[6789] = 1;
	v->a[6790] = anon_sym_DOLLAR;
	v->a[6791] = actions(67);
	v->a[6792] = 1;
	v->a[6793] = anon_sym_DQUOTE;
	v->a[6794] = actions(71);
	v->a[6795] = 1;
	v->a[6796] = aux_sym_number_token1;
	v->a[6797] = actions(73);
	v->a[6798] = 1;
	v->a[6799] = aux_sym_number_token2;
	small_parse_table_340(v);
}

/* EOF small_parse_table_67.c */
