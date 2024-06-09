/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_705.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3525(t_small_parse_table_array *v)
{
	v->a[70500] = aux_sym_heredoc_redirect_token1;
	v->a[70501] = actions(2630);
	v->a[70502] = 20;
	v->a[70503] = anon_sym_PIPE;
	v->a[70504] = anon_sym_RPAREN;
	v->a[70505] = anon_sym_SEMI_SEMI;
	v->a[70506] = anon_sym_AMP_AMP;
	v->a[70507] = anon_sym_PIPE_PIPE;
	v->a[70508] = anon_sym_LT;
	v->a[70509] = anon_sym_GT;
	v->a[70510] = anon_sym_GT_GT;
	v->a[70511] = anon_sym_AMP_GT;
	v->a[70512] = anon_sym_AMP_GT_GT;
	v->a[70513] = anon_sym_LT_AMP;
	v->a[70514] = anon_sym_GT_AMP;
	v->a[70515] = anon_sym_GT_PIPE;
	v->a[70516] = anon_sym_LT_AMP_DASH;
	v->a[70517] = anon_sym_GT_AMP_DASH;
	v->a[70518] = anon_sym_LT_LT;
	v->a[70519] = anon_sym_LT_LT_DASH;
	small_parse_table_3526(v);
}

void	small_parse_table_3526(t_small_parse_table_array *v)
{
	v->a[70520] = anon_sym_AMP;
	v->a[70521] = anon_sym_BQUOTE;
	v->a[70522] = anon_sym_SEMI;
	v->a[70523] = 10;
	v->a[70524] = actions(3);
	v->a[70525] = 1;
	v->a[70526] = sym_comment;
	v->a[70527] = actions(2310);
	v->a[70528] = 1;
	v->a[70529] = sym_file_descriptor;
	v->a[70530] = actions(2316);
	v->a[70531] = 1;
	v->a[70532] = aux_sym_heredoc_redirect_token1;
	v->a[70533] = actions(1033);
	v->a[70534] = 2;
	v->a[70535] = anon_sym_esac;
	v->a[70536] = anon_sym_SEMI_SEMI;
	v->a[70537] = actions(1035);
	v->a[70538] = 2;
	v->a[70539] = anon_sym_AMP_AMP;
	small_parse_table_3527(v);
}

void	small_parse_table_3527(t_small_parse_table_array *v)
{
	v->a[70540] = anon_sym_PIPE_PIPE;
	v->a[70541] = actions(1037);
	v->a[70542] = 2;
	v->a[70543] = anon_sym_LT_LT;
	v->a[70544] = anon_sym_LT_LT_DASH;
	v->a[70545] = actions(1039);
	v->a[70546] = 2;
	v->a[70547] = anon_sym_AMP;
	v->a[70548] = anon_sym_SEMI;
	v->a[70549] = actions(2306);
	v->a[70550] = 2;
	v->a[70551] = anon_sym_LT_AMP_DASH;
	v->a[70552] = anon_sym_GT_AMP_DASH;
	v->a[70553] = state(1035);
	v->a[70554] = 3;
	v->a[70555] = sym_file_redirect;
	v->a[70556] = sym_heredoc_redirect;
	v->a[70557] = aux_sym_redirected_statement_repeat1;
	v->a[70558] = actions(2304);
	v->a[70559] = 8;
	small_parse_table_3528(v);
}

void	small_parse_table_3528(t_small_parse_table_array *v)
{
	v->a[70560] = anon_sym_LT;
	v->a[70561] = anon_sym_GT;
	v->a[70562] = anon_sym_GT_GT;
	v->a[70563] = anon_sym_AMP_GT;
	v->a[70564] = anon_sym_AMP_GT_GT;
	v->a[70565] = anon_sym_LT_AMP;
	v->a[70566] = anon_sym_GT_AMP;
	v->a[70567] = anon_sym_GT_PIPE;
	v->a[70568] = 6;
	v->a[70569] = actions(3);
	v->a[70570] = 1;
	v->a[70571] = sym_comment;
	v->a[70572] = actions(2261);
	v->a[70573] = 1;
	v->a[70574] = aux_sym_concatenation_token1;
	v->a[70575] = actions(2263);
	v->a[70576] = 1;
	v->a[70577] = sym__concat;
	v->a[70578] = state(1107);
	v->a[70579] = 1;
	small_parse_table_3529(v);
}

void	small_parse_table_3529(t_small_parse_table_array *v)
{
	v->a[70580] = aux_sym_concatenation_repeat1;
	v->a[70581] = actions(565);
	v->a[70582] = 2;
	v->a[70583] = sym_file_descriptor;
	v->a[70584] = aux_sym_heredoc_redirect_token1;
	v->a[70585] = actions(567);
	v->a[70586] = 18;
	v->a[70587] = anon_sym_PIPE;
	v->a[70588] = anon_sym_SEMI_SEMI;
	v->a[70589] = anon_sym_AMP_AMP;
	v->a[70590] = anon_sym_PIPE_PIPE;
	v->a[70591] = anon_sym_LT;
	v->a[70592] = anon_sym_GT;
	v->a[70593] = anon_sym_GT_GT;
	v->a[70594] = anon_sym_AMP_GT;
	v->a[70595] = anon_sym_AMP_GT_GT;
	v->a[70596] = anon_sym_LT_AMP;
	v->a[70597] = anon_sym_GT_AMP;
	v->a[70598] = anon_sym_GT_PIPE;
	v->a[70599] = anon_sym_LT_AMP_DASH;
	small_parse_table_3530(v);
}

/* EOF small_parse_table_705.c */
