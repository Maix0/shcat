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
	v->a[10700] = state(125);
	v->a[10701] = 1;
	v->a[10702] = aux_sym__statements_repeat1;
	v->a[10703] = state(173);
	v->a[10704] = 1;
	v->a[10705] = sym_command_name;
	v->a[10706] = state(224);
	v->a[10707] = 1;
	v->a[10708] = sym_variable_assignment;
	v->a[10709] = state(603);
	v->a[10710] = 1;
	v->a[10711] = sym_concatenation;
	v->a[10712] = state(673);
	v->a[10713] = 1;
	v->a[10714] = aux_sym_command_repeat1;
	v->a[10715] = state(676);
	v->a[10716] = 1;
	v->a[10717] = sym_file_redirect;
	v->a[10718] = state(1020);
	v->a[10719] = 1;
	small_parse_table_536(v);
}

void	small_parse_table_536(t_small_parse_table_array *v)
{
	v->a[10720] = sym_pipeline;
	v->a[10721] = state(1136);
	v->a[10722] = 1;
	v->a[10723] = aux_sym_redirected_statement_repeat2;
	v->a[10724] = state(1898);
	v->a[10725] = 1;
	v->a[10726] = sym__statement_not_pipeline;
	v->a[10727] = state(2042);
	v->a[10728] = 1;
	v->a[10729] = sym__statements;
	v->a[10730] = actions(11);
	v->a[10731] = 2;
	v->a[10732] = anon_sym_while;
	v->a[10733] = anon_sym_until;
	v->a[10734] = actions(217);
	v->a[10735] = 2;
	v->a[10736] = sym_raw_string;
	v->a[10737] = sym_number;
	v->a[10738] = state(362);
	v->a[10739] = 5;
	small_parse_table_537(v);
}

void	small_parse_table_537(t_small_parse_table_array *v)
{
	v->a[10740] = sym_arithmetic_expansion;
	v->a[10741] = sym_string;
	v->a[10742] = sym_simple_expansion;
	v->a[10743] = sym_expansion;
	v->a[10744] = sym_command_substitution;
	v->a[10745] = actions(215);
	v->a[10746] = 7;
	v->a[10747] = anon_sym_LT;
	v->a[10748] = anon_sym_GT;
	v->a[10749] = anon_sym_GT_GT;
	v->a[10750] = anon_sym_LT_AMP;
	v->a[10751] = anon_sym_GT_AMP;
	v->a[10752] = anon_sym_GT_PIPE;
	v->a[10753] = anon_sym_LT_GT;
	v->a[10754] = state(1003);
	v->a[10755] = 12;
	v->a[10756] = sym_redirected_statement;
	v->a[10757] = sym_for_statement;
	v->a[10758] = sym_while_statement;
	v->a[10759] = sym_if_statement;
	small_parse_table_538(v);
}

void	small_parse_table_538(t_small_parse_table_array *v)
{
	v->a[10760] = sym_case_statement;
	v->a[10761] = sym_function_definition;
	v->a[10762] = sym_compound_statement;
	v->a[10763] = sym_subshell;
	v->a[10764] = sym_list;
	v->a[10765] = sym_negated_command;
	v->a[10766] = sym_command;
	v->a[10767] = sym__variable_assignments;
	v->a[10768] = 31;
	v->a[10769] = actions(3);
	v->a[10770] = 1;
	v->a[10771] = sym_comment;
	v->a[10772] = actions(9);
	v->a[10773] = 1;
	v->a[10774] = anon_sym_for;
	v->a[10775] = actions(13);
	v->a[10776] = 1;
	v->a[10777] = anon_sym_if;
	v->a[10778] = actions(15);
	v->a[10779] = 1;
	small_parse_table_539(v);
}

void	small_parse_table_539(t_small_parse_table_array *v)
{
	v->a[10780] = anon_sym_case;
	v->a[10781] = actions(17);
	v->a[10782] = 1;
	v->a[10783] = anon_sym_LPAREN;
	v->a[10784] = actions(19);
	v->a[10785] = 1;
	v->a[10786] = anon_sym_LBRACE;
	v->a[10787] = actions(55);
	v->a[10788] = 1;
	v->a[10789] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10790] = actions(57);
	v->a[10791] = 1;
	v->a[10792] = anon_sym_DOLLAR;
	v->a[10793] = actions(59);
	v->a[10794] = 1;
	v->a[10795] = anon_sym_DQUOTE;
	v->a[10796] = actions(63);
	v->a[10797] = 1;
	v->a[10798] = anon_sym_DOLLAR_LBRACE;
	v->a[10799] = actions(65);
	small_parse_table_540(v);
}

/* EOF small_parse_table_107.c */
