/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1138.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5690(t_small_parse_table_array *v)
{
	v->a[113800] = sym_simple_expansion;
	v->a[113801] = sym_expansion;
	v->a[113802] = sym_command_substitution;
	v->a[113803] = 3;
	v->a[113804] = actions(3);
	v->a[113805] = 1;
	v->a[113806] = sym_comment;
	v->a[113807] = actions(6012);
	v->a[113808] = 2;
	v->a[113809] = sym_file_descriptor;
	v->a[113810] = aux_sym_heredoc_redirect_token1;
	v->a[113811] = actions(6014);
	v->a[113812] = 21;
	v->a[113813] = anon_sym_PIPE;
	v->a[113814] = anon_sym_SEMI_SEMI;
	v->a[113815] = anon_sym_SEMI_AMP;
	v->a[113816] = anon_sym_SEMI_SEMI_AMP;
	v->a[113817] = anon_sym_PIPE_AMP;
	v->a[113818] = anon_sym_AMP_AMP;
	v->a[113819] = anon_sym_PIPE_PIPE;
	small_parse_table_5691(v);
}

void	small_parse_table_5691(t_small_parse_table_array *v)
{
	v->a[113820] = anon_sym_LT;
	v->a[113821] = anon_sym_GT;
	v->a[113822] = anon_sym_GT_GT;
	v->a[113823] = anon_sym_AMP_GT;
	v->a[113824] = anon_sym_AMP_GT_GT;
	v->a[113825] = anon_sym_LT_AMP;
	v->a[113826] = anon_sym_GT_AMP;
	v->a[113827] = anon_sym_GT_PIPE;
	v->a[113828] = anon_sym_LT_AMP_DASH;
	v->a[113829] = anon_sym_GT_AMP_DASH;
	v->a[113830] = anon_sym_LT_LT;
	v->a[113831] = anon_sym_LT_LT_DASH;
	v->a[113832] = anon_sym_AMP;
	v->a[113833] = anon_sym_SEMI;
	v->a[113834] = 17;
	v->a[113835] = actions(57);
	v->a[113836] = 1;
	v->a[113837] = sym_comment;
	v->a[113838] = actions(6390);
	v->a[113839] = 1;
	small_parse_table_5692(v);
}

void	small_parse_table_5692(t_small_parse_table_array *v)
{
	v->a[113840] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[113841] = actions(6392);
	v->a[113842] = 1;
	v->a[113843] = anon_sym_DOLLAR;
	v->a[113844] = actions(6394);
	v->a[113845] = 1;
	v->a[113846] = sym__special_character;
	v->a[113847] = actions(6396);
	v->a[113848] = 1;
	v->a[113849] = anon_sym_DQUOTE;
	v->a[113850] = actions(6400);
	v->a[113851] = 1;
	v->a[113852] = aux_sym_number_token1;
	v->a[113853] = actions(6402);
	v->a[113854] = 1;
	v->a[113855] = aux_sym_number_token2;
	v->a[113856] = actions(6404);
	v->a[113857] = 1;
	v->a[113858] = anon_sym_DOLLAR_LBRACE;
	v->a[113859] = actions(6406);
	small_parse_table_5693(v);
}

void	small_parse_table_5693(t_small_parse_table_array *v)
{
	v->a[113860] = 1;
	v->a[113861] = anon_sym_DOLLAR_LPAREN;
	v->a[113862] = actions(6408);
	v->a[113863] = 1;
	v->a[113864] = anon_sym_BQUOTE;
	v->a[113865] = actions(6410);
	v->a[113866] = 1;
	v->a[113867] = anon_sym_DOLLAR_BQUOTE;
	v->a[113868] = actions(6412);
	v->a[113869] = 1;
	v->a[113870] = sym__brace_start;
	v->a[113871] = actions(6593);
	v->a[113872] = 1;
	v->a[113873] = sym_word;
	v->a[113874] = state(3255);
	v->a[113875] = 1;
	v->a[113876] = aux_sym__literal_repeat1;
	v->a[113877] = state(3416);
	v->a[113878] = 1;
	v->a[113879] = sym_concatenation;
	small_parse_table_5694(v);
}

void	small_parse_table_5694(t_small_parse_table_array *v)
{
	v->a[113880] = actions(6595);
	v->a[113881] = 2;
	v->a[113882] = sym_test_operator;
	v->a[113883] = sym_raw_string;
	v->a[113884] = state(3230);
	v->a[113885] = 7;
	v->a[113886] = sym_arithmetic_expansion;
	v->a[113887] = sym_brace_expression;
	v->a[113888] = sym_string;
	v->a[113889] = sym_number;
	v->a[113890] = sym_simple_expansion;
	v->a[113891] = sym_expansion;
	v->a[113892] = sym_command_substitution;
	v->a[113893] = 3;
	v->a[113894] = actions(3);
	v->a[113895] = 1;
	v->a[113896] = sym_comment;
	v->a[113897] = actions(3641);
	v->a[113898] = 2;
	v->a[113899] = sym_file_descriptor;
	small_parse_table_5695(v);
}

/* EOF small_parse_table_1138.c */
