/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_785.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3925(t_small_parse_table_array *v)
{
	v->a[78500] = actions(2986);
	v->a[78501] = 2;
	v->a[78502] = anon_sym_GT_GT;
	v->a[78503] = anon_sym_GT_PIPE;
	v->a[78504] = actions(2988);
	v->a[78505] = 2;
	v->a[78506] = anon_sym_LT_AMP_DASH;
	v->a[78507] = anon_sym_GT_AMP_DASH;
	v->a[78508] = state(1596);
	v->a[78509] = 2;
	v->a[78510] = sym_file_redirect;
	v->a[78511] = aux_sym_redirected_statement_repeat2;
	v->a[78512] = actions(2216);
	v->a[78513] = 3;
	v->a[78514] = anon_sym_AMP_AMP;
	v->a[78515] = anon_sym_PIPE_PIPE;
	v->a[78516] = anon_sym_LT_LT_DASH;
	v->a[78517] = actions(2984);
	v->a[78518] = 4;
	v->a[78519] = anon_sym_LT;
	small_parse_table_3926(v);
}

void	small_parse_table_3926(t_small_parse_table_array *v)
{
	v->a[78520] = anon_sym_GT;
	v->a[78521] = anon_sym_LT_AMP;
	v->a[78522] = anon_sym_GT_AMP;
	v->a[78523] = 5;
	v->a[78524] = actions(3);
	v->a[78525] = 1;
	v->a[78526] = sym_comment;
	v->a[78527] = actions(3043);
	v->a[78528] = 1;
	v->a[78529] = anon_sym_PIPE;
	v->a[78530] = state(1563);
	v->a[78531] = 1;
	v->a[78532] = aux_sym_pipeline_repeat1;
	v->a[78533] = actions(2462);
	v->a[78534] = 2;
	v->a[78535] = sym_file_descriptor;
	v->a[78536] = aux_sym_heredoc_redirect_token1;
	v->a[78537] = actions(2466);
	v->a[78538] = 12;
	v->a[78539] = anon_sym_AMP_AMP;
	small_parse_table_3927(v);
}

void	small_parse_table_3927(t_small_parse_table_array *v)
{
	v->a[78540] = anon_sym_PIPE_PIPE;
	v->a[78541] = anon_sym_LT;
	v->a[78542] = anon_sym_GT;
	v->a[78543] = anon_sym_GT_GT;
	v->a[78544] = anon_sym_LT_AMP;
	v->a[78545] = anon_sym_GT_AMP;
	v->a[78546] = anon_sym_GT_PIPE;
	v->a[78547] = anon_sym_LT_AMP_DASH;
	v->a[78548] = anon_sym_GT_AMP_DASH;
	v->a[78549] = anon_sym_LT_LT;
	v->a[78550] = anon_sym_LT_LT_DASH;
	v->a[78551] = 5;
	v->a[78552] = actions(3);
	v->a[78553] = 1;
	v->a[78554] = sym_comment;
	v->a[78555] = actions(3045);
	v->a[78556] = 1;
	v->a[78557] = aux_sym_concatenation_token1;
	v->a[78558] = actions(3047);
	v->a[78559] = 1;
	small_parse_table_3928(v);
}

void	small_parse_table_3928(t_small_parse_table_array *v)
{
	v->a[78560] = sym__concat;
	v->a[78561] = state(1586);
	v->a[78562] = 1;
	v->a[78563] = aux_sym_concatenation_repeat1;
	v->a[78564] = actions(1081);
	v->a[78565] = 13;
	v->a[78566] = anon_sym_SEMI_SEMI;
	v->a[78567] = aux_sym_heredoc_redirect_token1;
	v->a[78568] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78569] = anon_sym_AMP;
	v->a[78570] = anon_sym_DOLLAR;
	v->a[78571] = anon_sym_DQUOTE;
	v->a[78572] = sym_raw_string;
	v->a[78573] = sym_number;
	v->a[78574] = anon_sym_DOLLAR_LBRACE;
	v->a[78575] = anon_sym_DOLLAR_LPAREN;
	v->a[78576] = anon_sym_BQUOTE;
	v->a[78577] = sym_word;
	v->a[78578] = anon_sym_SEMI;
	v->a[78579] = 5;
	small_parse_table_3929(v);
}

void	small_parse_table_3929(t_small_parse_table_array *v)
{
	v->a[78580] = actions(3);
	v->a[78581] = 1;
	v->a[78582] = sym_comment;
	v->a[78583] = actions(3045);
	v->a[78584] = 1;
	v->a[78585] = aux_sym_concatenation_token1;
	v->a[78586] = actions(3049);
	v->a[78587] = 1;
	v->a[78588] = sym__concat;
	v->a[78589] = state(1542);
	v->a[78590] = 1;
	v->a[78591] = aux_sym_concatenation_repeat1;
	v->a[78592] = actions(1301);
	v->a[78593] = 13;
	v->a[78594] = anon_sym_SEMI_SEMI;
	v->a[78595] = aux_sym_heredoc_redirect_token1;
	v->a[78596] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78597] = anon_sym_AMP;
	v->a[78598] = anon_sym_DOLLAR;
	v->a[78599] = anon_sym_DQUOTE;
	small_parse_table_3930(v);
}

/* EOF small_parse_table_785.c */
