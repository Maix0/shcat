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
	v->a[42500] = anon_sym_LT_AMP_DASH;
	v->a[42501] = anon_sym_GT_AMP_DASH;
	v->a[42502] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42503] = anon_sym_DOLLAR;
	v->a[42504] = anon_sym_DQUOTE;
	v->a[42505] = sym_raw_string;
	v->a[42506] = sym_number;
	v->a[42507] = anon_sym_DOLLAR_LBRACE;
	v->a[42508] = anon_sym_DOLLAR_LPAREN;
	v->a[42509] = anon_sym_BQUOTE;
	v->a[42510] = sym_word;
	v->a[42511] = 12;
	v->a[42512] = actions(3);
	v->a[42513] = 1;
	v->a[42514] = sym_comment;
	v->a[42515] = actions(790);
	v->a[42516] = 1;
	v->a[42517] = sym_file_descriptor;
	v->a[42518] = actions(910);
	v->a[42519] = 1;
	small_parse_table_2126(v);
}

void	small_parse_table_2126(t_small_parse_table_array *v)
{
	v->a[42520] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42521] = actions(912);
	v->a[42522] = 1;
	v->a[42523] = anon_sym_DOLLAR;
	v->a[42524] = actions(914);
	v->a[42525] = 1;
	v->a[42526] = anon_sym_DQUOTE;
	v->a[42527] = actions(916);
	v->a[42528] = 1;
	v->a[42529] = anon_sym_DOLLAR_LBRACE;
	v->a[42530] = actions(918);
	v->a[42531] = 1;
	v->a[42532] = anon_sym_DOLLAR_LPAREN;
	v->a[42533] = actions(920);
	v->a[42534] = 1;
	v->a[42535] = anon_sym_BQUOTE;
	v->a[42536] = state(1276);
	v->a[42537] = 1;
	v->a[42538] = sym_concatenation;
	v->a[42539] = actions(1469);
	small_parse_table_2127(v);
}

void	small_parse_table_2127(t_small_parse_table_array *v)
{
	v->a[42540] = 3;
	v->a[42541] = sym_raw_string;
	v->a[42542] = sym_number;
	v->a[42543] = sym_word;
	v->a[42544] = state(1397);
	v->a[42545] = 5;
	v->a[42546] = sym_arithmetic_expansion;
	v->a[42547] = sym_string;
	v->a[42548] = sym_simple_expansion;
	v->a[42549] = sym_expansion;
	v->a[42550] = sym_command_substitution;
	v->a[42551] = actions(788);
	v->a[42552] = 14;
	v->a[42553] = anon_sym_PIPE;
	v->a[42554] = anon_sym_AMP_AMP;
	v->a[42555] = anon_sym_PIPE_PIPE;
	v->a[42556] = anon_sym_LT;
	v->a[42557] = anon_sym_GT;
	v->a[42558] = anon_sym_GT_GT;
	v->a[42559] = anon_sym_LT_AMP;
	small_parse_table_2128(v);
}

void	small_parse_table_2128(t_small_parse_table_array *v)
{
	v->a[42560] = anon_sym_GT_AMP;
	v->a[42561] = anon_sym_GT_PIPE;
	v->a[42562] = anon_sym_LT_AMP_DASH;
	v->a[42563] = anon_sym_GT_AMP_DASH;
	v->a[42564] = anon_sym_LT_LT;
	v->a[42565] = anon_sym_LT_LT_DASH;
	v->a[42566] = aux_sym_heredoc_redirect_token1;
	v->a[42567] = 12;
	v->a[42568] = actions(3);
	v->a[42569] = 1;
	v->a[42570] = sym_comment;
	v->a[42571] = actions(713);
	v->a[42572] = 1;
	v->a[42573] = sym_file_descriptor;
	v->a[42574] = actions(910);
	v->a[42575] = 1;
	v->a[42576] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42577] = actions(912);
	v->a[42578] = 1;
	v->a[42579] = anon_sym_DOLLAR;
	small_parse_table_2129(v);
}

void	small_parse_table_2129(t_small_parse_table_array *v)
{
	v->a[42580] = actions(914);
	v->a[42581] = 1;
	v->a[42582] = anon_sym_DQUOTE;
	v->a[42583] = actions(916);
	v->a[42584] = 1;
	v->a[42585] = anon_sym_DOLLAR_LBRACE;
	v->a[42586] = actions(918);
	v->a[42587] = 1;
	v->a[42588] = anon_sym_DOLLAR_LPAREN;
	v->a[42589] = actions(920);
	v->a[42590] = 1;
	v->a[42591] = anon_sym_BQUOTE;
	v->a[42592] = state(1259);
	v->a[42593] = 1;
	v->a[42594] = sym_concatenation;
	v->a[42595] = actions(1471);
	v->a[42596] = 3;
	v->a[42597] = sym_raw_string;
	v->a[42598] = sym_number;
	v->a[42599] = sym_word;
	small_parse_table_2130(v);
}

/* EOF small_parse_table_425.c */
