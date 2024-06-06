/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_440.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2200(t_small_parse_table_array *v)
{
	v->a[44000] = aux_sym_number_token1;
	v->a[44001] = aux_sym_number_token2;
	v->a[44002] = anon_sym_DOLLAR_LBRACE;
	v->a[44003] = anon_sym_DOLLAR_LPAREN;
	v->a[44004] = anon_sym_BQUOTE;
	v->a[44005] = anon_sym_DOLLAR_BQUOTE;
	v->a[44006] = sym_word;
	v->a[44007] = anon_sym_SEMI;
	v->a[44008] = 5;
	v->a[44009] = actions(3);
	v->a[44010] = 1;
	v->a[44011] = sym_comment;
	v->a[44012] = actions(3611);
	v->a[44013] = 1;
	v->a[44014] = sym__special_character;
	v->a[44015] = state(1057);
	v->a[44016] = 1;
	v->a[44017] = aux_sym__literal_repeat1;
	v->a[44018] = actions(3519);
	v->a[44019] = 5;
	small_parse_table_2201(v);
}

void	small_parse_table_2201(t_small_parse_table_array *v)
{
	v->a[44020] = sym_file_descriptor;
	v->a[44021] = sym_variable_name;
	v->a[44022] = sym_test_operator;
	v->a[44023] = sym__brace_start;
	v->a[44024] = aux_sym_heredoc_redirect_token1;
	v->a[44025] = actions(3517);
	v->a[44026] = 32;
	v->a[44027] = anon_sym_PIPE;
	v->a[44028] = anon_sym_SEMI_SEMI;
	v->a[44029] = anon_sym_SEMI_AMP;
	v->a[44030] = anon_sym_SEMI_SEMI_AMP;
	v->a[44031] = anon_sym_PIPE_AMP;
	v->a[44032] = anon_sym_AMP_AMP;
	v->a[44033] = anon_sym_PIPE_PIPE;
	v->a[44034] = anon_sym_LT;
	v->a[44035] = anon_sym_GT;
	v->a[44036] = anon_sym_GT_GT;
	v->a[44037] = anon_sym_AMP_GT;
	v->a[44038] = anon_sym_AMP_GT_GT;
	v->a[44039] = anon_sym_LT_AMP;
	small_parse_table_2202(v);
}

void	small_parse_table_2202(t_small_parse_table_array *v)
{
	v->a[44040] = anon_sym_GT_AMP;
	v->a[44041] = anon_sym_GT_PIPE;
	v->a[44042] = anon_sym_LT_AMP_DASH;
	v->a[44043] = anon_sym_GT_AMP_DASH;
	v->a[44044] = anon_sym_LT_LT;
	v->a[44045] = anon_sym_LT_LT_DASH;
	v->a[44046] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44047] = anon_sym_AMP;
	v->a[44048] = anon_sym_DOLLAR;
	v->a[44049] = anon_sym_DQUOTE;
	v->a[44050] = sym_raw_string;
	v->a[44051] = aux_sym_number_token1;
	v->a[44052] = aux_sym_number_token2;
	v->a[44053] = anon_sym_DOLLAR_LBRACE;
	v->a[44054] = anon_sym_DOLLAR_LPAREN;
	v->a[44055] = anon_sym_BQUOTE;
	v->a[44056] = anon_sym_DOLLAR_BQUOTE;
	v->a[44057] = sym_word;
	v->a[44058] = anon_sym_SEMI;
	v->a[44059] = 3;
	small_parse_table_2203(v);
}

void	small_parse_table_2203(t_small_parse_table_array *v)
{
	v->a[44060] = actions(3);
	v->a[44061] = 1;
	v->a[44062] = sym_comment;
	v->a[44063] = actions(2654);
	v->a[44064] = 5;
	v->a[44065] = sym_file_descriptor;
	v->a[44066] = sym__concat;
	v->a[44067] = sym_test_operator;
	v->a[44068] = sym__brace_start;
	v->a[44069] = aux_sym_heredoc_redirect_token1;
	v->a[44070] = actions(2652);
	v->a[44071] = 34;
	v->a[44072] = anon_sym_PIPE;
	v->a[44073] = anon_sym_SEMI_SEMI;
	v->a[44074] = anon_sym_SEMI_AMP;
	v->a[44075] = anon_sym_SEMI_SEMI_AMP;
	v->a[44076] = anon_sym_PIPE_AMP;
	v->a[44077] = anon_sym_AMP_AMP;
	v->a[44078] = anon_sym_PIPE_PIPE;
	v->a[44079] = anon_sym_LT;
	small_parse_table_2204(v);
}

void	small_parse_table_2204(t_small_parse_table_array *v)
{
	v->a[44080] = anon_sym_GT;
	v->a[44081] = anon_sym_GT_GT;
	v->a[44082] = anon_sym_AMP_GT;
	v->a[44083] = anon_sym_AMP_GT_GT;
	v->a[44084] = anon_sym_LT_AMP;
	v->a[44085] = anon_sym_GT_AMP;
	v->a[44086] = anon_sym_GT_PIPE;
	v->a[44087] = anon_sym_LT_AMP_DASH;
	v->a[44088] = anon_sym_GT_AMP_DASH;
	v->a[44089] = anon_sym_LT_LT;
	v->a[44090] = anon_sym_LT_LT_DASH;
	v->a[44091] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44092] = anon_sym_AMP;
	v->a[44093] = aux_sym_concatenation_token1;
	v->a[44094] = anon_sym_DOLLAR;
	v->a[44095] = sym__special_character;
	v->a[44096] = anon_sym_DQUOTE;
	v->a[44097] = sym_raw_string;
	v->a[44098] = aux_sym_number_token1;
	v->a[44099] = aux_sym_number_token2;
	small_parse_table_2205(v);
}

/* EOF small_parse_table_440.c */
