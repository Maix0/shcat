/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2648.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13240(t_small_parse_table_array *v)
{
	v->a[264800] = 1;
	v->a[264801] = aux_sym__simple_variable_name_token1;
	v->a[264802] = actions(11772);
	v->a[264803] = 1;
	v->a[264804] = sym_variable_name;
	v->a[264805] = actions(12072);
	v->a[264806] = 1;
	v->a[264807] = anon_sym_RBRACE3;
	v->a[264808] = state(3532);
	v->a[264809] = 1;
	v->a[264810] = sym_subscript;
	v->a[264811] = state(6428);
	v->a[264812] = 1;
	v->a[264813] = aux_sym__expansion_body_repeat1;
	v->a[264814] = state(6472);
	v->a[264815] = 1;
	v->a[264816] = sym_command_substitution;
	v->a[264817] = state(7308);
	v->a[264818] = 1;
	v->a[264819] = sym__expansion_body;
	small_parse_table_13241(v);
}

void	small_parse_table_13241(t_small_parse_table_array *v)
{
	v->a[264820] = actions(11762);
	v->a[264821] = 2;
	v->a[264822] = anon_sym_POUND2;
	v->a[264823] = anon_sym_EQ2;
	v->a[264824] = actions(8050);
	v->a[264825] = 3;
	v->a[264826] = sym__external_expansion_sym_hash;
	v->a[264827] = sym__external_expansion_sym_bang;
	v->a[264828] = sym__external_expansion_sym_equal;
	v->a[264829] = actions(11754);
	v->a[264830] = 4;
	v->a[264831] = anon_sym_DASH;
	v->a[264832] = anon_sym_STAR;
	v->a[264833] = anon_sym_QMARK;
	v->a[264834] = anon_sym_AT2;
	v->a[264835] = actions(11756);
	v->a[264836] = 5;
	v->a[264837] = anon_sym_BANG;
	v->a[264838] = anon_sym_DOLLAR;
	v->a[264839] = anon_sym_POUND;
	small_parse_table_13242(v);
}

void	small_parse_table_13242(t_small_parse_table_array *v)
{
	v->a[264840] = anon_sym_0;
	v->a[264841] = anon_sym__;
	v->a[264842] = 3;
	v->a[264843] = actions(3);
	v->a[264844] = 1;
	v->a[264845] = sym_comment;
	v->a[264846] = actions(1253);
	v->a[264847] = 3;
	v->a[264848] = sym_file_descriptor;
	v->a[264849] = sym__concat;
	v->a[264850] = aux_sym_heredoc_redirect_token1;
	v->a[264851] = actions(1251);
	v->a[264852] = 22;
	v->a[264853] = anon_sym_SEMI;
	v->a[264854] = anon_sym_PIPE_PIPE;
	v->a[264855] = anon_sym_AMP_AMP;
	v->a[264856] = anon_sym_PIPE;
	v->a[264857] = anon_sym_AMP;
	v->a[264858] = anon_sym_LT;
	v->a[264859] = anon_sym_GT;
	small_parse_table_13243(v);
}

void	small_parse_table_13243(t_small_parse_table_array *v)
{
	v->a[264860] = anon_sym_LT_LT;
	v->a[264861] = anon_sym_GT_GT;
	v->a[264862] = anon_sym_SEMI_SEMI;
	v->a[264863] = anon_sym_SEMI_AMP;
	v->a[264864] = anon_sym_SEMI_SEMI_AMP;
	v->a[264865] = anon_sym_PIPE_AMP;
	v->a[264866] = anon_sym_AMP_GT;
	v->a[264867] = anon_sym_AMP_GT_GT;
	v->a[264868] = anon_sym_LT_AMP;
	v->a[264869] = anon_sym_GT_AMP;
	v->a[264870] = anon_sym_GT_PIPE;
	v->a[264871] = anon_sym_LT_AMP_DASH;
	v->a[264872] = anon_sym_GT_AMP_DASH;
	v->a[264873] = anon_sym_LT_LT_DASH;
	v->a[264874] = aux_sym_concatenation_token1;
	v->a[264875] = 16;
	v->a[264876] = actions(3);
	v->a[264877] = 1;
	v->a[264878] = sym_comment;
	v->a[264879] = actions(11760);
	small_parse_table_13244(v);
}

void	small_parse_table_13244(t_small_parse_table_array *v)
{
	v->a[264880] = 1;
	v->a[264881] = anon_sym_BANG2;
	v->a[264882] = actions(11764);
	v->a[264883] = 1;
	v->a[264884] = anon_sym_DOLLAR_LPAREN;
	v->a[264885] = actions(11766);
	v->a[264886] = 1;
	v->a[264887] = anon_sym_BQUOTE;
	v->a[264888] = actions(11768);
	v->a[264889] = 1;
	v->a[264890] = anon_sym_DOLLAR_BQUOTE;
	v->a[264891] = actions(11770);
	v->a[264892] = 1;
	v->a[264893] = aux_sym__simple_variable_name_token1;
	v->a[264894] = actions(11772);
	v->a[264895] = 1;
	v->a[264896] = sym_variable_name;
	v->a[264897] = actions(12074);
	v->a[264898] = 1;
	v->a[264899] = anon_sym_RBRACE3;
	small_parse_table_13245(v);
}

/* EOF small_parse_table_2648.c */
