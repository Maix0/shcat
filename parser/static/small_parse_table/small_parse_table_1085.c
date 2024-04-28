/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1085.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5425(t_small_parse_table_array *v)
{
	v->a[108500] = aux_sym_number_token2;
	v->a[108501] = anon_sym_DOLLAR_LPAREN;
	v->a[108502] = anon_sym_BQUOTE;
	v->a[108503] = sym_word;
	v->a[108504] = actions(4554);
	v->a[108505] = 25;
	v->a[108506] = sym_file_descriptor;
	v->a[108507] = sym_test_operator;
	v->a[108508] = sym__bare_dollar;
	v->a[108509] = sym__brace_start;
	v->a[108510] = anon_sym_LPAREN_LPAREN;
	v->a[108511] = anon_sym_PIPE_PIPE;
	v->a[108512] = anon_sym_AMP_AMP;
	v->a[108513] = anon_sym_GT_GT;
	v->a[108514] = anon_sym_PIPE_AMP;
	v->a[108515] = anon_sym_AMP_GT_GT;
	v->a[108516] = anon_sym_GT_PIPE;
	v->a[108517] = anon_sym_LT_AMP_DASH;
	v->a[108518] = anon_sym_GT_AMP_DASH;
	v->a[108519] = anon_sym_LT_LT_DASH;
	small_parse_table_5426(v);
}

void	small_parse_table_5426(t_small_parse_table_array *v)
{
	v->a[108520] = anon_sym_LT_LT_LT;
	v->a[108521] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[108522] = anon_sym_DOLLAR_LBRACK;
	v->a[108523] = sym__special_character;
	v->a[108524] = anon_sym_DQUOTE;
	v->a[108525] = sym_raw_string;
	v->a[108526] = sym_ansi_c_string;
	v->a[108527] = anon_sym_DOLLAR_LBRACE;
	v->a[108528] = anon_sym_DOLLAR_BQUOTE;
	v->a[108529] = anon_sym_LT_LPAREN;
	v->a[108530] = anon_sym_GT_LPAREN;
	v->a[108531] = 5;
	v->a[108532] = actions(71);
	v->a[108533] = 1;
	v->a[108534] = sym_comment;
	v->a[108535] = state(2152);
	v->a[108536] = 1;
	v->a[108537] = aux_sym_concatenation_repeat1;
	v->a[108538] = actions(6133);
	v->a[108539] = 2;
	small_parse_table_5427(v);
}

void	small_parse_table_5427(t_small_parse_table_array *v)
{
	v->a[108540] = sym__concat;
	v->a[108541] = aux_sym_concatenation_token1;
	v->a[108542] = actions(4564);
	v->a[108543] = 15;
	v->a[108544] = anon_sym_PIPE;
	v->a[108545] = anon_sym_EQ_EQ;
	v->a[108546] = anon_sym_LT;
	v->a[108547] = anon_sym_GT;
	v->a[108548] = anon_sym_LT_LT;
	v->a[108549] = anon_sym_EQ_TILDE;
	v->a[108550] = anon_sym_AMP_GT;
	v->a[108551] = anon_sym_LT_AMP;
	v->a[108552] = anon_sym_GT_AMP;
	v->a[108553] = anon_sym_DOLLAR;
	v->a[108554] = aux_sym_number_token1;
	v->a[108555] = aux_sym_number_token2;
	v->a[108556] = anon_sym_DOLLAR_LPAREN;
	v->a[108557] = anon_sym_BQUOTE;
	v->a[108558] = sym_word;
	v->a[108559] = actions(4566);
	small_parse_table_5428(v);
}

void	small_parse_table_5428(t_small_parse_table_array *v)
{
	v->a[108560] = 25;
	v->a[108561] = sym_file_descriptor;
	v->a[108562] = sym_test_operator;
	v->a[108563] = sym__bare_dollar;
	v->a[108564] = sym__brace_start;
	v->a[108565] = anon_sym_LPAREN_LPAREN;
	v->a[108566] = anon_sym_PIPE_PIPE;
	v->a[108567] = anon_sym_AMP_AMP;
	v->a[108568] = anon_sym_GT_GT;
	v->a[108569] = anon_sym_PIPE_AMP;
	v->a[108570] = anon_sym_AMP_GT_GT;
	v->a[108571] = anon_sym_GT_PIPE;
	v->a[108572] = anon_sym_LT_AMP_DASH;
	v->a[108573] = anon_sym_GT_AMP_DASH;
	v->a[108574] = anon_sym_LT_LT_DASH;
	v->a[108575] = anon_sym_LT_LT_LT;
	v->a[108576] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[108577] = anon_sym_DOLLAR_LBRACK;
	v->a[108578] = sym__special_character;
	v->a[108579] = anon_sym_DQUOTE;
	small_parse_table_5429(v);
}

void	small_parse_table_5429(t_small_parse_table_array *v)
{
	v->a[108580] = sym_raw_string;
	v->a[108581] = sym_ansi_c_string;
	v->a[108582] = anon_sym_DOLLAR_LBRACE;
	v->a[108583] = anon_sym_DOLLAR_BQUOTE;
	v->a[108584] = anon_sym_LT_LPAREN;
	v->a[108585] = anon_sym_GT_LPAREN;
	v->a[108586] = 5;
	v->a[108587] = actions(71);
	v->a[108588] = 1;
	v->a[108589] = sym_comment;
	v->a[108590] = state(2127);
	v->a[108591] = 1;
	v->a[108592] = aux_sym_concatenation_repeat1;
	v->a[108593] = actions(6225);
	v->a[108594] = 2;
	v->a[108595] = sym__concat;
	v->a[108596] = aux_sym_concatenation_token1;
	v->a[108597] = actions(1251);
	v->a[108598] = 15;
	v->a[108599] = anon_sym_PIPE;
	small_parse_table_5430(v);
}

/* EOF small_parse_table_1085.c */
