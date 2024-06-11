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
	v->a[71500] = 13;
	v->a[71501] = actions(3);
	v->a[71502] = 1;
	v->a[71503] = sym_comment;
	v->a[71504] = actions(807);
	v->a[71505] = 1;
	v->a[71506] = anon_sym_PIPE;
	v->a[71507] = actions(840);
	v->a[71508] = 1;
	v->a[71509] = anon_sym_RPAREN;
	v->a[71510] = actions(2083);
	v->a[71511] = 1;
	v->a[71512] = sym_file_descriptor;
	v->a[71513] = actions(2512);
	v->a[71514] = 1;
	v->a[71515] = anon_sym_SEMI_SEMI;
	v->a[71516] = actions(2514);
	v->a[71517] = 1;
	v->a[71518] = aux_sym_heredoc_redirect_token1;
	v->a[71519] = actions(2516);
	small_parse_table_3576(v);
}

void	small_parse_table_3576(t_small_parse_table_array *v)
{
	v->a[71520] = 1;
	v->a[71521] = anon_sym_AMP;
	v->a[71522] = actions(2518);
	v->a[71523] = 1;
	v->a[71524] = anon_sym_SEMI;
	v->a[71525] = actions(859);
	v->a[71526] = 2;
	v->a[71527] = anon_sym_AMP_AMP;
	v->a[71528] = anon_sym_PIPE_PIPE;
	v->a[71529] = actions(861);
	v->a[71530] = 2;
	v->a[71531] = anon_sym_LT_LT;
	v->a[71532] = anon_sym_LT_LT_DASH;
	v->a[71533] = actions(2079);
	v->a[71534] = 2;
	v->a[71535] = anon_sym_LT_AMP_DASH;
	v->a[71536] = anon_sym_GT_AMP_DASH;
	v->a[71537] = state(1283);
	v->a[71538] = 3;
	v->a[71539] = sym_file_redirect;
	small_parse_table_3577(v);
}

void	small_parse_table_3577(t_small_parse_table_array *v)
{
	v->a[71540] = sym_heredoc_redirect;
	v->a[71541] = aux_sym_redirected_statement_repeat1;
	v->a[71542] = actions(2077);
	v->a[71543] = 8;
	v->a[71544] = anon_sym_LT;
	v->a[71545] = anon_sym_GT;
	v->a[71546] = anon_sym_GT_GT;
	v->a[71547] = anon_sym_AMP_GT;
	v->a[71548] = anon_sym_AMP_GT_GT;
	v->a[71549] = anon_sym_LT_AMP;
	v->a[71550] = anon_sym_GT_AMP;
	v->a[71551] = anon_sym_GT_PIPE;
	v->a[71552] = 5;
	v->a[71553] = actions(3);
	v->a[71554] = 1;
	v->a[71555] = sym_comment;
	v->a[71556] = actions(807);
	v->a[71557] = 1;
	v->a[71558] = anon_sym_PIPE;
	v->a[71559] = actions(803);
	small_parse_table_3578(v);
}

void	small_parse_table_3578(t_small_parse_table_array *v)
{
	v->a[71560] = 2;
	v->a[71561] = sym_file_descriptor;
	v->a[71562] = aux_sym_heredoc_redirect_token1;
	v->a[71563] = state(1214);
	v->a[71564] = 3;
	v->a[71565] = sym_file_redirect;
	v->a[71566] = sym_heredoc_redirect;
	v->a[71567] = aux_sym_redirected_statement_repeat1;
	v->a[71568] = actions(809);
	v->a[71569] = 18;
	v->a[71570] = anon_sym_esac;
	v->a[71571] = anon_sym_SEMI_SEMI;
	v->a[71572] = anon_sym_AMP_AMP;
	v->a[71573] = anon_sym_PIPE_PIPE;
	v->a[71574] = anon_sym_LT;
	v->a[71575] = anon_sym_GT;
	v->a[71576] = anon_sym_GT_GT;
	v->a[71577] = anon_sym_AMP_GT;
	v->a[71578] = anon_sym_AMP_GT_GT;
	v->a[71579] = anon_sym_LT_AMP;
	small_parse_table_3579(v);
}

void	small_parse_table_3579(t_small_parse_table_array *v)
{
	v->a[71580] = anon_sym_GT_AMP;
	v->a[71581] = anon_sym_GT_PIPE;
	v->a[71582] = anon_sym_LT_AMP_DASH;
	v->a[71583] = anon_sym_GT_AMP_DASH;
	v->a[71584] = anon_sym_LT_LT;
	v->a[71585] = anon_sym_LT_LT_DASH;
	v->a[71586] = anon_sym_AMP;
	v->a[71587] = anon_sym_SEMI;
	v->a[71588] = 6;
	v->a[71589] = actions(3);
	v->a[71590] = 1;
	v->a[71591] = sym_comment;
	v->a[71592] = actions(2085);
	v->a[71593] = 1;
	v->a[71594] = aux_sym_concatenation_token1;
	v->a[71595] = actions(2174);
	v->a[71596] = 1;
	v->a[71597] = sym__concat;
	v->a[71598] = state(1189);
	v->a[71599] = 1;
	small_parse_table_3580(v);
}

/* EOF small_parse_table_715.c */
