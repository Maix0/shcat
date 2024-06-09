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
	v->a[801] = sym_else_clause;
	v->a[802] = actions(11);
	v->a[803] = 2;
	v->a[804] = anon_sym_while;
	v->a[805] = anon_sym_until;
	v->a[806] = actions(61);
	v->a[807] = 2;
	v->a[808] = anon_sym_LT_AMP_DASH;
	v->a[809] = anon_sym_GT_AMP_DASH;
	v->a[810] = state(1897);
	v->a[811] = 2;
	v->a[812] = sym_elif_clause;
	v->a[813] = aux_sym_if_statement_repeat1;
	v->a[814] = state(397);
	v->a[815] = 6;
	v->a[816] = sym_arithmetic_expansion;
	v->a[817] = sym_string;
	v->a[818] = sym_number;
	v->a[819] = sym_simple_expansion;
	small_parse_table_41(v);
}

void	small_parse_table_41(t_small_parse_table_array *v)
{
	v->a[820] = sym_expansion;
	v->a[821] = sym_command_substitution;
	v->a[822] = actions(59);
	v->a[823] = 8;
	v->a[824] = anon_sym_LT;
	v->a[825] = anon_sym_GT;
	v->a[826] = anon_sym_GT_GT;
	v->a[827] = anon_sym_AMP_GT;
	v->a[828] = anon_sym_AMP_GT_GT;
	v->a[829] = anon_sym_LT_AMP;
	v->a[830] = anon_sym_GT_AMP;
	v->a[831] = anon_sym_GT_PIPE;
	v->a[832] = state(1183);
	v->a[833] = 12;
	v->a[834] = sym_redirected_statement;
	v->a[835] = sym_for_statement;
	v->a[836] = sym_while_statement;
	v->a[837] = sym_if_statement;
	v->a[838] = sym_case_statement;
	v->a[839] = sym_function_definition;
	small_parse_table_42(v);
}

void	small_parse_table_42(t_small_parse_table_array *v)
{
	v->a[840] = sym_compound_statement;
	v->a[841] = sym_subshell;
	v->a[842] = sym_list;
	v->a[843] = sym_negated_command;
	v->a[844] = sym_command;
	v->a[845] = sym_variable_assignments;
	v->a[846] = 36;
	v->a[847] = actions(3);
	v->a[848] = 1;
	v->a[849] = sym_comment;
	v->a[850] = actions(95);
	v->a[851] = 1;
	v->a[852] = sym_word;
	v->a[853] = actions(97);
	v->a[854] = 1;
	v->a[855] = anon_sym_for;
	v->a[856] = actions(101);
	v->a[857] = 1;
	v->a[858] = anon_sym_if;
	v->a[859] = actions(103);
	small_parse_table_43(v);
}

void	small_parse_table_43(t_small_parse_table_array *v)
{
	v->a[860] = 1;
	v->a[861] = anon_sym_case;
	v->a[862] = actions(105);
	v->a[863] = 1;
	v->a[864] = anon_sym_LPAREN;
	v->a[865] = actions(107);
	v->a[866] = 1;
	v->a[867] = anon_sym_LF;
	v->a[868] = actions(109);
	v->a[869] = 1;
	v->a[870] = anon_sym_LBRACE;
	v->a[871] = actions(111);
	v->a[872] = 1;
	v->a[873] = anon_sym_BANG;
	v->a[874] = actions(117);
	v->a[875] = 1;
	v->a[876] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[877] = actions(119);
	v->a[878] = 1;
	v->a[879] = anon_sym_DOLLAR;
	small_parse_table_44(v);
}

void	small_parse_table_44(t_small_parse_table_array *v)
{
	v->a[880] = actions(121);
	v->a[881] = 1;
	v->a[882] = anon_sym_DQUOTE;
	v->a[883] = actions(123);
	v->a[884] = 1;
	v->a[885] = sym_raw_string;
	v->a[886] = actions(125);
	v->a[887] = 1;
	v->a[888] = aux_sym_number_token1;
	v->a[889] = actions(127);
	v->a[890] = 1;
	v->a[891] = aux_sym_number_token2;
	v->a[892] = actions(129);
	v->a[893] = 1;
	v->a[894] = anon_sym_DOLLAR_LBRACE;
	v->a[895] = actions(131);
	v->a[896] = 1;
	v->a[897] = anon_sym_DOLLAR_LPAREN;
	v->a[898] = actions(133);
	v->a[899] = 1;
	small_parse_table_45(v);
}

/* EOF small_parse_table_8.c */
