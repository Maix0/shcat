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
	v->a[56500] = anon_sym_GT_GT;
	v->a[56501] = anon_sym_LT_AMP;
	v->a[56502] = anon_sym_GT_AMP;
	v->a[56503] = anon_sym_GT_PIPE;
	v->a[56504] = anon_sym_LT_GT;
	v->a[56505] = 11;
	v->a[56506] = actions(3);
	v->a[56507] = 1;
	v->a[56508] = sym_comment;
	v->a[56509] = actions(782);
	v->a[56510] = 1;
	v->a[56511] = anon_sym_PIPE;
	v->a[56512] = actions(784);
	v->a[56513] = 1;
	v->a[56514] = anon_sym_RPAREN;
	v->a[56515] = actions(1888);
	v->a[56516] = 1;
	v->a[56517] = aux_sym_heredoc_redirect_token1;
	v->a[56518] = actions(1933);
	v->a[56519] = 1;
	small_parse_table_2826(v);
}

void	small_parse_table_2826(t_small_parse_table_array *v)
{
	v->a[56520] = sym_file_descriptor;
	v->a[56521] = state(566);
	v->a[56522] = 1;
	v->a[56523] = sym_terminator;
	v->a[56524] = actions(786);
	v->a[56525] = 2;
	v->a[56526] = anon_sym_SEMI_SEMI;
	v->a[56527] = anon_sym_SEMI;
	v->a[56528] = actions(788);
	v->a[56529] = 2;
	v->a[56530] = anon_sym_AMP_AMP;
	v->a[56531] = anon_sym_PIPE_PIPE;
	v->a[56532] = actions(790);
	v->a[56533] = 2;
	v->a[56534] = anon_sym_LT_LT;
	v->a[56535] = anon_sym_LT_LT_DASH;
	v->a[56536] = state(1034);
	v->a[56537] = 3;
	v->a[56538] = sym_file_redirect;
	v->a[56539] = sym_heredoc_redirect;
	small_parse_table_2827(v);
}

void	small_parse_table_2827(t_small_parse_table_array *v)
{
	v->a[56540] = aux_sym_redirected_statement_repeat1;
	v->a[56541] = actions(1931);
	v->a[56542] = 7;
	v->a[56543] = anon_sym_LT;
	v->a[56544] = anon_sym_GT;
	v->a[56545] = anon_sym_GT_GT;
	v->a[56546] = anon_sym_LT_AMP;
	v->a[56547] = anon_sym_GT_AMP;
	v->a[56548] = anon_sym_GT_PIPE;
	v->a[56549] = anon_sym_LT_GT;
	v->a[56550] = 6;
	v->a[56551] = actions(3);
	v->a[56552] = 1;
	v->a[56553] = sym_comment;
	v->a[56554] = actions(1902);
	v->a[56555] = 1;
	v->a[56556] = aux_sym_concatenation_token1;
	v->a[56557] = actions(1935);
	v->a[56558] = 1;
	v->a[56559] = sym__concat;
	small_parse_table_2828(v);
}

void	small_parse_table_2828(t_small_parse_table_array *v)
{
	v->a[56560] = state(960);
	v->a[56561] = 1;
	v->a[56562] = aux_sym_concatenation_repeat1;
	v->a[56563] = actions(1200);
	v->a[56564] = 3;
	v->a[56565] = sym_file_descriptor;
	v->a[56566] = sym_variable_name;
	v->a[56567] = aux_sym_heredoc_redirect_token1;
	v->a[56568] = actions(1202);
	v->a[56569] = 15;
	v->a[56570] = anon_sym_PIPE;
	v->a[56571] = anon_sym_SEMI_SEMI;
	v->a[56572] = anon_sym_AMP_AMP;
	v->a[56573] = anon_sym_PIPE_PIPE;
	v->a[56574] = anon_sym_LT;
	v->a[56575] = anon_sym_GT;
	v->a[56576] = anon_sym_GT_GT;
	v->a[56577] = anon_sym_LT_AMP;
	v->a[56578] = anon_sym_GT_AMP;
	v->a[56579] = anon_sym_GT_PIPE;
	small_parse_table_2829(v);
}

void	small_parse_table_2829(t_small_parse_table_array *v)
{
	v->a[56580] = anon_sym_LT_GT;
	v->a[56581] = anon_sym_LT_LT;
	v->a[56582] = anon_sym_LT_LT_DASH;
	v->a[56583] = anon_sym_BQUOTE;
	v->a[56584] = anon_sym_SEMI;
	v->a[56585] = 6;
	v->a[56586] = actions(3);
	v->a[56587] = 1;
	v->a[56588] = sym_comment;
	v->a[56589] = actions(1902);
	v->a[56590] = 1;
	v->a[56591] = aux_sym_concatenation_token1;
	v->a[56592] = actions(1939);
	v->a[56593] = 1;
	v->a[56594] = sym__concat;
	v->a[56595] = state(908);
	v->a[56596] = 1;
	v->a[56597] = aux_sym_concatenation_repeat1;
	v->a[56598] = actions(1097);
	v->a[56599] = 3;
	small_parse_table_2830(v);
}

/* EOF small_parse_table_565.c */
