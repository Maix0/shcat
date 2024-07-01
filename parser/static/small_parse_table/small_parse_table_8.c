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
	v->a[800] = 1;
	v->a[801] = sym_word;
	v->a[802] = actions(51);
	v->a[803] = 1;
	v->a[804] = anon_sym_BANG;
	v->a[805] = actions(55);
	v->a[806] = 1;
	v->a[807] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[808] = actions(57);
	v->a[809] = 1;
	v->a[810] = anon_sym_DOLLAR;
	v->a[811] = actions(59);
	v->a[812] = 1;
	v->a[813] = anon_sym_DQUOTE;
	v->a[814] = actions(63);
	v->a[815] = 1;
	v->a[816] = anon_sym_DOLLAR_LBRACE;
	v->a[817] = actions(65);
	v->a[818] = 1;
	v->a[819] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_41(v);
}

void	small_parse_table_41(t_small_parse_table_array *v)
{
	v->a[820] = actions(67);
	v->a[821] = 1;
	v->a[822] = anon_sym_BQUOTE;
	v->a[823] = actions(69);
	v->a[824] = 1;
	v->a[825] = sym_file_descriptor;
	v->a[826] = actions(71);
	v->a[827] = 1;
	v->a[828] = sym_variable_name;
	v->a[829] = actions(83);
	v->a[830] = 1;
	v->a[831] = anon_sym_LF;
	v->a[832] = state(33);
	v->a[833] = 1;
	v->a[834] = aux_sym__case_item_last_repeat2;
	v->a[835] = state(128);
	v->a[836] = 1;
	v->a[837] = aux_sym__statements_repeat1;
	v->a[838] = state(183);
	v->a[839] = 1;
	small_parse_table_42(v);
}

void	small_parse_table_42(t_small_parse_table_array *v)
{
	v->a[840] = sym_command_name;
	v->a[841] = state(271);
	v->a[842] = 1;
	v->a[843] = sym_variable_assignment;
	v->a[844] = state(603);
	v->a[845] = 1;
	v->a[846] = sym_concatenation;
	v->a[847] = state(639);
	v->a[848] = 1;
	v->a[849] = aux_sym_command_repeat1;
	v->a[850] = state(644);
	v->a[851] = 1;
	v->a[852] = sym_file_redirect;
	v->a[853] = state(1171);
	v->a[854] = 1;
	v->a[855] = sym_pipeline;
	v->a[856] = state(1196);
	v->a[857] = 1;
	v->a[858] = aux_sym_redirected_statement_repeat2;
	v->a[859] = state(1910);
	small_parse_table_43(v);
}

void	small_parse_table_43(t_small_parse_table_array *v)
{
	v->a[860] = 1;
	v->a[861] = sym__statement_not_pipeline;
	v->a[862] = state(2010);
	v->a[863] = 1;
	v->a[864] = sym__statements;
	v->a[865] = actions(11);
	v->a[866] = 2;
	v->a[867] = anon_sym_while;
	v->a[868] = anon_sym_until;
	v->a[869] = actions(61);
	v->a[870] = 2;
	v->a[871] = sym_raw_string;
	v->a[872] = sym_number;
	v->a[873] = state(436);
	v->a[874] = 5;
	v->a[875] = sym_arithmetic_expansion;
	v->a[876] = sym_string;
	v->a[877] = sym_simple_expansion;
	v->a[878] = sym_expansion;
	v->a[879] = sym_command_substitution;
	small_parse_table_44(v);
}

void	small_parse_table_44(t_small_parse_table_array *v)
{
	v->a[880] = actions(53);
	v->a[881] = 7;
	v->a[882] = anon_sym_LT;
	v->a[883] = anon_sym_GT;
	v->a[884] = anon_sym_GT_GT;
	v->a[885] = anon_sym_LT_AMP;
	v->a[886] = anon_sym_GT_AMP;
	v->a[887] = anon_sym_GT_PIPE;
	v->a[888] = anon_sym_LT_GT;
	v->a[889] = state(1046);
	v->a[890] = 12;
	v->a[891] = sym_redirected_statement;
	v->a[892] = sym_for_statement;
	v->a[893] = sym_while_statement;
	v->a[894] = sym_if_statement;
	v->a[895] = sym_case_statement;
	v->a[896] = sym_function_definition;
	v->a[897] = sym_compound_statement;
	v->a[898] = sym_subshell;
	v->a[899] = sym_list;
	small_parse_table_45(v);
}

/* EOF small_parse_table_8.c */
