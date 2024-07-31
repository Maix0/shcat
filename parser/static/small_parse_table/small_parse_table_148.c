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
	v->a[14800] = sym_command_substitution;
	v->a[14801] = actions(51);
	v->a[14802] = 7;
	v->a[14803] = anon_sym_LT;
	v->a[14804] = anon_sym_GT;
	v->a[14805] = anon_sym_GT_GT;
	v->a[14806] = anon_sym_LT_AMP;
	v->a[14807] = anon_sym_GT_AMP;
	v->a[14808] = anon_sym_GT_PIPE;
	v->a[14809] = anon_sym_LT_GT;
	v->a[14810] = state(981);
	v->a[14811] = 12;
	v->a[14812] = sym_redirected_statement;
	v->a[14813] = sym_for_statement;
	v->a[14814] = sym_while_statement;
	v->a[14815] = sym_if_statement;
	v->a[14816] = sym_case_statement;
	v->a[14817] = sym_function_definition;
	v->a[14818] = sym_compound_statement;
	v->a[14819] = sym_subshell;
	small_parse_table_741(v);
}

void	small_parse_table_741(t_small_parse_table_array *v)
{
	v->a[14820] = sym_list;
	v->a[14821] = sym_negated_command;
	v->a[14822] = sym_command;
	v->a[14823] = sym__variable_assignments;
	v->a[14824] = 28;
	v->a[14825] = actions(3);
	v->a[14826] = 1;
	v->a[14827] = sym_comment;
	v->a[14828] = actions(307);
	v->a[14829] = 1;
	v->a[14830] = sym_word;
	v->a[14831] = actions(309);
	v->a[14832] = 1;
	v->a[14833] = anon_sym_for;
	v->a[14834] = actions(313);
	v->a[14835] = 1;
	v->a[14836] = anon_sym_if;
	v->a[14837] = actions(315);
	v->a[14838] = 1;
	v->a[14839] = anon_sym_case;
	small_parse_table_742(v);
}

void	small_parse_table_742(t_small_parse_table_array *v)
{
	v->a[14840] = actions(317);
	v->a[14841] = 1;
	v->a[14842] = anon_sym_LPAREN;
	v->a[14843] = actions(319);
	v->a[14844] = 1;
	v->a[14845] = anon_sym_LBRACE;
	v->a[14846] = actions(321);
	v->a[14847] = 1;
	v->a[14848] = anon_sym_BANG;
	v->a[14849] = actions(325);
	v->a[14850] = 1;
	v->a[14851] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14852] = actions(327);
	v->a[14853] = 1;
	v->a[14854] = anon_sym_DOLLAR;
	v->a[14855] = actions(329);
	v->a[14856] = 1;
	v->a[14857] = anon_sym_DQUOTE;
	v->a[14858] = actions(333);
	v->a[14859] = 1;
	small_parse_table_743(v);
}

void	small_parse_table_743(t_small_parse_table_array *v)
{
	v->a[14860] = anon_sym_DOLLAR_LBRACE;
	v->a[14861] = actions(335);
	v->a[14862] = 1;
	v->a[14863] = anon_sym_DOLLAR_LPAREN;
	v->a[14864] = actions(337);
	v->a[14865] = 1;
	v->a[14866] = anon_sym_BQUOTE;
	v->a[14867] = actions(339);
	v->a[14868] = 1;
	v->a[14869] = sym_variable_name;
	v->a[14870] = state(342);
	v->a[14871] = 1;
	v->a[14872] = sym_command_name;
	v->a[14873] = state(473);
	v->a[14874] = 1;
	v->a[14875] = sym_variable_assignment;
	v->a[14876] = state(489);
	v->a[14877] = 1;
	v->a[14878] = aux_sym_command_repeat1;
	v->a[14879] = state(717);
	small_parse_table_744(v);
}

void	small_parse_table_744(t_small_parse_table_array *v)
{
	v->a[14880] = 1;
	v->a[14881] = sym_file_redirect;
	v->a[14882] = state(732);
	v->a[14883] = 1;
	v->a[14884] = sym_concatenation;
	v->a[14885] = state(1207);
	v->a[14886] = 1;
	v->a[14887] = sym_pipeline;
	v->a[14888] = state(1236);
	v->a[14889] = 1;
	v->a[14890] = aux_sym_redirected_statement_repeat2;
	v->a[14891] = state(1611);
	v->a[14892] = 1;
	v->a[14893] = sym__statement_not_pipeline;
	v->a[14894] = actions(311);
	v->a[14895] = 2;
	v->a[14896] = anon_sym_while;
	v->a[14897] = anon_sym_until;
	v->a[14898] = actions(331);
	v->a[14899] = 2;
	small_parse_table_745(v);
}

/* EOF small_parse_table_148.c */
