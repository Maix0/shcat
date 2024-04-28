/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_954.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4770(t_small_parse_table_array *v)
{
	v->a[95400] = 1;
	v->a[95401] = anon_sym_DOLLAR_LBRACK;
	v->a[95402] = actions(1145);
	v->a[95403] = 1;
	v->a[95404] = anon_sym_DOLLAR;
	v->a[95405] = actions(1147);
	v->a[95406] = 1;
	v->a[95407] = sym__special_character;
	v->a[95408] = actions(1149);
	v->a[95409] = 1;
	v->a[95410] = anon_sym_DQUOTE;
	v->a[95411] = actions(1153);
	v->a[95412] = 1;
	v->a[95413] = aux_sym_number_token1;
	v->a[95414] = actions(1155);
	v->a[95415] = 1;
	v->a[95416] = aux_sym_number_token2;
	v->a[95417] = actions(1157);
	v->a[95418] = 1;
	v->a[95419] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_4771(v);
}

void	small_parse_table_4771(t_small_parse_table_array *v)
{
	v->a[95420] = actions(1159);
	v->a[95421] = 1;
	v->a[95422] = anon_sym_DOLLAR_LPAREN;
	v->a[95423] = actions(1163);
	v->a[95424] = 1;
	v->a[95425] = anon_sym_DOLLAR_BQUOTE;
	v->a[95426] = actions(1167);
	v->a[95427] = 1;
	v->a[95428] = sym_test_operator;
	v->a[95429] = actions(1169);
	v->a[95430] = 1;
	v->a[95431] = sym__brace_start;
	v->a[95432] = actions(3060);
	v->a[95433] = 1;
	v->a[95434] = anon_sym_BQUOTE;
	v->a[95435] = state(2484);
	v->a[95436] = 1;
	v->a[95437] = aux_sym__literal_repeat1;
	v->a[95438] = state(2967);
	v->a[95439] = 1;
	small_parse_table_4772(v);
}

void	small_parse_table_4772(t_small_parse_table_array *v)
{
	v->a[95440] = sym__expression;
	v->a[95441] = actions(1129);
	v->a[95442] = 2;
	v->a[95443] = anon_sym_LPAREN_LPAREN;
	v->a[95444] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[95445] = actions(1135);
	v->a[95446] = 2;
	v->a[95447] = anon_sym_PLUS_PLUS2;
	v->a[95448] = anon_sym_DASH_DASH2;
	v->a[95449] = actions(1137);
	v->a[95450] = 2;
	v->a[95451] = anon_sym_DASH2;
	v->a[95452] = anon_sym_PLUS2;
	v->a[95453] = actions(1151);
	v->a[95454] = 2;
	v->a[95455] = sym_raw_string;
	v->a[95456] = sym_ansi_c_string;
	v->a[95457] = actions(1165);
	v->a[95458] = 2;
	v->a[95459] = anon_sym_LT_LPAREN;
	small_parse_table_4773(v);
}

void	small_parse_table_4773(t_small_parse_table_array *v)
{
	v->a[95460] = anon_sym_GT_LPAREN;
	v->a[95461] = state(2594);
	v->a[95462] = 6;
	v->a[95463] = sym_binary_expression;
	v->a[95464] = sym_ternary_expression;
	v->a[95465] = sym_unary_expression;
	v->a[95466] = sym_postfix_expression;
	v->a[95467] = sym_parenthesized_expression;
	v->a[95468] = sym_concatenation;
	v->a[95469] = state(2573);
	v->a[95470] = 9;
	v->a[95471] = sym_arithmetic_expansion;
	v->a[95472] = sym_brace_expression;
	v->a[95473] = sym_string;
	v->a[95474] = sym_translated_string;
	v->a[95475] = sym_number;
	v->a[95476] = sym_simple_expansion;
	v->a[95477] = sym_expansion;
	v->a[95478] = sym_command_substitution;
	v->a[95479] = sym_process_substitution;
	small_parse_table_4774(v);
}

void	small_parse_table_4774(t_small_parse_table_array *v)
{
	v->a[95480] = 3;
	v->a[95481] = actions(3);
	v->a[95482] = 1;
	v->a[95483] = sym_comment;
	v->a[95484] = actions(1322);
	v->a[95485] = 6;
	v->a[95486] = sym_file_descriptor;
	v->a[95487] = sym__concat;
	v->a[95488] = sym_test_operator;
	v->a[95489] = sym__brace_start;
	v->a[95490] = ts_builtin_sym_end;
	v->a[95491] = aux_sym_heredoc_redirect_token1;
	v->a[95492] = actions(1320);
	v->a[95493] = 37;
	v->a[95494] = anon_sym_LPAREN_LPAREN;
	v->a[95495] = anon_sym_SEMI;
	v->a[95496] = anon_sym_PIPE_PIPE;
	v->a[95497] = anon_sym_AMP_AMP;
	v->a[95498] = anon_sym_PIPE;
	v->a[95499] = anon_sym_AMP;
	small_parse_table_4775(v);
}

/* EOF small_parse_table_954.c */
