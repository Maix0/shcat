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
	v->a[10700] = anon_sym_LT_AMP_DASH;
	v->a[10701] = anon_sym_GT_AMP_DASH;
	v->a[10702] = state(397);
	v->a[10703] = 6;
	v->a[10704] = sym_arithmetic_expansion;
	v->a[10705] = sym_string;
	v->a[10706] = sym_number;
	v->a[10707] = sym_simple_expansion;
	v->a[10708] = sym_expansion;
	v->a[10709] = sym_command_substitution;
	v->a[10710] = actions(59);
	v->a[10711] = 8;
	v->a[10712] = anon_sym_LT;
	v->a[10713] = anon_sym_GT;
	v->a[10714] = anon_sym_GT_GT;
	v->a[10715] = anon_sym_AMP_GT;
	v->a[10716] = anon_sym_AMP_GT_GT;
	v->a[10717] = anon_sym_LT_AMP;
	v->a[10718] = anon_sym_GT_AMP;
	v->a[10719] = anon_sym_GT_PIPE;
	small_parse_table_536(v);
}

void	small_parse_table_536(t_small_parse_table_array *v)
{
	v->a[10720] = state(1071);
	v->a[10721] = 12;
	v->a[10722] = sym_redirected_statement;
	v->a[10723] = sym_for_statement;
	v->a[10724] = sym_while_statement;
	v->a[10725] = sym_if_statement;
	v->a[10726] = sym_case_statement;
	v->a[10727] = sym_function_definition;
	v->a[10728] = sym_compound_statement;
	v->a[10729] = sym_subshell;
	v->a[10730] = sym_list;
	v->a[10731] = sym_negated_command;
	v->a[10732] = sym_command;
	v->a[10733] = sym_variable_assignments;
	v->a[10734] = 34;
	v->a[10735] = actions(3);
	v->a[10736] = 1;
	v->a[10737] = sym_comment;
	v->a[10738] = actions(9);
	v->a[10739] = 1;
	small_parse_table_537(v);
}

void	small_parse_table_537(t_small_parse_table_array *v)
{
	v->a[10740] = anon_sym_for;
	v->a[10741] = actions(13);
	v->a[10742] = 1;
	v->a[10743] = anon_sym_if;
	v->a[10744] = actions(15);
	v->a[10745] = 1;
	v->a[10746] = anon_sym_case;
	v->a[10747] = actions(17);
	v->a[10748] = 1;
	v->a[10749] = anon_sym_LPAREN;
	v->a[10750] = actions(19);
	v->a[10751] = 1;
	v->a[10752] = anon_sym_LBRACE;
	v->a[10753] = actions(63);
	v->a[10754] = 1;
	v->a[10755] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10756] = actions(65);
	v->a[10757] = 1;
	v->a[10758] = anon_sym_DOLLAR;
	v->a[10759] = actions(67);
	small_parse_table_538(v);
}

void	small_parse_table_538(t_small_parse_table_array *v)
{
	v->a[10760] = 1;
	v->a[10761] = anon_sym_DQUOTE;
	v->a[10762] = actions(69);
	v->a[10763] = 1;
	v->a[10764] = sym_raw_string;
	v->a[10765] = actions(71);
	v->a[10766] = 1;
	v->a[10767] = aux_sym_number_token1;
	v->a[10768] = actions(73);
	v->a[10769] = 1;
	v->a[10770] = aux_sym_number_token2;
	v->a[10771] = actions(75);
	v->a[10772] = 1;
	v->a[10773] = anon_sym_DOLLAR_LBRACE;
	v->a[10774] = actions(77);
	v->a[10775] = 1;
	v->a[10776] = anon_sym_DOLLAR_LPAREN;
	v->a[10777] = actions(79);
	v->a[10778] = 1;
	v->a[10779] = anon_sym_BQUOTE;
	small_parse_table_539(v);
}

void	small_parse_table_539(t_small_parse_table_array *v)
{
	v->a[10780] = actions(81);
	v->a[10781] = 1;
	v->a[10782] = sym_file_descriptor;
	v->a[10783] = actions(83);
	v->a[10784] = 1;
	v->a[10785] = sym_variable_name;
	v->a[10786] = actions(238);
	v->a[10787] = 1;
	v->a[10788] = sym_word;
	v->a[10789] = actions(240);
	v->a[10790] = 1;
	v->a[10791] = anon_sym_BANG;
	v->a[10792] = state(132);
	v->a[10793] = 1;
	v->a[10794] = aux_sym__statements_repeat1;
	v->a[10795] = state(185);
	v->a[10796] = 1;
	v->a[10797] = sym_command_name;
	v->a[10798] = state(297);
	v->a[10799] = 1;
	small_parse_table_540(v);
}

/* EOF small_parse_table_107.c */
