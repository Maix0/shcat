/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1735.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8675(t_small_parse_table_array *v)
{
	v->a[173500] = actions(3);
	v->a[173501] = 1;
	v->a[173502] = sym_comment;
	v->a[173503] = actions(4084);
	v->a[173504] = 1;
	v->a[173505] = anon_sym_DQUOTE;
	v->a[173506] = actions(7613);
	v->a[173507] = 1;
	v->a[173508] = sym_variable_name;
	v->a[173509] = state(4606);
	v->a[173510] = 1;
	v->a[173511] = sym_string;
	v->a[173512] = actions(1235);
	v->a[173513] = 2;
	v->a[173514] = sym_file_descriptor;
	v->a[173515] = ts_builtin_sym_end;
	v->a[173516] = actions(7611);
	v->a[173517] = 2;
	v->a[173518] = aux_sym__simple_variable_name_token1;
	v->a[173519] = aux_sym__multiline_variable_name_token1;
	small_parse_table_8676(v);
}

void	small_parse_table_8676(t_small_parse_table_array *v)
{
	v->a[173520] = actions(7609);
	v->a[173521] = 9;
	v->a[173522] = anon_sym_DASH;
	v->a[173523] = anon_sym_STAR;
	v->a[173524] = anon_sym_BANG;
	v->a[173525] = anon_sym_QMARK;
	v->a[173526] = anon_sym_DOLLAR;
	v->a[173527] = anon_sym_POUND;
	v->a[173528] = anon_sym_AT2;
	v->a[173529] = anon_sym_0;
	v->a[173530] = anon_sym__;
	v->a[173531] = actions(1227);
	v->a[173532] = 20;
	v->a[173533] = anon_sym_SEMI;
	v->a[173534] = anon_sym_PIPE_PIPE;
	v->a[173535] = anon_sym_AMP_AMP;
	v->a[173536] = anon_sym_PIPE;
	v->a[173537] = anon_sym_AMP;
	v->a[173538] = anon_sym_LT;
	v->a[173539] = anon_sym_GT;
	small_parse_table_8677(v);
}

void	small_parse_table_8677(t_small_parse_table_array *v)
{
	v->a[173540] = anon_sym_LT_LT;
	v->a[173541] = anon_sym_GT_GT;
	v->a[173542] = anon_sym_SEMI_SEMI;
	v->a[173543] = anon_sym_PIPE_AMP;
	v->a[173544] = anon_sym_AMP_GT;
	v->a[173545] = anon_sym_AMP_GT_GT;
	v->a[173546] = anon_sym_LT_AMP;
	v->a[173547] = anon_sym_GT_AMP;
	v->a[173548] = anon_sym_GT_PIPE;
	v->a[173549] = anon_sym_LT_AMP_DASH;
	v->a[173550] = anon_sym_GT_AMP_DASH;
	v->a[173551] = anon_sym_LT_LT_DASH;
	v->a[173552] = aux_sym_heredoc_redirect_token1;
	v->a[173553] = 19;
	v->a[173554] = actions(71);
	v->a[173555] = 1;
	v->a[173556] = sym_comment;
	v->a[173557] = actions(7005);
	v->a[173558] = 1;
	v->a[173559] = anon_sym_RBRACK;
	small_parse_table_8678(v);
}

void	small_parse_table_8678(t_small_parse_table_array *v)
{
	v->a[173560] = actions(7567);
	v->a[173561] = 1;
	v->a[173562] = anon_sym_EQ;
	v->a[173563] = actions(7573);
	v->a[173564] = 1;
	v->a[173565] = anon_sym_PIPE_PIPE;
	v->a[173566] = actions(7575);
	v->a[173567] = 1;
	v->a[173568] = anon_sym_AMP_AMP;
	v->a[173569] = actions(7577);
	v->a[173570] = 1;
	v->a[173571] = anon_sym_PIPE;
	v->a[173572] = actions(7579);
	v->a[173573] = 1;
	v->a[173574] = anon_sym_CARET;
	v->a[173575] = actions(7581);
	v->a[173576] = 1;
	v->a[173577] = anon_sym_AMP;
	v->a[173578] = actions(7595);
	v->a[173579] = 1;
	small_parse_table_8679(v);
}

void	small_parse_table_8679(t_small_parse_table_array *v)
{
	v->a[173580] = anon_sym_STAR_STAR;
	v->a[173581] = actions(7597);
	v->a[173582] = 1;
	v->a[173583] = anon_sym_EQ_TILDE;
	v->a[173584] = actions(7599);
	v->a[173585] = 1;
	v->a[173586] = anon_sym_QMARK;
	v->a[173587] = actions(7569);
	v->a[173588] = 2;
	v->a[173589] = anon_sym_PLUS_PLUS;
	v->a[173590] = anon_sym_DASH_DASH;
	v->a[173591] = actions(7583);
	v->a[173592] = 2;
	v->a[173593] = anon_sym_EQ_EQ;
	v->a[173594] = anon_sym_BANG_EQ;
	v->a[173595] = actions(7585);
	v->a[173596] = 2;
	v->a[173597] = anon_sym_LT;
	v->a[173598] = anon_sym_GT;
	v->a[173599] = actions(7587);
	small_parse_table_8680(v);
}

/* EOF small_parse_table_1735.c */
