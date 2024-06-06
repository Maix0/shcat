/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_535.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2675(t_small_parse_table_array *v)
{
	v->a[53500] = anon_sym_DOLLAR_LBRACE;
	v->a[53501] = anon_sym_DOLLAR_LPAREN;
	v->a[53502] = anon_sym_BQUOTE;
	v->a[53503] = anon_sym_DOLLAR_BQUOTE;
	v->a[53504] = sym_word;
	v->a[53505] = 8;
	v->a[53506] = actions(3);
	v->a[53507] = 1;
	v->a[53508] = sym_comment;
	v->a[53509] = actions(3747);
	v->a[53510] = 1;
	v->a[53511] = sym_variable_name;
	v->a[53512] = actions(2526);
	v->a[53513] = 2;
	v->a[53514] = sym_test_operator;
	v->a[53515] = sym__brace_start;
	v->a[53516] = actions(2638);
	v->a[53517] = 2;
	v->a[53518] = sym_file_descriptor;
	v->a[53519] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2676(v);
}

void	small_parse_table_2676(t_small_parse_table_array *v)
{
	v->a[53520] = state(2601);
	v->a[53521] = 2;
	v->a[53522] = sym_variable_assignment;
	v->a[53523] = aux_sym_variable_assignments_repeat1;
	v->a[53524] = state(2613);
	v->a[53525] = 3;
	v->a[53526] = sym_file_redirect;
	v->a[53527] = sym_heredoc_redirect;
	v->a[53528] = aux_sym_redirected_statement_repeat1;
	v->a[53529] = actions(2512);
	v->a[53530] = 12;
	v->a[53531] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53532] = anon_sym_DOLLAR;
	v->a[53533] = sym__special_character;
	v->a[53534] = anon_sym_DQUOTE;
	v->a[53535] = sym_raw_string;
	v->a[53536] = aux_sym_number_token1;
	v->a[53537] = aux_sym_number_token2;
	v->a[53538] = anon_sym_DOLLAR_LBRACE;
	v->a[53539] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2677(v);
}

void	small_parse_table_2677(t_small_parse_table_array *v)
{
	v->a[53540] = anon_sym_BQUOTE;
	v->a[53541] = anon_sym_DOLLAR_BQUOTE;
	v->a[53542] = sym_word;
	v->a[53543] = actions(2516);
	v->a[53544] = 16;
	v->a[53545] = anon_sym_PIPE;
	v->a[53546] = anon_sym_PIPE_AMP;
	v->a[53547] = anon_sym_AMP_AMP;
	v->a[53548] = anon_sym_PIPE_PIPE;
	v->a[53549] = anon_sym_LT;
	v->a[53550] = anon_sym_GT;
	v->a[53551] = anon_sym_GT_GT;
	v->a[53552] = anon_sym_AMP_GT;
	v->a[53553] = anon_sym_AMP_GT_GT;
	v->a[53554] = anon_sym_LT_AMP;
	v->a[53555] = anon_sym_GT_AMP;
	v->a[53556] = anon_sym_GT_PIPE;
	v->a[53557] = anon_sym_LT_AMP_DASH;
	v->a[53558] = anon_sym_GT_AMP_DASH;
	v->a[53559] = anon_sym_LT_LT;
	small_parse_table_2678(v);
}

void	small_parse_table_2678(t_small_parse_table_array *v)
{
	v->a[53560] = anon_sym_LT_LT_DASH;
	v->a[53561] = 5;
	v->a[53562] = actions(3);
	v->a[53563] = 1;
	v->a[53564] = sym_comment;
	v->a[53565] = actions(3750);
	v->a[53566] = 1;
	v->a[53567] = sym__special_character;
	v->a[53568] = state(1169);
	v->a[53569] = 1;
	v->a[53570] = aux_sym__literal_repeat1;
	v->a[53571] = actions(3197);
	v->a[53572] = 4;
	v->a[53573] = sym_file_descriptor;
	v->a[53574] = sym_test_operator;
	v->a[53575] = sym__brace_start;
	v->a[53576] = aux_sym_heredoc_redirect_token1;
	v->a[53577] = actions(3195);
	v->a[53578] = 32;
	v->a[53579] = anon_sym_PIPE;
	small_parse_table_2679(v);
}

void	small_parse_table_2679(t_small_parse_table_array *v)
{
	v->a[53580] = anon_sym_SEMI_SEMI;
	v->a[53581] = anon_sym_SEMI_AMP;
	v->a[53582] = anon_sym_SEMI_SEMI_AMP;
	v->a[53583] = anon_sym_PIPE_AMP;
	v->a[53584] = anon_sym_AMP_AMP;
	v->a[53585] = anon_sym_PIPE_PIPE;
	v->a[53586] = anon_sym_LT;
	v->a[53587] = anon_sym_GT;
	v->a[53588] = anon_sym_GT_GT;
	v->a[53589] = anon_sym_AMP_GT;
	v->a[53590] = anon_sym_AMP_GT_GT;
	v->a[53591] = anon_sym_LT_AMP;
	v->a[53592] = anon_sym_GT_AMP;
	v->a[53593] = anon_sym_GT_PIPE;
	v->a[53594] = anon_sym_LT_AMP_DASH;
	v->a[53595] = anon_sym_GT_AMP_DASH;
	v->a[53596] = anon_sym_LT_LT;
	v->a[53597] = anon_sym_LT_LT_DASH;
	v->a[53598] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53599] = anon_sym_AMP;
	small_parse_table_2680(v);
}

/* EOF small_parse_table_535.c */
