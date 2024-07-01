/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_605.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3025(t_small_parse_table_array *v)
{
	v->a[60500] = actions(754);
	v->a[60501] = 2;
	v->a[60502] = anon_sym_LT_LT;
	v->a[60503] = anon_sym_LT_LT_DASH;
	v->a[60504] = actions(783);
	v->a[60505] = 2;
	v->a[60506] = anon_sym_AMP_AMP;
	v->a[60507] = anon_sym_PIPE_PIPE;
	v->a[60508] = actions(2027);
	v->a[60509] = 2;
	v->a[60510] = anon_sym_LT_AMP_DASH;
	v->a[60511] = anon_sym_GT_AMP_DASH;
	v->a[60512] = actions(781);
	v->a[60513] = 3;
	v->a[60514] = anon_sym_SEMI_SEMI;
	v->a[60515] = anon_sym_AMP;
	v->a[60516] = anon_sym_SEMI;
	v->a[60517] = state(1160);
	v->a[60518] = 3;
	v->a[60519] = sym_file_redirect;
	small_parse_table_3026(v);
}

void	small_parse_table_3026(t_small_parse_table_array *v)
{
	v->a[60520] = sym_heredoc_redirect;
	v->a[60521] = aux_sym_redirected_statement_repeat1;
	v->a[60522] = actions(2025);
	v->a[60523] = 6;
	v->a[60524] = anon_sym_LT;
	v->a[60525] = anon_sym_GT;
	v->a[60526] = anon_sym_GT_GT;
	v->a[60527] = anon_sym_LT_AMP;
	v->a[60528] = anon_sym_GT_AMP;
	v->a[60529] = anon_sym_GT_PIPE;
	v->a[60530] = 12;
	v->a[60531] = actions(3);
	v->a[60532] = 1;
	v->a[60533] = sym_comment;
	v->a[60534] = actions(682);
	v->a[60535] = 1;
	v->a[60536] = anon_sym_PIPE;
	v->a[60537] = actions(695);
	v->a[60538] = 1;
	v->a[60539] = anon_sym_BQUOTE;
	small_parse_table_3027(v);
}

void	small_parse_table_3027(t_small_parse_table_array *v)
{
	v->a[60540] = actions(2009);
	v->a[60541] = 1;
	v->a[60542] = aux_sym_heredoc_redirect_token1;
	v->a[60543] = actions(2041);
	v->a[60544] = 1;
	v->a[60545] = sym_file_descriptor;
	v->a[60546] = state(809);
	v->a[60547] = 1;
	v->a[60548] = sym_terminator;
	v->a[60549] = actions(754);
	v->a[60550] = 2;
	v->a[60551] = anon_sym_LT_LT;
	v->a[60552] = anon_sym_LT_LT_DASH;
	v->a[60553] = actions(963);
	v->a[60554] = 2;
	v->a[60555] = anon_sym_AMP_AMP;
	v->a[60556] = anon_sym_PIPE_PIPE;
	v->a[60557] = actions(2039);
	v->a[60558] = 2;
	v->a[60559] = anon_sym_LT_AMP_DASH;
	small_parse_table_3028(v);
}

void	small_parse_table_3028(t_small_parse_table_array *v)
{
	v->a[60560] = anon_sym_GT_AMP_DASH;
	v->a[60561] = actions(750);
	v->a[60562] = 3;
	v->a[60563] = anon_sym_SEMI_SEMI;
	v->a[60564] = anon_sym_AMP;
	v->a[60565] = anon_sym_SEMI;
	v->a[60566] = state(1165);
	v->a[60567] = 3;
	v->a[60568] = sym_file_redirect;
	v->a[60569] = sym_heredoc_redirect;
	v->a[60570] = aux_sym_redirected_statement_repeat1;
	v->a[60571] = actions(2037);
	v->a[60572] = 6;
	v->a[60573] = anon_sym_LT;
	v->a[60574] = anon_sym_GT;
	v->a[60575] = anon_sym_GT_GT;
	v->a[60576] = anon_sym_LT_AMP;
	v->a[60577] = anon_sym_GT_AMP;
	v->a[60578] = anon_sym_GT_PIPE;
	v->a[60579] = 3;
	small_parse_table_3029(v);
}

void	small_parse_table_3029(t_small_parse_table_array *v)
{
	v->a[60580] = actions(3);
	v->a[60581] = 1;
	v->a[60582] = sym_comment;
	v->a[60583] = actions(1194);
	v->a[60584] = 4;
	v->a[60585] = sym_file_descriptor;
	v->a[60586] = sym__concat;
	v->a[60587] = ts_builtin_sym_end;
	v->a[60588] = aux_sym_heredoc_redirect_token1;
	v->a[60589] = actions(1189);
	v->a[60590] = 19;
	v->a[60591] = anon_sym_PIPE;
	v->a[60592] = anon_sym_RPAREN;
	v->a[60593] = anon_sym_SEMI_SEMI;
	v->a[60594] = anon_sym_AMP_AMP;
	v->a[60595] = anon_sym_PIPE_PIPE;
	v->a[60596] = anon_sym_LT;
	v->a[60597] = anon_sym_GT;
	v->a[60598] = anon_sym_GT_GT;
	v->a[60599] = anon_sym_LT_AMP;
	small_parse_table_3030(v);
}

/* EOF small_parse_table_605.c */
