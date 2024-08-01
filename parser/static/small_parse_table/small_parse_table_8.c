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
	v->a[801] = aux_sym_command_repeat1;
	v->a[802] = state(541);
	v->a[803] = 1;
	v->a[804] = sym_file_redirect;
	v->a[805] = state(546);
	v->a[806] = 1;
	v->a[807] = sym_concatenation;
	v->a[808] = state(913);
	v->a[809] = 1;
	v->a[810] = sym_pipeline;
	v->a[811] = state(990);
	v->a[812] = 1;
	v->a[813] = aux_sym_redirected_statement_repeat2;
	v->a[814] = state(1564);
	v->a[815] = 1;
	v->a[816] = sym__statement_not_pipeline;
	v->a[817] = state(1576);
	v->a[818] = 1;
	v->a[819] = sym__statements;
	small_parse_table_41(v);
}

void	small_parse_table_41(t_small_parse_table_array *v)
{
	v->a[820] = actions(83);
	v->a[821] = 2;
	v->a[822] = anon_sym_while;
	v->a[823] = anon_sym_until;
	v->a[824] = actions(105);
	v->a[825] = 2;
	v->a[826] = sym_raw_string;
	v->a[827] = sym_number;
	v->a[828] = actions(97);
	v->a[829] = 3;
	v->a[830] = anon_sym_LT;
	v->a[831] = anon_sym_GT;
	v->a[832] = anon_sym_GT_GT;
	v->a[833] = state(276);
	v->a[834] = 5;
	v->a[835] = sym_arithmetic_expansion;
	v->a[836] = sym_string;
	v->a[837] = sym_simple_expansion;
	v->a[838] = sym_expansion;
	v->a[839] = sym_command_substitution;
	small_parse_table_42(v);
}

void	small_parse_table_42(t_small_parse_table_array *v)
{
	v->a[840] = state(867);
	v->a[841] = 12;
	v->a[842] = sym_redirected_statement;
	v->a[843] = sym_for_statement;
	v->a[844] = sym_while_statement;
	v->a[845] = sym_if_statement;
	v->a[846] = sym_case_statement;
	v->a[847] = sym_function_definition;
	v->a[848] = sym_compound_statement;
	v->a[849] = sym_subshell;
	v->a[850] = sym_list;
	v->a[851] = sym_negated_command;
	v->a[852] = sym_command;
	v->a[853] = sym__variable_assignments;
	v->a[854] = 32;
	v->a[855] = actions(3);
	v->a[856] = 1;
	v->a[857] = sym_comment;
	v->a[858] = actions(9);
	v->a[859] = 1;
	small_parse_table_43(v);
}

void	small_parse_table_43(t_small_parse_table_array *v)
{
	v->a[860] = anon_sym_for;
	v->a[861] = actions(13);
	v->a[862] = 1;
	v->a[863] = anon_sym_if;
	v->a[864] = actions(15);
	v->a[865] = 1;
	v->a[866] = anon_sym_case;
	v->a[867] = actions(17);
	v->a[868] = 1;
	v->a[869] = anon_sym_LPAREN;
	v->a[870] = actions(19);
	v->a[871] = 1;
	v->a[872] = anon_sym_LBRACE;
	v->a[873] = actions(41);
	v->a[874] = 1;
	v->a[875] = sym_word;
	v->a[876] = actions(49);
	v->a[877] = 1;
	v->a[878] = anon_sym_BANG;
	v->a[879] = actions(53);
	small_parse_table_44(v);
}

void	small_parse_table_44(t_small_parse_table_array *v)
{
	v->a[880] = 1;
	v->a[881] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[882] = actions(55);
	v->a[883] = 1;
	v->a[884] = anon_sym_DOLLAR;
	v->a[885] = actions(57);
	v->a[886] = 1;
	v->a[887] = anon_sym_DQUOTE;
	v->a[888] = actions(61);
	v->a[889] = 1;
	v->a[890] = anon_sym_DOLLAR_LBRACE;
	v->a[891] = actions(63);
	v->a[892] = 1;
	v->a[893] = anon_sym_DOLLAR_LPAREN;
	v->a[894] = actions(65);
	v->a[895] = 1;
	v->a[896] = anon_sym_BQUOTE;
	v->a[897] = actions(67);
	v->a[898] = 1;
	v->a[899] = sym_variable_name;
	small_parse_table_45(v);
}

/* EOF small_parse_table_8.c */
