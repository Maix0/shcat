/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_420.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2100(t_small_parse_table_array *v)
{
	v->a[42000] = actions(256);
	v->a[42001] = 2;
	v->a[42002] = sym_raw_string;
	v->a[42003] = sym_word;
	v->a[42004] = actions(1100);
	v->a[42005] = 2;
	v->a[42006] = anon_sym_LT_AMP_DASH;
	v->a[42007] = anon_sym_GT_AMP_DASH;
	v->a[42008] = state(996);
	v->a[42009] = 2;
	v->a[42010] = sym_variable_assignment;
	v->a[42011] = aux_sym_command_repeat1;
	v->a[42012] = state(295);
	v->a[42013] = 6;
	v->a[42014] = sym_arithmetic_expansion;
	v->a[42015] = sym_string;
	v->a[42016] = sym_number;
	v->a[42017] = sym_simple_expansion;
	v->a[42018] = sym_expansion;
	v->a[42019] = sym_command_substitution;
	small_parse_table_2101(v);
}

void	small_parse_table_2101(t_small_parse_table_array *v)
{
	v->a[42020] = actions(1098);
	v->a[42021] = 8;
	v->a[42022] = anon_sym_LT;
	v->a[42023] = anon_sym_GT;
	v->a[42024] = anon_sym_GT_GT;
	v->a[42025] = anon_sym_AMP_GT;
	v->a[42026] = anon_sym_AMP_GT_GT;
	v->a[42027] = anon_sym_LT_AMP;
	v->a[42028] = anon_sym_GT_AMP;
	v->a[42029] = anon_sym_GT_PIPE;
	v->a[42030] = 17;
	v->a[42031] = actions(1404);
	v->a[42032] = 1;
	v->a[42033] = sym_comment;
	v->a[42034] = actions(1418);
	v->a[42035] = 1;
	v->a[42036] = anon_sym_AMP;
	v->a[42037] = actions(1420);
	v->a[42038] = 1;
	v->a[42039] = anon_sym_PIPE;
	small_parse_table_2102(v);
}

void	small_parse_table_2102(t_small_parse_table_array *v)
{
	v->a[42040] = actions(1422);
	v->a[42041] = 1;
	v->a[42042] = anon_sym_AMP_AMP;
	v->a[42043] = actions(1424);
	v->a[42044] = 1;
	v->a[42045] = anon_sym_PIPE_PIPE;
	v->a[42046] = actions(1426);
	v->a[42047] = 1;
	v->a[42048] = anon_sym_EQ;
	v->a[42049] = actions(1428);
	v->a[42050] = 1;
	v->a[42051] = anon_sym_CARET;
	v->a[42052] = actions(1430);
	v->a[42053] = 1;
	v->a[42054] = anon_sym_QMARK;
	v->a[42055] = actions(1586);
	v->a[42056] = 1;
	v->a[42057] = anon_sym_RPAREN_RPAREN;
	v->a[42058] = actions(1402);
	v->a[42059] = 2;
	small_parse_table_2103(v);
}

void	small_parse_table_2103(t_small_parse_table_array *v)
{
	v->a[42060] = anon_sym_PLUS_PLUS2;
	v->a[42061] = anon_sym_DASH_DASH2;
	v->a[42062] = actions(1408);
	v->a[42063] = 2;
	v->a[42064] = anon_sym_LT;
	v->a[42065] = anon_sym_GT;
	v->a[42066] = actions(1410);
	v->a[42067] = 2;
	v->a[42068] = anon_sym_GT_GT;
	v->a[42069] = anon_sym_LT_LT;
	v->a[42070] = actions(1412);
	v->a[42071] = 2;
	v->a[42072] = anon_sym_LT_EQ;
	v->a[42073] = anon_sym_GT_EQ;
	v->a[42074] = actions(1414);
	v->a[42075] = 2;
	v->a[42076] = anon_sym_PLUS;
	v->a[42077] = anon_sym_DASH;
	v->a[42078] = actions(1416);
	v->a[42079] = 2;
	small_parse_table_2104(v);
}

void	small_parse_table_2104(t_small_parse_table_array *v)
{
	v->a[42080] = anon_sym_EQ_EQ;
	v->a[42081] = anon_sym_BANG_EQ;
	v->a[42082] = actions(1406);
	v->a[42083] = 3;
	v->a[42084] = anon_sym_STAR;
	v->a[42085] = anon_sym_SLASH;
	v->a[42086] = anon_sym_PERCENT;
	v->a[42087] = actions(1543);
	v->a[42088] = 10;
	v->a[42089] = anon_sym_PLUS_EQ;
	v->a[42090] = anon_sym_DASH_EQ;
	v->a[42091] = anon_sym_STAR_EQ;
	v->a[42092] = anon_sym_SLASH_EQ;
	v->a[42093] = anon_sym_PERCENT_EQ;
	v->a[42094] = anon_sym_LT_LT_EQ;
	v->a[42095] = anon_sym_GT_GT_EQ;
	v->a[42096] = anon_sym_AMP_EQ;
	v->a[42097] = anon_sym_CARET_EQ;
	v->a[42098] = anon_sym_PIPE_EQ;
	v->a[42099] = 10;
	small_parse_table_2105(v);
}

/* EOF small_parse_table_420.c */
