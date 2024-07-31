/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_465.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2325(t_small_parse_table_array *v)
{
	v->a[46500] = state(931);
	v->a[46501] = 3;
	v->a[46502] = sym_file_redirect;
	v->a[46503] = sym_heredoc_redirect;
	v->a[46504] = aux_sym_redirected_statement_repeat1;
	v->a[46505] = actions(1593);
	v->a[46506] = 7;
	v->a[46507] = anon_sym_LT;
	v->a[46508] = anon_sym_GT;
	v->a[46509] = anon_sym_GT_GT;
	v->a[46510] = anon_sym_LT_AMP;
	v->a[46511] = anon_sym_GT_AMP;
	v->a[46512] = anon_sym_GT_PIPE;
	v->a[46513] = anon_sym_LT_GT;
	v->a[46514] = 10;
	v->a[46515] = actions(3);
	v->a[46516] = 1;
	v->a[46517] = sym_comment;
	v->a[46518] = actions(746);
	v->a[46519] = 1;
	small_parse_table_2326(v);
}

void	small_parse_table_2326(t_small_parse_table_array *v)
{
	v->a[46520] = anon_sym_PIPE;
	v->a[46521] = actions(752);
	v->a[46522] = 1;
	v->a[46523] = anon_sym_SEMI;
	v->a[46524] = actions(1595);
	v->a[46525] = 1;
	v->a[46526] = aux_sym_heredoc_redirect_token1;
	v->a[46527] = state(514);
	v->a[46528] = 1;
	v->a[46529] = sym_terminator;
	v->a[46530] = actions(748);
	v->a[46531] = 2;
	v->a[46532] = anon_sym_AMP_AMP;
	v->a[46533] = anon_sym_PIPE_PIPE;
	v->a[46534] = actions(750);
	v->a[46535] = 2;
	v->a[46536] = anon_sym_LT_LT;
	v->a[46537] = anon_sym_LT_LT_DASH;
	v->a[46538] = actions(842);
	v->a[46539] = 2;
	small_parse_table_2327(v);
}

void	small_parse_table_2327(t_small_parse_table_array *v)
{
	v->a[46540] = anon_sym_esac;
	v->a[46541] = anon_sym_SEMI_SEMI;
	v->a[46542] = state(931);
	v->a[46543] = 3;
	v->a[46544] = sym_file_redirect;
	v->a[46545] = sym_heredoc_redirect;
	v->a[46546] = aux_sym_redirected_statement_repeat1;
	v->a[46547] = actions(1593);
	v->a[46548] = 7;
	v->a[46549] = anon_sym_LT;
	v->a[46550] = anon_sym_GT;
	v->a[46551] = anon_sym_GT_GT;
	v->a[46552] = anon_sym_LT_AMP;
	v->a[46553] = anon_sym_GT_AMP;
	v->a[46554] = anon_sym_GT_PIPE;
	v->a[46555] = anon_sym_LT_GT;
	v->a[46556] = 6;
	v->a[46557] = actions(3);
	v->a[46558] = 1;
	v->a[46559] = sym_comment;
	small_parse_table_2328(v);
}

void	small_parse_table_2328(t_small_parse_table_array *v)
{
	v->a[46560] = actions(1599);
	v->a[46561] = 1;
	v->a[46562] = aux_sym_concatenation_token1;
	v->a[46563] = actions(1611);
	v->a[46564] = 1;
	v->a[46565] = sym__concat;
	v->a[46566] = state(829);
	v->a[46567] = 1;
	v->a[46568] = aux_sym_concatenation_repeat1;
	v->a[46569] = actions(1023);
	v->a[46570] = 2;
	v->a[46571] = sym_variable_name;
	v->a[46572] = aux_sym_heredoc_redirect_token1;
	v->a[46573] = actions(1025);
	v->a[46574] = 15;
	v->a[46575] = anon_sym_PIPE;
	v->a[46576] = anon_sym_RPAREN;
	v->a[46577] = anon_sym_SEMI_SEMI;
	v->a[46578] = anon_sym_AMP_AMP;
	v->a[46579] = anon_sym_PIPE_PIPE;
	small_parse_table_2329(v);
}

void	small_parse_table_2329(t_small_parse_table_array *v)
{
	v->a[46580] = anon_sym_LT;
	v->a[46581] = anon_sym_GT;
	v->a[46582] = anon_sym_GT_GT;
	v->a[46583] = anon_sym_LT_AMP;
	v->a[46584] = anon_sym_GT_AMP;
	v->a[46585] = anon_sym_GT_PIPE;
	v->a[46586] = anon_sym_LT_GT;
	v->a[46587] = anon_sym_LT_LT;
	v->a[46588] = anon_sym_LT_LT_DASH;
	v->a[46589] = anon_sym_SEMI;
	v->a[46590] = 10;
	v->a[46591] = actions(3);
	v->a[46592] = 1;
	v->a[46593] = sym_comment;
	v->a[46594] = actions(746);
	v->a[46595] = 1;
	v->a[46596] = anon_sym_PIPE;
	v->a[46597] = actions(842);
	v->a[46598] = 1;
	v->a[46599] = anon_sym_BQUOTE;
	small_parse_table_2330(v);
}

/* EOF small_parse_table_465.c */
