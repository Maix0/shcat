/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1055.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5275(t_small_parse_table_array *v)
{
	v->a[105500] = sym_file_descriptor;
	v->a[105501] = sym__concat;
	v->a[105502] = sym_test_operator;
	v->a[105503] = sym__bare_dollar;
	v->a[105504] = sym__brace_start;
	v->a[105505] = anon_sym_LPAREN_LPAREN;
	v->a[105506] = anon_sym_PIPE_PIPE;
	v->a[105507] = anon_sym_AMP_AMP;
	v->a[105508] = anon_sym_GT_GT;
	v->a[105509] = anon_sym_PIPE_AMP;
	v->a[105510] = anon_sym_AMP_GT_GT;
	v->a[105511] = anon_sym_GT_PIPE;
	v->a[105512] = anon_sym_LT_AMP_DASH;
	v->a[105513] = anon_sym_GT_AMP_DASH;
	v->a[105514] = anon_sym_LT_LT_DASH;
	v->a[105515] = anon_sym_LT_LT_LT;
	v->a[105516] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[105517] = anon_sym_DOLLAR_LBRACK;
	v->a[105518] = aux_sym_concatenation_token1;
	v->a[105519] = sym__special_character;
	small_parse_table_5276(v);
}

void	small_parse_table_5276(t_small_parse_table_array *v)
{
	v->a[105520] = anon_sym_DQUOTE;
	v->a[105521] = sym_raw_string;
	v->a[105522] = sym_ansi_c_string;
	v->a[105523] = anon_sym_DOLLAR_LBRACE;
	v->a[105524] = anon_sym_DOLLAR_BQUOTE;
	v->a[105525] = anon_sym_LT_LPAREN;
	v->a[105526] = anon_sym_GT_LPAREN;
	v->a[105527] = 8;
	v->a[105528] = actions(3);
	v->a[105529] = 1;
	v->a[105530] = sym_comment;
	v->a[105531] = actions(5826);
	v->a[105532] = 1;
	v->a[105533] = aux_sym_heredoc_redirect_token1;
	v->a[105534] = actions(5828);
	v->a[105535] = 1;
	v->a[105536] = sym_file_descriptor;
	v->a[105537] = actions(6151);
	v->a[105538] = 1;
	v->a[105539] = anon_sym_RPAREN;
	small_parse_table_5277(v);
}

void	small_parse_table_5277(t_small_parse_table_array *v)
{
	v->a[105540] = actions(5831);
	v->a[105541] = 3;
	v->a[105542] = sym_variable_name;
	v->a[105543] = sym_test_operator;
	v->a[105544] = sym__brace_start;
	v->a[105545] = actions(5821);
	v->a[105546] = 9;
	v->a[105547] = anon_sym_SEMI;
	v->a[105548] = anon_sym_PIPE_PIPE;
	v->a[105549] = anon_sym_AMP_AMP;
	v->a[105550] = anon_sym_PIPE;
	v->a[105551] = anon_sym_AMP;
	v->a[105552] = anon_sym_LT_LT;
	v->a[105553] = anon_sym_SEMI_SEMI;
	v->a[105554] = anon_sym_PIPE_AMP;
	v->a[105555] = anon_sym_LT_LT_DASH;
	v->a[105556] = actions(5823);
	v->a[105557] = 11;
	v->a[105558] = anon_sym_LT;
	v->a[105559] = anon_sym_GT;
	small_parse_table_5278(v);
}

void	small_parse_table_5278(t_small_parse_table_array *v)
{
	v->a[105560] = anon_sym_GT_GT;
	v->a[105561] = anon_sym_AMP_GT;
	v->a[105562] = anon_sym_AMP_GT_GT;
	v->a[105563] = anon_sym_LT_AMP;
	v->a[105564] = anon_sym_GT_AMP;
	v->a[105565] = anon_sym_GT_PIPE;
	v->a[105566] = anon_sym_LT_AMP_DASH;
	v->a[105567] = anon_sym_GT_AMP_DASH;
	v->a[105568] = anon_sym_LT_LT_LT;
	v->a[105569] = actions(5819);
	v->a[105570] = 17;
	v->a[105571] = anon_sym_LPAREN_LPAREN;
	v->a[105572] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[105573] = anon_sym_DOLLAR_LBRACK;
	v->a[105574] = anon_sym_DOLLAR;
	v->a[105575] = sym__special_character;
	v->a[105576] = anon_sym_DQUOTE;
	v->a[105577] = sym_raw_string;
	v->a[105578] = sym_ansi_c_string;
	v->a[105579] = aux_sym_number_token1;
	small_parse_table_5279(v);
}

void	small_parse_table_5279(t_small_parse_table_array *v)
{
	v->a[105580] = aux_sym_number_token2;
	v->a[105581] = anon_sym_DOLLAR_LBRACE;
	v->a[105582] = anon_sym_DOLLAR_LPAREN;
	v->a[105583] = anon_sym_BQUOTE;
	v->a[105584] = anon_sym_DOLLAR_BQUOTE;
	v->a[105585] = anon_sym_LT_LPAREN;
	v->a[105586] = anon_sym_GT_LPAREN;
	v->a[105587] = sym_word;
	v->a[105588] = 3;
	v->a[105589] = actions(71);
	v->a[105590] = 1;
	v->a[105591] = sym_comment;
	v->a[105592] = actions(1324);
	v->a[105593] = 16;
	v->a[105594] = anon_sym_PIPE;
	v->a[105595] = anon_sym_EQ_EQ;
	v->a[105596] = anon_sym_LT;
	v->a[105597] = anon_sym_GT;
	v->a[105598] = anon_sym_LT_LT;
	v->a[105599] = anon_sym_LPAREN;
	small_parse_table_5280(v);
}

/* EOF small_parse_table_1055.c */
