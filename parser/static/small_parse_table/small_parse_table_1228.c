/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1228.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6140(t_small_parse_table_array *v)
{
	v->a[122800] = actions(5423);
	v->a[122801] = 1;
	v->a[122802] = anon_sym_DOLLAR_LPAREN;
	v->a[122803] = actions(5425);
	v->a[122804] = 1;
	v->a[122805] = anon_sym_BQUOTE;
	v->a[122806] = actions(5427);
	v->a[122807] = 1;
	v->a[122808] = anon_sym_DOLLAR_BQUOTE;
	v->a[122809] = actions(5433);
	v->a[122810] = 1;
	v->a[122811] = sym__brace_start;
	v->a[122812] = actions(6625);
	v->a[122813] = 1;
	v->a[122814] = sym_word;
	v->a[122815] = actions(6627);
	v->a[122816] = 1;
	v->a[122817] = sym__special_character;
	v->a[122818] = actions(6631);
	v->a[122819] = 1;
	small_parse_table_6141(v);
}

void	small_parse_table_6141(t_small_parse_table_array *v)
{
	v->a[122820] = sym__comment_word;
	v->a[122821] = actions(7076);
	v->a[122822] = 1;
	v->a[122823] = anon_sym_DOLLAR;
	v->a[122824] = actions(6629);
	v->a[122825] = 3;
	v->a[122826] = sym_test_operator;
	v->a[122827] = sym__bare_dollar;
	v->a[122828] = sym_raw_string;
	v->a[122829] = state(1903);
	v->a[122830] = 7;
	v->a[122831] = sym_arithmetic_expansion;
	v->a[122832] = sym_brace_expression;
	v->a[122833] = sym_string;
	v->a[122834] = sym_number;
	v->a[122835] = sym_simple_expansion;
	v->a[122836] = sym_expansion;
	v->a[122837] = sym_command_substitution;
	v->a[122838] = 6;
	v->a[122839] = actions(3);
	small_parse_table_6142(v);
}

void	small_parse_table_6142(t_small_parse_table_array *v)
{
	v->a[122840] = 1;
	v->a[122841] = sym_comment;
	v->a[122842] = actions(5161);
	v->a[122843] = 1;
	v->a[122844] = aux_sym_concatenation_token1;
	v->a[122845] = actions(7078);
	v->a[122846] = 1;
	v->a[122847] = sym__concat;
	v->a[122848] = state(1853);
	v->a[122849] = 1;
	v->a[122850] = aux_sym_concatenation_repeat1;
	v->a[122851] = actions(2696);
	v->a[122852] = 3;
	v->a[122853] = sym_file_descriptor;
	v->a[122854] = sym_variable_name;
	v->a[122855] = aux_sym_heredoc_redirect_token1;
	v->a[122856] = actions(2694);
	v->a[122857] = 16;
	v->a[122858] = anon_sym_PIPE;
	v->a[122859] = anon_sym_PIPE_AMP;
	small_parse_table_6143(v);
}

void	small_parse_table_6143(t_small_parse_table_array *v)
{
	v->a[122860] = anon_sym_AMP_AMP;
	v->a[122861] = anon_sym_PIPE_PIPE;
	v->a[122862] = anon_sym_LT;
	v->a[122863] = anon_sym_GT;
	v->a[122864] = anon_sym_GT_GT;
	v->a[122865] = anon_sym_AMP_GT;
	v->a[122866] = anon_sym_AMP_GT_GT;
	v->a[122867] = anon_sym_LT_AMP;
	v->a[122868] = anon_sym_GT_AMP;
	v->a[122869] = anon_sym_GT_PIPE;
	v->a[122870] = anon_sym_LT_AMP_DASH;
	v->a[122871] = anon_sym_GT_AMP_DASH;
	v->a[122872] = anon_sym_LT_LT;
	v->a[122873] = anon_sym_LT_LT_DASH;
	v->a[122874] = 9;
	v->a[122875] = actions(3);
	v->a[122876] = 1;
	v->a[122877] = sym_comment;
	v->a[122878] = actions(3366);
	v->a[122879] = 1;
	small_parse_table_6144(v);
}

void	small_parse_table_6144(t_small_parse_table_array *v)
{
	v->a[122880] = aux_sym_heredoc_redirect_token1;
	v->a[122881] = actions(5970);
	v->a[122882] = 1;
	v->a[122883] = sym_file_descriptor;
	v->a[122884] = actions(2945);
	v->a[122885] = 2;
	v->a[122886] = anon_sym_LT_LT;
	v->a[122887] = anon_sym_LT_LT_DASH;
	v->a[122888] = actions(3300);
	v->a[122889] = 2;
	v->a[122890] = anon_sym_AMP_AMP;
	v->a[122891] = anon_sym_PIPE_PIPE;
	v->a[122892] = actions(5968);
	v->a[122893] = 2;
	v->a[122894] = anon_sym_LT_AMP_DASH;
	v->a[122895] = anon_sym_GT_AMP_DASH;
	v->a[122896] = actions(3364);
	v->a[122897] = 3;
	v->a[122898] = anon_sym_SEMI_SEMI;
	v->a[122899] = anon_sym_AMP;
	small_parse_table_6145(v);
}

/* EOF small_parse_table_1228.c */
