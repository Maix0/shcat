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
	v->a[19800] = state(339);
	v->a[19801] = 5;
	v->a[19802] = sym_arithmetic_expansion;
	v->a[19803] = sym_string;
	v->a[19804] = sym_simple_expansion;
	v->a[19805] = sym_expansion;
	v->a[19806] = sym_command_substitution;
	v->a[19807] = actions(497);
	v->a[19808] = 15;
	v->a[19809] = anon_sym_PIPE;
	v->a[19810] = anon_sym_SEMI_SEMI;
	v->a[19811] = anon_sym_AMP_AMP;
	v->a[19812] = anon_sym_PIPE_PIPE;
	v->a[19813] = anon_sym_LT;
	v->a[19814] = anon_sym_GT;
	v->a[19815] = anon_sym_GT_GT;
	v->a[19816] = anon_sym_LT_AMP;
	v->a[19817] = anon_sym_GT_AMP;
	v->a[19818] = anon_sym_GT_PIPE;
	v->a[19819] = anon_sym_LT_GT;
	small_parse_table_991(v);
}

void	small_parse_table_991(t_small_parse_table_array *v)
{
	v->a[19820] = anon_sym_LT_LT;
	v->a[19821] = anon_sym_LT_LT_DASH;
	v->a[19822] = aux_sym_heredoc_redirect_token1;
	v->a[19823] = anon_sym_SEMI;
	v->a[19824] = 3;
	v->a[19825] = actions(407);
	v->a[19826] = 1;
	v->a[19827] = sym_comment;
	v->a[19828] = actions(447);
	v->a[19829] = 13;
	v->a[19830] = anon_sym_PIPE;
	v->a[19831] = anon_sym_EQ;
	v->a[19832] = anon_sym_LT;
	v->a[19833] = anon_sym_GT;
	v->a[19834] = anon_sym_GT_GT;
	v->a[19835] = anon_sym_LT_LT;
	v->a[19836] = anon_sym_CARET;
	v->a[19837] = anon_sym_AMP;
	v->a[19838] = anon_sym_PLUS;
	v->a[19839] = anon_sym_DASH;
	small_parse_table_992(v);
}

void	small_parse_table_992(t_small_parse_table_array *v)
{
	v->a[19840] = anon_sym_STAR;
	v->a[19841] = anon_sym_SLASH;
	v->a[19842] = anon_sym_PERCENT;
	v->a[19843] = actions(449);
	v->a[19844] = 20;
	v->a[19845] = anon_sym_RPAREN;
	v->a[19846] = anon_sym_AMP_AMP;
	v->a[19847] = anon_sym_PIPE_PIPE;
	v->a[19848] = anon_sym_PLUS_EQ;
	v->a[19849] = anon_sym_DASH_EQ;
	v->a[19850] = anon_sym_STAR_EQ;
	v->a[19851] = anon_sym_SLASH_EQ;
	v->a[19852] = anon_sym_PERCENT_EQ;
	v->a[19853] = anon_sym_LT_LT_EQ;
	v->a[19854] = anon_sym_GT_GT_EQ;
	v->a[19855] = anon_sym_AMP_EQ;
	v->a[19856] = anon_sym_CARET_EQ;
	v->a[19857] = anon_sym_PIPE_EQ;
	v->a[19858] = anon_sym_EQ_EQ;
	v->a[19859] = anon_sym_BANG_EQ;
	small_parse_table_993(v);
}

void	small_parse_table_993(t_small_parse_table_array *v)
{
	v->a[19860] = anon_sym_LT_EQ;
	v->a[19861] = anon_sym_GT_EQ;
	v->a[19862] = anon_sym_QMARK;
	v->a[19863] = anon_sym_PLUS_PLUS2;
	v->a[19864] = anon_sym_DASH_DASH2;
	v->a[19865] = 3;
	v->a[19866] = actions(407);
	v->a[19867] = 1;
	v->a[19868] = sym_comment;
	v->a[19869] = actions(451);
	v->a[19870] = 13;
	v->a[19871] = anon_sym_PIPE;
	v->a[19872] = anon_sym_EQ;
	v->a[19873] = anon_sym_LT;
	v->a[19874] = anon_sym_GT;
	v->a[19875] = anon_sym_GT_GT;
	v->a[19876] = anon_sym_LT_LT;
	v->a[19877] = anon_sym_CARET;
	v->a[19878] = anon_sym_AMP;
	v->a[19879] = anon_sym_PLUS;
	small_parse_table_994(v);
}

void	small_parse_table_994(t_small_parse_table_array *v)
{
	v->a[19880] = anon_sym_DASH;
	v->a[19881] = anon_sym_STAR;
	v->a[19882] = anon_sym_SLASH;
	v->a[19883] = anon_sym_PERCENT;
	v->a[19884] = actions(453);
	v->a[19885] = 20;
	v->a[19886] = anon_sym_RPAREN;
	v->a[19887] = anon_sym_AMP_AMP;
	v->a[19888] = anon_sym_PIPE_PIPE;
	v->a[19889] = anon_sym_PLUS_EQ;
	v->a[19890] = anon_sym_DASH_EQ;
	v->a[19891] = anon_sym_STAR_EQ;
	v->a[19892] = anon_sym_SLASH_EQ;
	v->a[19893] = anon_sym_PERCENT_EQ;
	v->a[19894] = anon_sym_LT_LT_EQ;
	v->a[19895] = anon_sym_GT_GT_EQ;
	v->a[19896] = anon_sym_AMP_EQ;
	v->a[19897] = anon_sym_CARET_EQ;
	v->a[19898] = anon_sym_PIPE_EQ;
	v->a[19899] = anon_sym_EQ_EQ;
	small_parse_table_995(v);
}

/* EOF small_parse_table_198.c */
