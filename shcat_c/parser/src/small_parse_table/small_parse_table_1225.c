/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1225.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6125(t_small_parse_table_array *v)
{
	v->a[122500] = anon_sym_LT_LPAREN;
	v->a[122501] = anon_sym_GT_LPAREN;
	v->a[122502] = sym_word;
	v->a[122503] = 3;
	v->a[122504] = actions(71);
	v->a[122505] = 1;
	v->a[122506] = sym_comment;
	v->a[122507] = actions(1324);
	v->a[122508] = 15;
	v->a[122509] = anon_sym_PIPE;
	v->a[122510] = anon_sym_EQ_EQ;
	v->a[122511] = anon_sym_LT;
	v->a[122512] = anon_sym_GT;
	v->a[122513] = anon_sym_LT_LT;
	v->a[122514] = anon_sym_EQ_TILDE;
	v->a[122515] = anon_sym_AMP_GT;
	v->a[122516] = anon_sym_LT_AMP;
	v->a[122517] = anon_sym_GT_AMP;
	v->a[122518] = anon_sym_DOLLAR;
	v->a[122519] = aux_sym_number_token1;
	small_parse_table_6126(v);
}

void	small_parse_table_6126(t_small_parse_table_array *v)
{
	v->a[122520] = aux_sym_number_token2;
	v->a[122521] = anon_sym_DOLLAR_LPAREN;
	v->a[122522] = anon_sym_BQUOTE;
	v->a[122523] = sym_word;
	v->a[122524] = actions(1326);
	v->a[122525] = 27;
	v->a[122526] = sym_file_descriptor;
	v->a[122527] = sym__concat;
	v->a[122528] = sym_test_operator;
	v->a[122529] = sym__bare_dollar;
	v->a[122530] = sym__brace_start;
	v->a[122531] = anon_sym_LPAREN_LPAREN;
	v->a[122532] = anon_sym_PIPE_PIPE;
	v->a[122533] = anon_sym_AMP_AMP;
	v->a[122534] = anon_sym_GT_GT;
	v->a[122535] = anon_sym_PIPE_AMP;
	v->a[122536] = anon_sym_AMP_GT_GT;
	v->a[122537] = anon_sym_GT_PIPE;
	v->a[122538] = anon_sym_LT_AMP_DASH;
	v->a[122539] = anon_sym_GT_AMP_DASH;
	small_parse_table_6127(v);
}

void	small_parse_table_6127(t_small_parse_table_array *v)
{
	v->a[122540] = anon_sym_LT_LT_DASH;
	v->a[122541] = anon_sym_LT_LT_LT;
	v->a[122542] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[122543] = anon_sym_DOLLAR_LBRACK;
	v->a[122544] = aux_sym_concatenation_token1;
	v->a[122545] = sym__special_character;
	v->a[122546] = anon_sym_DQUOTE;
	v->a[122547] = sym_raw_string;
	v->a[122548] = sym_ansi_c_string;
	v->a[122549] = anon_sym_DOLLAR_LBRACE;
	v->a[122550] = anon_sym_DOLLAR_BQUOTE;
	v->a[122551] = anon_sym_LT_LPAREN;
	v->a[122552] = anon_sym_GT_LPAREN;
	v->a[122553] = 6;
	v->a[122554] = actions(3);
	v->a[122555] = 1;
	v->a[122556] = sym_comment;
	v->a[122557] = actions(5664);
	v->a[122558] = 1;
	v->a[122559] = aux_sym_concatenation_token1;
	small_parse_table_6128(v);
}

void	small_parse_table_6128(t_small_parse_table_array *v)
{
	v->a[122560] = actions(5666);
	v->a[122561] = 1;
	v->a[122562] = sym__concat;
	v->a[122563] = state(2329);
	v->a[122564] = 1;
	v->a[122565] = aux_sym_concatenation_repeat1;
	v->a[122566] = actions(1263);
	v->a[122567] = 5;
	v->a[122568] = sym_file_descriptor;
	v->a[122569] = sym_variable_name;
	v->a[122570] = sym_test_operator;
	v->a[122571] = sym__brace_start;
	v->a[122572] = aux_sym_heredoc_redirect_token1;
	v->a[122573] = actions(1261);
	v->a[122574] = 34;
	v->a[122575] = anon_sym_LPAREN_LPAREN;
	v->a[122576] = anon_sym_PIPE_PIPE;
	v->a[122577] = anon_sym_AMP_AMP;
	v->a[122578] = anon_sym_PIPE;
	v->a[122579] = anon_sym_LT;
	small_parse_table_6129(v);
}

void	small_parse_table_6129(t_small_parse_table_array *v)
{
	v->a[122580] = anon_sym_GT;
	v->a[122581] = anon_sym_LT_LT;
	v->a[122582] = anon_sym_GT_GT;
	v->a[122583] = anon_sym_PIPE_AMP;
	v->a[122584] = anon_sym_AMP_GT;
	v->a[122585] = anon_sym_AMP_GT_GT;
	v->a[122586] = anon_sym_LT_AMP;
	v->a[122587] = anon_sym_GT_AMP;
	v->a[122588] = anon_sym_GT_PIPE;
	v->a[122589] = anon_sym_LT_AMP_DASH;
	v->a[122590] = anon_sym_GT_AMP_DASH;
	v->a[122591] = anon_sym_LT_LT_DASH;
	v->a[122592] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[122593] = anon_sym_DOLLAR_LBRACK;
	v->a[122594] = anon_sym_DOLLAR;
	v->a[122595] = sym__special_character;
	v->a[122596] = anon_sym_DQUOTE;
	v->a[122597] = sym_raw_string;
	v->a[122598] = sym_ansi_c_string;
	v->a[122599] = aux_sym_number_token1;
	small_parse_table_6130(v);
}

/* EOF small_parse_table_1225.c */
