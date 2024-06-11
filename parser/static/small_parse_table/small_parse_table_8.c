/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_8.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_40(t_small_parse_table_array *v)
{
	v->a[800] = sym_while_statement;
	v->a[801] = sym_if_statement;
	v->a[802] = sym_case_statement;
	v->a[803] = sym_function_definition;
	v->a[804] = sym_compound_statement;
	v->a[805] = sym_subshell;
	v->a[806] = sym_list;
	v->a[807] = sym_negated_command;
	v->a[808] = sym_command;
	v->a[809] = sym_variable_assignments;
	v->a[810] = 34;
	v->a[811] = actions(3);
	v->a[812] = 1;
	v->a[813] = sym_comment;
	v->a[814] = actions(9);
	v->a[815] = 1;
	v->a[816] = anon_sym_for;
	v->a[817] = actions(13);
	v->a[818] = 1;
	v->a[819] = anon_sym_if;
	small_parse_table_41(v);
}

void	small_parse_table_41(t_small_parse_table_array *v)
{
	v->a[820] = actions(15);
	v->a[821] = 1;
	v->a[822] = anon_sym_case;
	v->a[823] = actions(17);
	v->a[824] = 1;
	v->a[825] = anon_sym_LPAREN;
	v->a[826] = actions(19);
	v->a[827] = 1;
	v->a[828] = anon_sym_LBRACE;
	v->a[829] = actions(45);
	v->a[830] = 1;
	v->a[831] = sym_word;
	v->a[832] = actions(53);
	v->a[833] = 1;
	v->a[834] = anon_sym_BANG;
	v->a[835] = actions(59);
	v->a[836] = 1;
	v->a[837] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[838] = actions(61);
	v->a[839] = 1;
	small_parse_table_42(v);
}

void	small_parse_table_42(t_small_parse_table_array *v)
{
	v->a[840] = anon_sym_DOLLAR;
	v->a[841] = actions(63);
	v->a[842] = 1;
	v->a[843] = anon_sym_DQUOTE;
	v->a[844] = actions(67);
	v->a[845] = 1;
	v->a[846] = anon_sym_DOLLAR_LBRACE;
	v->a[847] = actions(69);
	v->a[848] = 1;
	v->a[849] = anon_sym_DOLLAR_LPAREN;
	v->a[850] = actions(71);
	v->a[851] = 1;
	v->a[852] = anon_sym_BQUOTE;
	v->a[853] = actions(73);
	v->a[854] = 1;
	v->a[855] = sym_file_descriptor;
	v->a[856] = actions(75);
	v->a[857] = 1;
	v->a[858] = sym_variable_name;
	v->a[859] = actions(87);
	small_parse_table_43(v);
}

void	small_parse_table_43(t_small_parse_table_array *v)
{
	v->a[860] = 1;
	v->a[861] = anon_sym_LF;
	v->a[862] = state(136);
	v->a[863] = 1;
	v->a[864] = aux_sym__statements_repeat1;
	v->a[865] = state(187);
	v->a[866] = 1;
	v->a[867] = sym_command_name;
	v->a[868] = state(275);
	v->a[869] = 1;
	v->a[870] = sym_variable_assignment;
	v->a[871] = state(647);
	v->a[872] = 1;
	v->a[873] = sym_concatenation;
	v->a[874] = state(736);
	v->a[875] = 1;
	v->a[876] = aux_sym_command_repeat1;
	v->a[877] = state(738);
	v->a[878] = 1;
	v->a[879] = sym_file_redirect;
	small_parse_table_44(v);
}

void	small_parse_table_44(t_small_parse_table_array *v)
{
	v->a[880] = state(767);
	v->a[881] = 1;
	v->a[882] = aux_sym__case_item_last_repeat2;
	v->a[883] = state(1450);
	v->a[884] = 1;
	v->a[885] = sym_pipeline;
	v->a[886] = state(1460);
	v->a[887] = 1;
	v->a[888] = aux_sym_redirected_statement_repeat2;
	v->a[889] = state(2269);
	v->a[890] = 1;
	v->a[891] = sym__statement_not_pipeline;
	v->a[892] = state(2380);
	v->a[893] = 1;
	v->a[894] = sym__statements;
	v->a[895] = actions(11);
	v->a[896] = 2;
	v->a[897] = anon_sym_while;
	v->a[898] = anon_sym_until;
	v->a[899] = actions(57);
	small_parse_table_45(v);
}

/* EOF small_parse_table_8.c */
