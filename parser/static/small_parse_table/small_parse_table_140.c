/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_140.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_700(t_small_parse_table_array *v)
{
	v->a[14000] = anon_sym_PIPE_AMP;
	v->a[14001] = anon_sym_AMP_AMP;
	v->a[14002] = anon_sym_PIPE_PIPE;
	v->a[14003] = anon_sym_LT;
	v->a[14004] = anon_sym_GT;
	v->a[14005] = anon_sym_GT_GT;
	v->a[14006] = anon_sym_AMP_GT;
	v->a[14007] = anon_sym_AMP_GT_GT;
	v->a[14008] = anon_sym_LT_AMP;
	v->a[14009] = anon_sym_GT_AMP;
	v->a[14010] = anon_sym_GT_PIPE;
	v->a[14011] = anon_sym_LT_AMP_DASH;
	v->a[14012] = anon_sym_GT_AMP_DASH;
	v->a[14013] = anon_sym_LT_LT;
	v->a[14014] = anon_sym_LT_LT_DASH;
	v->a[14015] = 19;
	v->a[14016] = actions(3);
	v->a[14017] = 1;
	v->a[14018] = sym_comment;
	v->a[14019] = actions(2354);
	small_parse_table_701(v);
}

void	small_parse_table_701(t_small_parse_table_array *v)
{
	v->a[14020] = 1;
	v->a[14021] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14022] = actions(2356);
	v->a[14023] = 1;
	v->a[14024] = anon_sym_DOLLAR;
	v->a[14025] = actions(2358);
	v->a[14026] = 1;
	v->a[14027] = sym__special_character;
	v->a[14028] = actions(2360);
	v->a[14029] = 1;
	v->a[14030] = anon_sym_DQUOTE;
	v->a[14031] = actions(2362);
	v->a[14032] = 1;
	v->a[14033] = aux_sym_number_token1;
	v->a[14034] = actions(2364);
	v->a[14035] = 1;
	v->a[14036] = aux_sym_number_token2;
	v->a[14037] = actions(2366);
	v->a[14038] = 1;
	v->a[14039] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_702(v);
}

void	small_parse_table_702(t_small_parse_table_array *v)
{
	v->a[14040] = actions(2368);
	v->a[14041] = 1;
	v->a[14042] = anon_sym_DOLLAR_LPAREN;
	v->a[14043] = actions(2370);
	v->a[14044] = 1;
	v->a[14045] = anon_sym_BQUOTE;
	v->a[14046] = actions(2372);
	v->a[14047] = 1;
	v->a[14048] = anon_sym_DOLLAR_BQUOTE;
	v->a[14049] = actions(2376);
	v->a[14050] = 1;
	v->a[14051] = sym__brace_start;
	v->a[14052] = actions(2438);
	v->a[14053] = 1;
	v->a[14054] = sym_test_operator;
	v->a[14055] = state(1981);
	v->a[14056] = 1;
	v->a[14057] = aux_sym__literal_repeat1;
	v->a[14058] = state(2315);
	v->a[14059] = 1;
	small_parse_table_703(v);
}

void	small_parse_table_703(t_small_parse_table_array *v)
{
	v->a[14060] = sym_concatenation;
	v->a[14061] = actions(2436);
	v->a[14062] = 2;
	v->a[14063] = sym_raw_string;
	v->a[14064] = sym_word;
	v->a[14065] = actions(1530);
	v->a[14066] = 3;
	v->a[14067] = sym_file_descriptor;
	v->a[14068] = ts_builtin_sym_end;
	v->a[14069] = aux_sym_heredoc_redirect_token1;
	v->a[14070] = state(2125);
	v->a[14071] = 7;
	v->a[14072] = sym_arithmetic_expansion;
	v->a[14073] = sym_brace_expression;
	v->a[14074] = sym_string;
	v->a[14075] = sym_number;
	v->a[14076] = sym_simple_expansion;
	v->a[14077] = sym_expansion;
	v->a[14078] = sym_command_substitution;
	v->a[14079] = actions(1528);
	small_parse_table_704(v);
}

void	small_parse_table_704(t_small_parse_table_array *v)
{
	v->a[14080] = 19;
	v->a[14081] = anon_sym_PIPE;
	v->a[14082] = anon_sym_SEMI_SEMI;
	v->a[14083] = anon_sym_PIPE_AMP;
	v->a[14084] = anon_sym_AMP_AMP;
	v->a[14085] = anon_sym_PIPE_PIPE;
	v->a[14086] = anon_sym_LT;
	v->a[14087] = anon_sym_GT;
	v->a[14088] = anon_sym_GT_GT;
	v->a[14089] = anon_sym_AMP_GT;
	v->a[14090] = anon_sym_AMP_GT_GT;
	v->a[14091] = anon_sym_LT_AMP;
	v->a[14092] = anon_sym_GT_AMP;
	v->a[14093] = anon_sym_GT_PIPE;
	v->a[14094] = anon_sym_LT_AMP_DASH;
	v->a[14095] = anon_sym_GT_AMP_DASH;
	v->a[14096] = anon_sym_LT_LT;
	v->a[14097] = anon_sym_LT_LT_DASH;
	v->a[14098] = anon_sym_AMP;
	v->a[14099] = anon_sym_SEMI;
	small_parse_table_705(v);
}

/* EOF small_parse_table_140.c */
