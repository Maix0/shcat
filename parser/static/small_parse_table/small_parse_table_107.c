/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_107.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_535(t_small_parse_table_array *v)
{
	v->a[10700] = actions(61);
	v->a[10701] = 1;
	v->a[10702] = anon_sym_DOLLAR;
	v->a[10703] = actions(63);
	v->a[10704] = 1;
	v->a[10705] = anon_sym_DQUOTE;
	v->a[10706] = actions(67);
	v->a[10707] = 1;
	v->a[10708] = anon_sym_DOLLAR_LBRACE;
	v->a[10709] = actions(69);
	v->a[10710] = 1;
	v->a[10711] = anon_sym_DOLLAR_LPAREN;
	v->a[10712] = actions(71);
	v->a[10713] = 1;
	v->a[10714] = anon_sym_BQUOTE;
	v->a[10715] = actions(73);
	v->a[10716] = 1;
	v->a[10717] = sym_file_descriptor;
	v->a[10718] = actions(75);
	v->a[10719] = 1;
	small_parse_table_536(v);
}

void	small_parse_table_536(t_small_parse_table_array *v)
{
	v->a[10720] = sym_variable_name;
	v->a[10721] = actions(240);
	v->a[10722] = 1;
	v->a[10723] = sym_word;
	v->a[10724] = actions(242);
	v->a[10725] = 1;
	v->a[10726] = anon_sym_BANG;
	v->a[10727] = state(136);
	v->a[10728] = 1;
	v->a[10729] = aux_sym__statements_repeat1;
	v->a[10730] = state(188);
	v->a[10731] = 1;
	v->a[10732] = sym_command_name;
	v->a[10733] = state(297);
	v->a[10734] = 1;
	v->a[10735] = sym_variable_assignment;
	v->a[10736] = state(650);
	v->a[10737] = 1;
	v->a[10738] = sym_concatenation;
	v->a[10739] = state(749);
	small_parse_table_537(v);
}

void	small_parse_table_537(t_small_parse_table_array *v)
{
	v->a[10740] = 1;
	v->a[10741] = aux_sym_command_repeat1;
	v->a[10742] = state(795);
	v->a[10743] = 1;
	v->a[10744] = sym_file_redirect;
	v->a[10745] = state(1154);
	v->a[10746] = 1;
	v->a[10747] = sym_pipeline;
	v->a[10748] = state(1240);
	v->a[10749] = 1;
	v->a[10750] = aux_sym_redirected_statement_repeat2;
	v->a[10751] = state(2119);
	v->a[10752] = 1;
	v->a[10753] = sym__statement_not_pipeline;
	v->a[10754] = state(2274);
	v->a[10755] = 1;
	v->a[10756] = sym__statements;
	v->a[10757] = actions(11);
	v->a[10758] = 2;
	v->a[10759] = anon_sym_while;
	small_parse_table_538(v);
}

void	small_parse_table_538(t_small_parse_table_array *v)
{
	v->a[10760] = anon_sym_until;
	v->a[10761] = actions(57);
	v->a[10762] = 2;
	v->a[10763] = anon_sym_LT_AMP_DASH;
	v->a[10764] = anon_sym_GT_AMP_DASH;
	v->a[10765] = actions(65);
	v->a[10766] = 2;
	v->a[10767] = sym_raw_string;
	v->a[10768] = sym_number;
	v->a[10769] = state(443);
	v->a[10770] = 5;
	v->a[10771] = sym_arithmetic_expansion;
	v->a[10772] = sym_string;
	v->a[10773] = sym_simple_expansion;
	v->a[10774] = sym_expansion;
	v->a[10775] = sym_command_substitution;
	v->a[10776] = actions(55);
	v->a[10777] = 6;
	v->a[10778] = anon_sym_LT;
	v->a[10779] = anon_sym_GT;
	small_parse_table_539(v);
}

void	small_parse_table_539(t_small_parse_table_array *v)
{
	v->a[10780] = anon_sym_GT_GT;
	v->a[10781] = anon_sym_LT_AMP;
	v->a[10782] = anon_sym_GT_AMP;
	v->a[10783] = anon_sym_GT_PIPE;
	v->a[10784] = state(1030);
	v->a[10785] = 12;
	v->a[10786] = sym_redirected_statement;
	v->a[10787] = sym_for_statement;
	v->a[10788] = sym_while_statement;
	v->a[10789] = sym_if_statement;
	v->a[10790] = sym_case_statement;
	v->a[10791] = sym_function_definition;
	v->a[10792] = sym_compound_statement;
	v->a[10793] = sym_subshell;
	v->a[10794] = sym_list;
	v->a[10795] = sym_negated_command;
	v->a[10796] = sym_command;
	v->a[10797] = sym__variable_assignments;
	v->a[10798] = 32;
	v->a[10799] = actions(3);
	small_parse_table_540(v);
}

/* EOF small_parse_table_107.c */
