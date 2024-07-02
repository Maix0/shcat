/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_565.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2825(t_small_parse_table_array *v)
{
	v->a[56500] = actions(724);
	v->a[56501] = 1;
	v->a[56502] = anon_sym_RPAREN;
	v->a[56503] = actions(1857);
	v->a[56504] = 1;
	v->a[56505] = aux_sym_heredoc_redirect_token1;
	v->a[56506] = actions(1859);
	v->a[56507] = 1;
	v->a[56508] = sym_file_descriptor;
	v->a[56509] = state(697);
	v->a[56510] = 1;
	v->a[56511] = sym_terminator;
	v->a[56512] = actions(698);
	v->a[56513] = 2;
	v->a[56514] = anon_sym_AMP_AMP;
	v->a[56515] = anon_sym_PIPE_PIPE;
	v->a[56516] = actions(700);
	v->a[56517] = 2;
	v->a[56518] = anon_sym_LT_LT;
	v->a[56519] = anon_sym_LT_LT_DASH;
	small_parse_table_2826(v);
}

void	small_parse_table_2826(t_small_parse_table_array *v)
{
	v->a[56520] = actions(696);
	v->a[56521] = 3;
	v->a[56522] = anon_sym_SEMI_SEMI;
	v->a[56523] = anon_sym_AMP;
	v->a[56524] = anon_sym_SEMI;
	v->a[56525] = state(1031);
	v->a[56526] = 3;
	v->a[56527] = sym_file_redirect;
	v->a[56528] = sym_heredoc_redirect;
	v->a[56529] = aux_sym_redirected_statement_repeat1;
	v->a[56530] = actions(1855);
	v->a[56531] = 7;
	v->a[56532] = anon_sym_LT;
	v->a[56533] = anon_sym_GT;
	v->a[56534] = anon_sym_GT_GT;
	v->a[56535] = anon_sym_LT_AMP;
	v->a[56536] = anon_sym_GT_AMP;
	v->a[56537] = anon_sym_GT_PIPE;
	v->a[56538] = anon_sym_LT_GT;
	v->a[56539] = 11;
	small_parse_table_2827(v);
}

void	small_parse_table_2827(t_small_parse_table_array *v)
{
	v->a[56540] = actions(3);
	v->a[56541] = 1;
	v->a[56542] = sym_comment;
	v->a[56543] = actions(692);
	v->a[56544] = 1;
	v->a[56545] = anon_sym_PIPE;
	v->a[56546] = actions(724);
	v->a[56547] = 1;
	v->a[56548] = anon_sym_RPAREN;
	v->a[56549] = actions(1857);
	v->a[56550] = 1;
	v->a[56551] = aux_sym_heredoc_redirect_token1;
	v->a[56552] = actions(1859);
	v->a[56553] = 1;
	v->a[56554] = sym_file_descriptor;
	v->a[56555] = state(694);
	v->a[56556] = 1;
	v->a[56557] = sym_terminator;
	v->a[56558] = actions(698);
	v->a[56559] = 2;
	small_parse_table_2828(v);
}

void	small_parse_table_2828(t_small_parse_table_array *v)
{
	v->a[56560] = anon_sym_AMP_AMP;
	v->a[56561] = anon_sym_PIPE_PIPE;
	v->a[56562] = actions(700);
	v->a[56563] = 2;
	v->a[56564] = anon_sym_LT_LT;
	v->a[56565] = anon_sym_LT_LT_DASH;
	v->a[56566] = actions(696);
	v->a[56567] = 3;
	v->a[56568] = anon_sym_SEMI_SEMI;
	v->a[56569] = anon_sym_AMP;
	v->a[56570] = anon_sym_SEMI;
	v->a[56571] = state(1031);
	v->a[56572] = 3;
	v->a[56573] = sym_file_redirect;
	v->a[56574] = sym_heredoc_redirect;
	v->a[56575] = aux_sym_redirected_statement_repeat1;
	v->a[56576] = actions(1855);
	v->a[56577] = 7;
	v->a[56578] = anon_sym_LT;
	v->a[56579] = anon_sym_GT;
	small_parse_table_2829(v);
}

void	small_parse_table_2829(t_small_parse_table_array *v)
{
	v->a[56580] = anon_sym_GT_GT;
	v->a[56581] = anon_sym_LT_AMP;
	v->a[56582] = anon_sym_GT_AMP;
	v->a[56583] = anon_sym_GT_PIPE;
	v->a[56584] = anon_sym_LT_GT;
	v->a[56585] = 11;
	v->a[56586] = actions(3);
	v->a[56587] = 1;
	v->a[56588] = sym_comment;
	v->a[56589] = actions(692);
	v->a[56590] = 1;
	v->a[56591] = anon_sym_PIPE;
	v->a[56592] = actions(724);
	v->a[56593] = 1;
	v->a[56594] = anon_sym_RPAREN;
	v->a[56595] = actions(1857);
	v->a[56596] = 1;
	v->a[56597] = aux_sym_heredoc_redirect_token1;
	v->a[56598] = actions(1859);
	v->a[56599] = 1;
	small_parse_table_2830(v);
}

/* EOF small_parse_table_565.c */
