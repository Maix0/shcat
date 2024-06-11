/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_387.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1935(t_small_parse_table_array *v)
{
	v->a[38700] = sym_word;
	v->a[38701] = anon_sym_SEMI;
	v->a[38702] = 17;
	v->a[38703] = actions(1094);
	v->a[38704] = 1;
	v->a[38705] = sym_comment;
	v->a[38706] = actions(1108);
	v->a[38707] = 1;
	v->a[38708] = anon_sym_PIPE;
	v->a[38709] = actions(1110);
	v->a[38710] = 1;
	v->a[38711] = anon_sym_AMP_AMP;
	v->a[38712] = actions(1112);
	v->a[38713] = 1;
	v->a[38714] = anon_sym_CARET;
	v->a[38715] = actions(1114);
	v->a[38716] = 1;
	v->a[38717] = anon_sym_AMP;
	v->a[38718] = actions(1126);
	v->a[38719] = 1;
	small_parse_table_1936(v);
}

void	small_parse_table_1936(t_small_parse_table_array *v)
{
	v->a[38720] = anon_sym_PIPE_PIPE;
	v->a[38721] = actions(1128);
	v->a[38722] = 1;
	v->a[38723] = anon_sym_QMARK;
	v->a[38724] = actions(1155);
	v->a[38725] = 1;
	v->a[38726] = anon_sym_EQ;
	v->a[38727] = actions(1451);
	v->a[38728] = 1;
	v->a[38729] = anon_sym_RPAREN_RPAREN;
	v->a[38730] = actions(1082);
	v->a[38731] = 2;
	v->a[38732] = anon_sym_LT;
	v->a[38733] = anon_sym_GT;
	v->a[38734] = actions(1084);
	v->a[38735] = 2;
	v->a[38736] = anon_sym_GT_GT;
	v->a[38737] = anon_sym_LT_LT;
	v->a[38738] = actions(1086);
	v->a[38739] = 2;
	small_parse_table_1937(v);
}

void	small_parse_table_1937(t_small_parse_table_array *v)
{
	v->a[38740] = anon_sym_LT_EQ;
	v->a[38741] = anon_sym_GT_EQ;
	v->a[38742] = actions(1088);
	v->a[38743] = 2;
	v->a[38744] = anon_sym_PLUS;
	v->a[38745] = anon_sym_DASH;
	v->a[38746] = actions(1092);
	v->a[38747] = 2;
	v->a[38748] = anon_sym_PLUS_PLUS2;
	v->a[38749] = anon_sym_DASH_DASH2;
	v->a[38750] = actions(1116);
	v->a[38751] = 2;
	v->a[38752] = anon_sym_EQ_EQ;
	v->a[38753] = anon_sym_BANG_EQ;
	v->a[38754] = actions(1090);
	v->a[38755] = 3;
	v->a[38756] = anon_sym_STAR;
	v->a[38757] = anon_sym_SLASH;
	v->a[38758] = anon_sym_PERCENT;
	v->a[38759] = actions(1288);
	small_parse_table_1938(v);
}

void	small_parse_table_1938(t_small_parse_table_array *v)
{
	v->a[38760] = 10;
	v->a[38761] = anon_sym_PLUS_EQ;
	v->a[38762] = anon_sym_DASH_EQ;
	v->a[38763] = anon_sym_STAR_EQ;
	v->a[38764] = anon_sym_SLASH_EQ;
	v->a[38765] = anon_sym_PERCENT_EQ;
	v->a[38766] = anon_sym_LT_LT_EQ;
	v->a[38767] = anon_sym_GT_GT_EQ;
	v->a[38768] = anon_sym_AMP_EQ;
	v->a[38769] = anon_sym_CARET_EQ;
	v->a[38770] = anon_sym_PIPE_EQ;
	v->a[38771] = 3;
	v->a[38772] = actions(3);
	v->a[38773] = 1;
	v->a[38774] = sym_comment;
	v->a[38775] = actions(1141);
	v->a[38776] = 4;
	v->a[38777] = sym_file_descriptor;
	v->a[38778] = sym__concat;
	v->a[38779] = sym_variable_name;
	small_parse_table_1939(v);
}

void	small_parse_table_1939(t_small_parse_table_array *v)
{
	v->a[38780] = ts_builtin_sym_end;
	v->a[38781] = actions(1139);
	v->a[38782] = 29;
	v->a[38783] = anon_sym_PIPE;
	v->a[38784] = anon_sym_SEMI_SEMI;
	v->a[38785] = anon_sym_AMP_AMP;
	v->a[38786] = anon_sym_PIPE_PIPE;
	v->a[38787] = anon_sym_LT;
	v->a[38788] = anon_sym_GT;
	v->a[38789] = anon_sym_GT_GT;
	v->a[38790] = anon_sym_AMP_GT;
	v->a[38791] = anon_sym_AMP_GT_GT;
	v->a[38792] = anon_sym_LT_AMP;
	v->a[38793] = anon_sym_GT_AMP;
	v->a[38794] = anon_sym_GT_PIPE;
	v->a[38795] = anon_sym_LT_AMP_DASH;
	v->a[38796] = anon_sym_GT_AMP_DASH;
	v->a[38797] = anon_sym_LT_LT;
	v->a[38798] = anon_sym_LT_LT_DASH;
	v->a[38799] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1940(v);
}

/* EOF small_parse_table_387.c */
