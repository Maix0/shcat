/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_740.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3700(t_small_parse_table_array *v)
{
	v->a[74000] = 1;
	v->a[74001] = sym_extglob_pattern;
	v->a[74002] = actions(4362);
	v->a[74003] = 1;
	v->a[74004] = sym__brace_start;
	v->a[74005] = actions(4426);
	v->a[74006] = 1;
	v->a[74007] = anon_sym_esac;
	v->a[74008] = actions(4430);
	v->a[74009] = 1;
	v->a[74010] = aux_sym_heredoc_redirect_token1;
	v->a[74011] = state(3393);
	v->a[74012] = 1;
	v->a[74013] = aux_sym__literal_repeat1;
	v->a[74014] = state(3953);
	v->a[74015] = 1;
	v->a[74016] = sym_last_case_item;
	v->a[74017] = actions(4328);
	v->a[74018] = 2;
	v->a[74019] = sym_raw_string;
	small_parse_table_3701(v);
}

void	small_parse_table_3701(t_small_parse_table_array *v)
{
	v->a[74020] = sym_word;
	v->a[74021] = state(1792);
	v->a[74022] = 2;
	v->a[74023] = sym_case_item;
	v->a[74024] = aux_sym_case_statement_repeat1;
	v->a[74025] = state(3472);
	v->a[74026] = 2;
	v->a[74027] = sym_concatenation;
	v->a[74028] = sym__extglob_blob;
	v->a[74029] = actions(4428);
	v->a[74030] = 3;
	v->a[74031] = anon_sym_SEMI_SEMI;
	v->a[74032] = anon_sym_AMP;
	v->a[74033] = anon_sym_SEMI;
	v->a[74034] = state(3295);
	v->a[74035] = 7;
	v->a[74036] = sym_arithmetic_expansion;
	v->a[74037] = sym_brace_expression;
	v->a[74038] = sym_string;
	v->a[74039] = sym_number;
	small_parse_table_3702(v);
}

void	small_parse_table_3702(t_small_parse_table_array *v)
{
	v->a[74040] = sym_simple_expansion;
	v->a[74041] = sym_expansion;
	v->a[74042] = sym_command_substitution;
	v->a[74043] = 3;
	v->a[74044] = actions(57);
	v->a[74045] = 1;
	v->a[74046] = sym_comment;
	v->a[74047] = actions(2776);
	v->a[74048] = 13;
	v->a[74049] = anon_sym_PIPE;
	v->a[74050] = anon_sym_LT;
	v->a[74051] = anon_sym_GT;
	v->a[74052] = anon_sym_AMP_GT;
	v->a[74053] = anon_sym_LT_AMP;
	v->a[74054] = anon_sym_GT_AMP;
	v->a[74055] = anon_sym_LT_LT;
	v->a[74056] = anon_sym_DOLLAR;
	v->a[74057] = aux_sym_number_token1;
	v->a[74058] = aux_sym_number_token2;
	v->a[74059] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3703(v);
}

void	small_parse_table_3703(t_small_parse_table_array *v)
{
	v->a[74060] = anon_sym_BQUOTE;
	v->a[74061] = sym_word;
	v->a[74062] = actions(2778);
	v->a[74063] = 21;
	v->a[74064] = sym_file_descriptor;
	v->a[74065] = sym__concat;
	v->a[74066] = sym_test_operator;
	v->a[74067] = sym__bare_dollar;
	v->a[74068] = sym__brace_start;
	v->a[74069] = anon_sym_PIPE_AMP;
	v->a[74070] = anon_sym_AMP_AMP;
	v->a[74071] = anon_sym_PIPE_PIPE;
	v->a[74072] = anon_sym_GT_GT;
	v->a[74073] = anon_sym_AMP_GT_GT;
	v->a[74074] = anon_sym_GT_PIPE;
	v->a[74075] = anon_sym_LT_AMP_DASH;
	v->a[74076] = anon_sym_GT_AMP_DASH;
	v->a[74077] = anon_sym_LT_LT_DASH;
	v->a[74078] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[74079] = aux_sym_concatenation_token1;
	small_parse_table_3704(v);
}

void	small_parse_table_3704(t_small_parse_table_array *v)
{
	v->a[74080] = sym__special_character;
	v->a[74081] = anon_sym_DQUOTE;
	v->a[74082] = sym_raw_string;
	v->a[74083] = anon_sym_DOLLAR_LBRACE;
	v->a[74084] = anon_sym_DOLLAR_BQUOTE;
	v->a[74085] = 3;
	v->a[74086] = actions(57);
	v->a[74087] = 1;
	v->a[74088] = sym_comment;
	v->a[74089] = actions(2772);
	v->a[74090] = 13;
	v->a[74091] = anon_sym_PIPE;
	v->a[74092] = anon_sym_LT;
	v->a[74093] = anon_sym_GT;
	v->a[74094] = anon_sym_AMP_GT;
	v->a[74095] = anon_sym_LT_AMP;
	v->a[74096] = anon_sym_GT_AMP;
	v->a[74097] = anon_sym_LT_LT;
	v->a[74098] = anon_sym_DOLLAR;
	v->a[74099] = aux_sym_number_token1;
	small_parse_table_3705(v);
}

/* EOF small_parse_table_740.c */
