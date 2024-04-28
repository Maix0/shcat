/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_330.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1650(t_small_parse_table_array *v)
{
	v->a[33000] = anon_sym_LT_LT_DASH;
	v->a[33001] = anon_sym_LT_LT_LT;
	v->a[33002] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33003] = anon_sym_DOLLAR_LBRACK;
	v->a[33004] = sym__special_character;
	v->a[33005] = anon_sym_DQUOTE;
	v->a[33006] = sym_raw_string;
	v->a[33007] = sym_ansi_c_string;
	v->a[33008] = anon_sym_DOLLAR_LBRACE;
	v->a[33009] = anon_sym_BQUOTE;
	v->a[33010] = anon_sym_DOLLAR_BQUOTE;
	v->a[33011] = anon_sym_LT_LPAREN;
	v->a[33012] = anon_sym_GT_LPAREN;
	v->a[33013] = 8;
	v->a[33014] = actions(3);
	v->a[33015] = 1;
	v->a[33016] = sym_comment;
	v->a[33017] = actions(3189);
	v->a[33018] = 1;
	v->a[33019] = anon_sym_DQUOTE;
	small_parse_table_1651(v);
}

void	small_parse_table_1651(t_small_parse_table_array *v)
{
	v->a[33020] = actions(4058);
	v->a[33021] = 1;
	v->a[33022] = sym_variable_name;
	v->a[33023] = state(1737);
	v->a[33024] = 1;
	v->a[33025] = sym_string;
	v->a[33026] = actions(4056);
	v->a[33027] = 2;
	v->a[33028] = aux_sym__simple_variable_name_token1;
	v->a[33029] = aux_sym__multiline_variable_name_token1;
	v->a[33030] = actions(1241);
	v->a[33031] = 3;
	v->a[33032] = sym_file_descriptor;
	v->a[33033] = sym_test_operator;
	v->a[33034] = sym__brace_start;
	v->a[33035] = actions(4054);
	v->a[33036] = 9;
	v->a[33037] = anon_sym_DASH;
	v->a[33038] = anon_sym_STAR;
	v->a[33039] = anon_sym_BANG;
	small_parse_table_1652(v);
}

void	small_parse_table_1652(t_small_parse_table_array *v)
{
	v->a[33040] = anon_sym_QMARK;
	v->a[33041] = anon_sym_DOLLAR;
	v->a[33042] = anon_sym_POUND;
	v->a[33043] = anon_sym_AT2;
	v->a[33044] = anon_sym_0;
	v->a[33045] = anon_sym__;
	v->a[33046] = actions(1239);
	v->a[33047] = 32;
	v->a[33048] = anon_sym_LPAREN_LPAREN;
	v->a[33049] = anon_sym_PIPE_PIPE;
	v->a[33050] = anon_sym_AMP_AMP;
	v->a[33051] = anon_sym_PIPE;
	v->a[33052] = anon_sym_LT;
	v->a[33053] = anon_sym_GT;
	v->a[33054] = anon_sym_LT_LT;
	v->a[33055] = anon_sym_GT_GT;
	v->a[33056] = anon_sym_PIPE_AMP;
	v->a[33057] = anon_sym_AMP_GT;
	v->a[33058] = anon_sym_AMP_GT_GT;
	v->a[33059] = anon_sym_LT_AMP;
	small_parse_table_1653(v);
}

void	small_parse_table_1653(t_small_parse_table_array *v)
{
	v->a[33060] = anon_sym_GT_AMP;
	v->a[33061] = anon_sym_GT_PIPE;
	v->a[33062] = anon_sym_LT_AMP_DASH;
	v->a[33063] = anon_sym_GT_AMP_DASH;
	v->a[33064] = anon_sym_LT_LT_DASH;
	v->a[33065] = aux_sym_heredoc_redirect_token1;
	v->a[33066] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33067] = anon_sym_DOLLAR_LBRACK;
	v->a[33068] = sym__special_character;
	v->a[33069] = sym_raw_string;
	v->a[33070] = sym_ansi_c_string;
	v->a[33071] = aux_sym_number_token1;
	v->a[33072] = aux_sym_number_token2;
	v->a[33073] = anon_sym_DOLLAR_LBRACE;
	v->a[33074] = anon_sym_DOLLAR_LPAREN;
	v->a[33075] = anon_sym_BQUOTE;
	v->a[33076] = anon_sym_DOLLAR_BQUOTE;
	v->a[33077] = anon_sym_LT_LPAREN;
	v->a[33078] = anon_sym_GT_LPAREN;
	v->a[33079] = sym_word;
	small_parse_table_1654(v);
}

void	small_parse_table_1654(t_small_parse_table_array *v)
{
	v->a[33080] = 7;
	v->a[33081] = actions(3);
	v->a[33082] = 1;
	v->a[33083] = sym_comment;
	v->a[33084] = actions(4669);
	v->a[33085] = 1;
	v->a[33086] = anon_sym_LPAREN;
	v->a[33087] = actions(4672);
	v->a[33088] = 1;
	v->a[33089] = aux_sym_concatenation_token1;
	v->a[33090] = actions(4674);
	v->a[33091] = 1;
	v->a[33092] = sym__concat;
	v->a[33093] = state(983);
	v->a[33094] = 1;
	v->a[33095] = aux_sym_concatenation_repeat1;
	v->a[33096] = actions(1281);
	v->a[33097] = 6;
	v->a[33098] = sym_file_descriptor;
	v->a[33099] = sym_test_operator;
	small_parse_table_1655(v);
}

/* EOF small_parse_table_330.c */
