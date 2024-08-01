/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_425.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2125(t_small_parse_table_array *v)
{
	v->a[42500] = anon_sym_PIPE;
	v->a[42501] = actions(597);
	v->a[42502] = 1;
	v->a[42503] = anon_sym_LT_LT;
	v->a[42504] = actions(716);
	v->a[42505] = 1;
	v->a[42506] = ts_builtin_sym_end;
	v->a[42507] = actions(1874);
	v->a[42508] = 1;
	v->a[42509] = aux_sym_heredoc_redirect_token1;
	v->a[42510] = state(505);
	v->a[42511] = 1;
	v->a[42512] = sym_terminator;
	v->a[42513] = actions(693);
	v->a[42514] = 2;
	v->a[42515] = anon_sym_SEMI_SEMI;
	v->a[42516] = anon_sym_SEMI;
	v->a[42517] = actions(695);
	v->a[42518] = 2;
	v->a[42519] = anon_sym_AMP_AMP;
	small_parse_table_2126(v);
}

void	small_parse_table_2126(t_small_parse_table_array *v)
{
	v->a[42520] = anon_sym_PIPE_PIPE;
	v->a[42521] = actions(1872);
	v->a[42522] = 3;
	v->a[42523] = anon_sym_LT;
	v->a[42524] = anon_sym_GT;
	v->a[42525] = anon_sym_GT_GT;
	v->a[42526] = state(922);
	v->a[42527] = 3;
	v->a[42528] = sym_file_redirect;
	v->a[42529] = sym_heredoc_redirect;
	v->a[42530] = aux_sym_redirected_statement_repeat1;
	v->a[42531] = 6;
	v->a[42532] = actions(3);
	v->a[42533] = 1;
	v->a[42534] = sym_comment;
	v->a[42535] = actions(1890);
	v->a[42536] = 1;
	v->a[42537] = aux_sym_concatenation_token1;
	v->a[42538] = actions(1898);
	v->a[42539] = 1;
	small_parse_table_2127(v);
}

void	small_parse_table_2127(t_small_parse_table_array *v)
{
	v->a[42540] = sym__concat;
	v->a[42541] = state(766);
	v->a[42542] = 1;
	v->a[42543] = aux_sym_concatenation_repeat1;
	v->a[42544] = actions(921);
	v->a[42545] = 2;
	v->a[42546] = sym_variable_name;
	v->a[42547] = aux_sym_heredoc_redirect_token1;
	v->a[42548] = actions(923);
	v->a[42549] = 10;
	v->a[42550] = anon_sym_PIPE;
	v->a[42551] = anon_sym_SEMI_SEMI;
	v->a[42552] = anon_sym_AMP_AMP;
	v->a[42553] = anon_sym_PIPE_PIPE;
	v->a[42554] = anon_sym_LT;
	v->a[42555] = anon_sym_GT;
	v->a[42556] = anon_sym_GT_GT;
	v->a[42557] = anon_sym_LT_LT;
	v->a[42558] = anon_sym_BQUOTE;
	v->a[42559] = anon_sym_SEMI;
	small_parse_table_2128(v);
}

void	small_parse_table_2128(t_small_parse_table_array *v)
{
	v->a[42560] = 10;
	v->a[42561] = actions(3);
	v->a[42562] = 1;
	v->a[42563] = sym_comment;
	v->a[42564] = actions(580);
	v->a[42565] = 1;
	v->a[42566] = anon_sym_PIPE;
	v->a[42567] = actions(597);
	v->a[42568] = 1;
	v->a[42569] = anon_sym_LT_LT;
	v->a[42570] = actions(716);
	v->a[42571] = 1;
	v->a[42572] = ts_builtin_sym_end;
	v->a[42573] = actions(1874);
	v->a[42574] = 1;
	v->a[42575] = aux_sym_heredoc_redirect_token1;
	v->a[42576] = state(471);
	v->a[42577] = 1;
	v->a[42578] = sym_terminator;
	v->a[42579] = actions(693);
	small_parse_table_2129(v);
}

void	small_parse_table_2129(t_small_parse_table_array *v)
{
	v->a[42580] = 2;
	v->a[42581] = anon_sym_SEMI_SEMI;
	v->a[42582] = anon_sym_SEMI;
	v->a[42583] = actions(695);
	v->a[42584] = 2;
	v->a[42585] = anon_sym_AMP_AMP;
	v->a[42586] = anon_sym_PIPE_PIPE;
	v->a[42587] = actions(1872);
	v->a[42588] = 3;
	v->a[42589] = anon_sym_LT;
	v->a[42590] = anon_sym_GT;
	v->a[42591] = anon_sym_GT_GT;
	v->a[42592] = state(922);
	v->a[42593] = 3;
	v->a[42594] = sym_file_redirect;
	v->a[42595] = sym_heredoc_redirect;
	v->a[42596] = aux_sym_redirected_statement_repeat1;
	v->a[42597] = 10;
	v->a[42598] = actions(3);
	v->a[42599] = 1;
	small_parse_table_2130(v);
}

/* EOF small_parse_table_425.c */
