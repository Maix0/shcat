/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1900.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9500(t_small_parse_table_array *v)
{
	v->a[190000] = sym__brace_start;
	v->a[190001] = actions(8064);
	v->a[190002] = 1;
	v->a[190003] = anon_sym_LPAREN;
	v->a[190004] = actions(8066);
	v->a[190005] = 1;
	v->a[190006] = anon_sym_DOLLAR_LBRACK;
	v->a[190007] = actions(8070);
	v->a[190008] = 1;
	v->a[190009] = anon_sym_DQUOTE;
	v->a[190010] = actions(8074);
	v->a[190011] = 1;
	v->a[190012] = anon_sym_DOLLAR_LBRACE;
	v->a[190013] = actions(8076);
	v->a[190014] = 1;
	v->a[190015] = anon_sym_BQUOTE;
	v->a[190016] = actions(8078);
	v->a[190017] = 1;
	v->a[190018] = anon_sym_DOLLAR_BQUOTE;
	v->a[190019] = actions(8082);
	small_parse_table_9501(v);
}

void	small_parse_table_9501(t_small_parse_table_array *v)
{
	v->a[190020] = 1;
	v->a[190021] = sym__comment_word;
	v->a[190022] = actions(8084);
	v->a[190023] = 1;
	v->a[190024] = sym__empty_value;
	v->a[190025] = actions(8254);
	v->a[190026] = 1;
	v->a[190027] = sym_word;
	v->a[190028] = actions(8256);
	v->a[190029] = 1;
	v->a[190030] = sym__special_character;
	v->a[190031] = actions(8260);
	v->a[190032] = 1;
	v->a[190033] = sym_test_operator;
	v->a[190034] = state(1887);
	v->a[190035] = 1;
	v->a[190036] = aux_sym__literal_repeat1;
	v->a[190037] = actions(8062);
	v->a[190038] = 2;
	v->a[190039] = anon_sym_LPAREN_LPAREN;
	small_parse_table_9502(v);
}

void	small_parse_table_9502(t_small_parse_table_array *v)
{
	v->a[190040] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[190041] = actions(8080);
	v->a[190042] = 2;
	v->a[190043] = anon_sym_LT_LPAREN;
	v->a[190044] = anon_sym_GT_LPAREN;
	v->a[190045] = actions(8258);
	v->a[190046] = 2;
	v->a[190047] = sym_raw_string;
	v->a[190048] = sym_ansi_c_string;
	v->a[190049] = state(2158);
	v->a[190050] = 2;
	v->a[190051] = sym_concatenation;
	v->a[190052] = sym_array;
	v->a[190053] = state(1470);
	v->a[190054] = 9;
	v->a[190055] = sym_arithmetic_expansion;
	v->a[190056] = sym_brace_expression;
	v->a[190057] = sym_string;
	v->a[190058] = sym_translated_string;
	v->a[190059] = sym_number;
	small_parse_table_9503(v);
}

void	small_parse_table_9503(t_small_parse_table_array *v)
{
	v->a[190060] = sym_simple_expansion;
	v->a[190061] = sym_expansion;
	v->a[190062] = sym_command_substitution;
	v->a[190063] = sym_process_substitution;
	v->a[190064] = 3;
	v->a[190065] = actions(71);
	v->a[190066] = 1;
	v->a[190067] = sym_comment;
	v->a[190068] = actions(1251);
	v->a[190069] = 11;
	v->a[190070] = anon_sym_LT;
	v->a[190071] = anon_sym_GT;
	v->a[190072] = anon_sym_AMP_GT;
	v->a[190073] = anon_sym_LT_AMP;
	v->a[190074] = anon_sym_GT_AMP;
	v->a[190075] = anon_sym_DOLLAR;
	v->a[190076] = aux_sym_number_token1;
	v->a[190077] = aux_sym_number_token2;
	v->a[190078] = anon_sym_DOLLAR_LPAREN;
	v->a[190079] = anon_sym_BQUOTE;
	small_parse_table_9504(v);
}

void	small_parse_table_9504(t_small_parse_table_array *v)
{
	v->a[190080] = sym_word;
	v->a[190081] = actions(1253);
	v->a[190082] = 23;
	v->a[190083] = sym_file_descriptor;
	v->a[190084] = sym__concat;
	v->a[190085] = sym_variable_name;
	v->a[190086] = sym_test_operator;
	v->a[190087] = sym__brace_start;
	v->a[190088] = anon_sym_LPAREN_LPAREN;
	v->a[190089] = anon_sym_GT_GT;
	v->a[190090] = anon_sym_AMP_GT_GT;
	v->a[190091] = anon_sym_GT_PIPE;
	v->a[190092] = anon_sym_LT_AMP_DASH;
	v->a[190093] = anon_sym_GT_AMP_DASH;
	v->a[190094] = anon_sym_LT_LT_LT;
	v->a[190095] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[190096] = anon_sym_DOLLAR_LBRACK;
	v->a[190097] = aux_sym_concatenation_token1;
	v->a[190098] = sym__special_character;
	v->a[190099] = anon_sym_DQUOTE;
	small_parse_table_9505(v);
}

/* EOF small_parse_table_1900.c */
