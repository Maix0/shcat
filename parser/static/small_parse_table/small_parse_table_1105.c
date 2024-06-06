/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1105.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5525(t_small_parse_table_array *v)
{
	v->a[110500] = anon_sym_BQUOTE;
	v->a[110501] = actions(5565);
	v->a[110502] = 1;
	v->a[110503] = anon_sym_DOLLAR_BQUOTE;
	v->a[110504] = actions(5571);
	v->a[110505] = 1;
	v->a[110506] = sym__brace_start;
	v->a[110507] = actions(6332);
	v->a[110508] = 1;
	v->a[110509] = sym_word;
	v->a[110510] = actions(6334);
	v->a[110511] = 1;
	v->a[110512] = sym__special_character;
	v->a[110513] = actions(6338);
	v->a[110514] = 1;
	v->a[110515] = sym__comment_word;
	v->a[110516] = actions(6336);
	v->a[110517] = 3;
	v->a[110518] = sym_test_operator;
	v->a[110519] = sym__bare_dollar;
	small_parse_table_5526(v);
}

void	small_parse_table_5526(t_small_parse_table_array *v)
{
	v->a[110520] = sym_raw_string;
	v->a[110521] = state(836);
	v->a[110522] = 7;
	v->a[110523] = sym_arithmetic_expansion;
	v->a[110524] = sym_brace_expression;
	v->a[110525] = sym_string;
	v->a[110526] = sym_number;
	v->a[110527] = sym_simple_expansion;
	v->a[110528] = sym_expansion;
	v->a[110529] = sym_command_substitution;
	v->a[110530] = 3;
	v->a[110531] = actions(3);
	v->a[110532] = 1;
	v->a[110533] = sym_comment;
	v->a[110534] = actions(6107);
	v->a[110535] = 2;
	v->a[110536] = sym_file_descriptor;
	v->a[110537] = aux_sym_heredoc_redirect_token1;
	v->a[110538] = actions(6105);
	v->a[110539] = 21;
	small_parse_table_5527(v);
}

void	small_parse_table_5527(t_small_parse_table_array *v)
{
	v->a[110540] = anon_sym_PIPE;
	v->a[110541] = anon_sym_SEMI_SEMI;
	v->a[110542] = anon_sym_SEMI_AMP;
	v->a[110543] = anon_sym_SEMI_SEMI_AMP;
	v->a[110544] = anon_sym_PIPE_AMP;
	v->a[110545] = anon_sym_AMP_AMP;
	v->a[110546] = anon_sym_PIPE_PIPE;
	v->a[110547] = anon_sym_LT;
	v->a[110548] = anon_sym_GT;
	v->a[110549] = anon_sym_GT_GT;
	v->a[110550] = anon_sym_AMP_GT;
	v->a[110551] = anon_sym_AMP_GT_GT;
	v->a[110552] = anon_sym_LT_AMP;
	v->a[110553] = anon_sym_GT_AMP;
	v->a[110554] = anon_sym_GT_PIPE;
	v->a[110555] = anon_sym_LT_AMP_DASH;
	v->a[110556] = anon_sym_GT_AMP_DASH;
	v->a[110557] = anon_sym_LT_LT;
	v->a[110558] = anon_sym_LT_LT_DASH;
	v->a[110559] = anon_sym_AMP;
	small_parse_table_5528(v);
}

void	small_parse_table_5528(t_small_parse_table_array *v)
{
	v->a[110560] = anon_sym_SEMI;
	v->a[110561] = 3;
	v->a[110562] = actions(3);
	v->a[110563] = 1;
	v->a[110564] = sym_comment;
	v->a[110565] = actions(6111);
	v->a[110566] = 2;
	v->a[110567] = sym_file_descriptor;
	v->a[110568] = aux_sym_heredoc_redirect_token1;
	v->a[110569] = actions(6109);
	v->a[110570] = 21;
	v->a[110571] = anon_sym_PIPE;
	v->a[110572] = anon_sym_SEMI_SEMI;
	v->a[110573] = anon_sym_SEMI_AMP;
	v->a[110574] = anon_sym_SEMI_SEMI_AMP;
	v->a[110575] = anon_sym_PIPE_AMP;
	v->a[110576] = anon_sym_AMP_AMP;
	v->a[110577] = anon_sym_PIPE_PIPE;
	v->a[110578] = anon_sym_LT;
	v->a[110579] = anon_sym_GT;
	small_parse_table_5529(v);
}

void	small_parse_table_5529(t_small_parse_table_array *v)
{
	v->a[110580] = anon_sym_GT_GT;
	v->a[110581] = anon_sym_AMP_GT;
	v->a[110582] = anon_sym_AMP_GT_GT;
	v->a[110583] = anon_sym_LT_AMP;
	v->a[110584] = anon_sym_GT_AMP;
	v->a[110585] = anon_sym_GT_PIPE;
	v->a[110586] = anon_sym_LT_AMP_DASH;
	v->a[110587] = anon_sym_GT_AMP_DASH;
	v->a[110588] = anon_sym_LT_LT;
	v->a[110589] = anon_sym_LT_LT_DASH;
	v->a[110590] = anon_sym_AMP;
	v->a[110591] = anon_sym_SEMI;
	v->a[110592] = 3;
	v->a[110593] = actions(3);
	v->a[110594] = 1;
	v->a[110595] = sym_comment;
	v->a[110596] = actions(6115);
	v->a[110597] = 2;
	v->a[110598] = sym_file_descriptor;
	v->a[110599] = aux_sym_heredoc_redirect_token1;
	small_parse_table_5530(v);
}

/* EOF small_parse_table_1105.c */
