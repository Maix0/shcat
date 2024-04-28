/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1305.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6525(t_small_parse_table_array *v)
{
	v->a[130500] = sym_file_descriptor;
	v->a[130501] = sym__concat;
	v->a[130502] = sym_test_operator;
	v->a[130503] = sym__brace_start;
	v->a[130504] = anon_sym_LPAREN_LPAREN;
	v->a[130505] = anon_sym_PIPE_PIPE;
	v->a[130506] = anon_sym_AMP_AMP;
	v->a[130507] = anon_sym_GT_GT;
	v->a[130508] = anon_sym_PIPE_AMP;
	v->a[130509] = anon_sym_RBRACK;
	v->a[130510] = anon_sym_AMP_GT_GT;
	v->a[130511] = anon_sym_GT_PIPE;
	v->a[130512] = anon_sym_LT_AMP_DASH;
	v->a[130513] = anon_sym_GT_AMP_DASH;
	v->a[130514] = anon_sym_LT_LT_DASH;
	v->a[130515] = anon_sym_LT_LT_LT;
	v->a[130516] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[130517] = anon_sym_DOLLAR_LBRACK;
	v->a[130518] = aux_sym_concatenation_token1;
	v->a[130519] = anon_sym_DQUOTE;
	small_parse_table_6526(v);
}

void	small_parse_table_6526(t_small_parse_table_array *v)
{
	v->a[130520] = sym_raw_string;
	v->a[130521] = sym_ansi_c_string;
	v->a[130522] = anon_sym_DOLLAR_LBRACE;
	v->a[130523] = anon_sym_DOLLAR_BQUOTE;
	v->a[130524] = anon_sym_LT_LPAREN;
	v->a[130525] = anon_sym_GT_LPAREN;
	v->a[130526] = 5;
	v->a[130527] = actions(71);
	v->a[130528] = 1;
	v->a[130529] = sym_comment;
	v->a[130530] = state(2483);
	v->a[130531] = 1;
	v->a[130532] = aux_sym_concatenation_repeat1;
	v->a[130533] = actions(6692);
	v->a[130534] = 2;
	v->a[130535] = sym__concat;
	v->a[130536] = aux_sym_concatenation_token1;
	v->a[130537] = actions(1251);
	v->a[130538] = 13;
	v->a[130539] = anon_sym_PIPE;
	small_parse_table_6527(v);
}

void	small_parse_table_6527(t_small_parse_table_array *v)
{
	v->a[130540] = anon_sym_LT;
	v->a[130541] = anon_sym_GT;
	v->a[130542] = anon_sym_LT_LT;
	v->a[130543] = anon_sym_AMP_GT;
	v->a[130544] = anon_sym_LT_AMP;
	v->a[130545] = anon_sym_GT_AMP;
	v->a[130546] = anon_sym_DOLLAR;
	v->a[130547] = aux_sym_number_token1;
	v->a[130548] = aux_sym_number_token2;
	v->a[130549] = anon_sym_DOLLAR_LPAREN;
	v->a[130550] = anon_sym_BQUOTE;
	v->a[130551] = sym_word;
	v->a[130552] = actions(1253);
	v->a[130553] = 24;
	v->a[130554] = sym_file_descriptor;
	v->a[130555] = sym_test_operator;
	v->a[130556] = sym__brace_start;
	v->a[130557] = anon_sym_LPAREN_LPAREN;
	v->a[130558] = anon_sym_PIPE_PIPE;
	v->a[130559] = anon_sym_AMP_AMP;
	small_parse_table_6528(v);
}

void	small_parse_table_6528(t_small_parse_table_array *v)
{
	v->a[130560] = anon_sym_GT_GT;
	v->a[130561] = anon_sym_PIPE_AMP;
	v->a[130562] = anon_sym_AMP_GT_GT;
	v->a[130563] = anon_sym_GT_PIPE;
	v->a[130564] = anon_sym_LT_AMP_DASH;
	v->a[130565] = anon_sym_GT_AMP_DASH;
	v->a[130566] = anon_sym_LT_LT_DASH;
	v->a[130567] = anon_sym_LT_LT_LT;
	v->a[130568] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[130569] = anon_sym_DOLLAR_LBRACK;
	v->a[130570] = sym__special_character;
	v->a[130571] = anon_sym_DQUOTE;
	v->a[130572] = sym_raw_string;
	v->a[130573] = sym_ansi_c_string;
	v->a[130574] = anon_sym_DOLLAR_LBRACE;
	v->a[130575] = anon_sym_DOLLAR_BQUOTE;
	v->a[130576] = anon_sym_LT_LPAREN;
	v->a[130577] = anon_sym_GT_LPAREN;
	v->a[130578] = 5;
	v->a[130579] = actions(71);
	small_parse_table_6529(v);
}

void	small_parse_table_6529(t_small_parse_table_array *v)
{
	v->a[130580] = 1;
	v->a[130581] = sym_comment;
	v->a[130582] = actions(6695);
	v->a[130583] = 1;
	v->a[130584] = sym__special_character;
	v->a[130585] = state(2557);
	v->a[130586] = 1;
	v->a[130587] = aux_sym__literal_repeat1;
	v->a[130588] = actions(243);
	v->a[130589] = 14;
	v->a[130590] = anon_sym_EQ;
	v->a[130591] = anon_sym_PIPE;
	v->a[130592] = anon_sym_CARET;
	v->a[130593] = anon_sym_AMP;
	v->a[130594] = anon_sym_LT;
	v->a[130595] = anon_sym_GT;
	v->a[130596] = anon_sym_LT_LT;
	v->a[130597] = anon_sym_GT_GT;
	v->a[130598] = anon_sym_PLUS;
	v->a[130599] = anon_sym_DASH;
	small_parse_table_6530(v);
}

/* EOF small_parse_table_1305.c */
