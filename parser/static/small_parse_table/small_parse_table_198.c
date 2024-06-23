/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_198.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_990(t_small_parse_table_array *v)
{
	v->a[19800] = anon_sym_AMP_GT_GT;
	v->a[19801] = anon_sym_LT_AMP;
	v->a[19802] = anon_sym_GT_AMP;
	v->a[19803] = anon_sym_GT_PIPE;
	v->a[19804] = 25;
	v->a[19805] = actions(3);
	v->a[19806] = 1;
	v->a[19807] = sym_comment;
	v->a[19808] = actions(9);
	v->a[19809] = 1;
	v->a[19810] = anon_sym_for;
	v->a[19811] = actions(13);
	v->a[19812] = 1;
	v->a[19813] = anon_sym_if;
	v->a[19814] = actions(17);
	v->a[19815] = 1;
	v->a[19816] = anon_sym_LPAREN;
	v->a[19817] = actions(19);
	v->a[19818] = 1;
	v->a[19819] = anon_sym_LBRACE;
	small_parse_table_991(v);
}

void	small_parse_table_991(t_small_parse_table_array *v)
{
	v->a[19820] = actions(59);
	v->a[19821] = 1;
	v->a[19822] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19823] = actions(61);
	v->a[19824] = 1;
	v->a[19825] = anon_sym_DOLLAR;
	v->a[19826] = actions(63);
	v->a[19827] = 1;
	v->a[19828] = anon_sym_DQUOTE;
	v->a[19829] = actions(67);
	v->a[19830] = 1;
	v->a[19831] = anon_sym_DOLLAR_LBRACE;
	v->a[19832] = actions(69);
	v->a[19833] = 1;
	v->a[19834] = anon_sym_DOLLAR_LPAREN;
	v->a[19835] = actions(71);
	v->a[19836] = 1;
	v->a[19837] = anon_sym_BQUOTE;
	v->a[19838] = actions(373);
	v->a[19839] = 1;
	small_parse_table_992(v);
}

void	small_parse_table_992(t_small_parse_table_array *v)
{
	v->a[19840] = sym_file_descriptor;
	v->a[19841] = actions(377);
	v->a[19842] = 1;
	v->a[19843] = sym_variable_name;
	v->a[19844] = state(242);
	v->a[19845] = 1;
	v->a[19846] = sym_command_name;
	v->a[19847] = state(647);
	v->a[19848] = 1;
	v->a[19849] = sym_concatenation;
	v->a[19850] = state(738);
	v->a[19851] = 1;
	v->a[19852] = sym_file_redirect;
	v->a[19853] = state(768);
	v->a[19854] = 1;
	v->a[19855] = aux_sym_command_repeat1;
	v->a[19856] = state(1430);
	v->a[19857] = 1;
	v->a[19858] = sym_variable_assignment;
	v->a[19859] = state(1582);
	small_parse_table_993(v);
}

void	small_parse_table_993(t_small_parse_table_array *v)
{
	v->a[19860] = 1;
	v->a[19861] = aux_sym_redirected_statement_repeat2;
	v->a[19862] = actions(11);
	v->a[19863] = 2;
	v->a[19864] = anon_sym_while;
	v->a[19865] = anon_sym_until;
	v->a[19866] = actions(369);
	v->a[19867] = 2;
	v->a[19868] = anon_sym_LT_AMP_DASH;
	v->a[19869] = anon_sym_GT_AMP_DASH;
	v->a[19870] = actions(371);
	v->a[19871] = 3;
	v->a[19872] = sym_raw_string;
	v->a[19873] = sym_number;
	v->a[19874] = sym_word;
	v->a[19875] = state(790);
	v->a[19876] = 5;
	v->a[19877] = sym_arithmetic_expansion;
	v->a[19878] = sym_string;
	v->a[19879] = sym_simple_expansion;
	small_parse_table_994(v);
}

void	small_parse_table_994(t_small_parse_table_array *v)
{
	v->a[19880] = sym_expansion;
	v->a[19881] = sym_command_substitution;
	v->a[19882] = state(1379);
	v->a[19883] = 7;
	v->a[19884] = sym_for_statement;
	v->a[19885] = sym_while_statement;
	v->a[19886] = sym_if_statement;
	v->a[19887] = sym_compound_statement;
	v->a[19888] = sym_subshell;
	v->a[19889] = sym_command;
	v->a[19890] = sym__variable_assignments;
	v->a[19891] = actions(367);
	v->a[19892] = 8;
	v->a[19893] = anon_sym_LT;
	v->a[19894] = anon_sym_GT;
	v->a[19895] = anon_sym_GT_GT;
	v->a[19896] = anon_sym_AMP_GT;
	v->a[19897] = anon_sym_AMP_GT_GT;
	v->a[19898] = anon_sym_LT_AMP;
	v->a[19899] = anon_sym_GT_AMP;
	small_parse_table_995(v);
}

/* EOF small_parse_table_198.c */
