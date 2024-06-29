/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_375.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1875(t_small_parse_table_array *v)
{
	v->a[37500] = actions(1086);
	v->a[37501] = 13;
	v->a[37502] = anon_sym_PIPE;
	v->a[37503] = anon_sym_EQ;
	v->a[37504] = anon_sym_LT;
	v->a[37505] = anon_sym_GT;
	v->a[37506] = anon_sym_GT_GT;
	v->a[37507] = anon_sym_LT_LT;
	v->a[37508] = anon_sym_CARET;
	v->a[37509] = anon_sym_AMP;
	v->a[37510] = anon_sym_PLUS;
	v->a[37511] = anon_sym_DASH;
	v->a[37512] = anon_sym_STAR;
	v->a[37513] = anon_sym_SLASH;
	v->a[37514] = anon_sym_PERCENT;
	v->a[37515] = actions(1088);
	v->a[37516] = 20;
	v->a[37517] = anon_sym_RPAREN;
	v->a[37518] = anon_sym_AMP_AMP;
	v->a[37519] = anon_sym_PIPE_PIPE;
	small_parse_table_1876(v);
}

void	small_parse_table_1876(t_small_parse_table_array *v)
{
	v->a[37520] = anon_sym_PLUS_EQ;
	v->a[37521] = anon_sym_DASH_EQ;
	v->a[37522] = anon_sym_STAR_EQ;
	v->a[37523] = anon_sym_SLASH_EQ;
	v->a[37524] = anon_sym_PERCENT_EQ;
	v->a[37525] = anon_sym_LT_LT_EQ;
	v->a[37526] = anon_sym_GT_GT_EQ;
	v->a[37527] = anon_sym_AMP_EQ;
	v->a[37528] = anon_sym_CARET_EQ;
	v->a[37529] = anon_sym_PIPE_EQ;
	v->a[37530] = anon_sym_EQ_EQ;
	v->a[37531] = anon_sym_BANG_EQ;
	v->a[37532] = anon_sym_LT_EQ;
	v->a[37533] = anon_sym_GT_EQ;
	v->a[37534] = anon_sym_QMARK;
	v->a[37535] = anon_sym_PLUS_PLUS2;
	v->a[37536] = anon_sym_DASH_DASH2;
	v->a[37537] = 6;
	v->a[37538] = actions(3);
	v->a[37539] = 1;
	small_parse_table_1877(v);
}

void	small_parse_table_1877(t_small_parse_table_array *v)
{
	v->a[37540] = sym_comment;
	v->a[37541] = actions(1306);
	v->a[37542] = 1;
	v->a[37543] = sym_variable_name;
	v->a[37544] = actions(385);
	v->a[37545] = 2;
	v->a[37546] = sym_file_descriptor;
	v->a[37547] = ts_builtin_sym_end;
	v->a[37548] = actions(1304);
	v->a[37549] = 2;
	v->a[37550] = aux_sym__simple_variable_name_token1;
	v->a[37551] = aux_sym__multiline_variable_name_token1;
	v->a[37552] = actions(1302);
	v->a[37553] = 9;
	v->a[37554] = anon_sym_BANG;
	v->a[37555] = anon_sym_DASH;
	v->a[37556] = anon_sym_STAR;
	v->a[37557] = anon_sym_QMARK;
	v->a[37558] = anon_sym_DOLLAR;
	v->a[37559] = anon_sym_POUND;
	small_parse_table_1878(v);
}

void	small_parse_table_1878(t_small_parse_table_array *v)
{
	v->a[37560] = anon_sym_AT;
	v->a[37561] = anon_sym_0;
	v->a[37562] = anon_sym__;
	v->a[37563] = actions(379);
	v->a[37564] = 19;
	v->a[37565] = anon_sym_PIPE;
	v->a[37566] = anon_sym_SEMI_SEMI;
	v->a[37567] = anon_sym_AMP_AMP;
	v->a[37568] = anon_sym_PIPE_PIPE;
	v->a[37569] = anon_sym_LT;
	v->a[37570] = anon_sym_GT;
	v->a[37571] = anon_sym_GT_GT;
	v->a[37572] = anon_sym_AMP_GT;
	v->a[37573] = anon_sym_AMP_GT_GT;
	v->a[37574] = anon_sym_LT_AMP;
	v->a[37575] = anon_sym_GT_AMP;
	v->a[37576] = anon_sym_GT_PIPE;
	v->a[37577] = anon_sym_LT_AMP_DASH;
	v->a[37578] = anon_sym_GT_AMP_DASH;
	v->a[37579] = anon_sym_LT_LT;
	small_parse_table_1879(v);
}

void	small_parse_table_1879(t_small_parse_table_array *v)
{
	v->a[37580] = anon_sym_LT_LT_DASH;
	v->a[37581] = aux_sym_heredoc_redirect_token1;
	v->a[37582] = anon_sym_AMP;
	v->a[37583] = anon_sym_SEMI;
	v->a[37584] = 3;
	v->a[37585] = actions(1074);
	v->a[37586] = 1;
	v->a[37587] = sym_comment;
	v->a[37588] = actions(1046);
	v->a[37589] = 13;
	v->a[37590] = anon_sym_PIPE;
	v->a[37591] = anon_sym_EQ;
	v->a[37592] = anon_sym_LT;
	v->a[37593] = anon_sym_GT;
	v->a[37594] = anon_sym_GT_GT;
	v->a[37595] = anon_sym_LT_LT;
	v->a[37596] = anon_sym_CARET;
	v->a[37597] = anon_sym_AMP;
	v->a[37598] = anon_sym_PLUS;
	v->a[37599] = anon_sym_DASH;
	small_parse_table_1880(v);
}

/* EOF small_parse_table_375.c */
