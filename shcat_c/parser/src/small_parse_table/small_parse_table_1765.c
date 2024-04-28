/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1765.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8825(t_small_parse_table_array *v)
{
	v->a[176500] = anon_sym_PERCENT_EQ;
	v->a[176501] = anon_sym_STAR_STAR_EQ;
	v->a[176502] = anon_sym_LT_LT_EQ;
	v->a[176503] = anon_sym_GT_GT_EQ;
	v->a[176504] = anon_sym_AMP_EQ;
	v->a[176505] = anon_sym_CARET_EQ;
	v->a[176506] = anon_sym_PIPE_EQ;
	v->a[176507] = 3;
	v->a[176508] = actions(71);
	v->a[176509] = 1;
	v->a[176510] = sym_comment;
	v->a[176511] = actions(1352);
	v->a[176512] = 13;
	v->a[176513] = anon_sym_PIPE;
	v->a[176514] = anon_sym_CARET;
	v->a[176515] = anon_sym_AMP;
	v->a[176516] = anon_sym_LT;
	v->a[176517] = anon_sym_GT;
	v->a[176518] = anon_sym_LT_LT;
	v->a[176519] = anon_sym_GT_GT;
	small_parse_table_8826(v);
}

void	small_parse_table_8826(t_small_parse_table_array *v)
{
	v->a[176520] = anon_sym_PLUS;
	v->a[176521] = anon_sym_DASH;
	v->a[176522] = anon_sym_STAR;
	v->a[176523] = anon_sym_SLASH;
	v->a[176524] = anon_sym_PERCENT;
	v->a[176525] = anon_sym_STAR_STAR;
	v->a[176526] = actions(1354);
	v->a[176527] = 23;
	v->a[176528] = anon_sym_RPAREN_RPAREN;
	v->a[176529] = anon_sym_COMMA;
	v->a[176530] = anon_sym_PLUS_PLUS;
	v->a[176531] = anon_sym_DASH_DASH;
	v->a[176532] = anon_sym_PLUS_EQ;
	v->a[176533] = anon_sym_DASH_EQ;
	v->a[176534] = anon_sym_STAR_EQ;
	v->a[176535] = anon_sym_SLASH_EQ;
	v->a[176536] = anon_sym_PERCENT_EQ;
	v->a[176537] = anon_sym_STAR_STAR_EQ;
	v->a[176538] = anon_sym_LT_LT_EQ;
	v->a[176539] = anon_sym_GT_GT_EQ;
	small_parse_table_8827(v);
}

void	small_parse_table_8827(t_small_parse_table_array *v)
{
	v->a[176540] = anon_sym_AMP_EQ;
	v->a[176541] = anon_sym_CARET_EQ;
	v->a[176542] = anon_sym_PIPE_EQ;
	v->a[176543] = anon_sym_PIPE_PIPE;
	v->a[176544] = anon_sym_DASHo;
	v->a[176545] = anon_sym_AMP_AMP;
	v->a[176546] = anon_sym_DASHa;
	v->a[176547] = anon_sym_EQ_EQ;
	v->a[176548] = anon_sym_BANG_EQ;
	v->a[176549] = anon_sym_LT_EQ;
	v->a[176550] = anon_sym_GT_EQ;
	v->a[176551] = 8;
	v->a[176552] = actions(3);
	v->a[176553] = 1;
	v->a[176554] = sym_comment;
	v->a[176555] = actions(1235);
	v->a[176556] = 1;
	v->a[176557] = sym_file_descriptor;
	v->a[176558] = actions(3791);
	v->a[176559] = 1;
	small_parse_table_8828(v);
}

void	small_parse_table_8828(t_small_parse_table_array *v)
{
	v->a[176560] = anon_sym_DQUOTE;
	v->a[176561] = actions(7444);
	v->a[176562] = 1;
	v->a[176563] = sym_variable_name;
	v->a[176564] = state(4389);
	v->a[176565] = 1;
	v->a[176566] = sym_string;
	v->a[176567] = actions(7442);
	v->a[176568] = 2;
	v->a[176569] = aux_sym__simple_variable_name_token1;
	v->a[176570] = aux_sym__multiline_variable_name_token1;
	v->a[176571] = actions(7440);
	v->a[176572] = 9;
	v->a[176573] = anon_sym_DASH;
	v->a[176574] = anon_sym_STAR;
	v->a[176575] = anon_sym_BANG;
	v->a[176576] = anon_sym_QMARK;
	v->a[176577] = anon_sym_DOLLAR;
	v->a[176578] = anon_sym_POUND;
	v->a[176579] = anon_sym_AT2;
	small_parse_table_8829(v);
}

void	small_parse_table_8829(t_small_parse_table_array *v)
{
	v->a[176580] = anon_sym_0;
	v->a[176581] = anon_sym__;
	v->a[176582] = actions(1227);
	v->a[176583] = 21;
	v->a[176584] = anon_sym_SEMI;
	v->a[176585] = anon_sym_PIPE_PIPE;
	v->a[176586] = anon_sym_AMP_AMP;
	v->a[176587] = anon_sym_PIPE;
	v->a[176588] = anon_sym_AMP;
	v->a[176589] = anon_sym_LT;
	v->a[176590] = anon_sym_GT;
	v->a[176591] = anon_sym_LT_LT;
	v->a[176592] = anon_sym_GT_GT;
	v->a[176593] = anon_sym_SEMI_SEMI;
	v->a[176594] = anon_sym_PIPE_AMP;
	v->a[176595] = anon_sym_AMP_GT;
	v->a[176596] = anon_sym_AMP_GT_GT;
	v->a[176597] = anon_sym_LT_AMP;
	v->a[176598] = anon_sym_GT_AMP;
	v->a[176599] = anon_sym_GT_PIPE;
	small_parse_table_8830(v);
}

/* EOF small_parse_table_1765.c */
