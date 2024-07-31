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
	v->a[10700] = sym_simple_expansion;
	v->a[10701] = sym_expansion;
	v->a[10702] = sym_command_substitution;
	v->a[10703] = actions(159);
	v->a[10704] = 7;
	v->a[10705] = anon_sym_LT;
	v->a[10706] = anon_sym_GT;
	v->a[10707] = anon_sym_GT_GT;
	v->a[10708] = anon_sym_LT_AMP;
	v->a[10709] = anon_sym_GT_AMP;
	v->a[10710] = anon_sym_GT_PIPE;
	v->a[10711] = anon_sym_LT_GT;
	v->a[10712] = state(939);
	v->a[10713] = 12;
	v->a[10714] = sym_redirected_statement;
	v->a[10715] = sym_for_statement;
	v->a[10716] = sym_while_statement;
	v->a[10717] = sym_if_statement;
	v->a[10718] = sym_case_statement;
	v->a[10719] = sym_function_definition;
	small_parse_table_536(v);
}

void	small_parse_table_536(t_small_parse_table_array *v)
{
	v->a[10720] = sym_compound_statement;
	v->a[10721] = sym_subshell;
	v->a[10722] = sym_list;
	v->a[10723] = sym_negated_command;
	v->a[10724] = sym_command;
	v->a[10725] = sym__variable_assignments;
	v->a[10726] = 30;
	v->a[10727] = actions(3);
	v->a[10728] = 1;
	v->a[10729] = sym_comment;
	v->a[10730] = actions(9);
	v->a[10731] = 1;
	v->a[10732] = anon_sym_for;
	v->a[10733] = actions(13);
	v->a[10734] = 1;
	v->a[10735] = anon_sym_if;
	v->a[10736] = actions(15);
	v->a[10737] = 1;
	v->a[10738] = anon_sym_case;
	v->a[10739] = actions(17);
	small_parse_table_537(v);
}

void	small_parse_table_537(t_small_parse_table_array *v)
{
	v->a[10740] = 1;
	v->a[10741] = anon_sym_LPAREN;
	v->a[10742] = actions(19);
	v->a[10743] = 1;
	v->a[10744] = anon_sym_LBRACE;
	v->a[10745] = actions(53);
	v->a[10746] = 1;
	v->a[10747] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10748] = actions(55);
	v->a[10749] = 1;
	v->a[10750] = anon_sym_DOLLAR;
	v->a[10751] = actions(57);
	v->a[10752] = 1;
	v->a[10753] = anon_sym_DQUOTE;
	v->a[10754] = actions(61);
	v->a[10755] = 1;
	v->a[10756] = anon_sym_DOLLAR_LBRACE;
	v->a[10757] = actions(63);
	v->a[10758] = 1;
	v->a[10759] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_538(v);
}

void	small_parse_table_538(t_small_parse_table_array *v)
{
	v->a[10760] = actions(65);
	v->a[10761] = 1;
	v->a[10762] = anon_sym_BQUOTE;
	v->a[10763] = actions(206);
	v->a[10764] = 1;
	v->a[10765] = sym_word;
	v->a[10766] = actions(208);
	v->a[10767] = 1;
	v->a[10768] = anon_sym_BANG;
	v->a[10769] = actions(214);
	v->a[10770] = 1;
	v->a[10771] = sym_variable_name;
	v->a[10772] = state(106);
	v->a[10773] = 1;
	v->a[10774] = aux_sym__statements_repeat1;
	v->a[10775] = state(227);
	v->a[10776] = 1;
	v->a[10777] = sym_command_name;
	v->a[10778] = state(277);
	v->a[10779] = 1;
	small_parse_table_539(v);
}

void	small_parse_table_539(t_small_parse_table_array *v)
{
	v->a[10780] = sym_variable_assignment;
	v->a[10781] = state(506);
	v->a[10782] = 1;
	v->a[10783] = aux_sym_command_repeat1;
	v->a[10784] = state(600);
	v->a[10785] = 1;
	v->a[10786] = sym_file_redirect;
	v->a[10787] = state(602);
	v->a[10788] = 1;
	v->a[10789] = sym_concatenation;
	v->a[10790] = state(911);
	v->a[10791] = 1;
	v->a[10792] = sym_pipeline;
	v->a[10793] = state(1001);
	v->a[10794] = 1;
	v->a[10795] = aux_sym_redirected_statement_repeat2;
	v->a[10796] = state(1606);
	v->a[10797] = 1;
	v->a[10798] = sym__statement_not_pipeline;
	v->a[10799] = state(1763);
	small_parse_table_540(v);
}

/* EOF small_parse_table_107.c */
