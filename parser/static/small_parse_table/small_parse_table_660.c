/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_660.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3300(t_small_parse_table_array *v)
{
	v->a[66000] = state(3478);
	v->a[66001] = 1;
	v->a[66002] = aux_sym_arithmetic_expansion_repeat1;
	v->a[66003] = actions(4128);
	v->a[66004] = 2;
	v->a[66005] = anon_sym_LT;
	v->a[66006] = anon_sym_GT;
	v->a[66007] = actions(4130);
	v->a[66008] = 2;
	v->a[66009] = anon_sym_GT_GT;
	v->a[66010] = anon_sym_LT_LT;
	v->a[66011] = actions(4142);
	v->a[66012] = 2;
	v->a[66013] = anon_sym_EQ_EQ;
	v->a[66014] = anon_sym_BANG_EQ;
	v->a[66015] = actions(4144);
	v->a[66016] = 2;
	v->a[66017] = anon_sym_LT_EQ;
	v->a[66018] = anon_sym_GT_EQ;
	v->a[66019] = actions(4146);
	small_parse_table_3301(v);
}

void	small_parse_table_3301(t_small_parse_table_array *v)
{
	v->a[66020] = 2;
	v->a[66021] = anon_sym_PLUS;
	v->a[66022] = anon_sym_DASH;
	v->a[66023] = actions(4152);
	v->a[66024] = 2;
	v->a[66025] = anon_sym_PLUS_PLUS2;
	v->a[66026] = anon_sym_DASH_DASH2;
	v->a[66027] = actions(4148);
	v->a[66028] = 3;
	v->a[66029] = anon_sym_STAR;
	v->a[66030] = anon_sym_SLASH;
	v->a[66031] = anon_sym_PERCENT;
	v->a[66032] = actions(4136);
	v->a[66033] = 10;
	v->a[66034] = anon_sym_PLUS_EQ;
	v->a[66035] = anon_sym_DASH_EQ;
	v->a[66036] = anon_sym_STAR_EQ;
	v->a[66037] = anon_sym_SLASH_EQ;
	v->a[66038] = anon_sym_PERCENT_EQ;
	v->a[66039] = anon_sym_LT_LT_EQ;
	small_parse_table_3302(v);
}

void	small_parse_table_3302(t_small_parse_table_array *v)
{
	v->a[66040] = anon_sym_GT_GT_EQ;
	v->a[66041] = anon_sym_AMP_EQ;
	v->a[66042] = anon_sym_CARET_EQ;
	v->a[66043] = anon_sym_PIPE_EQ;
	v->a[66044] = 6;
	v->a[66045] = actions(3);
	v->a[66046] = 1;
	v->a[66047] = sym_comment;
	v->a[66048] = actions(3613);
	v->a[66049] = 1;
	v->a[66050] = aux_sym_concatenation_token1;
	v->a[66051] = actions(4205);
	v->a[66052] = 1;
	v->a[66053] = sym__concat;
	v->a[66054] = state(1147);
	v->a[66055] = 1;
	v->a[66056] = aux_sym_concatenation_repeat1;
	v->a[66057] = actions(2690);
	v->a[66058] = 4;
	v->a[66059] = sym_file_descriptor;
	small_parse_table_3303(v);
}

void	small_parse_table_3303(t_small_parse_table_array *v)
{
	v->a[66060] = sym_test_operator;
	v->a[66061] = sym__brace_start;
	v->a[66062] = aux_sym_heredoc_redirect_token1;
	v->a[66063] = actions(2688);
	v->a[66064] = 28;
	v->a[66065] = anon_sym_PIPE;
	v->a[66066] = anon_sym_PIPE_AMP;
	v->a[66067] = anon_sym_AMP_AMP;
	v->a[66068] = anon_sym_PIPE_PIPE;
	v->a[66069] = anon_sym_LT;
	v->a[66070] = anon_sym_GT;
	v->a[66071] = anon_sym_GT_GT;
	v->a[66072] = anon_sym_AMP_GT;
	v->a[66073] = anon_sym_AMP_GT_GT;
	v->a[66074] = anon_sym_LT_AMP;
	v->a[66075] = anon_sym_GT_AMP;
	v->a[66076] = anon_sym_GT_PIPE;
	v->a[66077] = anon_sym_LT_AMP_DASH;
	v->a[66078] = anon_sym_GT_AMP_DASH;
	v->a[66079] = anon_sym_LT_LT;
	small_parse_table_3304(v);
}

void	small_parse_table_3304(t_small_parse_table_array *v)
{
	v->a[66080] = anon_sym_LT_LT_DASH;
	v->a[66081] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66082] = anon_sym_DOLLAR;
	v->a[66083] = sym__special_character;
	v->a[66084] = anon_sym_DQUOTE;
	v->a[66085] = sym_raw_string;
	v->a[66086] = aux_sym_number_token1;
	v->a[66087] = aux_sym_number_token2;
	v->a[66088] = anon_sym_DOLLAR_LBRACE;
	v->a[66089] = anon_sym_DOLLAR_LPAREN;
	v->a[66090] = anon_sym_BQUOTE;
	v->a[66091] = anon_sym_DOLLAR_BQUOTE;
	v->a[66092] = sym_word;
	v->a[66093] = 19;
	v->a[66094] = actions(57);
	v->a[66095] = 1;
	v->a[66096] = sym_comment;
	v->a[66097] = actions(4120);
	v->a[66098] = 1;
	v->a[66099] = anon_sym_PIPE;
	small_parse_table_3305(v);
}

/* EOF small_parse_table_660.c */
