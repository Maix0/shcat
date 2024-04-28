/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1062.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5310(t_small_parse_table_array *v)
{
	v->a[106200] = anon_sym_DQUOTE;
	v->a[106201] = actions(1085);
	v->a[106202] = 1;
	v->a[106203] = anon_sym_DOLLAR_LBRACE;
	v->a[106204] = actions(1087);
	v->a[106205] = 1;
	v->a[106206] = anon_sym_DOLLAR_BQUOTE;
	v->a[106207] = actions(3598);
	v->a[106208] = 1;
	v->a[106209] = anon_sym_BQUOTE;
	v->a[106210] = state(2690);
	v->a[106211] = 1;
	v->a[106212] = aux_sym__literal_repeat1;
	v->a[106213] = state(3130);
	v->a[106214] = 1;
	v->a[106215] = sym__expression;
	v->a[106216] = actions(103);
	v->a[106217] = 2;
	v->a[106218] = anon_sym_PLUS_PLUS2;
	v->a[106219] = anon_sym_DASH_DASH2;
	small_parse_table_5311(v);
}

void	small_parse_table_5311(t_small_parse_table_array *v)
{
	v->a[106220] = actions(105);
	v->a[106221] = 2;
	v->a[106222] = anon_sym_DASH2;
	v->a[106223] = anon_sym_PLUS2;
	v->a[106224] = actions(1073);
	v->a[106225] = 2;
	v->a[106226] = anon_sym_LPAREN_LPAREN;
	v->a[106227] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[106228] = actions(1083);
	v->a[106229] = 2;
	v->a[106230] = sym_raw_string;
	v->a[106231] = sym_ansi_c_string;
	v->a[106232] = actions(1089);
	v->a[106233] = 2;
	v->a[106234] = anon_sym_LT_LPAREN;
	v->a[106235] = anon_sym_GT_LPAREN;
	v->a[106236] = state(3053);
	v->a[106237] = 6;
	v->a[106238] = sym_binary_expression;
	v->a[106239] = sym_ternary_expression;
	small_parse_table_5312(v);
}

void	small_parse_table_5312(t_small_parse_table_array *v)
{
	v->a[106240] = sym_unary_expression;
	v->a[106241] = sym_postfix_expression;
	v->a[106242] = sym_parenthesized_expression;
	v->a[106243] = sym_concatenation;
	v->a[106244] = state(2500);
	v->a[106245] = 9;
	v->a[106246] = sym_arithmetic_expansion;
	v->a[106247] = sym_brace_expression;
	v->a[106248] = sym_string;
	v->a[106249] = sym_translated_string;
	v->a[106250] = sym_number;
	v->a[106251] = sym_simple_expansion;
	v->a[106252] = sym_expansion;
	v->a[106253] = sym_command_substitution;
	v->a[106254] = sym_process_substitution;
	v->a[106255] = 8;
	v->a[106256] = actions(3);
	v->a[106257] = 1;
	v->a[106258] = sym_comment;
	v->a[106259] = actions(5826);
	small_parse_table_5313(v);
}

void	small_parse_table_5313(t_small_parse_table_array *v)
{
	v->a[106260] = 1;
	v->a[106261] = aux_sym_heredoc_redirect_token1;
	v->a[106262] = actions(5828);
	v->a[106263] = 1;
	v->a[106264] = sym_file_descriptor;
	v->a[106265] = actions(6172);
	v->a[106266] = 1;
	v->a[106267] = anon_sym_RPAREN;
	v->a[106268] = actions(5831);
	v->a[106269] = 3;
	v->a[106270] = sym_variable_name;
	v->a[106271] = sym_test_operator;
	v->a[106272] = sym__brace_start;
	v->a[106273] = actions(5821);
	v->a[106274] = 9;
	v->a[106275] = anon_sym_SEMI;
	v->a[106276] = anon_sym_PIPE_PIPE;
	v->a[106277] = anon_sym_AMP_AMP;
	v->a[106278] = anon_sym_PIPE;
	v->a[106279] = anon_sym_AMP;
	small_parse_table_5314(v);
}

void	small_parse_table_5314(t_small_parse_table_array *v)
{
	v->a[106280] = anon_sym_LT_LT;
	v->a[106281] = anon_sym_SEMI_SEMI;
	v->a[106282] = anon_sym_PIPE_AMP;
	v->a[106283] = anon_sym_LT_LT_DASH;
	v->a[106284] = actions(5823);
	v->a[106285] = 11;
	v->a[106286] = anon_sym_LT;
	v->a[106287] = anon_sym_GT;
	v->a[106288] = anon_sym_GT_GT;
	v->a[106289] = anon_sym_AMP_GT;
	v->a[106290] = anon_sym_AMP_GT_GT;
	v->a[106291] = anon_sym_LT_AMP;
	v->a[106292] = anon_sym_GT_AMP;
	v->a[106293] = anon_sym_GT_PIPE;
	v->a[106294] = anon_sym_LT_AMP_DASH;
	v->a[106295] = anon_sym_GT_AMP_DASH;
	v->a[106296] = anon_sym_LT_LT_LT;
	v->a[106297] = actions(5819);
	v->a[106298] = 17;
	v->a[106299] = anon_sym_LPAREN_LPAREN;
	small_parse_table_5315(v);
}

/* EOF small_parse_table_1062.c */
