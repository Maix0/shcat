/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1295.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6475(t_small_parse_table_array *v)
{
	v->a[129500] = sym_raw_string;
	v->a[129501] = sym_ansi_c_string;
	v->a[129502] = anon_sym_DOLLAR_LBRACE;
	v->a[129503] = anon_sym_DOLLAR_BQUOTE;
	v->a[129504] = anon_sym_LT_LPAREN;
	v->a[129505] = anon_sym_GT_LPAREN;
	v->a[129506] = 7;
	v->a[129507] = actions(71);
	v->a[129508] = 1;
	v->a[129509] = sym_comment;
	v->a[129510] = actions(1207);
	v->a[129511] = 1;
	v->a[129512] = anon_sym_RBRACK;
	v->a[129513] = actions(6652);
	v->a[129514] = 1;
	v->a[129515] = sym__special_character;
	v->a[129516] = actions(6674);
	v->a[129517] = 1;
	v->a[129518] = sym__concat;
	v->a[129519] = state(2474);
	small_parse_table_6476(v);
}

void	small_parse_table_6476(t_small_parse_table_array *v)
{
	v->a[129520] = 1;
	v->a[129521] = aux_sym__literal_repeat1;
	v->a[129522] = actions(243);
	v->a[129523] = 14;
	v->a[129524] = anon_sym_EQ;
	v->a[129525] = anon_sym_PIPE;
	v->a[129526] = anon_sym_CARET;
	v->a[129527] = anon_sym_AMP;
	v->a[129528] = anon_sym_LT;
	v->a[129529] = anon_sym_GT;
	v->a[129530] = anon_sym_LT_LT;
	v->a[129531] = anon_sym_GT_GT;
	v->a[129532] = anon_sym_PLUS;
	v->a[129533] = anon_sym_DASH;
	v->a[129534] = anon_sym_STAR;
	v->a[129535] = anon_sym_SLASH;
	v->a[129536] = anon_sym_PERCENT;
	v->a[129537] = anon_sym_STAR_STAR;
	v->a[129538] = actions(354);
	v->a[129539] = 22;
	small_parse_table_6477(v);
}

void	small_parse_table_6477(t_small_parse_table_array *v)
{
	v->a[129540] = sym_test_operator;
	v->a[129541] = anon_sym_PLUS_PLUS;
	v->a[129542] = anon_sym_DASH_DASH;
	v->a[129543] = anon_sym_PLUS_EQ;
	v->a[129544] = anon_sym_DASH_EQ;
	v->a[129545] = anon_sym_STAR_EQ;
	v->a[129546] = anon_sym_SLASH_EQ;
	v->a[129547] = anon_sym_PERCENT_EQ;
	v->a[129548] = anon_sym_STAR_STAR_EQ;
	v->a[129549] = anon_sym_LT_LT_EQ;
	v->a[129550] = anon_sym_GT_GT_EQ;
	v->a[129551] = anon_sym_AMP_EQ;
	v->a[129552] = anon_sym_CARET_EQ;
	v->a[129553] = anon_sym_PIPE_EQ;
	v->a[129554] = anon_sym_PIPE_PIPE;
	v->a[129555] = anon_sym_AMP_AMP;
	v->a[129556] = anon_sym_EQ_EQ;
	v->a[129557] = anon_sym_BANG_EQ;
	v->a[129558] = anon_sym_LT_EQ;
	v->a[129559] = anon_sym_GT_EQ;
	small_parse_table_6478(v);
}

void	small_parse_table_6478(t_small_parse_table_array *v)
{
	v->a[129560] = anon_sym_EQ_TILDE;
	v->a[129561] = anon_sym_QMARK;
	v->a[129562] = 5;
	v->a[129563] = actions(71);
	v->a[129564] = 1;
	v->a[129565] = sym_comment;
	v->a[129566] = state(2464);
	v->a[129567] = 1;
	v->a[129568] = aux_sym_concatenation_repeat1;
	v->a[129569] = actions(6676);
	v->a[129570] = 2;
	v->a[129571] = sym__concat;
	v->a[129572] = aux_sym_concatenation_token1;
	v->a[129573] = actions(1251);
	v->a[129574] = 14;
	v->a[129575] = anon_sym_EQ;
	v->a[129576] = anon_sym_PIPE;
	v->a[129577] = anon_sym_CARET;
	v->a[129578] = anon_sym_AMP;
	v->a[129579] = anon_sym_LT;
	small_parse_table_6479(v);
}

void	small_parse_table_6479(t_small_parse_table_array *v)
{
	v->a[129580] = anon_sym_GT;
	v->a[129581] = anon_sym_LT_LT;
	v->a[129582] = anon_sym_GT_GT;
	v->a[129583] = anon_sym_PLUS;
	v->a[129584] = anon_sym_DASH;
	v->a[129585] = anon_sym_STAR;
	v->a[129586] = anon_sym_SLASH;
	v->a[129587] = anon_sym_PERCENT;
	v->a[129588] = anon_sym_STAR_STAR;
	v->a[129589] = actions(1253);
	v->a[129590] = 23;
	v->a[129591] = sym_test_operator;
	v->a[129592] = anon_sym_PLUS_PLUS;
	v->a[129593] = anon_sym_DASH_DASH;
	v->a[129594] = anon_sym_PLUS_EQ;
	v->a[129595] = anon_sym_DASH_EQ;
	v->a[129596] = anon_sym_STAR_EQ;
	v->a[129597] = anon_sym_SLASH_EQ;
	v->a[129598] = anon_sym_PERCENT_EQ;
	v->a[129599] = anon_sym_STAR_STAR_EQ;
	small_parse_table_6480(v);
}

/* EOF small_parse_table_1295.c */
