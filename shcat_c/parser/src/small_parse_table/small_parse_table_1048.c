/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1048.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5240(t_small_parse_table_array *v)
{
	v->a[104800] = 3;
	v->a[104801] = actions(71);
	v->a[104802] = 1;
	v->a[104803] = sym_comment;
	v->a[104804] = actions(1304);
	v->a[104805] = 16;
	v->a[104806] = anon_sym_PIPE;
	v->a[104807] = anon_sym_EQ_EQ;
	v->a[104808] = anon_sym_LT;
	v->a[104809] = anon_sym_GT;
	v->a[104810] = anon_sym_LT_LT;
	v->a[104811] = anon_sym_LPAREN;
	v->a[104812] = anon_sym_EQ_TILDE;
	v->a[104813] = anon_sym_AMP_GT;
	v->a[104814] = anon_sym_LT_AMP;
	v->a[104815] = anon_sym_GT_AMP;
	v->a[104816] = anon_sym_DOLLAR;
	v->a[104817] = aux_sym_number_token1;
	v->a[104818] = aux_sym_number_token2;
	v->a[104819] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_5241(v);
}

void	small_parse_table_5241(t_small_parse_table_array *v)
{
	v->a[104820] = anon_sym_BQUOTE;
	v->a[104821] = sym_word;
	v->a[104822] = actions(1306);
	v->a[104823] = 27;
	v->a[104824] = sym_file_descriptor;
	v->a[104825] = sym__concat;
	v->a[104826] = sym_test_operator;
	v->a[104827] = sym__bare_dollar;
	v->a[104828] = sym__brace_start;
	v->a[104829] = anon_sym_LPAREN_LPAREN;
	v->a[104830] = anon_sym_PIPE_PIPE;
	v->a[104831] = anon_sym_AMP_AMP;
	v->a[104832] = anon_sym_GT_GT;
	v->a[104833] = anon_sym_PIPE_AMP;
	v->a[104834] = anon_sym_AMP_GT_GT;
	v->a[104835] = anon_sym_GT_PIPE;
	v->a[104836] = anon_sym_LT_AMP_DASH;
	v->a[104837] = anon_sym_GT_AMP_DASH;
	v->a[104838] = anon_sym_LT_LT_DASH;
	v->a[104839] = anon_sym_LT_LT_LT;
	small_parse_table_5242(v);
}

void	small_parse_table_5242(t_small_parse_table_array *v)
{
	v->a[104840] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[104841] = anon_sym_DOLLAR_LBRACK;
	v->a[104842] = aux_sym_concatenation_token1;
	v->a[104843] = sym__special_character;
	v->a[104844] = anon_sym_DQUOTE;
	v->a[104845] = sym_raw_string;
	v->a[104846] = sym_ansi_c_string;
	v->a[104847] = anon_sym_DOLLAR_LBRACE;
	v->a[104848] = anon_sym_DOLLAR_BQUOTE;
	v->a[104849] = anon_sym_LT_LPAREN;
	v->a[104850] = anon_sym_GT_LPAREN;
	v->a[104851] = 26;
	v->a[104852] = actions(71);
	v->a[104853] = 1;
	v->a[104854] = sym_comment;
	v->a[104855] = actions(1131);
	v->a[104856] = 1;
	v->a[104857] = anon_sym_LPAREN;
	v->a[104858] = actions(1141);
	v->a[104859] = 1;
	small_parse_table_5243(v);
}

void	small_parse_table_5243(t_small_parse_table_array *v)
{
	v->a[104860] = anon_sym_DOLLAR_LBRACK;
	v->a[104861] = actions(1145);
	v->a[104862] = 1;
	v->a[104863] = anon_sym_DOLLAR;
	v->a[104864] = actions(1149);
	v->a[104865] = 1;
	v->a[104866] = anon_sym_DQUOTE;
	v->a[104867] = actions(1153);
	v->a[104868] = 1;
	v->a[104869] = aux_sym_number_token1;
	v->a[104870] = actions(1155);
	v->a[104871] = 1;
	v->a[104872] = aux_sym_number_token2;
	v->a[104873] = actions(1157);
	v->a[104874] = 1;
	v->a[104875] = anon_sym_DOLLAR_LBRACE;
	v->a[104876] = actions(1159);
	v->a[104877] = 1;
	v->a[104878] = anon_sym_DOLLAR_LPAREN;
	v->a[104879] = actions(1163);
	small_parse_table_5244(v);
}

void	small_parse_table_5244(t_small_parse_table_array *v)
{
	v->a[104880] = 1;
	v->a[104881] = anon_sym_DOLLAR_BQUOTE;
	v->a[104882] = actions(1169);
	v->a[104883] = 1;
	v->a[104884] = sym__brace_start;
	v->a[104885] = actions(1211);
	v->a[104886] = 1;
	v->a[104887] = sym_word;
	v->a[104888] = actions(1213);
	v->a[104889] = 1;
	v->a[104890] = anon_sym_BANG;
	v->a[104891] = actions(1219);
	v->a[104892] = 1;
	v->a[104893] = anon_sym_TILDE;
	v->a[104894] = actions(1221);
	v->a[104895] = 1;
	v->a[104896] = sym__special_character;
	v->a[104897] = actions(1225);
	v->a[104898] = 1;
	v->a[104899] = sym_test_operator;
	small_parse_table_5245(v);
}

/* EOF small_parse_table_1048.c */
