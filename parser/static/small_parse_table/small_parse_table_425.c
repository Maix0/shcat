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
	v->a[42500] = 3;
	v->a[42501] = actions(3);
	v->a[42502] = 1;
	v->a[42503] = sym_comment;
	v->a[42504] = actions(1239);
	v->a[42505] = 2;
	v->a[42506] = sym_file_descriptor;
	v->a[42507] = sym__bare_dollar;
	v->a[42508] = actions(1235);
	v->a[42509] = 25;
	v->a[42510] = anon_sym_PIPE;
	v->a[42511] = anon_sym_RPAREN;
	v->a[42512] = anon_sym_SEMI_SEMI;
	v->a[42513] = anon_sym_AMP_AMP;
	v->a[42514] = anon_sym_PIPE_PIPE;
	v->a[42515] = anon_sym_LT;
	v->a[42516] = anon_sym_GT;
	v->a[42517] = anon_sym_GT_GT;
	v->a[42518] = anon_sym_LT_AMP;
	v->a[42519] = anon_sym_GT_AMP;
	small_parse_table_2126(v);
}

void	small_parse_table_2126(t_small_parse_table_array *v)
{
	v->a[42520] = anon_sym_GT_PIPE;
	v->a[42521] = anon_sym_LT_GT;
	v->a[42522] = anon_sym_LT_LT;
	v->a[42523] = anon_sym_LT_LT_DASH;
	v->a[42524] = aux_sym_heredoc_redirect_token1;
	v->a[42525] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42526] = anon_sym_DOLLAR;
	v->a[42527] = anon_sym_DQUOTE;
	v->a[42528] = sym_raw_string;
	v->a[42529] = sym_number;
	v->a[42530] = anon_sym_DOLLAR_LBRACE;
	v->a[42531] = anon_sym_DOLLAR_LPAREN;
	v->a[42532] = anon_sym_BQUOTE;
	v->a[42533] = sym_word;
	v->a[42534] = anon_sym_SEMI;
	v->a[42535] = 6;
	v->a[42536] = actions(3);
	v->a[42537] = 1;
	v->a[42538] = sym_comment;
	v->a[42539] = actions(1219);
	small_parse_table_2127(v);
}

void	small_parse_table_2127(t_small_parse_table_array *v)
{
	v->a[42540] = 1;
	v->a[42541] = aux_sym_concatenation_token1;
	v->a[42542] = actions(1223);
	v->a[42543] = 1;
	v->a[42544] = sym__concat;
	v->a[42545] = state(748);
	v->a[42546] = 1;
	v->a[42547] = aux_sym_concatenation_repeat1;
	v->a[42548] = actions(1200);
	v->a[42549] = 2;
	v->a[42550] = sym_file_descriptor;
	v->a[42551] = sym_variable_name;
	v->a[42552] = actions(1202);
	v->a[42553] = 22;
	v->a[42554] = anon_sym_PIPE;
	v->a[42555] = anon_sym_AMP_AMP;
	v->a[42556] = anon_sym_PIPE_PIPE;
	v->a[42557] = anon_sym_LT;
	v->a[42558] = anon_sym_GT;
	v->a[42559] = anon_sym_GT_GT;
	small_parse_table_2128(v);
}

void	small_parse_table_2128(t_small_parse_table_array *v)
{
	v->a[42560] = anon_sym_LT_AMP;
	v->a[42561] = anon_sym_GT_AMP;
	v->a[42562] = anon_sym_GT_PIPE;
	v->a[42563] = anon_sym_LT_GT;
	v->a[42564] = anon_sym_LT_LT;
	v->a[42565] = anon_sym_LT_LT_DASH;
	v->a[42566] = aux_sym_heredoc_redirect_token1;
	v->a[42567] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42568] = anon_sym_DOLLAR;
	v->a[42569] = anon_sym_DQUOTE;
	v->a[42570] = sym_raw_string;
	v->a[42571] = sym_number;
	v->a[42572] = anon_sym_DOLLAR_LBRACE;
	v->a[42573] = anon_sym_DOLLAR_LPAREN;
	v->a[42574] = anon_sym_BQUOTE;
	v->a[42575] = sym_word;
	v->a[42576] = 7;
	v->a[42577] = actions(3);
	v->a[42578] = 1;
	v->a[42579] = sym_comment;
	small_parse_table_2129(v);
}

void	small_parse_table_2129(t_small_parse_table_array *v)
{
	v->a[42580] = actions(1457);
	v->a[42581] = 1;
	v->a[42582] = sym_file_descriptor;
	v->a[42583] = actions(1460);
	v->a[42584] = 1;
	v->a[42585] = sym_variable_name;
	v->a[42586] = actions(1527);
	v->a[42587] = 1;
	v->a[42588] = ts_builtin_sym_end;
	v->a[42589] = actions(1454);
	v->a[42590] = 7;
	v->a[42591] = anon_sym_LT;
	v->a[42592] = anon_sym_GT;
	v->a[42593] = anon_sym_GT_GT;
	v->a[42594] = anon_sym_LT_AMP;
	v->a[42595] = anon_sym_GT_AMP;
	v->a[42596] = anon_sym_GT_PIPE;
	v->a[42597] = anon_sym_LT_GT;
	v->a[42598] = actions(1449);
	v->a[42599] = 8;
	small_parse_table_2130(v);
}

/* EOF small_parse_table_425.c */
