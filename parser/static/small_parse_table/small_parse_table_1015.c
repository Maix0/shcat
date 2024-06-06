/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1015.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5075(t_small_parse_table_array *v)
{
	v->a[101500] = aux_sym_number_token2;
	v->a[101501] = actions(5421);
	v->a[101502] = 1;
	v->a[101503] = anon_sym_DOLLAR_LBRACE;
	v->a[101504] = actions(5423);
	v->a[101505] = 1;
	v->a[101506] = anon_sym_DOLLAR_LPAREN;
	v->a[101507] = actions(5425);
	v->a[101508] = 1;
	v->a[101509] = anon_sym_BQUOTE;
	v->a[101510] = actions(5427);
	v->a[101511] = 1;
	v->a[101512] = anon_sym_DOLLAR_BQUOTE;
	v->a[101513] = actions(5429);
	v->a[101514] = 1;
	v->a[101515] = sym__comment_word;
	v->a[101516] = actions(5431);
	v->a[101517] = 1;
	v->a[101518] = sym__empty_value;
	v->a[101519] = actions(5433);
	small_parse_table_5076(v);
}

void	small_parse_table_5076(t_small_parse_table_array *v)
{
	v->a[101520] = 1;
	v->a[101521] = sym__brace_start;
	v->a[101522] = actions(5802);
	v->a[101523] = 1;
	v->a[101524] = sym_word;
	v->a[101525] = actions(5804);
	v->a[101526] = 1;
	v->a[101527] = sym__special_character;
	v->a[101528] = state(1916);
	v->a[101529] = 1;
	v->a[101530] = aux_sym__literal_repeat1;
	v->a[101531] = state(2141);
	v->a[101532] = 1;
	v->a[101533] = sym_concatenation;
	v->a[101534] = actions(5806);
	v->a[101535] = 2;
	v->a[101536] = sym_test_operator;
	v->a[101537] = sym_raw_string;
	v->a[101538] = state(2146);
	v->a[101539] = 7;
	small_parse_table_5077(v);
}

void	small_parse_table_5077(t_small_parse_table_array *v)
{
	v->a[101540] = sym_arithmetic_expansion;
	v->a[101541] = sym_brace_expression;
	v->a[101542] = sym_string;
	v->a[101543] = sym_number;
	v->a[101544] = sym_simple_expansion;
	v->a[101545] = sym_expansion;
	v->a[101546] = sym_command_substitution;
	v->a[101547] = 7;
	v->a[101548] = actions(3);
	v->a[101549] = 1;
	v->a[101550] = sym_comment;
	v->a[101551] = actions(5256);
	v->a[101552] = 1;
	v->a[101553] = aux_sym_heredoc_redirect_token1;
	v->a[101554] = actions(5808);
	v->a[101555] = 1;
	v->a[101556] = sym_file_descriptor;
	v->a[101557] = actions(5241);
	v->a[101558] = 2;
	v->a[101559] = anon_sym_LT_AMP_DASH;
	small_parse_table_5078(v);
}

void	small_parse_table_5078(t_small_parse_table_array *v)
{
	v->a[101560] = anon_sym_GT_AMP_DASH;
	v->a[101561] = state(2061);
	v->a[101562] = 2;
	v->a[101563] = sym_file_redirect;
	v->a[101564] = aux_sym_redirected_statement_repeat2;
	v->a[101565] = actions(5239);
	v->a[101566] = 8;
	v->a[101567] = anon_sym_LT;
	v->a[101568] = anon_sym_GT;
	v->a[101569] = anon_sym_GT_GT;
	v->a[101570] = anon_sym_AMP_GT;
	v->a[101571] = anon_sym_AMP_GT_GT;
	v->a[101572] = anon_sym_LT_AMP;
	v->a[101573] = anon_sym_GT_AMP;
	v->a[101574] = anon_sym_GT_PIPE;
	v->a[101575] = actions(5254);
	v->a[101576] = 11;
	v->a[101577] = anon_sym_PIPE;
	v->a[101578] = anon_sym_SEMI_SEMI;
	v->a[101579] = anon_sym_SEMI_AMP;
	small_parse_table_5079(v);
}

void	small_parse_table_5079(t_small_parse_table_array *v)
{
	v->a[101580] = anon_sym_SEMI_SEMI_AMP;
	v->a[101581] = anon_sym_PIPE_AMP;
	v->a[101582] = anon_sym_AMP_AMP;
	v->a[101583] = anon_sym_PIPE_PIPE;
	v->a[101584] = anon_sym_LT_LT;
	v->a[101585] = anon_sym_LT_LT_DASH;
	v->a[101586] = anon_sym_AMP;
	v->a[101587] = anon_sym_SEMI;
	v->a[101588] = 19;
	v->a[101589] = actions(3);
	v->a[101590] = 1;
	v->a[101591] = sym_comment;
	v->a[101592] = actions(2458);
	v->a[101593] = 1;
	v->a[101594] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[101595] = actions(2460);
	v->a[101596] = 1;
	v->a[101597] = anon_sym_DOLLAR;
	v->a[101598] = actions(2462);
	v->a[101599] = 1;
	small_parse_table_5080(v);
}

/* EOF small_parse_table_1015.c */
