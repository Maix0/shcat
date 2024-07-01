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
	v->a[19800] = 1;
	v->a[19801] = anon_sym_DQUOTE;
	v->a[19802] = actions(515);
	v->a[19803] = 1;
	v->a[19804] = anon_sym_DOLLAR_LBRACE;
	v->a[19805] = actions(518);
	v->a[19806] = 1;
	v->a[19807] = anon_sym_DOLLAR_LPAREN;
	v->a[19808] = actions(521);
	v->a[19809] = 1;
	v->a[19810] = anon_sym_BQUOTE;
	v->a[19811] = state(185);
	v->a[19812] = 2;
	v->a[19813] = sym_concatenation;
	v->a[19814] = aux_sym_for_statement_repeat1;
	v->a[19815] = actions(499);
	v->a[19816] = 3;
	v->a[19817] = sym_file_descriptor;
	v->a[19818] = sym_variable_name;
	v->a[19819] = ts_builtin_sym_end;
	small_parse_table_991(v);
}

void	small_parse_table_991(t_small_parse_table_array *v)
{
	v->a[19820] = actions(501);
	v->a[19821] = 3;
	v->a[19822] = sym_raw_string;
	v->a[19823] = sym_number;
	v->a[19824] = sym_word;
	v->a[19825] = state(397);
	v->a[19826] = 5;
	v->a[19827] = sym_arithmetic_expansion;
	v->a[19828] = sym_string;
	v->a[19829] = sym_simple_expansion;
	v->a[19830] = sym_expansion;
	v->a[19831] = sym_command_substitution;
	v->a[19832] = actions(504);
	v->a[19833] = 16;
	v->a[19834] = anon_sym_PIPE;
	v->a[19835] = anon_sym_SEMI_SEMI;
	v->a[19836] = anon_sym_AMP_AMP;
	v->a[19837] = anon_sym_PIPE_PIPE;
	v->a[19838] = anon_sym_LT;
	v->a[19839] = anon_sym_GT;
	small_parse_table_992(v);
}

void	small_parse_table_992(t_small_parse_table_array *v)
{
	v->a[19840] = anon_sym_GT_GT;
	v->a[19841] = anon_sym_LT_AMP;
	v->a[19842] = anon_sym_GT_AMP;
	v->a[19843] = anon_sym_GT_PIPE;
	v->a[19844] = anon_sym_LT_GT;
	v->a[19845] = anon_sym_LT_LT;
	v->a[19846] = anon_sym_LT_LT_DASH;
	v->a[19847] = aux_sym_heredoc_redirect_token1;
	v->a[19848] = anon_sym_AMP;
	v->a[19849] = anon_sym_SEMI;
	v->a[19850] = 14;
	v->a[19851] = actions(3);
	v->a[19852] = 1;
	v->a[19853] = sym_comment;
	v->a[19854] = actions(531);
	v->a[19855] = 1;
	v->a[19856] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19857] = actions(534);
	v->a[19858] = 1;
	v->a[19859] = anon_sym_DOLLAR;
	small_parse_table_993(v);
}

void	small_parse_table_993(t_small_parse_table_array *v)
{
	v->a[19860] = actions(537);
	v->a[19861] = 1;
	v->a[19862] = anon_sym_DQUOTE;
	v->a[19863] = actions(540);
	v->a[19864] = 1;
	v->a[19865] = anon_sym_DOLLAR_LBRACE;
	v->a[19866] = actions(543);
	v->a[19867] = 1;
	v->a[19868] = anon_sym_DOLLAR_LPAREN;
	v->a[19869] = actions(546);
	v->a[19870] = 1;
	v->a[19871] = anon_sym_BQUOTE;
	v->a[19872] = actions(549);
	v->a[19873] = 1;
	v->a[19874] = sym__bare_dollar;
	v->a[19875] = state(186);
	v->a[19876] = 1;
	v->a[19877] = aux_sym_command_repeat2;
	v->a[19878] = state(681);
	v->a[19879] = 1;
	small_parse_table_994(v);
}

void	small_parse_table_994(t_small_parse_table_array *v)
{
	v->a[19880] = sym_concatenation;
	v->a[19881] = actions(524);
	v->a[19882] = 2;
	v->a[19883] = sym_file_descriptor;
	v->a[19884] = ts_builtin_sym_end;
	v->a[19885] = actions(526);
	v->a[19886] = 3;
	v->a[19887] = sym_raw_string;
	v->a[19888] = sym_number;
	v->a[19889] = sym_word;
	v->a[19890] = state(386);
	v->a[19891] = 5;
	v->a[19892] = sym_arithmetic_expansion;
	v->a[19893] = sym_string;
	v->a[19894] = sym_simple_expansion;
	v->a[19895] = sym_expansion;
	v->a[19896] = sym_command_substitution;
	v->a[19897] = actions(529);
	v->a[19898] = 16;
	v->a[19899] = anon_sym_PIPE;
	small_parse_table_995(v);
}

/* EOF small_parse_table_198.c */
