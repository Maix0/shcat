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
	v->a[19800] = sym_compound_statement;
	v->a[19801] = sym_subshell;
	v->a[19802] = sym_list;
	v->a[19803] = sym_negated_command;
	v->a[19804] = sym_command;
	v->a[19805] = sym_variable_assignments;
	v->a[19806] = 32;
	v->a[19807] = actions(3);
	v->a[19808] = 1;
	v->a[19809] = sym_comment;
	v->a[19810] = actions(9);
	v->a[19811] = 1;
	v->a[19812] = anon_sym_for;
	v->a[19813] = actions(13);
	v->a[19814] = 1;
	v->a[19815] = anon_sym_if;
	v->a[19816] = actions(15);
	v->a[19817] = 1;
	v->a[19818] = anon_sym_case;
	v->a[19819] = actions(17);
	small_parse_table_991(v);
}

void	small_parse_table_991(t_small_parse_table_array *v)
{
	v->a[19820] = 1;
	v->a[19821] = anon_sym_LPAREN;
	v->a[19822] = actions(19);
	v->a[19823] = 1;
	v->a[19824] = anon_sym_LBRACE;
	v->a[19825] = actions(63);
	v->a[19826] = 1;
	v->a[19827] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19828] = actions(65);
	v->a[19829] = 1;
	v->a[19830] = anon_sym_DOLLAR;
	v->a[19831] = actions(67);
	v->a[19832] = 1;
	v->a[19833] = anon_sym_DQUOTE;
	v->a[19834] = actions(71);
	v->a[19835] = 1;
	v->a[19836] = aux_sym_number_token1;
	v->a[19837] = actions(73);
	v->a[19838] = 1;
	v->a[19839] = aux_sym_number_token2;
	small_parse_table_992(v);
}

void	small_parse_table_992(t_small_parse_table_array *v)
{
	v->a[19840] = actions(75);
	v->a[19841] = 1;
	v->a[19842] = anon_sym_DOLLAR_LBRACE;
	v->a[19843] = actions(77);
	v->a[19844] = 1;
	v->a[19845] = anon_sym_DOLLAR_LPAREN;
	v->a[19846] = actions(79);
	v->a[19847] = 1;
	v->a[19848] = anon_sym_BQUOTE;
	v->a[19849] = actions(349);
	v->a[19850] = 1;
	v->a[19851] = sym_word;
	v->a[19852] = actions(351);
	v->a[19853] = 1;
	v->a[19854] = anon_sym_BANG;
	v->a[19855] = actions(357);
	v->a[19856] = 1;
	v->a[19857] = sym_raw_string;
	v->a[19858] = actions(359);
	v->a[19859] = 1;
	small_parse_table_993(v);
}

void	small_parse_table_993(t_small_parse_table_array *v)
{
	v->a[19860] = sym_file_descriptor;
	v->a[19861] = actions(361);
	v->a[19862] = 1;
	v->a[19863] = sym_variable_name;
	v->a[19864] = state(247);
	v->a[19865] = 1;
	v->a[19866] = sym_command_name;
	v->a[19867] = state(569);
	v->a[19868] = 1;
	v->a[19869] = sym_variable_assignment;
	v->a[19870] = state(582);
	v->a[19871] = 1;
	v->a[19872] = sym_concatenation;
	v->a[19873] = state(585);
	v->a[19874] = 1;
	v->a[19875] = aux_sym_command_repeat1;
	v->a[19876] = state(718);
	v->a[19877] = 1;
	v->a[19878] = sym_file_redirect;
	v->a[19879] = state(1327);
	small_parse_table_994(v);
}

void	small_parse_table_994(t_small_parse_table_array *v)
{
	v->a[19880] = 1;
	v->a[19881] = sym_pipeline;
	v->a[19882] = state(1356);
	v->a[19883] = 1;
	v->a[19884] = aux_sym_redirected_statement_repeat2;
	v->a[19885] = state(2029);
	v->a[19886] = 1;
	v->a[19887] = sym__statement_not_pipeline;
	v->a[19888] = actions(11);
	v->a[19889] = 2;
	v->a[19890] = anon_sym_while;
	v->a[19891] = anon_sym_until;
	v->a[19892] = actions(355);
	v->a[19893] = 2;
	v->a[19894] = anon_sym_LT_AMP_DASH;
	v->a[19895] = anon_sym_GT_AMP_DASH;
	v->a[19896] = state(686);
	v->a[19897] = 6;
	v->a[19898] = sym_arithmetic_expansion;
	v->a[19899] = sym_string;
	small_parse_table_995(v);
}

/* EOF small_parse_table_198.c */
