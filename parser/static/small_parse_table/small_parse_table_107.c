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
	v->a[10700] = 5;
	v->a[10701] = sym_arithmetic_expansion;
	v->a[10702] = sym_string;
	v->a[10703] = sym_simple_expansion;
	v->a[10704] = sym_expansion;
	v->a[10705] = sym_command_substitution;
	v->a[10706] = actions(55);
	v->a[10707] = 8;
	v->a[10708] = anon_sym_LT;
	v->a[10709] = anon_sym_GT;
	v->a[10710] = anon_sym_GT_GT;
	v->a[10711] = anon_sym_AMP_GT;
	v->a[10712] = anon_sym_AMP_GT_GT;
	v->a[10713] = anon_sym_LT_AMP;
	v->a[10714] = anon_sym_GT_AMP;
	v->a[10715] = anon_sym_GT_PIPE;
	v->a[10716] = state(1302);
	v->a[10717] = 12;
	v->a[10718] = sym_redirected_statement;
	v->a[10719] = sym_for_statement;
	small_parse_table_536(v);
}

void	small_parse_table_536(t_small_parse_table_array *v)
{
	v->a[10720] = sym_while_statement;
	v->a[10721] = sym_if_statement;
	v->a[10722] = sym_case_statement;
	v->a[10723] = sym_function_definition;
	v->a[10724] = sym_compound_statement;
	v->a[10725] = sym_subshell;
	v->a[10726] = sym_list;
	v->a[10727] = sym_negated_command;
	v->a[10728] = sym_command;
	v->a[10729] = sym_variable_assignments;
	v->a[10730] = 32;
	v->a[10731] = actions(3);
	v->a[10732] = 1;
	v->a[10733] = sym_comment;
	v->a[10734] = actions(9);
	v->a[10735] = 1;
	v->a[10736] = anon_sym_for;
	v->a[10737] = actions(13);
	v->a[10738] = 1;
	v->a[10739] = anon_sym_if;
	small_parse_table_537(v);
}

void	small_parse_table_537(t_small_parse_table_array *v)
{
	v->a[10740] = actions(15);
	v->a[10741] = 1;
	v->a[10742] = anon_sym_case;
	v->a[10743] = actions(17);
	v->a[10744] = 1;
	v->a[10745] = anon_sym_LPAREN;
	v->a[10746] = actions(19);
	v->a[10747] = 1;
	v->a[10748] = anon_sym_LBRACE;
	v->a[10749] = actions(59);
	v->a[10750] = 1;
	v->a[10751] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10752] = actions(61);
	v->a[10753] = 1;
	v->a[10754] = anon_sym_DOLLAR;
	v->a[10755] = actions(63);
	v->a[10756] = 1;
	v->a[10757] = anon_sym_DQUOTE;
	v->a[10758] = actions(67);
	v->a[10759] = 1;
	small_parse_table_538(v);
}

void	small_parse_table_538(t_small_parse_table_array *v)
{
	v->a[10760] = anon_sym_DOLLAR_LBRACE;
	v->a[10761] = actions(69);
	v->a[10762] = 1;
	v->a[10763] = anon_sym_DOLLAR_LPAREN;
	v->a[10764] = actions(71);
	v->a[10765] = 1;
	v->a[10766] = anon_sym_BQUOTE;
	v->a[10767] = actions(220);
	v->a[10768] = 1;
	v->a[10769] = sym_word;
	v->a[10770] = actions(222);
	v->a[10771] = 1;
	v->a[10772] = anon_sym_BANG;
	v->a[10773] = actions(230);
	v->a[10774] = 1;
	v->a[10775] = sym_file_descriptor;
	v->a[10776] = actions(232);
	v->a[10777] = 1;
	v->a[10778] = sym_variable_name;
	v->a[10779] = state(126);
	small_parse_table_539(v);
}

void	small_parse_table_539(t_small_parse_table_array *v)
{
	v->a[10780] = 1;
	v->a[10781] = aux_sym__statements_repeat1;
	v->a[10782] = state(184);
	v->a[10783] = 1;
	v->a[10784] = sym_command_name;
	v->a[10785] = state(268);
	v->a[10786] = 1;
	v->a[10787] = sym_variable_assignment;
	v->a[10788] = state(647);
	v->a[10789] = 1;
	v->a[10790] = sym_concatenation;
	v->a[10791] = state(792);
	v->a[10792] = 1;
	v->a[10793] = sym_file_redirect;
	v->a[10794] = state(828);
	v->a[10795] = 1;
	v->a[10796] = aux_sym_command_repeat1;
	v->a[10797] = state(1314);
	v->a[10798] = 1;
	v->a[10799] = sym_pipeline;
	small_parse_table_540(v);
}

/* EOF small_parse_table_107.c */
