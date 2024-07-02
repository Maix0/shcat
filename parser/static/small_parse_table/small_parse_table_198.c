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
	v->a[19800] = anon_sym_DOLLAR;
	v->a[19801] = actions(467);
	v->a[19802] = 1;
	v->a[19803] = anon_sym_DQUOTE;
	v->a[19804] = actions(469);
	v->a[19805] = 1;
	v->a[19806] = anon_sym_DOLLAR_LBRACE;
	v->a[19807] = actions(471);
	v->a[19808] = 1;
	v->a[19809] = anon_sym_DOLLAR_LPAREN;
	v->a[19810] = actions(473);
	v->a[19811] = 1;
	v->a[19812] = anon_sym_BQUOTE;
	v->a[19813] = actions(475);
	v->a[19814] = 1;
	v->a[19815] = sym__bare_dollar;
	v->a[19816] = actions(503);
	v->a[19817] = 1;
	v->a[19818] = sym_file_descriptor;
	v->a[19819] = state(192);
	small_parse_table_991(v);
}

void	small_parse_table_991(t_small_parse_table_array *v)
{
	v->a[19820] = 1;
	v->a[19821] = aux_sym_command_repeat2;
	v->a[19822] = state(662);
	v->a[19823] = 1;
	v->a[19824] = sym_concatenation;
	v->a[19825] = actions(461);
	v->a[19826] = 3;
	v->a[19827] = sym_raw_string;
	v->a[19828] = sym_number;
	v->a[19829] = sym_word;
	v->a[19830] = state(430);
	v->a[19831] = 5;
	v->a[19832] = sym_arithmetic_expansion;
	v->a[19833] = sym_string;
	v->a[19834] = sym_simple_expansion;
	v->a[19835] = sym_expansion;
	v->a[19836] = sym_command_substitution;
	v->a[19837] = actions(501);
	v->a[19838] = 17;
	v->a[19839] = anon_sym_PIPE;
	small_parse_table_992(v);
}

void	small_parse_table_992(t_small_parse_table_array *v)
{
	v->a[19840] = anon_sym_RPAREN;
	v->a[19841] = anon_sym_SEMI_SEMI;
	v->a[19842] = anon_sym_AMP_AMP;
	v->a[19843] = anon_sym_PIPE_PIPE;
	v->a[19844] = anon_sym_LT;
	v->a[19845] = anon_sym_GT;
	v->a[19846] = anon_sym_GT_GT;
	v->a[19847] = anon_sym_LT_AMP;
	v->a[19848] = anon_sym_GT_AMP;
	v->a[19849] = anon_sym_GT_PIPE;
	v->a[19850] = anon_sym_LT_GT;
	v->a[19851] = anon_sym_LT_LT;
	v->a[19852] = anon_sym_LT_LT_DASH;
	v->a[19853] = aux_sym_heredoc_redirect_token1;
	v->a[19854] = anon_sym_AMP;
	v->a[19855] = anon_sym_SEMI;
	v->a[19856] = 14;
	v->a[19857] = actions(3);
	v->a[19858] = 1;
	v->a[19859] = sym_comment;
	small_parse_table_993(v);
}

void	small_parse_table_993(t_small_parse_table_array *v)
{
	v->a[19860] = actions(441);
	v->a[19861] = 1;
	v->a[19862] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19863] = actions(443);
	v->a[19864] = 1;
	v->a[19865] = anon_sym_DOLLAR;
	v->a[19866] = actions(445);
	v->a[19867] = 1;
	v->a[19868] = anon_sym_DQUOTE;
	v->a[19869] = actions(447);
	v->a[19870] = 1;
	v->a[19871] = anon_sym_DOLLAR_LBRACE;
	v->a[19872] = actions(449);
	v->a[19873] = 1;
	v->a[19874] = anon_sym_DOLLAR_LPAREN;
	v->a[19875] = actions(451);
	v->a[19876] = 1;
	v->a[19877] = anon_sym_BQUOTE;
	v->a[19878] = actions(455);
	v->a[19879] = 1;
	small_parse_table_994(v);
}

void	small_parse_table_994(t_small_parse_table_array *v)
{
	v->a[19880] = sym__bare_dollar;
	v->a[19881] = actions(507);
	v->a[19882] = 1;
	v->a[19883] = sym_file_descriptor;
	v->a[19884] = state(201);
	v->a[19885] = 1;
	v->a[19886] = aux_sym_command_repeat2;
	v->a[19887] = state(666);
	v->a[19888] = 1;
	v->a[19889] = sym_concatenation;
	v->a[19890] = actions(437);
	v->a[19891] = 3;
	v->a[19892] = sym_raw_string;
	v->a[19893] = sym_number;
	v->a[19894] = sym_word;
	v->a[19895] = state(420);
	v->a[19896] = 5;
	v->a[19897] = sym_arithmetic_expansion;
	v->a[19898] = sym_string;
	v->a[19899] = sym_simple_expansion;
	small_parse_table_995(v);
}

/* EOF small_parse_table_198.c */
