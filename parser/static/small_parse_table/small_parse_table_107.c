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
	v->a[10700] = anon_sym_case;
	v->a[10701] = actions(17);
	v->a[10702] = 1;
	v->a[10703] = anon_sym_LPAREN;
	v->a[10704] = actions(19);
	v->a[10705] = 1;
	v->a[10706] = anon_sym_LBRACE;
	v->a[10707] = actions(53);
	v->a[10708] = 1;
	v->a[10709] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10710] = actions(55);
	v->a[10711] = 1;
	v->a[10712] = anon_sym_DOLLAR;
	v->a[10713] = actions(57);
	v->a[10714] = 1;
	v->a[10715] = anon_sym_DQUOTE;
	v->a[10716] = actions(61);
	v->a[10717] = 1;
	v->a[10718] = anon_sym_DOLLAR_LBRACE;
	v->a[10719] = actions(63);
	small_parse_table_536(v);
}

void	small_parse_table_536(t_small_parse_table_array *v)
{
	v->a[10720] = 1;
	v->a[10721] = anon_sym_DOLLAR_LPAREN;
	v->a[10722] = actions(65);
	v->a[10723] = 1;
	v->a[10724] = anon_sym_BQUOTE;
	v->a[10725] = actions(208);
	v->a[10726] = 1;
	v->a[10727] = sym_word;
	v->a[10728] = actions(210);
	v->a[10729] = 1;
	v->a[10730] = anon_sym_BANG;
	v->a[10731] = actions(216);
	v->a[10732] = 1;
	v->a[10733] = sym_variable_name;
	v->a[10734] = state(112);
	v->a[10735] = 1;
	v->a[10736] = aux_sym__statements_repeat1;
	v->a[10737] = state(158);
	v->a[10738] = 1;
	v->a[10739] = sym_command_name;
	small_parse_table_537(v);
}

void	small_parse_table_537(t_small_parse_table_array *v)
{
	v->a[10740] = state(186);
	v->a[10741] = 1;
	v->a[10742] = sym_variable_assignment;
	v->a[10743] = state(298);
	v->a[10744] = 1;
	v->a[10745] = aux_sym_command_repeat1;
	v->a[10746] = state(540);
	v->a[10747] = 1;
	v->a[10748] = sym_file_redirect;
	v->a[10749] = state(555);
	v->a[10750] = 1;
	v->a[10751] = sym_concatenation;
	v->a[10752] = state(937);
	v->a[10753] = 1;
	v->a[10754] = sym_pipeline;
	v->a[10755] = state(1019);
	v->a[10756] = 1;
	v->a[10757] = aux_sym_redirected_statement_repeat2;
	v->a[10758] = state(1557);
	v->a[10759] = 1;
	small_parse_table_538(v);
}

void	small_parse_table_538(t_small_parse_table_array *v)
{
	v->a[10760] = sym__statement_not_pipeline;
	v->a[10761] = state(1701);
	v->a[10762] = 1;
	v->a[10763] = sym__statements;
	v->a[10764] = actions(11);
	v->a[10765] = 2;
	v->a[10766] = anon_sym_while;
	v->a[10767] = anon_sym_until;
	v->a[10768] = actions(214);
	v->a[10769] = 2;
	v->a[10770] = sym_raw_string;
	v->a[10771] = sym_number;
	v->a[10772] = actions(212);
	v->a[10773] = 3;
	v->a[10774] = anon_sym_LT;
	v->a[10775] = anon_sym_GT;
	v->a[10776] = anon_sym_GT_GT;
	v->a[10777] = state(277);
	v->a[10778] = 5;
	v->a[10779] = sym_arithmetic_expansion;
	small_parse_table_539(v);
}

void	small_parse_table_539(t_small_parse_table_array *v)
{
	v->a[10780] = sym_string;
	v->a[10781] = sym_simple_expansion;
	v->a[10782] = sym_expansion;
	v->a[10783] = sym_command_substitution;
	v->a[10784] = state(877);
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
	v->a[10798] = 30;
	v->a[10799] = actions(3);
	small_parse_table_540(v);
}

/* EOF small_parse_table_107.c */
