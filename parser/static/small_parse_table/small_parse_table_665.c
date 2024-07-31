/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_665.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3325(t_small_parse_table_array *v)
{
	v->a[66500] = 2;
	v->a[66501] = sym_regex;
	v->a[66502] = aux_sym__expansion_regex_token1;
	v->a[66503] = actions(3017);
	v->a[66504] = 4;
	v->a[66505] = anon_sym_RPAREN;
	v->a[66506] = anon_sym_RBRACE;
	v->a[66507] = anon_sym_DQUOTE;
	v->a[66508] = sym_raw_string;
	v->a[66509] = 3;
	v->a[66510] = actions(407);
	v->a[66511] = 1;
	v->a[66512] = sym_comment;
	v->a[66513] = actions(443);
	v->a[66514] = 1;
	v->a[66515] = anon_sym_DOLLAR;
	v->a[66516] = actions(445);
	v->a[66517] = 5;
	v->a[66518] = sym_heredoc_content;
	v->a[66519] = sym_heredoc_end;
	small_parse_table_3326(v);
}

void	small_parse_table_3326(t_small_parse_table_array *v)
{
	v->a[66520] = anon_sym_DOLLAR_LBRACE;
	v->a[66521] = anon_sym_DOLLAR_LPAREN;
	v->a[66522] = anon_sym_BQUOTE;
	v->a[66523] = 5;
	v->a[66524] = actions(407);
	v->a[66525] = 1;
	v->a[66526] = sym_comment;
	v->a[66527] = actions(3021);
	v->a[66528] = 1;
	v->a[66529] = sym_simple_heredoc_body;
	v->a[66530] = actions(3023);
	v->a[66531] = 1;
	v->a[66532] = sym__heredoc_body_beginning;
	v->a[66533] = state(1734);
	v->a[66534] = 1;
	v->a[66535] = sym_heredoc_body;
	v->a[66536] = state(1183);
	v->a[66537] = 2;
	v->a[66538] = sym__heredoc_body;
	v->a[66539] = sym__simple_heredoc_body;
	small_parse_table_3327(v);
}

void	small_parse_table_3327(t_small_parse_table_array *v)
{
	v->a[66540] = 6;
	v->a[66541] = actions(407);
	v->a[66542] = 1;
	v->a[66543] = sym_comment;
	v->a[66544] = actions(3023);
	v->a[66545] = 1;
	v->a[66546] = sym__heredoc_body_beginning;
	v->a[66547] = actions(3025);
	v->a[66548] = 1;
	v->a[66549] = sym_simple_heredoc_body;
	v->a[66550] = state(1424);
	v->a[66551] = 1;
	v->a[66552] = sym__heredoc_body;
	v->a[66553] = state(1427);
	v->a[66554] = 1;
	v->a[66555] = sym__simple_heredoc_body;
	v->a[66556] = state(1778);
	v->a[66557] = 1;
	v->a[66558] = sym_heredoc_body;
	v->a[66559] = 5;
	small_parse_table_3328(v);
}

void	small_parse_table_3328(t_small_parse_table_array *v)
{
	v->a[66560] = actions(407);
	v->a[66561] = 1;
	v->a[66562] = sym_comment;
	v->a[66563] = actions(3021);
	v->a[66564] = 1;
	v->a[66565] = sym_simple_heredoc_body;
	v->a[66566] = actions(3023);
	v->a[66567] = 1;
	v->a[66568] = sym__heredoc_body_beginning;
	v->a[66569] = state(1734);
	v->a[66570] = 1;
	v->a[66571] = sym_heredoc_body;
	v->a[66572] = state(1135);
	v->a[66573] = 2;
	v->a[66574] = sym__heredoc_body;
	v->a[66575] = sym__simple_heredoc_body;
	v->a[66576] = 6;
	v->a[66577] = actions(407);
	v->a[66578] = 1;
	v->a[66579] = sym_comment;
	small_parse_table_3329(v);
}

void	small_parse_table_3329(t_small_parse_table_array *v)
{
	v->a[66580] = actions(3021);
	v->a[66581] = 1;
	v->a[66582] = sym_simple_heredoc_body;
	v->a[66583] = actions(3023);
	v->a[66584] = 1;
	v->a[66585] = sym__heredoc_body_beginning;
	v->a[66586] = state(1137);
	v->a[66587] = 1;
	v->a[66588] = sym__heredoc_body;
	v->a[66589] = state(1138);
	v->a[66590] = 1;
	v->a[66591] = sym__simple_heredoc_body;
	v->a[66592] = state(1734);
	v->a[66593] = 1;
	v->a[66594] = sym_heredoc_body;
	v->a[66595] = 5;
	v->a[66596] = actions(3);
	v->a[66597] = 1;
	v->a[66598] = sym_comment;
	v->a[66599] = actions(2938);
	small_parse_table_3330(v);
}

/* EOF small_parse_table_665.c */
