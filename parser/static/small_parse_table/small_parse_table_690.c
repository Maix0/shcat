/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_690.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3450(t_small_parse_table_array *v)
{
	v->a[69000] = 1;
	v->a[69001] = anon_sym_LPAREN;
	v->a[69002] = actions(2119);
	v->a[69003] = 1;
	v->a[69004] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[69005] = actions(2121);
	v->a[69006] = 1;
	v->a[69007] = anon_sym_DOLLAR;
	v->a[69008] = actions(2123);
	v->a[69009] = 1;
	v->a[69010] = anon_sym_DQUOTE;
	v->a[69011] = actions(2125);
	v->a[69012] = 1;
	v->a[69013] = aux_sym_number_token1;
	v->a[69014] = actions(2127);
	v->a[69015] = 1;
	v->a[69016] = aux_sym_number_token2;
	v->a[69017] = actions(2129);
	v->a[69018] = 1;
	v->a[69019] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3451(v);
}

void	small_parse_table_3451(t_small_parse_table_array *v)
{
	v->a[69020] = actions(2131);
	v->a[69021] = 1;
	v->a[69022] = anon_sym_DOLLAR_LPAREN;
	v->a[69023] = actions(2133);
	v->a[69024] = 1;
	v->a[69025] = anon_sym_BQUOTE;
	v->a[69026] = actions(2135);
	v->a[69027] = 1;
	v->a[69028] = sym_extglob_pattern;
	v->a[69029] = state(1241);
	v->a[69030] = 1;
	v->a[69031] = aux_sym_case_statement_repeat1;
	v->a[69032] = state(1786);
	v->a[69033] = 1;
	v->a[69034] = sym_case_item;
	v->a[69035] = state(2108);
	v->a[69036] = 1;
	v->a[69037] = sym__case_item_last;
	v->a[69038] = actions(2111);
	v->a[69039] = 2;
	small_parse_table_3452(v);
}

void	small_parse_table_3452(t_small_parse_table_array *v)
{
	v->a[69040] = sym_raw_string;
	v->a[69041] = sym_word;
	v->a[69042] = state(2016);
	v->a[69043] = 2;
	v->a[69044] = sym_concatenation;
	v->a[69045] = sym__extglob_blob;
	v->a[69046] = state(1896);
	v->a[69047] = 6;
	v->a[69048] = sym_arithmetic_expansion;
	v->a[69049] = sym_string;
	v->a[69050] = sym_number;
	v->a[69051] = sym_simple_expansion;
	v->a[69052] = sym_expansion;
	v->a[69053] = sym_command_substitution;
	v->a[69054] = 7;
	v->a[69055] = actions(3);
	v->a[69056] = 1;
	v->a[69057] = sym_comment;
	v->a[69058] = actions(2480);
	v->a[69059] = 1;
	small_parse_table_3453(v);
}

void	small_parse_table_3453(t_small_parse_table_array *v)
{
	v->a[69060] = aux_sym_heredoc_redirect_token1;
	v->a[69061] = actions(2532);
	v->a[69062] = 1;
	v->a[69063] = sym_file_descriptor;
	v->a[69064] = actions(2286);
	v->a[69065] = 2;
	v->a[69066] = anon_sym_LT_AMP_DASH;
	v->a[69067] = anon_sym_GT_AMP_DASH;
	v->a[69068] = state(1186);
	v->a[69069] = 2;
	v->a[69070] = sym_file_redirect;
	v->a[69071] = aux_sym_redirected_statement_repeat2;
	v->a[69072] = actions(2284);
	v->a[69073] = 8;
	v->a[69074] = anon_sym_LT;
	v->a[69075] = anon_sym_GT;
	v->a[69076] = anon_sym_GT_GT;
	v->a[69077] = anon_sym_AMP_GT;
	v->a[69078] = anon_sym_AMP_GT_GT;
	v->a[69079] = anon_sym_LT_AMP;
	small_parse_table_3454(v);
}

void	small_parse_table_3454(t_small_parse_table_array *v)
{
	v->a[69080] = anon_sym_GT_AMP;
	v->a[69081] = anon_sym_GT_PIPE;
	v->a[69082] = actions(2482);
	v->a[69083] = 9;
	v->a[69084] = anon_sym_PIPE;
	v->a[69085] = anon_sym_RPAREN;
	v->a[69086] = anon_sym_SEMI_SEMI;
	v->a[69087] = anon_sym_AMP_AMP;
	v->a[69088] = anon_sym_PIPE_PIPE;
	v->a[69089] = anon_sym_LT_LT;
	v->a[69090] = anon_sym_LT_LT_DASH;
	v->a[69091] = anon_sym_AMP;
	v->a[69092] = anon_sym_SEMI;
	v->a[69093] = 10;
	v->a[69094] = actions(3);
	v->a[69095] = 1;
	v->a[69096] = sym_comment;
	v->a[69097] = actions(1002);
	v->a[69098] = 1;
	v->a[69099] = anon_sym_PIPE;
	small_parse_table_3455(v);
}

/* EOF small_parse_table_690.c */
