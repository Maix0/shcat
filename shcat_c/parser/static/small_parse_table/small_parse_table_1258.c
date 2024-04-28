/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1258.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6290(t_small_parse_table_array *v)
{
	v->a[125800] = sym_variable_name;
	v->a[125801] = sym_test_operator;
	v->a[125802] = sym__brace_start;
	v->a[125803] = anon_sym_LPAREN_LPAREN;
	v->a[125804] = anon_sym_PIPE_PIPE;
	v->a[125805] = anon_sym_AMP_AMP;
	v->a[125806] = anon_sym_GT_GT;
	v->a[125807] = anon_sym_PIPE_AMP;
	v->a[125808] = anon_sym_AMP_GT_GT;
	v->a[125809] = anon_sym_GT_PIPE;
	v->a[125810] = anon_sym_LT_AMP_DASH;
	v->a[125811] = anon_sym_GT_AMP_DASH;
	v->a[125812] = anon_sym_LT_LT_DASH;
	v->a[125813] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[125814] = anon_sym_DOLLAR_LBRACK;
	v->a[125815] = sym__special_character;
	v->a[125816] = anon_sym_DQUOTE;
	v->a[125817] = sym_raw_string;
	v->a[125818] = sym_ansi_c_string;
	v->a[125819] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_6291(v);
}

void	small_parse_table_6291(t_small_parse_table_array *v)
{
	v->a[125820] = anon_sym_DOLLAR_BQUOTE;
	v->a[125821] = anon_sym_LT_LPAREN;
	v->a[125822] = anon_sym_GT_LPAREN;
	v->a[125823] = 5;
	v->a[125824] = actions(71);
	v->a[125825] = 1;
	v->a[125826] = sym_comment;
	v->a[125827] = state(2429);
	v->a[125828] = 1;
	v->a[125829] = aux_sym_concatenation_repeat1;
	v->a[125830] = actions(6514);
	v->a[125831] = 2;
	v->a[125832] = sym__concat;
	v->a[125833] = aux_sym_concatenation_token1;
	v->a[125834] = actions(1261);
	v->a[125835] = 13;
	v->a[125836] = anon_sym_PIPE;
	v->a[125837] = anon_sym_LT;
	v->a[125838] = anon_sym_GT;
	v->a[125839] = anon_sym_LT_LT;
	small_parse_table_6292(v);
}

void	small_parse_table_6292(t_small_parse_table_array *v)
{
	v->a[125840] = anon_sym_AMP_GT;
	v->a[125841] = anon_sym_LT_AMP;
	v->a[125842] = anon_sym_GT_AMP;
	v->a[125843] = anon_sym_DOLLAR;
	v->a[125844] = aux_sym_number_token1;
	v->a[125845] = aux_sym_number_token2;
	v->a[125846] = anon_sym_DOLLAR_LPAREN;
	v->a[125847] = anon_sym_BQUOTE;
	v->a[125848] = sym_word;
	v->a[125849] = actions(1263);
	v->a[125850] = 25;
	v->a[125851] = sym_file_descriptor;
	v->a[125852] = sym_variable_name;
	v->a[125853] = sym_test_operator;
	v->a[125854] = sym__brace_start;
	v->a[125855] = anon_sym_LPAREN_LPAREN;
	v->a[125856] = anon_sym_PIPE_PIPE;
	v->a[125857] = anon_sym_AMP_AMP;
	v->a[125858] = anon_sym_GT_GT;
	v->a[125859] = anon_sym_PIPE_AMP;
	small_parse_table_6293(v);
}

void	small_parse_table_6293(t_small_parse_table_array *v)
{
	v->a[125860] = anon_sym_AMP_GT_GT;
	v->a[125861] = anon_sym_GT_PIPE;
	v->a[125862] = anon_sym_LT_AMP_DASH;
	v->a[125863] = anon_sym_GT_AMP_DASH;
	v->a[125864] = anon_sym_LT_LT_DASH;
	v->a[125865] = anon_sym_LT_LT_LT;
	v->a[125866] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[125867] = anon_sym_DOLLAR_LBRACK;
	v->a[125868] = sym__special_character;
	v->a[125869] = anon_sym_DQUOTE;
	v->a[125870] = sym_raw_string;
	v->a[125871] = sym_ansi_c_string;
	v->a[125872] = anon_sym_DOLLAR_LBRACE;
	v->a[125873] = anon_sym_DOLLAR_BQUOTE;
	v->a[125874] = anon_sym_LT_LPAREN;
	v->a[125875] = anon_sym_GT_LPAREN;
	v->a[125876] = 6;
	v->a[125877] = actions(71);
	v->a[125878] = 1;
	v->a[125879] = sym_comment;
	small_parse_table_6294(v);
}

void	small_parse_table_6294(t_small_parse_table_array *v)
{
	v->a[125880] = actions(1369);
	v->a[125881] = 1;
	v->a[125882] = sym_test_operator;
	v->a[125883] = state(2575);
	v->a[125884] = 1;
	v->a[125885] = aux_sym_concatenation_repeat1;
	v->a[125886] = actions(1143);
	v->a[125887] = 2;
	v->a[125888] = sym__concat;
	v->a[125889] = aux_sym_concatenation_token1;
	v->a[125890] = actions(6600);
	v->a[125891] = 14;
	v->a[125892] = anon_sym_EQ;
	v->a[125893] = anon_sym_PIPE;
	v->a[125894] = anon_sym_CARET;
	v->a[125895] = anon_sym_AMP;
	v->a[125896] = anon_sym_LT;
	v->a[125897] = anon_sym_GT;
	v->a[125898] = anon_sym_LT_LT;
	v->a[125899] = anon_sym_GT_GT;
	small_parse_table_6295(v);
}

/* EOF small_parse_table_1258.c */
