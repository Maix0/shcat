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
	v->a[14800] = sym_arithmetic_expansion;
	v->a[14801] = sym_string;
	v->a[14802] = sym_number;
	v->a[14803] = sym_simple_expansion;
	v->a[14804] = sym_expansion;
	v->a[14805] = sym_command_substitution;
	v->a[14806] = actions(59);
	v->a[14807] = 8;
	v->a[14808] = anon_sym_LT;
	v->a[14809] = anon_sym_GT;
	v->a[14810] = anon_sym_GT_GT;
	v->a[14811] = anon_sym_AMP_GT;
	v->a[14812] = anon_sym_AMP_GT_GT;
	v->a[14813] = anon_sym_LT_AMP;
	v->a[14814] = anon_sym_GT_AMP;
	v->a[14815] = anon_sym_GT_PIPE;
	v->a[14816] = state(1071);
	v->a[14817] = 12;
	v->a[14818] = sym_redirected_statement;
	v->a[14819] = sym_for_statement;
	small_parse_table_741(v);
}

void	small_parse_table_741(t_small_parse_table_array *v)
{
	v->a[14820] = sym_while_statement;
	v->a[14821] = sym_if_statement;
	v->a[14822] = sym_case_statement;
	v->a[14823] = sym_function_definition;
	v->a[14824] = sym_compound_statement;
	v->a[14825] = sym_subshell;
	v->a[14826] = sym_list;
	v->a[14827] = sym_negated_command;
	v->a[14828] = sym_command;
	v->a[14829] = sym_variable_assignments;
	v->a[14830] = 34;
	v->a[14831] = actions(3);
	v->a[14832] = 1;
	v->a[14833] = sym_comment;
	v->a[14834] = actions(9);
	v->a[14835] = 1;
	v->a[14836] = anon_sym_for;
	v->a[14837] = actions(13);
	v->a[14838] = 1;
	v->a[14839] = anon_sym_if;
	small_parse_table_742(v);
}

void	small_parse_table_742(t_small_parse_table_array *v)
{
	v->a[14840] = actions(15);
	v->a[14841] = 1;
	v->a[14842] = anon_sym_case;
	v->a[14843] = actions(17);
	v->a[14844] = 1;
	v->a[14845] = anon_sym_LPAREN;
	v->a[14846] = actions(19);
	v->a[14847] = 1;
	v->a[14848] = anon_sym_LBRACE;
	v->a[14849] = actions(63);
	v->a[14850] = 1;
	v->a[14851] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14852] = actions(65);
	v->a[14853] = 1;
	v->a[14854] = anon_sym_DOLLAR;
	v->a[14855] = actions(67);
	v->a[14856] = 1;
	v->a[14857] = anon_sym_DQUOTE;
	v->a[14858] = actions(69);
	v->a[14859] = 1;
	small_parse_table_743(v);
}

void	small_parse_table_743(t_small_parse_table_array *v)
{
	v->a[14860] = sym_raw_string;
	v->a[14861] = actions(71);
	v->a[14862] = 1;
	v->a[14863] = aux_sym_number_token1;
	v->a[14864] = actions(73);
	v->a[14865] = 1;
	v->a[14866] = aux_sym_number_token2;
	v->a[14867] = actions(75);
	v->a[14868] = 1;
	v->a[14869] = anon_sym_DOLLAR_LBRACE;
	v->a[14870] = actions(77);
	v->a[14871] = 1;
	v->a[14872] = anon_sym_DOLLAR_LPAREN;
	v->a[14873] = actions(79);
	v->a[14874] = 1;
	v->a[14875] = anon_sym_BQUOTE;
	v->a[14876] = actions(81);
	v->a[14877] = 1;
	v->a[14878] = sym_file_descriptor;
	v->a[14879] = actions(83);
	small_parse_table_744(v);
}

void	small_parse_table_744(t_small_parse_table_array *v)
{
	v->a[14880] = 1;
	v->a[14881] = sym_variable_name;
	v->a[14882] = actions(238);
	v->a[14883] = 1;
	v->a[14884] = sym_word;
	v->a[14885] = actions(240);
	v->a[14886] = 1;
	v->a[14887] = anon_sym_BANG;
	v->a[14888] = state(132);
	v->a[14889] = 1;
	v->a[14890] = aux_sym__statements_repeat1;
	v->a[14891] = state(185);
	v->a[14892] = 1;
	v->a[14893] = sym_command_name;
	v->a[14894] = state(297);
	v->a[14895] = 1;
	v->a[14896] = sym_variable_assignment;
	v->a[14897] = state(582);
	v->a[14898] = 1;
	v->a[14899] = sym_concatenation;
	small_parse_table_745(v);
}

/* EOF small_parse_table_148.c */
