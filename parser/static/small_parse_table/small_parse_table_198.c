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
	v->a[19800] = sym_test_operator;
	v->a[19801] = sym_raw_string;
	v->a[19802] = actions(2896);
	v->a[19803] = 2;
	v->a[19804] = anon_sym_LT_AMP_DASH;
	v->a[19805] = anon_sym_GT_AMP_DASH;
	v->a[19806] = actions(2894);
	v->a[19807] = 3;
	v->a[19808] = anon_sym_GT_GT;
	v->a[19809] = anon_sym_AMP_GT_GT;
	v->a[19810] = anon_sym_GT_PIPE;
	v->a[19811] = actions(2892);
	v->a[19812] = 5;
	v->a[19813] = anon_sym_LT;
	v->a[19814] = anon_sym_GT;
	v->a[19815] = anon_sym_AMP_GT;
	v->a[19816] = anon_sym_LT_AMP;
	v->a[19817] = anon_sym_GT_AMP;
	v->a[19818] = state(643);
	v->a[19819] = 7;
	small_parse_table_991(v);
}

void	small_parse_table_991(t_small_parse_table_array *v)
{
	v->a[19820] = sym_arithmetic_expansion;
	v->a[19821] = sym_brace_expression;
	v->a[19822] = sym_string;
	v->a[19823] = sym_number;
	v->a[19824] = sym_simple_expansion;
	v->a[19825] = sym_expansion;
	v->a[19826] = sym_command_substitution;
	v->a[19827] = 3;
	v->a[19828] = actions(3);
	v->a[19829] = 1;
	v->a[19830] = sym_comment;
	v->a[19831] = actions(2908);
	v->a[19832] = 6;
	v->a[19833] = sym_file_descriptor;
	v->a[19834] = sym__concat;
	v->a[19835] = sym_variable_name;
	v->a[19836] = sym_test_operator;
	v->a[19837] = sym__brace_start;
	v->a[19838] = aux_sym_heredoc_redirect_token1;
	v->a[19839] = actions(2906);
	small_parse_table_992(v);
}

void	small_parse_table_992(t_small_parse_table_array *v)
{
	v->a[19840] = 36;
	v->a[19841] = anon_sym_esac;
	v->a[19842] = anon_sym_PIPE;
	v->a[19843] = anon_sym_SEMI_SEMI;
	v->a[19844] = anon_sym_SEMI_AMP;
	v->a[19845] = anon_sym_SEMI_SEMI_AMP;
	v->a[19846] = anon_sym_PIPE_AMP;
	v->a[19847] = anon_sym_AMP_AMP;
	v->a[19848] = anon_sym_PIPE_PIPE;
	v->a[19849] = anon_sym_LT;
	v->a[19850] = anon_sym_GT;
	v->a[19851] = anon_sym_GT_GT;
	v->a[19852] = anon_sym_AMP_GT;
	v->a[19853] = anon_sym_AMP_GT_GT;
	v->a[19854] = anon_sym_LT_AMP;
	v->a[19855] = anon_sym_GT_AMP;
	v->a[19856] = anon_sym_GT_PIPE;
	v->a[19857] = anon_sym_LT_AMP_DASH;
	v->a[19858] = anon_sym_GT_AMP_DASH;
	v->a[19859] = anon_sym_LT_LT;
	small_parse_table_993(v);
}

void	small_parse_table_993(t_small_parse_table_array *v)
{
	v->a[19860] = anon_sym_LT_LT_DASH;
	v->a[19861] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19862] = anon_sym_AMP;
	v->a[19863] = aux_sym_concatenation_token1;
	v->a[19864] = anon_sym_DOLLAR;
	v->a[19865] = sym__special_character;
	v->a[19866] = anon_sym_DQUOTE;
	v->a[19867] = sym_raw_string;
	v->a[19868] = aux_sym_number_token1;
	v->a[19869] = aux_sym_number_token2;
	v->a[19870] = anon_sym_DOLLAR_LBRACE;
	v->a[19871] = anon_sym_DOLLAR_LPAREN;
	v->a[19872] = anon_sym_BQUOTE;
	v->a[19873] = anon_sym_DOLLAR_BQUOTE;
	v->a[19874] = aux_sym__simple_variable_name_token1;
	v->a[19875] = sym_word;
	v->a[19876] = anon_sym_SEMI;
	v->a[19877] = 29;
	v->a[19878] = actions(57);
	v->a[19879] = 1;
	small_parse_table_994(v);
}

void	small_parse_table_994(t_small_parse_table_array *v)
{
	v->a[19880] = sym_comment;
	v->a[19881] = actions(349);
	v->a[19882] = 1;
	v->a[19883] = anon_sym_LPAREN;
	v->a[19884] = actions(369);
	v->a[19885] = 1;
	v->a[19886] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19887] = actions(371);
	v->a[19888] = 1;
	v->a[19889] = anon_sym_DOLLAR;
	v->a[19890] = actions(375);
	v->a[19891] = 1;
	v->a[19892] = anon_sym_DQUOTE;
	v->a[19893] = actions(379);
	v->a[19894] = 1;
	v->a[19895] = aux_sym_number_token1;
	v->a[19896] = actions(381);
	v->a[19897] = 1;
	v->a[19898] = aux_sym_number_token2;
	v->a[19899] = actions(383);
	small_parse_table_995(v);
}

/* EOF small_parse_table_198.c */
