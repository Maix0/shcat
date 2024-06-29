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
	v->a[14800] = 1;
	v->a[14801] = sym_word;
	v->a[14802] = actions(236);
	v->a[14803] = 1;
	v->a[14804] = anon_sym_BANG;
	v->a[14805] = state(129);
	v->a[14806] = 1;
	v->a[14807] = aux_sym__statements_repeat1;
	v->a[14808] = state(189);
	v->a[14809] = 1;
	v->a[14810] = sym_command_name;
	v->a[14811] = state(244);
	v->a[14812] = 1;
	v->a[14813] = sym_variable_assignment;
	v->a[14814] = state(624);
	v->a[14815] = 1;
	v->a[14816] = sym_concatenation;
	v->a[14817] = state(672);
	v->a[14818] = 1;
	v->a[14819] = aux_sym_command_repeat1;
	small_parse_table_741(v);
}

void	small_parse_table_741(t_small_parse_table_array *v)
{
	v->a[14820] = state(787);
	v->a[14821] = 1;
	v->a[14822] = sym_file_redirect;
	v->a[14823] = state(1176);
	v->a[14824] = 1;
	v->a[14825] = sym_pipeline;
	v->a[14826] = state(1207);
	v->a[14827] = 1;
	v->a[14828] = aux_sym_redirected_statement_repeat2;
	v->a[14829] = state(2116);
	v->a[14830] = 1;
	v->a[14831] = sym__statement_not_pipeline;
	v->a[14832] = state(2268);
	v->a[14833] = 1;
	v->a[14834] = sym__statements;
	v->a[14835] = actions(11);
	v->a[14836] = 2;
	v->a[14837] = anon_sym_while;
	v->a[14838] = anon_sym_until;
	v->a[14839] = actions(57);
	small_parse_table_742(v);
}

void	small_parse_table_742(t_small_parse_table_array *v)
{
	v->a[14840] = 2;
	v->a[14841] = anon_sym_LT_AMP_DASH;
	v->a[14842] = anon_sym_GT_AMP_DASH;
	v->a[14843] = actions(65);
	v->a[14844] = 2;
	v->a[14845] = sym_raw_string;
	v->a[14846] = sym_number;
	v->a[14847] = state(420);
	v->a[14848] = 5;
	v->a[14849] = sym_arithmetic_expansion;
	v->a[14850] = sym_string;
	v->a[14851] = sym_simple_expansion;
	v->a[14852] = sym_expansion;
	v->a[14853] = sym_command_substitution;
	v->a[14854] = actions(55);
	v->a[14855] = 8;
	v->a[14856] = anon_sym_LT;
	v->a[14857] = anon_sym_GT;
	v->a[14858] = anon_sym_GT_GT;
	v->a[14859] = anon_sym_AMP_GT;
	small_parse_table_743(v);
}

void	small_parse_table_743(t_small_parse_table_array *v)
{
	v->a[14860] = anon_sym_AMP_GT_GT;
	v->a[14861] = anon_sym_LT_AMP;
	v->a[14862] = anon_sym_GT_AMP;
	v->a[14863] = anon_sym_GT_PIPE;
	v->a[14864] = state(1057);
	v->a[14865] = 12;
	v->a[14866] = sym_redirected_statement;
	v->a[14867] = sym_for_statement;
	v->a[14868] = sym_while_statement;
	v->a[14869] = sym_if_statement;
	v->a[14870] = sym_case_statement;
	v->a[14871] = sym_function_definition;
	v->a[14872] = sym_compound_statement;
	v->a[14873] = sym_subshell;
	v->a[14874] = sym_list;
	v->a[14875] = sym_negated_command;
	v->a[14876] = sym_command;
	v->a[14877] = sym__variable_assignments;
	v->a[14878] = 32;
	v->a[14879] = actions(3);
	small_parse_table_744(v);
}

void	small_parse_table_744(t_small_parse_table_array *v)
{
	v->a[14880] = 1;
	v->a[14881] = sym_comment;
	v->a[14882] = actions(9);
	v->a[14883] = 1;
	v->a[14884] = anon_sym_for;
	v->a[14885] = actions(13);
	v->a[14886] = 1;
	v->a[14887] = anon_sym_if;
	v->a[14888] = actions(15);
	v->a[14889] = 1;
	v->a[14890] = anon_sym_case;
	v->a[14891] = actions(17);
	v->a[14892] = 1;
	v->a[14893] = anon_sym_LPAREN;
	v->a[14894] = actions(19);
	v->a[14895] = 1;
	v->a[14896] = anon_sym_LBRACE;
	v->a[14897] = actions(59);
	v->a[14898] = 1;
	v->a[14899] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_745(v);
}

/* EOF small_parse_table_148.c */
