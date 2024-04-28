/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_505.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2525(t_small_parse_table_array *v)
{
	v->a[50500] = sym_file_descriptor;
	v->a[50501] = anon_sym_PIPE_PIPE;
	v->a[50502] = anon_sym_AMP_AMP;
	v->a[50503] = anon_sym_GT_GT;
	v->a[50504] = anon_sym_PIPE_AMP;
	v->a[50505] = anon_sym_AMP_GT_GT;
	v->a[50506] = anon_sym_GT_PIPE;
	v->a[50507] = anon_sym_LT_AMP_DASH;
	v->a[50508] = anon_sym_GT_AMP_DASH;
	v->a[50509] = anon_sym_LT_LT_DASH;
	v->a[50510] = 9;
	v->a[50511] = actions(71);
	v->a[50512] = 1;
	v->a[50513] = sym_comment;
	v->a[50514] = actions(5437);
	v->a[50515] = 1;
	v->a[50516] = anon_sym_DQUOTE;
	v->a[50517] = actions(5439);
	v->a[50518] = 1;
	v->a[50519] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2526(v);
}

void	small_parse_table_2526(t_small_parse_table_array *v)
{
	v->a[50520] = actions(5441);
	v->a[50521] = 1;
	v->a[50522] = anon_sym_DOLLAR_LPAREN;
	v->a[50523] = actions(5443);
	v->a[50524] = 1;
	v->a[50525] = anon_sym_BQUOTE;
	v->a[50526] = actions(5445);
	v->a[50527] = 1;
	v->a[50528] = anon_sym_DOLLAR_BQUOTE;
	v->a[50529] = state(2559);
	v->a[50530] = 3;
	v->a[50531] = sym_string;
	v->a[50532] = sym_expansion;
	v->a[50533] = sym_command_substitution;
	v->a[50534] = actions(5435);
	v->a[50535] = 14;
	v->a[50536] = anon_sym_EQ;
	v->a[50537] = anon_sym_PIPE;
	v->a[50538] = anon_sym_CARET;
	v->a[50539] = anon_sym_AMP;
	small_parse_table_2527(v);
}

void	small_parse_table_2527(t_small_parse_table_array *v)
{
	v->a[50540] = anon_sym_LT;
	v->a[50541] = anon_sym_GT;
	v->a[50542] = anon_sym_LT_LT;
	v->a[50543] = anon_sym_GT_GT;
	v->a[50544] = anon_sym_PLUS;
	v->a[50545] = anon_sym_DASH;
	v->a[50546] = anon_sym_STAR;
	v->a[50547] = anon_sym_SLASH;
	v->a[50548] = anon_sym_PERCENT;
	v->a[50549] = anon_sym_STAR_STAR;
	v->a[50550] = actions(5433);
	v->a[50551] = 25;
	v->a[50552] = sym_test_operator;
	v->a[50553] = anon_sym_RPAREN_RPAREN;
	v->a[50554] = anon_sym_PLUS_PLUS;
	v->a[50555] = anon_sym_DASH_DASH;
	v->a[50556] = anon_sym_PLUS_EQ;
	v->a[50557] = anon_sym_DASH_EQ;
	v->a[50558] = anon_sym_STAR_EQ;
	v->a[50559] = anon_sym_SLASH_EQ;
	small_parse_table_2528(v);
}

void	small_parse_table_2528(t_small_parse_table_array *v)
{
	v->a[50560] = anon_sym_PERCENT_EQ;
	v->a[50561] = anon_sym_STAR_STAR_EQ;
	v->a[50562] = anon_sym_LT_LT_EQ;
	v->a[50563] = anon_sym_GT_GT_EQ;
	v->a[50564] = anon_sym_AMP_EQ;
	v->a[50565] = anon_sym_CARET_EQ;
	v->a[50566] = anon_sym_PIPE_EQ;
	v->a[50567] = anon_sym_PIPE_PIPE;
	v->a[50568] = anon_sym_AMP_AMP;
	v->a[50569] = anon_sym_EQ_EQ;
	v->a[50570] = anon_sym_BANG_EQ;
	v->a[50571] = anon_sym_LT_EQ;
	v->a[50572] = anon_sym_GT_EQ;
	v->a[50573] = anon_sym_RBRACK_RBRACK;
	v->a[50574] = anon_sym_EQ_TILDE;
	v->a[50575] = anon_sym_QMARK;
	v->a[50576] = anon_sym_COLON;
	v->a[50577] = 6;
	v->a[50578] = actions(3);
	v->a[50579] = 1;
	small_parse_table_2529(v);
}

void	small_parse_table_2529(t_small_parse_table_array *v)
{
	v->a[50580] = sym_comment;
	v->a[50581] = actions(5080);
	v->a[50582] = 1;
	v->a[50583] = aux_sym_concatenation_token1;
	v->a[50584] = actions(5082);
	v->a[50585] = 1;
	v->a[50586] = sym__concat;
	v->a[50587] = state(1177);
	v->a[50588] = 1;
	v->a[50589] = aux_sym_concatenation_repeat1;
	v->a[50590] = actions(1263);
	v->a[50591] = 5;
	v->a[50592] = sym_file_descriptor;
	v->a[50593] = sym_test_operator;
	v->a[50594] = sym__bare_dollar;
	v->a[50595] = sym__brace_start;
	v->a[50596] = aux_sym_heredoc_redirect_token1;
	v->a[50597] = actions(1261);
	v->a[50598] = 39;
	v->a[50599] = anon_sym_LPAREN_LPAREN;
	small_parse_table_2530(v);
}

/* EOF small_parse_table_505.c */
