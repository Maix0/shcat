/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1972.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9860(t_small_parse_table_array *v)
{
	v->a[197200] = 2;
	v->a[197201] = anon_sym_LT_LPAREN;
	v->a[197202] = anon_sym_GT_LPAREN;
	v->a[197203] = state(1000);
	v->a[197204] = 9;
	v->a[197205] = sym_arithmetic_expansion;
	v->a[197206] = sym_brace_expression;
	v->a[197207] = sym_string;
	v->a[197208] = sym_translated_string;
	v->a[197209] = sym_number;
	v->a[197210] = sym_simple_expansion;
	v->a[197211] = sym_expansion;
	v->a[197212] = sym_command_substitution;
	v->a[197213] = sym_process_substitution;
	v->a[197214] = 20;
	v->a[197215] = actions(71);
	v->a[197216] = 1;
	v->a[197217] = sym_comment;
	v->a[197218] = actions(8102);
	v->a[197219] = 1;
	small_parse_table_9861(v);
}

void	small_parse_table_9861(t_small_parse_table_array *v)
{
	v->a[197220] = anon_sym_DOLLAR_LBRACK;
	v->a[197221] = actions(8104);
	v->a[197222] = 1;
	v->a[197223] = anon_sym_DOLLAR;
	v->a[197224] = actions(8106);
	v->a[197225] = 1;
	v->a[197226] = sym__special_character;
	v->a[197227] = actions(8108);
	v->a[197228] = 1;
	v->a[197229] = anon_sym_DQUOTE;
	v->a[197230] = actions(8112);
	v->a[197231] = 1;
	v->a[197232] = aux_sym_number_token1;
	v->a[197233] = actions(8114);
	v->a[197234] = 1;
	v->a[197235] = aux_sym_number_token2;
	v->a[197236] = actions(8116);
	v->a[197237] = 1;
	v->a[197238] = anon_sym_DOLLAR_LBRACE;
	v->a[197239] = actions(8118);
	small_parse_table_9862(v);
}

void	small_parse_table_9862(t_small_parse_table_array *v)
{
	v->a[197240] = 1;
	v->a[197241] = anon_sym_DOLLAR_LPAREN;
	v->a[197242] = actions(8120);
	v->a[197243] = 1;
	v->a[197244] = anon_sym_BQUOTE;
	v->a[197245] = actions(8122);
	v->a[197246] = 1;
	v->a[197247] = anon_sym_DOLLAR_BQUOTE;
	v->a[197248] = actions(8132);
	v->a[197249] = 1;
	v->a[197250] = sym__brace_start;
	v->a[197251] = actions(8898);
	v->a[197252] = 1;
	v->a[197253] = sym_word;
	v->a[197254] = actions(8902);
	v->a[197255] = 1;
	v->a[197256] = sym_test_operator;
	v->a[197257] = state(1474);
	v->a[197258] = 1;
	v->a[197259] = aux_sym__literal_repeat1;
	small_parse_table_9863(v);
}

void	small_parse_table_9863(t_small_parse_table_array *v)
{
	v->a[197260] = actions(8098);
	v->a[197261] = 2;
	v->a[197262] = anon_sym_LPAREN_LPAREN;
	v->a[197263] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[197264] = actions(8124);
	v->a[197265] = 2;
	v->a[197266] = anon_sym_LT_LPAREN;
	v->a[197267] = anon_sym_GT_LPAREN;
	v->a[197268] = actions(8900);
	v->a[197269] = 2;
	v->a[197270] = sym_raw_string;
	v->a[197271] = sym_ansi_c_string;
	v->a[197272] = state(573);
	v->a[197273] = 2;
	v->a[197274] = sym_concatenation;
	v->a[197275] = aux_sym_for_statement_repeat1;
	v->a[197276] = state(1158);
	v->a[197277] = 9;
	v->a[197278] = sym_arithmetic_expansion;
	v->a[197279] = sym_brace_expression;
	small_parse_table_9864(v);
}

void	small_parse_table_9864(t_small_parse_table_array *v)
{
	v->a[197280] = sym_string;
	v->a[197281] = sym_translated_string;
	v->a[197282] = sym_number;
	v->a[197283] = sym_simple_expansion;
	v->a[197284] = sym_expansion;
	v->a[197285] = sym_command_substitution;
	v->a[197286] = sym_process_substitution;
	v->a[197287] = 20;
	v->a[197288] = actions(71);
	v->a[197289] = 1;
	v->a[197290] = sym_comment;
	v->a[197291] = actions(8102);
	v->a[197292] = 1;
	v->a[197293] = anon_sym_DOLLAR_LBRACK;
	v->a[197294] = actions(8104);
	v->a[197295] = 1;
	v->a[197296] = anon_sym_DOLLAR;
	v->a[197297] = actions(8106);
	v->a[197298] = 1;
	v->a[197299] = sym__special_character;
	small_parse_table_9865(v);
}

/* EOF small_parse_table_1972.c */
