/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_590.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2950(t_small_parse_table_array *v)
{
	v->a[59000] = sym_word;
	v->a[59001] = 19;
	v->a[59002] = actions(3);
	v->a[59003] = 1;
	v->a[59004] = sym_comment;
	v->a[59005] = actions(3881);
	v->a[59006] = 1;
	v->a[59007] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[59008] = actions(3883);
	v->a[59009] = 1;
	v->a[59010] = anon_sym_DOLLAR;
	v->a[59011] = actions(3885);
	v->a[59012] = 1;
	v->a[59013] = sym__special_character;
	v->a[59014] = actions(3887);
	v->a[59015] = 1;
	v->a[59016] = anon_sym_DQUOTE;
	v->a[59017] = actions(3889);
	v->a[59018] = 1;
	v->a[59019] = aux_sym_number_token1;
	small_parse_table_2951(v);
}

void	small_parse_table_2951(t_small_parse_table_array *v)
{
	v->a[59020] = actions(3891);
	v->a[59021] = 1;
	v->a[59022] = aux_sym_number_token2;
	v->a[59023] = actions(3893);
	v->a[59024] = 1;
	v->a[59025] = anon_sym_DOLLAR_LBRACE;
	v->a[59026] = actions(3895);
	v->a[59027] = 1;
	v->a[59028] = anon_sym_DOLLAR_LPAREN;
	v->a[59029] = actions(3897);
	v->a[59030] = 1;
	v->a[59031] = anon_sym_BQUOTE;
	v->a[59032] = actions(3899);
	v->a[59033] = 1;
	v->a[59034] = anon_sym_DOLLAR_BQUOTE;
	v->a[59035] = actions(3903);
	v->a[59036] = 1;
	v->a[59037] = sym__brace_start;
	v->a[59038] = actions(3919);
	v->a[59039] = 1;
	small_parse_table_2952(v);
}

void	small_parse_table_2952(t_small_parse_table_array *v)
{
	v->a[59040] = sym_test_operator;
	v->a[59041] = state(2824);
	v->a[59042] = 1;
	v->a[59043] = aux_sym__literal_repeat1;
	v->a[59044] = state(2973);
	v->a[59045] = 1;
	v->a[59046] = sym_concatenation;
	v->a[59047] = actions(1534);
	v->a[59048] = 2;
	v->a[59049] = sym_file_descriptor;
	v->a[59050] = aux_sym_heredoc_redirect_token1;
	v->a[59051] = actions(3917);
	v->a[59052] = 2;
	v->a[59053] = sym_raw_string;
	v->a[59054] = sym_word;
	v->a[59055] = state(2783);
	v->a[59056] = 7;
	v->a[59057] = sym_arithmetic_expansion;
	v->a[59058] = sym_brace_expression;
	v->a[59059] = sym_string;
	small_parse_table_2953(v);
}

void	small_parse_table_2953(t_small_parse_table_array *v)
{
	v->a[59060] = sym_number;
	v->a[59061] = sym_simple_expansion;
	v->a[59062] = sym_expansion;
	v->a[59063] = sym_command_substitution;
	v->a[59064] = actions(1532);
	v->a[59065] = 12;
	v->a[59066] = anon_sym_AMP_AMP;
	v->a[59067] = anon_sym_PIPE_PIPE;
	v->a[59068] = anon_sym_LT;
	v->a[59069] = anon_sym_GT;
	v->a[59070] = anon_sym_GT_GT;
	v->a[59071] = anon_sym_AMP_GT;
	v->a[59072] = anon_sym_AMP_GT_GT;
	v->a[59073] = anon_sym_LT_AMP;
	v->a[59074] = anon_sym_GT_AMP;
	v->a[59075] = anon_sym_GT_PIPE;
	v->a[59076] = anon_sym_LT_AMP_DASH;
	v->a[59077] = anon_sym_GT_AMP_DASH;
	v->a[59078] = 8;
	v->a[59079] = actions(3);
	small_parse_table_2954(v);
}

void	small_parse_table_2954(t_small_parse_table_array *v)
{
	v->a[59080] = 1;
	v->a[59081] = sym_comment;
	v->a[59082] = actions(3632);
	v->a[59083] = 1;
	v->a[59084] = aux_sym_heredoc_redirect_token1;
	v->a[59085] = actions(3634);
	v->a[59086] = 1;
	v->a[59087] = sym_file_descriptor;
	v->a[59088] = actions(3921);
	v->a[59089] = 1;
	v->a[59090] = anon_sym_RPAREN;
	v->a[59091] = actions(3637);
	v->a[59092] = 3;
	v->a[59093] = sym_variable_name;
	v->a[59094] = sym_test_operator;
	v->a[59095] = sym__brace_start;
	v->a[59096] = actions(3627);
	v->a[59097] = 9;
	v->a[59098] = anon_sym_PIPE;
	v->a[59099] = anon_sym_SEMI_SEMI;
	small_parse_table_2955(v);
}

/* EOF small_parse_table_590.c */
