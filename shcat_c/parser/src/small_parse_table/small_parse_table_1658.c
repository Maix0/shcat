/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1658.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8290(t_small_parse_table_array *v)
{
	v->a[165800] = anon_sym_LT_LT_EQ;
	v->a[165801] = anon_sym_GT_GT_EQ;
	v->a[165802] = anon_sym_AMP_EQ;
	v->a[165803] = anon_sym_CARET_EQ;
	v->a[165804] = anon_sym_PIPE_EQ;
	v->a[165805] = anon_sym_PIPE_PIPE;
	v->a[165806] = anon_sym_DASHo;
	v->a[165807] = anon_sym_AMP_AMP;
	v->a[165808] = anon_sym_DASHa;
	v->a[165809] = anon_sym_PIPE;
	v->a[165810] = anon_sym_CARET;
	v->a[165811] = anon_sym_AMP;
	v->a[165812] = anon_sym_EQ_EQ;
	v->a[165813] = anon_sym_BANG_EQ;
	v->a[165814] = anon_sym_LT;
	v->a[165815] = anon_sym_GT;
	v->a[165816] = anon_sym_LT_EQ;
	v->a[165817] = anon_sym_GT_EQ;
	v->a[165818] = anon_sym_LT_LT;
	v->a[165819] = anon_sym_GT_GT;
	small_parse_table_8291(v);
}

void	small_parse_table_8291(t_small_parse_table_array *v)
{
	v->a[165820] = anon_sym_PLUS;
	v->a[165821] = anon_sym_DASH;
	v->a[165822] = anon_sym_STAR;
	v->a[165823] = anon_sym_SLASH;
	v->a[165824] = anon_sym_PERCENT;
	v->a[165825] = anon_sym_STAR_STAR;
	v->a[165826] = 5;
	v->a[165827] = actions(71);
	v->a[165828] = 1;
	v->a[165829] = sym_comment;
	v->a[165830] = actions(7493);
	v->a[165831] = 1;
	v->a[165832] = sym__special_character;
	v->a[165833] = state(3065);
	v->a[165834] = 1;
	v->a[165835] = aux_sym__literal_repeat1;
	v->a[165836] = actions(5393);
	v->a[165837] = 12;
	v->a[165838] = anon_sym_PIPE;
	v->a[165839] = anon_sym_LT;
	small_parse_table_8292(v);
}

void	small_parse_table_8292(t_small_parse_table_array *v)
{
	v->a[165840] = anon_sym_GT;
	v->a[165841] = anon_sym_LT_LT;
	v->a[165842] = anon_sym_AMP_GT;
	v->a[165843] = anon_sym_LT_AMP;
	v->a[165844] = anon_sym_GT_AMP;
	v->a[165845] = anon_sym_DOLLAR;
	v->a[165846] = aux_sym_number_token1;
	v->a[165847] = aux_sym_number_token2;
	v->a[165848] = anon_sym_DOLLAR_LPAREN;
	v->a[165849] = sym_word;
	v->a[165850] = actions(5395);
	v->a[165851] = 23;
	v->a[165852] = sym_file_descriptor;
	v->a[165853] = sym_test_operator;
	v->a[165854] = sym__brace_start;
	v->a[165855] = anon_sym_LPAREN_LPAREN;
	v->a[165856] = anon_sym_PIPE_PIPE;
	v->a[165857] = anon_sym_AMP_AMP;
	v->a[165858] = anon_sym_GT_GT;
	v->a[165859] = anon_sym_PIPE_AMP;
	small_parse_table_8293(v);
}

void	small_parse_table_8293(t_small_parse_table_array *v)
{
	v->a[165860] = anon_sym_AMP_GT_GT;
	v->a[165861] = anon_sym_GT_PIPE;
	v->a[165862] = anon_sym_LT_AMP_DASH;
	v->a[165863] = anon_sym_GT_AMP_DASH;
	v->a[165864] = anon_sym_LT_LT_DASH;
	v->a[165865] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[165866] = anon_sym_DOLLAR_LBRACK;
	v->a[165867] = anon_sym_DQUOTE;
	v->a[165868] = sym_raw_string;
	v->a[165869] = sym_ansi_c_string;
	v->a[165870] = anon_sym_DOLLAR_LBRACE;
	v->a[165871] = anon_sym_BQUOTE;
	v->a[165872] = anon_sym_DOLLAR_BQUOTE;
	v->a[165873] = anon_sym_LT_LPAREN;
	v->a[165874] = anon_sym_GT_LPAREN;
	v->a[165875] = 6;
	v->a[165876] = actions(3);
	v->a[165877] = 1;
	v->a[165878] = sym_comment;
	v->a[165879] = actions(7495);
	small_parse_table_8294(v);
}

void	small_parse_table_8294(t_small_parse_table_array *v)
{
	v->a[165880] = 1;
	v->a[165881] = aux_sym_concatenation_token1;
	v->a[165882] = actions(7498);
	v->a[165883] = 1;
	v->a[165884] = sym__concat;
	v->a[165885] = state(3115);
	v->a[165886] = 1;
	v->a[165887] = aux_sym_concatenation_repeat1;
	v->a[165888] = actions(1253);
	v->a[165889] = 4;
	v->a[165890] = sym_file_descriptor;
	v->a[165891] = sym_test_operator;
	v->a[165892] = sym__brace_start;
	v->a[165893] = aux_sym_heredoc_redirect_token1;
	v->a[165894] = actions(1251);
	v->a[165895] = 30;
	v->a[165896] = anon_sym_LPAREN_LPAREN;
	v->a[165897] = anon_sym_PIPE_PIPE;
	v->a[165898] = anon_sym_AMP_AMP;
	v->a[165899] = anon_sym_LT;
	small_parse_table_8295(v);
}

/* EOF small_parse_table_1658.c */
