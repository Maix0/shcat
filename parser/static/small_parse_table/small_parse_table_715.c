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
	v->a[71500] = sym_raw_string;
	v->a[71501] = sym_number;
	v->a[71502] = anon_sym_DOLLAR_LBRACE;
	v->a[71503] = anon_sym_DOLLAR_LPAREN;
	v->a[71504] = anon_sym_BQUOTE;
	v->a[71505] = sym_word;
	v->a[71506] = anon_sym_SEMI;
	v->a[71507] = 8;
	v->a[71508] = actions(680);
	v->a[71509] = 1;
	v->a[71510] = sym_comment;
	v->a[71511] = actions(2811);
	v->a[71512] = 1;
	v->a[71513] = anon_sym_LT_LT;
	v->a[71514] = actions(2813);
	v->a[71515] = 1;
	v->a[71516] = anon_sym_LT_LT_DASH;
	v->a[71517] = actions(2815);
	v->a[71518] = 1;
	v->a[71519] = sym_file_descriptor;
	small_parse_table_3576(v);
}

void	small_parse_table_3576(t_small_parse_table_array *v)
{
	v->a[71520] = actions(2807);
	v->a[71521] = 2;
	v->a[71522] = anon_sym_LT;
	v->a[71523] = anon_sym_GT;
	v->a[71524] = actions(2819);
	v->a[71525] = 2;
	v->a[71526] = anon_sym_AMP_AMP;
	v->a[71527] = anon_sym_PIPE_PIPE;
	v->a[71528] = state(1415);
	v->a[71529] = 3;
	v->a[71530] = sym_file_redirect;
	v->a[71531] = sym_heredoc_redirect;
	v->a[71532] = aux_sym_redirected_statement_repeat1;
	v->a[71533] = actions(2809);
	v->a[71534] = 5;
	v->a[71535] = anon_sym_GT_GT;
	v->a[71536] = anon_sym_LT_AMP;
	v->a[71537] = anon_sym_GT_AMP;
	v->a[71538] = anon_sym_GT_PIPE;
	v->a[71539] = anon_sym_LT_GT;
	small_parse_table_3577(v);
}

void	small_parse_table_3577(t_small_parse_table_array *v)
{
	v->a[71540] = 3;
	v->a[71541] = actions(3);
	v->a[71542] = 1;
	v->a[71543] = sym_comment;
	v->a[71544] = actions(713);
	v->a[71545] = 1;
	v->a[71546] = sym__concat;
	v->a[71547] = actions(711);
	v->a[71548] = 14;
	v->a[71549] = anon_sym_SEMI_SEMI;
	v->a[71550] = aux_sym_heredoc_redirect_token1;
	v->a[71551] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[71552] = anon_sym_AMP;
	v->a[71553] = aux_sym_concatenation_token1;
	v->a[71554] = anon_sym_DOLLAR;
	v->a[71555] = anon_sym_DQUOTE;
	v->a[71556] = sym_raw_string;
	v->a[71557] = sym_number;
	v->a[71558] = anon_sym_DOLLAR_LBRACE;
	v->a[71559] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3578(v);
}

void	small_parse_table_3578(t_small_parse_table_array *v)
{
	v->a[71560] = anon_sym_BQUOTE;
	v->a[71561] = sym_word;
	v->a[71562] = anon_sym_SEMI;
	v->a[71563] = 7;
	v->a[71564] = actions(680);
	v->a[71565] = 1;
	v->a[71566] = sym_comment;
	v->a[71567] = actions(2821);
	v->a[71568] = 1;
	v->a[71569] = sym_file_descriptor;
	v->a[71570] = actions(2036);
	v->a[71571] = 2;
	v->a[71572] = anon_sym_PIPE;
	v->a[71573] = anon_sym_LT_LT;
	v->a[71574] = actions(2807);
	v->a[71575] = 2;
	v->a[71576] = anon_sym_LT;
	v->a[71577] = anon_sym_GT;
	v->a[71578] = state(1458);
	v->a[71579] = 2;
	small_parse_table_3579(v);
}

void	small_parse_table_3579(t_small_parse_table_array *v)
{
	v->a[71580] = sym_file_redirect;
	v->a[71581] = aux_sym_redirected_statement_repeat2;
	v->a[71582] = actions(2038);
	v->a[71583] = 3;
	v->a[71584] = anon_sym_AMP_AMP;
	v->a[71585] = anon_sym_PIPE_PIPE;
	v->a[71586] = anon_sym_LT_LT_DASH;
	v->a[71587] = actions(2809);
	v->a[71588] = 5;
	v->a[71589] = anon_sym_GT_GT;
	v->a[71590] = anon_sym_LT_AMP;
	v->a[71591] = anon_sym_GT_AMP;
	v->a[71592] = anon_sym_GT_PIPE;
	v->a[71593] = anon_sym_LT_GT;
	v->a[71594] = 8;
	v->a[71595] = actions(680);
	v->a[71596] = 1;
	v->a[71597] = sym_comment;
	v->a[71598] = actions(700);
	v->a[71599] = 1;
	small_parse_table_3580(v);
}

/* EOF small_parse_table_715.c */
