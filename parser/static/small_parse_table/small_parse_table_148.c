/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_148.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_740(t_small_parse_table_array *v)
{
	v->a[14800] = sym_number;
	v->a[14801] = actions(51);
	v->a[14802] = 3;
	v->a[14803] = anon_sym_LT;
	v->a[14804] = anon_sym_GT;
	v->a[14805] = anon_sym_GT_GT;
	v->a[14806] = state(401);
	v->a[14807] = 5;
	v->a[14808] = sym_arithmetic_expansion;
	v->a[14809] = sym_string;
	v->a[14810] = sym_simple_expansion;
	v->a[14811] = sym_expansion;
	v->a[14812] = sym_command_substitution;
	v->a[14813] = state(953);
	v->a[14814] = 13;
	v->a[14815] = sym__statement_not_pipeline;
	v->a[14816] = sym_redirected_statement;
	v->a[14817] = sym_for_statement;
	v->a[14818] = sym_while_statement;
	v->a[14819] = sym_if_statement;
	small_parse_table_741(v);
}

void	small_parse_table_741(t_small_parse_table_array *v)
{
	v->a[14820] = sym_case_statement;
	v->a[14821] = sym_function_definition;
	v->a[14822] = sym_compound_statement;
	v->a[14823] = sym_subshell;
	v->a[14824] = sym_list;
	v->a[14825] = sym_negated_command;
	v->a[14826] = sym_command;
	v->a[14827] = sym__variable_assignments;
	v->a[14828] = 27;
	v->a[14829] = actions(3);
	v->a[14830] = 1;
	v->a[14831] = sym_comment;
	v->a[14832] = actions(9);
	v->a[14833] = 1;
	v->a[14834] = anon_sym_for;
	v->a[14835] = actions(13);
	v->a[14836] = 1;
	v->a[14837] = anon_sym_if;
	v->a[14838] = actions(15);
	v->a[14839] = 1;
	small_parse_table_742(v);
}

void	small_parse_table_742(t_small_parse_table_array *v)
{
	v->a[14840] = anon_sym_case;
	v->a[14841] = actions(17);
	v->a[14842] = 1;
	v->a[14843] = anon_sym_LPAREN;
	v->a[14844] = actions(19);
	v->a[14845] = 1;
	v->a[14846] = anon_sym_LBRACE;
	v->a[14847] = actions(53);
	v->a[14848] = 1;
	v->a[14849] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14850] = actions(55);
	v->a[14851] = 1;
	v->a[14852] = anon_sym_DOLLAR;
	v->a[14853] = actions(57);
	v->a[14854] = 1;
	v->a[14855] = anon_sym_DQUOTE;
	v->a[14856] = actions(61);
	v->a[14857] = 1;
	v->a[14858] = anon_sym_DOLLAR_LBRACE;
	v->a[14859] = actions(63);
	small_parse_table_743(v);
}

void	small_parse_table_743(t_small_parse_table_array *v)
{
	v->a[14860] = 1;
	v->a[14861] = anon_sym_DOLLAR_LPAREN;
	v->a[14862] = actions(65);
	v->a[14863] = 1;
	v->a[14864] = anon_sym_BQUOTE;
	v->a[14865] = actions(331);
	v->a[14866] = 1;
	v->a[14867] = sym_word;
	v->a[14868] = actions(333);
	v->a[14869] = 1;
	v->a[14870] = anon_sym_BANG;
	v->a[14871] = actions(339);
	v->a[14872] = 1;
	v->a[14873] = sym_variable_name;
	v->a[14874] = state(252);
	v->a[14875] = 1;
	v->a[14876] = sym_command_name;
	v->a[14877] = state(387);
	v->a[14878] = 1;
	v->a[14879] = aux_sym_command_repeat1;
	small_parse_table_744(v);
}

void	small_parse_table_744(t_small_parse_table_array *v)
{
	v->a[14880] = state(427);
	v->a[14881] = 1;
	v->a[14882] = sym_variable_assignment;
	v->a[14883] = state(551);
	v->a[14884] = 1;
	v->a[14885] = sym_file_redirect;
	v->a[14886] = state(555);
	v->a[14887] = 1;
	v->a[14888] = sym_concatenation;
	v->a[14889] = state(1309);
	v->a[14890] = 1;
	v->a[14891] = aux_sym_redirected_statement_repeat2;
	v->a[14892] = state(1351);
	v->a[14893] = 1;
	v->a[14894] = sym_pipeline;
	v->a[14895] = actions(11);
	v->a[14896] = 2;
	v->a[14897] = anon_sym_while;
	v->a[14898] = anon_sym_until;
	v->a[14899] = actions(337);
	small_parse_table_745(v);
}

/* EOF small_parse_table_148.c */
