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
	v->a[801] = anon_sym_DOLLAR_LBRACE;
	v->a[802] = actions(109);
	v->a[803] = 1;
	v->a[804] = anon_sym_DOLLAR_LPAREN;
	v->a[805] = actions(111);
	v->a[806] = 1;
	v->a[807] = anon_sym_BQUOTE;
	v->a[808] = actions(113);
	v->a[809] = 1;
	v->a[810] = sym_variable_name;
	v->a[811] = state(34);
	v->a[812] = 1;
	v->a[813] = aux_sym__case_item_last_repeat2;
	v->a[814] = state(112);
	v->a[815] = 1;
	v->a[816] = aux_sym__statements_repeat1;
	v->a[817] = state(185);
	v->a[818] = 1;
	v->a[819] = sym_command_name;
	small_parse_table_41(v);
}

void	small_parse_table_41(t_small_parse_table_array *v)
{
	v->a[820] = state(255);
	v->a[821] = 1;
	v->a[822] = sym_variable_assignment;
	v->a[823] = state(491);
	v->a[824] = 1;
	v->a[825] = aux_sym_command_repeat1;
	v->a[826] = state(599);
	v->a[827] = 1;
	v->a[828] = sym_concatenation;
	v->a[829] = state(615);
	v->a[830] = 1;
	v->a[831] = sym_file_redirect;
	v->a[832] = state(941);
	v->a[833] = 1;
	v->a[834] = sym_pipeline;
	v->a[835] = state(1015);
	v->a[836] = 1;
	v->a[837] = aux_sym_redirected_statement_repeat2;
	v->a[838] = state(1598);
	v->a[839] = 1;
	small_parse_table_42(v);
}

void	small_parse_table_42(t_small_parse_table_array *v)
{
	v->a[840] = sym__statements;
	v->a[841] = state(1610);
	v->a[842] = 1;
	v->a[843] = sym__statement_not_pipeline;
	v->a[844] = actions(83);
	v->a[845] = 2;
	v->a[846] = anon_sym_while;
	v->a[847] = anon_sym_until;
	v->a[848] = actions(105);
	v->a[849] = 2;
	v->a[850] = sym_raw_string;
	v->a[851] = sym_number;
	v->a[852] = state(341);
	v->a[853] = 5;
	v->a[854] = sym_arithmetic_expansion;
	v->a[855] = sym_string;
	v->a[856] = sym_simple_expansion;
	v->a[857] = sym_expansion;
	v->a[858] = sym_command_substitution;
	v->a[859] = actions(97);
	small_parse_table_43(v);
}

void	small_parse_table_43(t_small_parse_table_array *v)
{
	v->a[860] = 7;
	v->a[861] = anon_sym_LT;
	v->a[862] = anon_sym_GT;
	v->a[863] = anon_sym_GT_GT;
	v->a[864] = anon_sym_LT_AMP;
	v->a[865] = anon_sym_GT_AMP;
	v->a[866] = anon_sym_GT_PIPE;
	v->a[867] = anon_sym_LT_GT;
	v->a[868] = state(819);
	v->a[869] = 12;
	v->a[870] = sym_redirected_statement;
	v->a[871] = sym_for_statement;
	v->a[872] = sym_while_statement;
	v->a[873] = sym_if_statement;
	v->a[874] = sym_case_statement;
	v->a[875] = sym_function_definition;
	v->a[876] = sym_compound_statement;
	v->a[877] = sym_subshell;
	v->a[878] = sym_list;
	v->a[879] = sym_negated_command;
	small_parse_table_44(v);
}

void	small_parse_table_44(t_small_parse_table_array *v)
{
	v->a[880] = sym_command;
	v->a[881] = sym__variable_assignments;
	v->a[882] = 32;
	v->a[883] = actions(3);
	v->a[884] = 1;
	v->a[885] = sym_comment;
	v->a[886] = actions(79);
	v->a[887] = 1;
	v->a[888] = sym_word;
	v->a[889] = actions(81);
	v->a[890] = 1;
	v->a[891] = anon_sym_for;
	v->a[892] = actions(85);
	v->a[893] = 1;
	v->a[894] = anon_sym_if;
	v->a[895] = actions(87);
	v->a[896] = 1;
	v->a[897] = anon_sym_case;
	v->a[898] = actions(89);
	v->a[899] = 1;
	small_parse_table_45(v);
}

/* EOF small_parse_table_8.c */
