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
	v->a[14800] = actions(63);
	v->a[14801] = 1;
	v->a[14802] = anon_sym_DOLLAR_LBRACE;
	v->a[14803] = actions(65);
	v->a[14804] = 1;
	v->a[14805] = anon_sym_DOLLAR_LPAREN;
	v->a[14806] = actions(67);
	v->a[14807] = 1;
	v->a[14808] = anon_sym_BQUOTE;
	v->a[14809] = actions(69);
	v->a[14810] = 1;
	v->a[14811] = sym_file_descriptor;
	v->a[14812] = actions(71);
	v->a[14813] = 1;
	v->a[14814] = sym_variable_name;
	v->a[14815] = state(35);
	v->a[14816] = 1;
	v->a[14817] = aux_sym__terminated_statement;
	v->a[14818] = state(183);
	v->a[14819] = 1;
	small_parse_table_741(v);
}

void	small_parse_table_741(t_small_parse_table_array *v)
{
	v->a[14820] = sym_command_name;
	v->a[14821] = state(325);
	v->a[14822] = 1;
	v->a[14823] = sym_variable_assignment;
	v->a[14824] = state(603);
	v->a[14825] = 1;
	v->a[14826] = sym_concatenation;
	v->a[14827] = state(639);
	v->a[14828] = 1;
	v->a[14829] = aux_sym_command_repeat1;
	v->a[14830] = state(644);
	v->a[14831] = 1;
	v->a[14832] = sym_file_redirect;
	v->a[14833] = state(1145);
	v->a[14834] = 1;
	v->a[14835] = sym_pipeline;
	v->a[14836] = state(1196);
	v->a[14837] = 1;
	v->a[14838] = aux_sym_redirected_statement_repeat2;
	v->a[14839] = state(1910);
	small_parse_table_742(v);
}

void	small_parse_table_742(t_small_parse_table_array *v)
{
	v->a[14840] = 1;
	v->a[14841] = sym__statement_not_pipeline;
	v->a[14842] = actions(11);
	v->a[14843] = 2;
	v->a[14844] = anon_sym_while;
	v->a[14845] = anon_sym_until;
	v->a[14846] = actions(61);
	v->a[14847] = 2;
	v->a[14848] = sym_raw_string;
	v->a[14849] = sym_number;
	v->a[14850] = state(436);
	v->a[14851] = 5;
	v->a[14852] = sym_arithmetic_expansion;
	v->a[14853] = sym_string;
	v->a[14854] = sym_simple_expansion;
	v->a[14855] = sym_expansion;
	v->a[14856] = sym_command_substitution;
	v->a[14857] = actions(53);
	v->a[14858] = 7;
	v->a[14859] = anon_sym_LT;
	small_parse_table_743(v);
}

void	small_parse_table_743(t_small_parse_table_array *v)
{
	v->a[14860] = anon_sym_GT;
	v->a[14861] = anon_sym_GT_GT;
	v->a[14862] = anon_sym_LT_AMP;
	v->a[14863] = anon_sym_GT_AMP;
	v->a[14864] = anon_sym_GT_PIPE;
	v->a[14865] = anon_sym_LT_GT;
	v->a[14866] = state(1032);
	v->a[14867] = 12;
	v->a[14868] = sym_redirected_statement;
	v->a[14869] = sym_for_statement;
	v->a[14870] = sym_while_statement;
	v->a[14871] = sym_if_statement;
	v->a[14872] = sym_case_statement;
	v->a[14873] = sym_function_definition;
	v->a[14874] = sym_compound_statement;
	v->a[14875] = sym_subshell;
	v->a[14876] = sym_list;
	v->a[14877] = sym_negated_command;
	v->a[14878] = sym_command;
	v->a[14879] = sym__variable_assignments;
	small_parse_table_744(v);
}

void	small_parse_table_744(t_small_parse_table_array *v)
{
	v->a[14880] = 41;
	v->a[14881] = actions(3);
	v->a[14882] = 1;
	v->a[14883] = sym_comment;
	v->a[14884] = actions(87);
	v->a[14885] = 1;
	v->a[14886] = sym_word;
	v->a[14887] = actions(89);
	v->a[14888] = 1;
	v->a[14889] = anon_sym_for;
	v->a[14890] = actions(93);
	v->a[14891] = 1;
	v->a[14892] = anon_sym_if;
	v->a[14893] = actions(95);
	v->a[14894] = 1;
	v->a[14895] = anon_sym_case;
	v->a[14896] = actions(97);
	v->a[14897] = 1;
	v->a[14898] = anon_sym_LPAREN;
	v->a[14899] = actions(101);
	small_parse_table_745(v);
}

/* EOF small_parse_table_148.c */
