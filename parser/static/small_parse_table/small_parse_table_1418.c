/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1418.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7090(t_small_parse_table_array *v)
{
	v->a[141800] = sym__concat;
	v->a[141801] = sym_test_operator;
	v->a[141802] = sym__brace_start;
	v->a[141803] = anon_sym_LPAREN_LPAREN;
	v->a[141804] = anon_sym_PIPE_PIPE;
	v->a[141805] = anon_sym_AMP_AMP;
	v->a[141806] = anon_sym_GT_GT;
	v->a[141807] = anon_sym_PIPE_AMP;
	v->a[141808] = anon_sym_AMP_GT_GT;
	v->a[141809] = anon_sym_GT_PIPE;
	v->a[141810] = anon_sym_LT_AMP_DASH;
	v->a[141811] = anon_sym_GT_AMP_DASH;
	v->a[141812] = anon_sym_LT_LT_DASH;
	v->a[141813] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[141814] = anon_sym_DOLLAR_LBRACK;
	v->a[141815] = aux_sym_concatenation_token1;
	v->a[141816] = sym__special_character;
	v->a[141817] = anon_sym_DQUOTE;
	v->a[141818] = sym_raw_string;
	v->a[141819] = sym_ansi_c_string;
	small_parse_table_7091(v);
}

void	small_parse_table_7091(t_small_parse_table_array *v)
{
	v->a[141820] = anon_sym_DOLLAR_LBRACE;
	v->a[141821] = anon_sym_DOLLAR_BQUOTE;
	v->a[141822] = anon_sym_LT_LPAREN;
	v->a[141823] = anon_sym_GT_LPAREN;
	v->a[141824] = 3;
	v->a[141825] = actions(71);
	v->a[141826] = 1;
	v->a[141827] = sym_comment;
	v->a[141828] = actions(1261);
	v->a[141829] = 14;
	v->a[141830] = anon_sym_EQ;
	v->a[141831] = anon_sym_PIPE;
	v->a[141832] = anon_sym_CARET;
	v->a[141833] = anon_sym_AMP;
	v->a[141834] = anon_sym_LT;
	v->a[141835] = anon_sym_GT;
	v->a[141836] = anon_sym_LT_LT;
	v->a[141837] = anon_sym_GT_GT;
	v->a[141838] = anon_sym_PLUS;
	v->a[141839] = anon_sym_DASH;
	small_parse_table_7092(v);
}

void	small_parse_table_7092(t_small_parse_table_array *v)
{
	v->a[141840] = anon_sym_STAR;
	v->a[141841] = anon_sym_SLASH;
	v->a[141842] = anon_sym_PERCENT;
	v->a[141843] = anon_sym_STAR_STAR;
	v->a[141844] = actions(1263);
	v->a[141845] = 25;
	v->a[141846] = sym_test_operator;
	v->a[141847] = anon_sym_RPAREN_RPAREN;
	v->a[141848] = anon_sym_PLUS_PLUS;
	v->a[141849] = anon_sym_DASH_DASH;
	v->a[141850] = anon_sym_PLUS_EQ;
	v->a[141851] = anon_sym_DASH_EQ;
	v->a[141852] = anon_sym_STAR_EQ;
	v->a[141853] = anon_sym_SLASH_EQ;
	v->a[141854] = anon_sym_PERCENT_EQ;
	v->a[141855] = anon_sym_STAR_STAR_EQ;
	v->a[141856] = anon_sym_LT_LT_EQ;
	v->a[141857] = anon_sym_GT_GT_EQ;
	v->a[141858] = anon_sym_AMP_EQ;
	v->a[141859] = anon_sym_CARET_EQ;
	small_parse_table_7093(v);
}

void	small_parse_table_7093(t_small_parse_table_array *v)
{
	v->a[141860] = anon_sym_PIPE_EQ;
	v->a[141861] = anon_sym_PIPE_PIPE;
	v->a[141862] = anon_sym_AMP_AMP;
	v->a[141863] = anon_sym_EQ_EQ;
	v->a[141864] = anon_sym_BANG_EQ;
	v->a[141865] = anon_sym_LT_EQ;
	v->a[141866] = anon_sym_GT_EQ;
	v->a[141867] = anon_sym_EQ_TILDE;
	v->a[141868] = anon_sym_QMARK;
	v->a[141869] = anon_sym_COLON;
	v->a[141870] = sym__special_character;
	v->a[141871] = 5;
	v->a[141872] = actions(71);
	v->a[141873] = 1;
	v->a[141874] = sym_comment;
	v->a[141875] = actions(6811);
	v->a[141876] = 1;
	v->a[141877] = sym__special_character;
	v->a[141878] = state(2692);
	v->a[141879] = 1;
	small_parse_table_7094(v);
}

void	small_parse_table_7094(t_small_parse_table_array *v)
{
	v->a[141880] = aux_sym__literal_repeat1;
	v->a[141881] = actions(5067);
	v->a[141882] = 13;
	v->a[141883] = anon_sym_PIPE;
	v->a[141884] = anon_sym_LT;
	v->a[141885] = anon_sym_GT;
	v->a[141886] = anon_sym_LT_LT;
	v->a[141887] = anon_sym_AMP_GT;
	v->a[141888] = anon_sym_LT_AMP;
	v->a[141889] = anon_sym_GT_AMP;
	v->a[141890] = anon_sym_DOLLAR;
	v->a[141891] = aux_sym_number_token1;
	v->a[141892] = aux_sym_number_token2;
	v->a[141893] = anon_sym_DOLLAR_LPAREN;
	v->a[141894] = aux_sym__simple_variable_name_token1;
	v->a[141895] = sym_word;
	v->a[141896] = actions(5069);
	v->a[141897] = 24;
	v->a[141898] = sym_file_descriptor;
	v->a[141899] = sym_variable_name;
	small_parse_table_7095(v);
}

/* EOF small_parse_table_1418.c */
