/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1425.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7125(t_small_parse_table_array *v)
{
	v->a[142500] = anon_sym_LT_AMP_DASH;
	v->a[142501] = anon_sym_GT_AMP_DASH;
	v->a[142502] = anon_sym_LT_LT_DASH;
	v->a[142503] = anon_sym_LT_LT_LT;
	v->a[142504] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[142505] = anon_sym_DOLLAR_LBRACK;
	v->a[142506] = anon_sym_DQUOTE;
	v->a[142507] = sym_raw_string;
	v->a[142508] = sym_ansi_c_string;
	v->a[142509] = anon_sym_DOLLAR_LBRACE;
	v->a[142510] = anon_sym_BQUOTE;
	v->a[142511] = anon_sym_DOLLAR_BQUOTE;
	v->a[142512] = anon_sym_LT_LPAREN;
	v->a[142513] = anon_sym_GT_LPAREN;
	v->a[142514] = 5;
	v->a[142515] = actions(71);
	v->a[142516] = 1;
	v->a[142517] = sym_comment;
	v->a[142518] = actions(6866);
	v->a[142519] = 1;
	small_parse_table_7126(v);
}

void	small_parse_table_7126(t_small_parse_table_array *v)
{
	v->a[142520] = sym__special_character;
	v->a[142521] = state(2727);
	v->a[142522] = 1;
	v->a[142523] = aux_sym__literal_repeat1;
	v->a[142524] = actions(1362);
	v->a[142525] = 14;
	v->a[142526] = anon_sym_EQ;
	v->a[142527] = anon_sym_PIPE;
	v->a[142528] = anon_sym_CARET;
	v->a[142529] = anon_sym_AMP;
	v->a[142530] = anon_sym_LT;
	v->a[142531] = anon_sym_GT;
	v->a[142532] = anon_sym_LT_LT;
	v->a[142533] = anon_sym_GT_GT;
	v->a[142534] = anon_sym_PLUS;
	v->a[142535] = anon_sym_DASH;
	v->a[142536] = anon_sym_STAR;
	v->a[142537] = anon_sym_SLASH;
	v->a[142538] = anon_sym_PERCENT;
	v->a[142539] = anon_sym_STAR_STAR;
	small_parse_table_7127(v);
}

void	small_parse_table_7127(t_small_parse_table_array *v)
{
	v->a[142540] = actions(1364);
	v->a[142541] = 23;
	v->a[142542] = sym_test_operator;
	v->a[142543] = anon_sym_PLUS_PLUS;
	v->a[142544] = anon_sym_DASH_DASH;
	v->a[142545] = anon_sym_PLUS_EQ;
	v->a[142546] = anon_sym_DASH_EQ;
	v->a[142547] = anon_sym_STAR_EQ;
	v->a[142548] = anon_sym_SLASH_EQ;
	v->a[142549] = anon_sym_PERCENT_EQ;
	v->a[142550] = anon_sym_STAR_STAR_EQ;
	v->a[142551] = anon_sym_LT_LT_EQ;
	v->a[142552] = anon_sym_GT_GT_EQ;
	v->a[142553] = anon_sym_AMP_EQ;
	v->a[142554] = anon_sym_CARET_EQ;
	v->a[142555] = anon_sym_PIPE_EQ;
	v->a[142556] = anon_sym_PIPE_PIPE;
	v->a[142557] = anon_sym_AMP_AMP;
	v->a[142558] = anon_sym_EQ_EQ;
	v->a[142559] = anon_sym_BANG_EQ;
	small_parse_table_7128(v);
}

void	small_parse_table_7128(t_small_parse_table_array *v)
{
	v->a[142560] = anon_sym_LT_EQ;
	v->a[142561] = anon_sym_GT_EQ;
	v->a[142562] = anon_sym_RBRACK;
	v->a[142563] = anon_sym_EQ_TILDE;
	v->a[142564] = anon_sym_QMARK;
	v->a[142565] = 3;
	v->a[142566] = actions(71);
	v->a[142567] = 1;
	v->a[142568] = sym_comment;
	v->a[142569] = actions(1320);
	v->a[142570] = 14;
	v->a[142571] = anon_sym_EQ;
	v->a[142572] = anon_sym_PIPE;
	v->a[142573] = anon_sym_CARET;
	v->a[142574] = anon_sym_AMP;
	v->a[142575] = anon_sym_LT;
	v->a[142576] = anon_sym_GT;
	v->a[142577] = anon_sym_LT_LT;
	v->a[142578] = anon_sym_GT_GT;
	v->a[142579] = anon_sym_PLUS;
	small_parse_table_7129(v);
}

void	small_parse_table_7129(t_small_parse_table_array *v)
{
	v->a[142580] = anon_sym_DASH;
	v->a[142581] = anon_sym_STAR;
	v->a[142582] = anon_sym_SLASH;
	v->a[142583] = anon_sym_PERCENT;
	v->a[142584] = anon_sym_STAR_STAR;
	v->a[142585] = actions(1322);
	v->a[142586] = 25;
	v->a[142587] = sym__concat;
	v->a[142588] = sym_test_operator;
	v->a[142589] = anon_sym_PLUS_PLUS;
	v->a[142590] = anon_sym_DASH_DASH;
	v->a[142591] = anon_sym_PLUS_EQ;
	v->a[142592] = anon_sym_DASH_EQ;
	v->a[142593] = anon_sym_STAR_EQ;
	v->a[142594] = anon_sym_SLASH_EQ;
	v->a[142595] = anon_sym_PERCENT_EQ;
	v->a[142596] = anon_sym_STAR_STAR_EQ;
	v->a[142597] = anon_sym_LT_LT_EQ;
	v->a[142598] = anon_sym_GT_GT_EQ;
	v->a[142599] = anon_sym_AMP_EQ;
	small_parse_table_7130(v);
}

/* EOF small_parse_table_1425.c */
