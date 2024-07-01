/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_290.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1450(t_small_parse_table_array *v)
{
	v->a[29000] = 3;
	v->a[29001] = anon_sym_STAR;
	v->a[29002] = anon_sym_SLASH;
	v->a[29003] = anon_sym_PERCENT;
	v->a[29004] = actions(1079);
	v->a[29005] = 10;
	v->a[29006] = anon_sym_PLUS_EQ;
	v->a[29007] = anon_sym_DASH_EQ;
	v->a[29008] = anon_sym_STAR_EQ;
	v->a[29009] = anon_sym_SLASH_EQ;
	v->a[29010] = anon_sym_PERCENT_EQ;
	v->a[29011] = anon_sym_LT_LT_EQ;
	v->a[29012] = anon_sym_GT_GT_EQ;
	v->a[29013] = anon_sym_AMP_EQ;
	v->a[29014] = anon_sym_CARET_EQ;
	v->a[29015] = anon_sym_PIPE_EQ;
	v->a[29016] = 16;
	v->a[29017] = actions(3);
	v->a[29018] = 1;
	v->a[29019] = sym_comment;
	small_parse_table_1451(v);
}

void	small_parse_table_1451(t_small_parse_table_array *v)
{
	v->a[29020] = actions(335);
	v->a[29021] = 1;
	v->a[29022] = anon_sym_LPAREN;
	v->a[29023] = actions(493);
	v->a[29024] = 1;
	v->a[29025] = sym_file_descriptor;
	v->a[29026] = actions(1116);
	v->a[29027] = 1;
	v->a[29028] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29029] = actions(1118);
	v->a[29030] = 1;
	v->a[29031] = anon_sym_DOLLAR;
	v->a[29032] = actions(1120);
	v->a[29033] = 1;
	v->a[29034] = anon_sym_DQUOTE;
	v->a[29035] = actions(1122);
	v->a[29036] = 1;
	v->a[29037] = anon_sym_DOLLAR_LBRACE;
	v->a[29038] = actions(1124);
	v->a[29039] = 1;
	small_parse_table_1452(v);
}

void	small_parse_table_1452(t_small_parse_table_array *v)
{
	v->a[29040] = anon_sym_DOLLAR_LPAREN;
	v->a[29041] = actions(1126);
	v->a[29042] = 1;
	v->a[29043] = anon_sym_BQUOTE;
	v->a[29044] = actions(1128);
	v->a[29045] = 1;
	v->a[29046] = sym__bare_dollar;
	v->a[29047] = state(570);
	v->a[29048] = 1;
	v->a[29049] = aux_sym_command_repeat2;
	v->a[29050] = state(1002);
	v->a[29051] = 1;
	v->a[29052] = sym_concatenation;
	v->a[29053] = state(1749);
	v->a[29054] = 1;
	v->a[29055] = sym_subshell;
	v->a[29056] = actions(1114);
	v->a[29057] = 3;
	v->a[29058] = sym_raw_string;
	v->a[29059] = sym_number;
	small_parse_table_1453(v);
}

void	small_parse_table_1453(t_small_parse_table_array *v)
{
	v->a[29060] = sym_word;
	v->a[29061] = state(864);
	v->a[29062] = 5;
	v->a[29063] = sym_arithmetic_expansion;
	v->a[29064] = sym_string;
	v->a[29065] = sym_simple_expansion;
	v->a[29066] = sym_expansion;
	v->a[29067] = sym_command_substitution;
	v->a[29068] = actions(491);
	v->a[29069] = 13;
	v->a[29070] = anon_sym_PIPE;
	v->a[29071] = anon_sym_AMP_AMP;
	v->a[29072] = anon_sym_PIPE_PIPE;
	v->a[29073] = anon_sym_LT;
	v->a[29074] = anon_sym_GT;
	v->a[29075] = anon_sym_GT_GT;
	v->a[29076] = anon_sym_LT_AMP;
	v->a[29077] = anon_sym_GT_AMP;
	v->a[29078] = anon_sym_GT_PIPE;
	v->a[29079] = anon_sym_LT_AMP_DASH;
	small_parse_table_1454(v);
}

void	small_parse_table_1454(t_small_parse_table_array *v)
{
	v->a[29080] = anon_sym_GT_AMP_DASH;
	v->a[29081] = anon_sym_LT_LT;
	v->a[29082] = anon_sym_LT_LT_DASH;
	v->a[29083] = 17;
	v->a[29084] = actions(842);
	v->a[29085] = 1;
	v->a[29086] = anon_sym_PIPE;
	v->a[29087] = actions(844);
	v->a[29088] = 1;
	v->a[29089] = anon_sym_AMP_AMP;
	v->a[29090] = actions(846);
	v->a[29091] = 1;
	v->a[29092] = anon_sym_PIPE_PIPE;
	v->a[29093] = actions(856);
	v->a[29094] = 1;
	v->a[29095] = anon_sym_CARET;
	v->a[29096] = actions(858);
	v->a[29097] = 1;
	v->a[29098] = anon_sym_AMP;
	v->a[29099] = actions(870);
	small_parse_table_1455(v);
}

/* EOF small_parse_table_290.c */
