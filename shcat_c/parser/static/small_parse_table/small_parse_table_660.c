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
	v->a[66000] = anon_sym_GT_PIPE;
	v->a[66001] = anon_sym_LT_AMP_DASH;
	v->a[66002] = anon_sym_GT_AMP_DASH;
	v->a[66003] = anon_sym_LT_LT_DASH;
	v->a[66004] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66005] = anon_sym_DOLLAR_LBRACK;
	v->a[66006] = anon_sym_DOLLAR;
	v->a[66007] = sym__special_character;
	v->a[66008] = anon_sym_DQUOTE;
	v->a[66009] = sym_raw_string;
	v->a[66010] = sym_ansi_c_string;
	v->a[66011] = aux_sym_number_token1;
	v->a[66012] = aux_sym_number_token2;
	v->a[66013] = anon_sym_DOLLAR_LBRACE;
	v->a[66014] = anon_sym_DOLLAR_LPAREN;
	v->a[66015] = anon_sym_BQUOTE;
	v->a[66016] = anon_sym_DOLLAR_BQUOTE;
	v->a[66017] = anon_sym_LT_LPAREN;
	v->a[66018] = anon_sym_GT_LPAREN;
	v->a[66019] = sym_word;
	small_parse_table_3301(v);
}

void	small_parse_table_3301(t_small_parse_table_array *v)
{
	v->a[66020] = 3;
	v->a[66021] = actions(3);
	v->a[66022] = 1;
	v->a[66023] = sym_comment;
	v->a[66024] = actions(1326);
	v->a[66025] = 6;
	v->a[66026] = sym_file_descriptor;
	v->a[66027] = sym__concat;
	v->a[66028] = sym_variable_name;
	v->a[66029] = sym_test_operator;
	v->a[66030] = sym__brace_start;
	v->a[66031] = aux_sym_heredoc_redirect_token1;
	v->a[66032] = actions(1324);
	v->a[66033] = 40;
	v->a[66034] = anon_sym_LPAREN_LPAREN;
	v->a[66035] = anon_sym_SEMI;
	v->a[66036] = anon_sym_PIPE_PIPE;
	v->a[66037] = anon_sym_AMP_AMP;
	v->a[66038] = anon_sym_PIPE;
	v->a[66039] = anon_sym_AMP;
	small_parse_table_3302(v);
}

void	small_parse_table_3302(t_small_parse_table_array *v)
{
	v->a[66040] = anon_sym_LT;
	v->a[66041] = anon_sym_GT;
	v->a[66042] = anon_sym_LT_LT;
	v->a[66043] = anon_sym_GT_GT;
	v->a[66044] = anon_sym_SEMI_SEMI;
	v->a[66045] = anon_sym_SEMI_AMP;
	v->a[66046] = anon_sym_SEMI_SEMI_AMP;
	v->a[66047] = anon_sym_PIPE_AMP;
	v->a[66048] = anon_sym_AMP_GT;
	v->a[66049] = anon_sym_AMP_GT_GT;
	v->a[66050] = anon_sym_LT_AMP;
	v->a[66051] = anon_sym_GT_AMP;
	v->a[66052] = anon_sym_GT_PIPE;
	v->a[66053] = anon_sym_LT_AMP_DASH;
	v->a[66054] = anon_sym_GT_AMP_DASH;
	v->a[66055] = anon_sym_LT_LT_DASH;
	v->a[66056] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66057] = anon_sym_DOLLAR_LBRACK;
	v->a[66058] = aux_sym_concatenation_token1;
	v->a[66059] = anon_sym_DOLLAR;
	small_parse_table_3303(v);
}

void	small_parse_table_3303(t_small_parse_table_array *v)
{
	v->a[66060] = sym__special_character;
	v->a[66061] = anon_sym_DQUOTE;
	v->a[66062] = sym_raw_string;
	v->a[66063] = sym_ansi_c_string;
	v->a[66064] = aux_sym_number_token1;
	v->a[66065] = aux_sym_number_token2;
	v->a[66066] = anon_sym_DOLLAR_LBRACE;
	v->a[66067] = anon_sym_DOLLAR_LPAREN;
	v->a[66068] = anon_sym_BQUOTE;
	v->a[66069] = anon_sym_DOLLAR_BQUOTE;
	v->a[66070] = anon_sym_LT_LPAREN;
	v->a[66071] = anon_sym_GT_LPAREN;
	v->a[66072] = aux_sym__simple_variable_name_token1;
	v->a[66073] = sym_word;
	v->a[66074] = 6;
	v->a[66075] = actions(3);
	v->a[66076] = 1;
	v->a[66077] = sym_comment;
	v->a[66078] = actions(5634);
	v->a[66079] = 1;
	small_parse_table_3304(v);
}

void	small_parse_table_3304(t_small_parse_table_array *v)
{
	v->a[66080] = aux_sym_concatenation_token1;
	v->a[66081] = actions(5730);
	v->a[66082] = 1;
	v->a[66083] = sym__concat;
	v->a[66084] = state(1475);
	v->a[66085] = 1;
	v->a[66086] = aux_sym_concatenation_repeat1;
	v->a[66087] = actions(1288);
	v->a[66088] = 6;
	v->a[66089] = sym_file_descriptor;
	v->a[66090] = sym_variable_name;
	v->a[66091] = sym_test_operator;
	v->a[66092] = sym__brace_start;
	v->a[66093] = ts_builtin_sym_end;
	v->a[66094] = aux_sym_heredoc_redirect_token1;
	v->a[66095] = actions(1286);
	v->a[66096] = 37;
	v->a[66097] = anon_sym_LPAREN_LPAREN;
	v->a[66098] = anon_sym_SEMI;
	v->a[66099] = anon_sym_PIPE_PIPE;
	small_parse_table_3305(v);
}

/* EOF small_parse_table_660.c */
