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
	v->a[74001] = sym_comment;
	v->a[74002] = actions(1298);
	v->a[74003] = 6;
	v->a[74004] = sym_file_descriptor;
	v->a[74005] = sym__concat;
	v->a[74006] = sym_variable_name;
	v->a[74007] = sym_test_operator;
	v->a[74008] = sym__brace_start;
	v->a[74009] = aux_sym_heredoc_redirect_token1;
	v->a[74010] = actions(1296);
	v->a[74011] = 39;
	v->a[74012] = anon_sym_LPAREN_LPAREN;
	v->a[74013] = anon_sym_SEMI;
	v->a[74014] = anon_sym_PIPE_PIPE;
	v->a[74015] = anon_sym_AMP_AMP;
	v->a[74016] = anon_sym_PIPE;
	v->a[74017] = anon_sym_AMP;
	v->a[74018] = anon_sym_LT;
	v->a[74019] = anon_sym_GT;
	small_parse_table_3701(v);
}

void	small_parse_table_3701(t_small_parse_table_array *v)
{
	v->a[74020] = anon_sym_LT_LT;
	v->a[74021] = anon_sym_GT_GT;
	v->a[74022] = anon_sym_RPAREN;
	v->a[74023] = anon_sym_SEMI_SEMI;
	v->a[74024] = anon_sym_PIPE_AMP;
	v->a[74025] = anon_sym_AMP_GT;
	v->a[74026] = anon_sym_AMP_GT_GT;
	v->a[74027] = anon_sym_LT_AMP;
	v->a[74028] = anon_sym_GT_AMP;
	v->a[74029] = anon_sym_GT_PIPE;
	v->a[74030] = anon_sym_LT_AMP_DASH;
	v->a[74031] = anon_sym_GT_AMP_DASH;
	v->a[74032] = anon_sym_LT_LT_DASH;
	v->a[74033] = anon_sym_LT_LT_LT;
	v->a[74034] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[74035] = anon_sym_DOLLAR_LBRACK;
	v->a[74036] = aux_sym_concatenation_token1;
	v->a[74037] = anon_sym_DOLLAR;
	v->a[74038] = sym__special_character;
	v->a[74039] = anon_sym_DQUOTE;
	small_parse_table_3702(v);
}

void	small_parse_table_3702(t_small_parse_table_array *v)
{
	v->a[74040] = sym_raw_string;
	v->a[74041] = sym_ansi_c_string;
	v->a[74042] = aux_sym_number_token1;
	v->a[74043] = aux_sym_number_token2;
	v->a[74044] = anon_sym_DOLLAR_LBRACE;
	v->a[74045] = anon_sym_DOLLAR_LPAREN;
	v->a[74046] = anon_sym_BQUOTE;
	v->a[74047] = anon_sym_DOLLAR_BQUOTE;
	v->a[74048] = anon_sym_LT_LPAREN;
	v->a[74049] = anon_sym_GT_LPAREN;
	v->a[74050] = sym_word;
	v->a[74051] = 3;
	v->a[74052] = actions(3);
	v->a[74053] = 1;
	v->a[74054] = sym_comment;
	v->a[74055] = actions(1310);
	v->a[74056] = 5;
	v->a[74057] = sym_file_descriptor;
	v->a[74058] = sym__concat;
	v->a[74059] = sym_test_operator;
	small_parse_table_3703(v);
}

void	small_parse_table_3703(t_small_parse_table_array *v)
{
	v->a[74060] = sym__brace_start;
	v->a[74061] = aux_sym_heredoc_redirect_token1;
	v->a[74062] = actions(1308);
	v->a[74063] = 40;
	v->a[74064] = anon_sym_LPAREN_LPAREN;
	v->a[74065] = anon_sym_SEMI;
	v->a[74066] = anon_sym_PIPE_PIPE;
	v->a[74067] = anon_sym_AMP_AMP;
	v->a[74068] = anon_sym_PIPE;
	v->a[74069] = anon_sym_AMP;
	v->a[74070] = anon_sym_LT;
	v->a[74071] = anon_sym_GT;
	v->a[74072] = anon_sym_LT_LT;
	v->a[74073] = anon_sym_GT_GT;
	v->a[74074] = anon_sym_SEMI_SEMI;
	v->a[74075] = anon_sym_SEMI_AMP;
	v->a[74076] = anon_sym_SEMI_SEMI_AMP;
	v->a[74077] = anon_sym_PIPE_AMP;
	v->a[74078] = anon_sym_AMP_GT;
	v->a[74079] = anon_sym_AMP_GT_GT;
	small_parse_table_3704(v);
}

void	small_parse_table_3704(t_small_parse_table_array *v)
{
	v->a[74080] = anon_sym_LT_AMP;
	v->a[74081] = anon_sym_GT_AMP;
	v->a[74082] = anon_sym_GT_PIPE;
	v->a[74083] = anon_sym_LT_AMP_DASH;
	v->a[74084] = anon_sym_GT_AMP_DASH;
	v->a[74085] = anon_sym_LT_LT_DASH;
	v->a[74086] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[74087] = anon_sym_DOLLAR_LBRACK;
	v->a[74088] = aux_sym_concatenation_token1;
	v->a[74089] = anon_sym_DOLLAR;
	v->a[74090] = sym__special_character;
	v->a[74091] = anon_sym_DQUOTE;
	v->a[74092] = sym_raw_string;
	v->a[74093] = sym_ansi_c_string;
	v->a[74094] = aux_sym_number_token1;
	v->a[74095] = aux_sym_number_token2;
	v->a[74096] = anon_sym_DOLLAR_LBRACE;
	v->a[74097] = anon_sym_DOLLAR_LPAREN;
	v->a[74098] = anon_sym_BQUOTE;
	v->a[74099] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_3705(v);
}

/* EOF small_parse_table_740.c */
