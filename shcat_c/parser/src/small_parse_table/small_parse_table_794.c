/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_794.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3970(t_small_parse_table_array *v)
{
	v->a[79400] = actions(1151);
	v->a[79401] = 2;
	v->a[79402] = sym_raw_string;
	v->a[79403] = sym_ansi_c_string;
	v->a[79404] = actions(1165);
	v->a[79405] = 2;
	v->a[79406] = anon_sym_LT_LPAREN;
	v->a[79407] = anon_sym_GT_LPAREN;
	v->a[79408] = state(2594);
	v->a[79409] = 6;
	v->a[79410] = sym_binary_expression;
	v->a[79411] = sym_ternary_expression;
	v->a[79412] = sym_unary_expression;
	v->a[79413] = sym_postfix_expression;
	v->a[79414] = sym_parenthesized_expression;
	v->a[79415] = sym_concatenation;
	v->a[79416] = state(2573);
	v->a[79417] = 9;
	v->a[79418] = sym_arithmetic_expansion;
	v->a[79419] = sym_brace_expression;
	small_parse_table_3971(v);
}

void	small_parse_table_3971(t_small_parse_table_array *v)
{
	v->a[79420] = sym_string;
	v->a[79421] = sym_translated_string;
	v->a[79422] = sym_number;
	v->a[79423] = sym_simple_expansion;
	v->a[79424] = sym_expansion;
	v->a[79425] = sym_command_substitution;
	v->a[79426] = sym_process_substitution;
	v->a[79427] = 3;
	v->a[79428] = actions(3);
	v->a[79429] = 1;
	v->a[79430] = sym_comment;
	v->a[79431] = actions(1322);
	v->a[79432] = 6;
	v->a[79433] = sym_file_descriptor;
	v->a[79434] = sym__concat;
	v->a[79435] = sym_variable_name;
	v->a[79436] = sym_test_operator;
	v->a[79437] = sym__brace_start;
	v->a[79438] = aux_sym_heredoc_redirect_token1;
	v->a[79439] = actions(1320);
	small_parse_table_3972(v);
}

void	small_parse_table_3972(t_small_parse_table_array *v)
{
	v->a[79440] = 39;
	v->a[79441] = anon_sym_LPAREN_LPAREN;
	v->a[79442] = anon_sym_SEMI;
	v->a[79443] = anon_sym_PIPE_PIPE;
	v->a[79444] = anon_sym_AMP_AMP;
	v->a[79445] = anon_sym_PIPE;
	v->a[79446] = anon_sym_AMP;
	v->a[79447] = anon_sym_LT;
	v->a[79448] = anon_sym_GT;
	v->a[79449] = anon_sym_LT_LT;
	v->a[79450] = anon_sym_GT_GT;
	v->a[79451] = anon_sym_RPAREN;
	v->a[79452] = anon_sym_SEMI_SEMI;
	v->a[79453] = anon_sym_PIPE_AMP;
	v->a[79454] = anon_sym_AMP_GT;
	v->a[79455] = anon_sym_AMP_GT_GT;
	v->a[79456] = anon_sym_LT_AMP;
	v->a[79457] = anon_sym_GT_AMP;
	v->a[79458] = anon_sym_GT_PIPE;
	v->a[79459] = anon_sym_LT_AMP_DASH;
	small_parse_table_3973(v);
}

void	small_parse_table_3973(t_small_parse_table_array *v)
{
	v->a[79460] = anon_sym_GT_AMP_DASH;
	v->a[79461] = anon_sym_LT_LT_DASH;
	v->a[79462] = anon_sym_LT_LT_LT;
	v->a[79463] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79464] = anon_sym_DOLLAR_LBRACK;
	v->a[79465] = aux_sym_concatenation_token1;
	v->a[79466] = anon_sym_DOLLAR;
	v->a[79467] = sym__special_character;
	v->a[79468] = anon_sym_DQUOTE;
	v->a[79469] = sym_raw_string;
	v->a[79470] = sym_ansi_c_string;
	v->a[79471] = aux_sym_number_token1;
	v->a[79472] = aux_sym_number_token2;
	v->a[79473] = anon_sym_DOLLAR_LBRACE;
	v->a[79474] = anon_sym_DOLLAR_LPAREN;
	v->a[79475] = anon_sym_BQUOTE;
	v->a[79476] = anon_sym_DOLLAR_BQUOTE;
	v->a[79477] = anon_sym_LT_LPAREN;
	v->a[79478] = anon_sym_GT_LPAREN;
	v->a[79479] = sym_word;
	small_parse_table_3974(v);
}

void	small_parse_table_3974(t_small_parse_table_array *v)
{
	v->a[79480] = 6;
	v->a[79481] = actions(3);
	v->a[79482] = 1;
	v->a[79483] = sym_comment;
	v->a[79484] = actions(5762);
	v->a[79485] = 1;
	v->a[79486] = aux_sym_concatenation_token1;
	v->a[79487] = actions(5789);
	v->a[79488] = 1;
	v->a[79489] = sym__concat;
	v->a[79490] = state(1557);
	v->a[79491] = 1;
	v->a[79492] = aux_sym_concatenation_repeat1;
	v->a[79493] = actions(5470);
	v->a[79494] = 5;
	v->a[79495] = sym_file_descriptor;
	v->a[79496] = sym_test_operator;
	v->a[79497] = sym__brace_start;
	v->a[79498] = ts_builtin_sym_end;
	v->a[79499] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3975(v);
}

/* EOF small_parse_table_794.c */
