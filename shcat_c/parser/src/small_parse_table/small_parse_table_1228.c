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
	v->a[122800] = anon_sym_LT_LT_DASH;
	v->a[122801] = anon_sym_LT_LT_LT;
	v->a[122802] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[122803] = anon_sym_DOLLAR_LBRACK;
	v->a[122804] = aux_sym_concatenation_token1;
	v->a[122805] = anon_sym_DQUOTE;
	v->a[122806] = sym_raw_string;
	v->a[122807] = sym_ansi_c_string;
	v->a[122808] = anon_sym_DOLLAR_LBRACE;
	v->a[122809] = anon_sym_DOLLAR_BQUOTE;
	v->a[122810] = anon_sym_LT_LPAREN;
	v->a[122811] = anon_sym_GT_LPAREN;
	v->a[122812] = 5;
	v->a[122813] = actions(71);
	v->a[122814] = 1;
	v->a[122815] = sym_comment;
	v->a[122816] = state(2466);
	v->a[122817] = 1;
	v->a[122818] = aux_sym_concatenation_repeat1;
	v->a[122819] = actions(1143);
	small_parse_table_6141(v);
}

void	small_parse_table_6141(t_small_parse_table_array *v)
{
	v->a[122820] = 2;
	v->a[122821] = sym__concat;
	v->a[122822] = aux_sym_concatenation_token1;
	v->a[122823] = actions(1261);
	v->a[122824] = 15;
	v->a[122825] = anon_sym_EQ;
	v->a[122826] = anon_sym_PIPE;
	v->a[122827] = anon_sym_CARET;
	v->a[122828] = anon_sym_AMP;
	v->a[122829] = anon_sym_LT;
	v->a[122830] = anon_sym_GT;
	v->a[122831] = anon_sym_LT_LT;
	v->a[122832] = anon_sym_GT_GT;
	v->a[122833] = anon_sym_PLUS;
	v->a[122834] = anon_sym_DASH;
	v->a[122835] = anon_sym_STAR;
	v->a[122836] = anon_sym_SLASH;
	v->a[122837] = anon_sym_PERCENT;
	v->a[122838] = anon_sym_STAR_STAR;
	v->a[122839] = sym__special_character;
	small_parse_table_6142(v);
}

void	small_parse_table_6142(t_small_parse_table_array *v)
{
	v->a[122840] = actions(1263);
	v->a[122841] = 23;
	v->a[122842] = sym_test_operator;
	v->a[122843] = anon_sym_PLUS_PLUS;
	v->a[122844] = anon_sym_DASH_DASH;
	v->a[122845] = anon_sym_PLUS_EQ;
	v->a[122846] = anon_sym_DASH_EQ;
	v->a[122847] = anon_sym_STAR_EQ;
	v->a[122848] = anon_sym_SLASH_EQ;
	v->a[122849] = anon_sym_PERCENT_EQ;
	v->a[122850] = anon_sym_STAR_STAR_EQ;
	v->a[122851] = anon_sym_LT_LT_EQ;
	v->a[122852] = anon_sym_GT_GT_EQ;
	v->a[122853] = anon_sym_AMP_EQ;
	v->a[122854] = anon_sym_CARET_EQ;
	v->a[122855] = anon_sym_PIPE_EQ;
	v->a[122856] = anon_sym_PIPE_PIPE;
	v->a[122857] = anon_sym_AMP_AMP;
	v->a[122858] = anon_sym_EQ_EQ;
	v->a[122859] = anon_sym_BANG_EQ;
	small_parse_table_6143(v);
}

void	small_parse_table_6143(t_small_parse_table_array *v)
{
	v->a[122860] = anon_sym_LT_EQ;
	v->a[122861] = anon_sym_GT_EQ;
	v->a[122862] = anon_sym_RBRACK_RBRACK;
	v->a[122863] = anon_sym_EQ_TILDE;
	v->a[122864] = anon_sym_QMARK;
	v->a[122865] = 3;
	v->a[122866] = actions(71);
	v->a[122867] = 1;
	v->a[122868] = sym_comment;
	v->a[122869] = actions(1336);
	v->a[122870] = 14;
	v->a[122871] = anon_sym_PIPE;
	v->a[122872] = anon_sym_LT;
	v->a[122873] = anon_sym_GT;
	v->a[122874] = anon_sym_LT_LT;
	v->a[122875] = anon_sym_AMP_GT;
	v->a[122876] = anon_sym_LT_AMP;
	v->a[122877] = anon_sym_GT_AMP;
	v->a[122878] = anon_sym_DOLLAR;
	v->a[122879] = sym__special_character;
	small_parse_table_6144(v);
}

void	small_parse_table_6144(t_small_parse_table_array *v)
{
	v->a[122880] = aux_sym_number_token1;
	v->a[122881] = aux_sym_number_token2;
	v->a[122882] = anon_sym_DOLLAR_LPAREN;
	v->a[122883] = anon_sym_BQUOTE;
	v->a[122884] = sym_word;
	v->a[122885] = actions(1338);
	v->a[122886] = 27;
	v->a[122887] = sym_file_descriptor;
	v->a[122888] = sym__concat;
	v->a[122889] = sym_variable_name;
	v->a[122890] = sym_test_operator;
	v->a[122891] = sym__brace_start;
	v->a[122892] = anon_sym_LPAREN_LPAREN;
	v->a[122893] = anon_sym_PIPE_PIPE;
	v->a[122894] = anon_sym_AMP_AMP;
	v->a[122895] = anon_sym_GT_GT;
	v->a[122896] = anon_sym_PIPE_AMP;
	v->a[122897] = anon_sym_RBRACK;
	v->a[122898] = anon_sym_AMP_GT_GT;
	v->a[122899] = anon_sym_GT_PIPE;
	small_parse_table_6145(v);
}

/* EOF small_parse_table_1228.c */
