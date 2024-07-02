/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_257.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1285(t_small_parse_table_array *v)
{
	v->a[25700] = anon_sym_SLASH_EQ;
	v->a[25701] = anon_sym_PERCENT_EQ;
	v->a[25702] = anon_sym_LT_LT_EQ;
	v->a[25703] = anon_sym_GT_GT_EQ;
	v->a[25704] = anon_sym_AMP_EQ;
	v->a[25705] = anon_sym_CARET_EQ;
	v->a[25706] = anon_sym_PIPE_EQ;
	v->a[25707] = anon_sym_EQ_EQ;
	v->a[25708] = anon_sym_BANG_EQ;
	v->a[25709] = anon_sym_LT_EQ;
	v->a[25710] = anon_sym_GT_EQ;
	v->a[25711] = anon_sym_QMARK;
	v->a[25712] = anon_sym_PLUS_PLUS2;
	v->a[25713] = anon_sym_DASH_DASH2;
	v->a[25714] = 17;
	v->a[25715] = actions(668);
	v->a[25716] = 1;
	v->a[25717] = anon_sym_AMP;
	v->a[25718] = actions(680);
	v->a[25719] = 1;
	small_parse_table_1286(v);
}

void	small_parse_table_1286(t_small_parse_table_array *v)
{
	v->a[25720] = sym_comment;
	v->a[25721] = actions(730);
	v->a[25722] = 1;
	v->a[25723] = anon_sym_CARET;
	v->a[25724] = actions(732);
	v->a[25725] = 1;
	v->a[25726] = anon_sym_PIPE;
	v->a[25727] = actions(734);
	v->a[25728] = 1;
	v->a[25729] = anon_sym_AMP_AMP;
	v->a[25730] = actions(736);
	v->a[25731] = 1;
	v->a[25732] = anon_sym_PIPE_PIPE;
	v->a[25733] = actions(738);
	v->a[25734] = 1;
	v->a[25735] = anon_sym_QMARK;
	v->a[25736] = actions(740);
	v->a[25737] = 1;
	v->a[25738] = anon_sym_EQ;
	v->a[25739] = actions(965);
	small_parse_table_1287(v);
}

void	small_parse_table_1287(t_small_parse_table_array *v)
{
	v->a[25740] = 1;
	v->a[25741] = anon_sym_RPAREN_RPAREN;
	v->a[25742] = actions(664);
	v->a[25743] = 2;
	v->a[25744] = anon_sym_LT;
	v->a[25745] = anon_sym_GT;
	v->a[25746] = actions(666);
	v->a[25747] = 2;
	v->a[25748] = anon_sym_GT_GT;
	v->a[25749] = anon_sym_LT_LT;
	v->a[25750] = actions(670);
	v->a[25751] = 2;
	v->a[25752] = anon_sym_EQ_EQ;
	v->a[25753] = anon_sym_BANG_EQ;
	v->a[25754] = actions(672);
	v->a[25755] = 2;
	v->a[25756] = anon_sym_LT_EQ;
	v->a[25757] = anon_sym_GT_EQ;
	v->a[25758] = actions(674);
	v->a[25759] = 2;
	small_parse_table_1288(v);
}

void	small_parse_table_1288(t_small_parse_table_array *v)
{
	v->a[25760] = anon_sym_PLUS;
	v->a[25761] = anon_sym_DASH;
	v->a[25762] = actions(678);
	v->a[25763] = 2;
	v->a[25764] = anon_sym_PLUS_PLUS2;
	v->a[25765] = anon_sym_DASH_DASH2;
	v->a[25766] = actions(676);
	v->a[25767] = 3;
	v->a[25768] = anon_sym_STAR;
	v->a[25769] = anon_sym_SLASH;
	v->a[25770] = anon_sym_PERCENT;
	v->a[25771] = actions(912);
	v->a[25772] = 10;
	v->a[25773] = anon_sym_PLUS_EQ;
	v->a[25774] = anon_sym_DASH_EQ;
	v->a[25775] = anon_sym_STAR_EQ;
	v->a[25776] = anon_sym_SLASH_EQ;
	v->a[25777] = anon_sym_PERCENT_EQ;
	v->a[25778] = anon_sym_LT_LT_EQ;
	v->a[25779] = anon_sym_GT_GT_EQ;
	small_parse_table_1289(v);
}

void	small_parse_table_1289(t_small_parse_table_array *v)
{
	v->a[25780] = anon_sym_AMP_EQ;
	v->a[25781] = anon_sym_CARET_EQ;
	v->a[25782] = anon_sym_PIPE_EQ;
	v->a[25783] = 11;
	v->a[25784] = actions(3);
	v->a[25785] = 1;
	v->a[25786] = sym_comment;
	v->a[25787] = actions(692);
	v->a[25788] = 1;
	v->a[25789] = anon_sym_PIPE;
	v->a[25790] = actions(702);
	v->a[25791] = 1;
	v->a[25792] = sym_file_descriptor;
	v->a[25793] = actions(916);
	v->a[25794] = 1;
	v->a[25795] = sym_variable_name;
	v->a[25796] = state(746);
	v->a[25797] = 1;
	v->a[25798] = sym_terminator;
	v->a[25799] = actions(700);
	small_parse_table_1290(v);
}

/* EOF small_parse_table_257.c */
