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
	v->a[6700] = anon_sym_while;
	v->a[6701] = anon_sym_until;
	v->a[6702] = actions(59);
	v->a[6703] = 2;
	v->a[6704] = sym_raw_string;
	v->a[6705] = sym_number;
	v->a[6706] = state(425);
	v->a[6707] = 5;
	v->a[6708] = sym_arithmetic_expansion;
	v->a[6709] = sym_string;
	v->a[6710] = sym_simple_expansion;
	v->a[6711] = sym_expansion;
	v->a[6712] = sym_command_substitution;
	v->a[6713] = actions(51);
	v->a[6714] = 7;
	v->a[6715] = anon_sym_LT;
	v->a[6716] = anon_sym_GT;
	v->a[6717] = anon_sym_GT_GT;
	v->a[6718] = anon_sym_LT_AMP;
	v->a[6719] = anon_sym_GT_AMP;
	small_parse_table_336(v);
}

void	small_parse_table_336(t_small_parse_table_array *v)
{
	v->a[6720] = anon_sym_GT_PIPE;
	v->a[6721] = anon_sym_LT_GT;
	v->a[6722] = state(933);
	v->a[6723] = 12;
	v->a[6724] = sym_redirected_statement;
	v->a[6725] = sym_for_statement;
	v->a[6726] = sym_while_statement;
	v->a[6727] = sym_if_statement;
	v->a[6728] = sym_case_statement;
	v->a[6729] = sym_function_definition;
	v->a[6730] = sym_compound_statement;
	v->a[6731] = sym_subshell;
	v->a[6732] = sym_list;
	v->a[6733] = sym_negated_command;
	v->a[6734] = sym_command;
	v->a[6735] = sym__variable_assignments;
	v->a[6736] = 30;
	v->a[6737] = actions(3);
	v->a[6738] = 1;
	v->a[6739] = sym_comment;
	small_parse_table_337(v);
}

void	small_parse_table_337(t_small_parse_table_array *v)
{
	v->a[6740] = actions(9);
	v->a[6741] = 1;
	v->a[6742] = anon_sym_for;
	v->a[6743] = actions(13);
	v->a[6744] = 1;
	v->a[6745] = anon_sym_if;
	v->a[6746] = actions(15);
	v->a[6747] = 1;
	v->a[6748] = anon_sym_case;
	v->a[6749] = actions(17);
	v->a[6750] = 1;
	v->a[6751] = anon_sym_LPAREN;
	v->a[6752] = actions(19);
	v->a[6753] = 1;
	v->a[6754] = anon_sym_LBRACE;
	v->a[6755] = actions(53);
	v->a[6756] = 1;
	v->a[6757] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6758] = actions(55);
	v->a[6759] = 1;
	small_parse_table_338(v);
}

void	small_parse_table_338(t_small_parse_table_array *v)
{
	v->a[6760] = anon_sym_DOLLAR;
	v->a[6761] = actions(57);
	v->a[6762] = 1;
	v->a[6763] = anon_sym_DQUOTE;
	v->a[6764] = actions(61);
	v->a[6765] = 1;
	v->a[6766] = anon_sym_DOLLAR_LBRACE;
	v->a[6767] = actions(63);
	v->a[6768] = 1;
	v->a[6769] = anon_sym_DOLLAR_LPAREN;
	v->a[6770] = actions(65);
	v->a[6771] = 1;
	v->a[6772] = anon_sym_BQUOTE;
	v->a[6773] = actions(206);
	v->a[6774] = 1;
	v->a[6775] = sym_word;
	v->a[6776] = actions(208);
	v->a[6777] = 1;
	v->a[6778] = anon_sym_BANG;
	v->a[6779] = actions(214);
	small_parse_table_339(v);
}

void	small_parse_table_339(t_small_parse_table_array *v)
{
	v->a[6780] = 1;
	v->a[6781] = sym_variable_name;
	v->a[6782] = state(106);
	v->a[6783] = 1;
	v->a[6784] = aux_sym__statements_repeat1;
	v->a[6785] = state(227);
	v->a[6786] = 1;
	v->a[6787] = sym_command_name;
	v->a[6788] = state(277);
	v->a[6789] = 1;
	v->a[6790] = sym_variable_assignment;
	v->a[6791] = state(506);
	v->a[6792] = 1;
	v->a[6793] = aux_sym_command_repeat1;
	v->a[6794] = state(558);
	v->a[6795] = 1;
	v->a[6796] = sym_file_redirect;
	v->a[6797] = state(602);
	v->a[6798] = 1;
	v->a[6799] = sym_concatenation;
	small_parse_table_340(v);
}

/* EOF small_parse_table_67.c */
