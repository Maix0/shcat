/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_715.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3575(t_small_parse_table_array *v)
{
	v->a[71500] = sym_file_redirect;
	v->a[71501] = sym_heredoc_redirect;
	v->a[71502] = aux_sym_redirected_statement_repeat1;
	v->a[71503] = actions(2454);
	v->a[71504] = 8;
	v->a[71505] = anon_sym_LT;
	v->a[71506] = anon_sym_GT;
	v->a[71507] = anon_sym_GT_GT;
	v->a[71508] = anon_sym_AMP_GT;
	v->a[71509] = anon_sym_AMP_GT_GT;
	v->a[71510] = anon_sym_LT_AMP;
	v->a[71511] = anon_sym_GT_AMP;
	v->a[71512] = anon_sym_GT_PIPE;
	v->a[71513] = 13;
	v->a[71514] = actions(3);
	v->a[71515] = 1;
	v->a[71516] = sym_comment;
	v->a[71517] = actions(2670);
	v->a[71518] = 1;
	v->a[71519] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3576(v);
}

void	small_parse_table_3576(t_small_parse_table_array *v)
{
	v->a[71520] = actions(2673);
	v->a[71521] = 1;
	v->a[71522] = anon_sym_DOLLAR;
	v->a[71523] = actions(2676);
	v->a[71524] = 1;
	v->a[71525] = anon_sym_DQUOTE;
	v->a[71526] = actions(2679);
	v->a[71527] = 1;
	v->a[71528] = aux_sym_number_token1;
	v->a[71529] = actions(2682);
	v->a[71530] = 1;
	v->a[71531] = aux_sym_number_token2;
	v->a[71532] = actions(2685);
	v->a[71533] = 1;
	v->a[71534] = anon_sym_DOLLAR_LBRACE;
	v->a[71535] = actions(2688);
	v->a[71536] = 1;
	v->a[71537] = anon_sym_DOLLAR_LPAREN;
	v->a[71538] = actions(2691);
	v->a[71539] = 1;
	small_parse_table_3577(v);
}

void	small_parse_table_3577(t_small_parse_table_array *v)
{
	v->a[71540] = anon_sym_BQUOTE;
	v->a[71541] = actions(2667);
	v->a[71542] = 2;
	v->a[71543] = sym_raw_string;
	v->a[71544] = sym_word;
	v->a[71545] = state(1232);
	v->a[71546] = 2;
	v->a[71547] = sym_concatenation;
	v->a[71548] = aux_sym_for_statement_repeat1;
	v->a[71549] = actions(636);
	v->a[71550] = 4;
	v->a[71551] = anon_sym_SEMI_SEMI;
	v->a[71552] = aux_sym_heredoc_redirect_token1;
	v->a[71553] = anon_sym_AMP;
	v->a[71554] = anon_sym_SEMI;
	v->a[71555] = state(1503);
	v->a[71556] = 6;
	v->a[71557] = sym_arithmetic_expansion;
	v->a[71558] = sym_string;
	v->a[71559] = sym_number;
	small_parse_table_3578(v);
}

void	small_parse_table_3578(t_small_parse_table_array *v)
{
	v->a[71560] = sym_simple_expansion;
	v->a[71561] = sym_expansion;
	v->a[71562] = sym_command_substitution;
	v->a[71563] = 9;
	v->a[71564] = actions(3);
	v->a[71565] = 1;
	v->a[71566] = sym_comment;
	v->a[71567] = actions(2460);
	v->a[71568] = 1;
	v->a[71569] = sym_file_descriptor;
	v->a[71570] = actions(2548);
	v->a[71571] = 1;
	v->a[71572] = aux_sym_heredoc_redirect_token1;
	v->a[71573] = actions(1062);
	v->a[71574] = 2;
	v->a[71575] = anon_sym_LT_LT;
	v->a[71576] = anon_sym_LT_LT_DASH;
	v->a[71577] = actions(1093);
	v->a[71578] = 2;
	v->a[71579] = anon_sym_AMP_AMP;
	small_parse_table_3579(v);
}

void	small_parse_table_3579(t_small_parse_table_array *v)
{
	v->a[71580] = anon_sym_PIPE_PIPE;
	v->a[71581] = actions(2456);
	v->a[71582] = 2;
	v->a[71583] = anon_sym_LT_AMP_DASH;
	v->a[71584] = anon_sym_GT_AMP_DASH;
	v->a[71585] = actions(1091);
	v->a[71586] = 3;
	v->a[71587] = anon_sym_SEMI_SEMI;
	v->a[71588] = anon_sym_AMP;
	v->a[71589] = anon_sym_SEMI;
	v->a[71590] = state(1160);
	v->a[71591] = 3;
	v->a[71592] = sym_file_redirect;
	v->a[71593] = sym_heredoc_redirect;
	v->a[71594] = aux_sym_redirected_statement_repeat1;
	v->a[71595] = actions(2454);
	v->a[71596] = 8;
	v->a[71597] = anon_sym_LT;
	v->a[71598] = anon_sym_GT;
	v->a[71599] = anon_sym_GT_GT;
	small_parse_table_3580(v);
}

/* EOF small_parse_table_715.c */
