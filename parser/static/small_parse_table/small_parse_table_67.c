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
	v->a[6700] = sym_list;
	v->a[6701] = sym_negated_command;
	v->a[6702] = sym_command;
	v->a[6703] = sym_variable_assignments;
	v->a[6704] = 32;
	v->a[6705] = actions(3);
	v->a[6706] = 1;
	v->a[6707] = sym_comment;
	v->a[6708] = actions(9);
	v->a[6709] = 1;
	v->a[6710] = anon_sym_for;
	v->a[6711] = actions(13);
	v->a[6712] = 1;
	v->a[6713] = anon_sym_if;
	v->a[6714] = actions(15);
	v->a[6715] = 1;
	v->a[6716] = anon_sym_case;
	v->a[6717] = actions(17);
	v->a[6718] = 1;
	v->a[6719] = anon_sym_LPAREN;
	small_parse_table_336(v);
}

void	small_parse_table_336(t_small_parse_table_array *v)
{
	v->a[6720] = actions(19);
	v->a[6721] = 1;
	v->a[6722] = anon_sym_LBRACE;
	v->a[6723] = actions(45);
	v->a[6724] = 1;
	v->a[6725] = sym_word;
	v->a[6726] = actions(53);
	v->a[6727] = 1;
	v->a[6728] = anon_sym_BANG;
	v->a[6729] = actions(59);
	v->a[6730] = 1;
	v->a[6731] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6732] = actions(61);
	v->a[6733] = 1;
	v->a[6734] = anon_sym_DOLLAR;
	v->a[6735] = actions(63);
	v->a[6736] = 1;
	v->a[6737] = anon_sym_DQUOTE;
	v->a[6738] = actions(67);
	v->a[6739] = 1;
	small_parse_table_337(v);
}

void	small_parse_table_337(t_small_parse_table_array *v)
{
	v->a[6740] = anon_sym_DOLLAR_LBRACE;
	v->a[6741] = actions(69);
	v->a[6742] = 1;
	v->a[6743] = anon_sym_DOLLAR_LPAREN;
	v->a[6744] = actions(71);
	v->a[6745] = 1;
	v->a[6746] = anon_sym_BQUOTE;
	v->a[6747] = actions(73);
	v->a[6748] = 1;
	v->a[6749] = sym_file_descriptor;
	v->a[6750] = actions(75);
	v->a[6751] = 1;
	v->a[6752] = sym_variable_name;
	v->a[6753] = actions(250);
	v->a[6754] = 1;
	v->a[6755] = anon_sym_then;
	v->a[6756] = state(35);
	v->a[6757] = 1;
	v->a[6758] = aux_sym__terminated_statement;
	v->a[6759] = state(187);
	small_parse_table_338(v);
}

void	small_parse_table_338(t_small_parse_table_array *v)
{
	v->a[6760] = 1;
	v->a[6761] = sym_command_name;
	v->a[6762] = state(274);
	v->a[6763] = 1;
	v->a[6764] = sym_variable_assignment;
	v->a[6765] = state(647);
	v->a[6766] = 1;
	v->a[6767] = sym_concatenation;
	v->a[6768] = state(736);
	v->a[6769] = 1;
	v->a[6770] = aux_sym_command_repeat1;
	v->a[6771] = state(738);
	v->a[6772] = 1;
	v->a[6773] = sym_file_redirect;
	v->a[6774] = state(1439);
	v->a[6775] = 1;
	v->a[6776] = sym_pipeline;
	v->a[6777] = state(1460);
	v->a[6778] = 1;
	v->a[6779] = aux_sym_redirected_statement_repeat2;
	small_parse_table_339(v);
}

void	small_parse_table_339(t_small_parse_table_array *v)
{
	v->a[6780] = state(2269);
	v->a[6781] = 1;
	v->a[6782] = sym__statement_not_pipeline;
	v->a[6783] = actions(11);
	v->a[6784] = 2;
	v->a[6785] = anon_sym_while;
	v->a[6786] = anon_sym_until;
	v->a[6787] = actions(57);
	v->a[6788] = 2;
	v->a[6789] = anon_sym_LT_AMP_DASH;
	v->a[6790] = anon_sym_GT_AMP_DASH;
	v->a[6791] = actions(65);
	v->a[6792] = 2;
	v->a[6793] = sym_raw_string;
	v->a[6794] = sym_number;
	v->a[6795] = state(394);
	v->a[6796] = 5;
	v->a[6797] = sym_arithmetic_expansion;
	v->a[6798] = sym_string;
	v->a[6799] = sym_simple_expansion;
	small_parse_table_340(v);
}

/* EOF small_parse_table_67.c */
