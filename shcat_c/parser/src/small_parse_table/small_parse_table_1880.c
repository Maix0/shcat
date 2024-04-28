/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1880.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9400(t_small_parse_table_array *v)
{
	v->a[188000] = 1;
	v->a[188001] = anon_sym_DOLLAR_BQUOTE;
	v->a[188002] = actions(7884);
	v->a[188003] = 1;
	v->a[188004] = sym_test_operator;
	v->a[188005] = actions(7887);
	v->a[188006] = 1;
	v->a[188007] = sym_extglob_pattern;
	v->a[188008] = actions(7890);
	v->a[188009] = 1;
	v->a[188010] = sym__brace_start;
	v->a[188011] = state(6409);
	v->a[188012] = 1;
	v->a[188013] = aux_sym__literal_repeat1;
	v->a[188014] = actions(7842);
	v->a[188015] = 2;
	v->a[188016] = anon_sym_LPAREN_LPAREN;
	v->a[188017] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[188018] = actions(7860);
	v->a[188019] = 2;
	small_parse_table_9401(v);
}

void	small_parse_table_9401(t_small_parse_table_array *v)
{
	v->a[188020] = sym_raw_string;
	v->a[188021] = sym_ansi_c_string;
	v->a[188022] = actions(7881);
	v->a[188023] = 2;
	v->a[188024] = anon_sym_LT_LPAREN;
	v->a[188025] = anon_sym_GT_LPAREN;
	v->a[188026] = state(3477);
	v->a[188027] = 2;
	v->a[188028] = sym_case_item;
	v->a[188029] = aux_sym_case_statement_repeat1;
	v->a[188030] = state(6591);
	v->a[188031] = 2;
	v->a[188032] = sym_concatenation;
	v->a[188033] = sym__extglob_blob;
	v->a[188034] = state(6328);
	v->a[188035] = 9;
	v->a[188036] = sym_arithmetic_expansion;
	v->a[188037] = sym_brace_expression;
	v->a[188038] = sym_string;
	v->a[188039] = sym_translated_string;
	small_parse_table_9402(v);
}

void	small_parse_table_9402(t_small_parse_table_array *v)
{
	v->a[188040] = sym_number;
	v->a[188041] = sym_simple_expansion;
	v->a[188042] = sym_expansion;
	v->a[188043] = sym_command_substitution;
	v->a[188044] = sym_process_substitution;
	v->a[188045] = 21;
	v->a[188046] = actions(3);
	v->a[188047] = 1;
	v->a[188048] = sym_comment;
	v->a[188049] = actions(2216);
	v->a[188050] = 1;
	v->a[188051] = aux_sym_heredoc_redirect_token1;
	v->a[188052] = actions(7899);
	v->a[188053] = 1;
	v->a[188054] = anon_sym_DOLLAR_LBRACK;
	v->a[188055] = actions(7902);
	v->a[188056] = 1;
	v->a[188057] = anon_sym_DOLLAR;
	v->a[188058] = actions(7905);
	v->a[188059] = 1;
	small_parse_table_9403(v);
}

void	small_parse_table_9403(t_small_parse_table_array *v)
{
	v->a[188060] = sym__special_character;
	v->a[188061] = actions(7908);
	v->a[188062] = 1;
	v->a[188063] = anon_sym_DQUOTE;
	v->a[188064] = actions(7911);
	v->a[188065] = 1;
	v->a[188066] = aux_sym_number_token1;
	v->a[188067] = actions(7914);
	v->a[188068] = 1;
	v->a[188069] = aux_sym_number_token2;
	v->a[188070] = actions(7917);
	v->a[188071] = 1;
	v->a[188072] = anon_sym_DOLLAR_LBRACE;
	v->a[188073] = actions(7920);
	v->a[188074] = 1;
	v->a[188075] = anon_sym_DOLLAR_LPAREN;
	v->a[188076] = actions(7923);
	v->a[188077] = 1;
	v->a[188078] = anon_sym_BQUOTE;
	v->a[188079] = actions(7926);
	small_parse_table_9404(v);
}

void	small_parse_table_9404(t_small_parse_table_array *v)
{
	v->a[188080] = 1;
	v->a[188081] = anon_sym_DOLLAR_BQUOTE;
	v->a[188082] = actions(7932);
	v->a[188083] = 1;
	v->a[188084] = sym_test_operator;
	v->a[188085] = actions(7935);
	v->a[188086] = 1;
	v->a[188087] = sym__brace_start;
	v->a[188088] = state(4975);
	v->a[188089] = 1;
	v->a[188090] = aux_sym__literal_repeat1;
	v->a[188091] = actions(7896);
	v->a[188092] = 2;
	v->a[188093] = anon_sym_LPAREN_LPAREN;
	v->a[188094] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[188095] = actions(7929);
	v->a[188096] = 2;
	v->a[188097] = anon_sym_LT_LPAREN;
	v->a[188098] = anon_sym_GT_LPAREN;
	v->a[188099] = state(3478);
	small_parse_table_9405(v);
}

/* EOF small_parse_table_1880.c */
