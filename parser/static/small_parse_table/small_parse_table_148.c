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
	v->a[14800] = anon_sym_case;
	v->a[14801] = actions(17);
	v->a[14802] = 1;
	v->a[14803] = anon_sym_LPAREN;
	v->a[14804] = actions(19);
	v->a[14805] = 1;
	v->a[14806] = anon_sym_LBRACE;
	v->a[14807] = actions(43);
	v->a[14808] = 1;
	v->a[14809] = sym_word;
	v->a[14810] = actions(51);
	v->a[14811] = 1;
	v->a[14812] = anon_sym_BANG;
	v->a[14813] = actions(55);
	v->a[14814] = 1;
	v->a[14815] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14816] = actions(57);
	v->a[14817] = 1;
	v->a[14818] = anon_sym_DOLLAR;
	v->a[14819] = actions(59);
	small_parse_table_741(v);
}

void	small_parse_table_741(t_small_parse_table_array *v)
{
	v->a[14820] = 1;
	v->a[14821] = anon_sym_DQUOTE;
	v->a[14822] = actions(63);
	v->a[14823] = 1;
	v->a[14824] = anon_sym_DOLLAR_LBRACE;
	v->a[14825] = actions(65);
	v->a[14826] = 1;
	v->a[14827] = anon_sym_DOLLAR_LPAREN;
	v->a[14828] = actions(67);
	v->a[14829] = 1;
	v->a[14830] = anon_sym_BQUOTE;
	v->a[14831] = actions(69);
	v->a[14832] = 1;
	v->a[14833] = sym_file_descriptor;
	v->a[14834] = actions(71);
	v->a[14835] = 1;
	v->a[14836] = sym_variable_name;
	v->a[14837] = state(71);
	v->a[14838] = 1;
	v->a[14839] = aux_sym__terminated_statement;
	small_parse_table_742(v);
}

void	small_parse_table_742(t_small_parse_table_array *v)
{
	v->a[14840] = state(182);
	v->a[14841] = 1;
	v->a[14842] = sym_command_name;
	v->a[14843] = state(305);
	v->a[14844] = 1;
	v->a[14845] = sym_variable_assignment;
	v->a[14846] = state(584);
	v->a[14847] = 1;
	v->a[14848] = sym_concatenation;
	v->a[14849] = state(620);
	v->a[14850] = 1;
	v->a[14851] = sym_file_redirect;
	v->a[14852] = state(623);
	v->a[14853] = 1;
	v->a[14854] = aux_sym_command_repeat1;
	v->a[14855] = state(1118);
	v->a[14856] = 1;
	v->a[14857] = sym_pipeline;
	v->a[14858] = state(1201);
	v->a[14859] = 1;
	small_parse_table_743(v);
}

void	small_parse_table_743(t_small_parse_table_array *v)
{
	v->a[14860] = aux_sym_redirected_statement_repeat2;
	v->a[14861] = state(1911);
	v->a[14862] = 1;
	v->a[14863] = sym__statement_not_pipeline;
	v->a[14864] = actions(11);
	v->a[14865] = 2;
	v->a[14866] = anon_sym_while;
	v->a[14867] = anon_sym_until;
	v->a[14868] = actions(61);
	v->a[14869] = 2;
	v->a[14870] = sym_raw_string;
	v->a[14871] = sym_number;
	v->a[14872] = state(433);
	v->a[14873] = 5;
	v->a[14874] = sym_arithmetic_expansion;
	v->a[14875] = sym_string;
	v->a[14876] = sym_simple_expansion;
	v->a[14877] = sym_expansion;
	v->a[14878] = sym_command_substitution;
	v->a[14879] = actions(53);
	small_parse_table_744(v);
}

void	small_parse_table_744(t_small_parse_table_array *v)
{
	v->a[14880] = 7;
	v->a[14881] = anon_sym_LT;
	v->a[14882] = anon_sym_GT;
	v->a[14883] = anon_sym_GT_GT;
	v->a[14884] = anon_sym_LT_AMP;
	v->a[14885] = anon_sym_GT_AMP;
	v->a[14886] = anon_sym_GT_PIPE;
	v->a[14887] = anon_sym_LT_GT;
	v->a[14888] = state(1077);
	v->a[14889] = 12;
	v->a[14890] = sym_redirected_statement;
	v->a[14891] = sym_for_statement;
	v->a[14892] = sym_while_statement;
	v->a[14893] = sym_if_statement;
	v->a[14894] = sym_case_statement;
	v->a[14895] = sym_function_definition;
	v->a[14896] = sym_compound_statement;
	v->a[14897] = sym_subshell;
	v->a[14898] = sym_list;
	v->a[14899] = sym_negated_command;
	small_parse_table_745(v);
}

/* EOF small_parse_table_148.c */
