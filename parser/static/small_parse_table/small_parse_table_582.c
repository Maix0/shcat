/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_582.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2910(t_small_parse_table_array *v)
{
	v->a[58200] = sym_expansion;
	v->a[58201] = state(573);
	v->a[58202] = 8;
	v->a[58203] = sym__arithmetic_expression;
	v->a[58204] = sym_arithmetic_literal;
	v->a[58205] = sym_arithmetic_binary_expression;
	v->a[58206] = sym_arithmetic_ternary_expression;
	v->a[58207] = sym_arithmetic_unary_expression;
	v->a[58208] = sym_arithmetic_postfix_expression;
	v->a[58209] = sym_arithmetic_parenthesized_expression;
	v->a[58210] = sym_command_substitution;
	v->a[58211] = 15;
	v->a[58212] = actions(1074);
	v->a[58213] = 1;
	v->a[58214] = sym_comment;
	v->a[58215] = actions(1951);
	v->a[58216] = 1;
	v->a[58217] = anon_sym_LPAREN;
	v->a[58218] = actions(1953);
	v->a[58219] = 1;
	small_parse_table_2911(v);
}

void	small_parse_table_2911(t_small_parse_table_array *v)
{
	v->a[58220] = anon_sym_BANG;
	v->a[58221] = actions(1959);
	v->a[58222] = 1;
	v->a[58223] = anon_sym_TILDE;
	v->a[58224] = actions(1961);
	v->a[58225] = 1;
	v->a[58226] = anon_sym_DOLLAR;
	v->a[58227] = actions(1963);
	v->a[58228] = 1;
	v->a[58229] = anon_sym_DQUOTE;
	v->a[58230] = actions(1967);
	v->a[58231] = 1;
	v->a[58232] = anon_sym_DOLLAR_LBRACE;
	v->a[58233] = actions(1969);
	v->a[58234] = 1;
	v->a[58235] = anon_sym_DOLLAR_LPAREN;
	v->a[58236] = actions(1971);
	v->a[58237] = 1;
	v->a[58238] = anon_sym_BQUOTE;
	v->a[58239] = actions(1973);
	small_parse_table_2912(v);
}

void	small_parse_table_2912(t_small_parse_table_array *v)
{
	v->a[58240] = 1;
	v->a[58241] = sym_variable_name;
	v->a[58242] = actions(1955);
	v->a[58243] = 2;
	v->a[58244] = anon_sym_PLUS_PLUS;
	v->a[58245] = anon_sym_DASH_DASH;
	v->a[58246] = actions(1957);
	v->a[58247] = 2;
	v->a[58248] = anon_sym_DASH2;
	v->a[58249] = anon_sym_PLUS2;
	v->a[58250] = actions(1965);
	v->a[58251] = 2;
	v->a[58252] = sym_number;
	v->a[58253] = aux_sym__simple_variable_name_token1;
	v->a[58254] = state(462);
	v->a[58255] = 3;
	v->a[58256] = sym_string;
	v->a[58257] = sym_simple_expansion;
	v->a[58258] = sym_expansion;
	v->a[58259] = state(574);
	small_parse_table_2913(v);
}

void	small_parse_table_2913(t_small_parse_table_array *v)
{
	v->a[58260] = 8;
	v->a[58261] = sym__arithmetic_expression;
	v->a[58262] = sym_arithmetic_literal;
	v->a[58263] = sym_arithmetic_binary_expression;
	v->a[58264] = sym_arithmetic_ternary_expression;
	v->a[58265] = sym_arithmetic_unary_expression;
	v->a[58266] = sym_arithmetic_postfix_expression;
	v->a[58267] = sym_arithmetic_parenthesized_expression;
	v->a[58268] = sym_command_substitution;
	v->a[58269] = 3;
	v->a[58270] = actions(3);
	v->a[58271] = 1;
	v->a[58272] = sym_comment;
	v->a[58273] = actions(1070);
	v->a[58274] = 5;
	v->a[58275] = sym_file_descriptor;
	v->a[58276] = sym__concat;
	v->a[58277] = sym_variable_name;
	v->a[58278] = ts_builtin_sym_end;
	v->a[58279] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2914(v);
}

void	small_parse_table_2914(t_small_parse_table_array *v)
{
	v->a[58280] = actions(1072);
	v->a[58281] = 21;
	v->a[58282] = anon_sym_PIPE;
	v->a[58283] = anon_sym_RPAREN;
	v->a[58284] = anon_sym_SEMI_SEMI;
	v->a[58285] = anon_sym_AMP_AMP;
	v->a[58286] = anon_sym_PIPE_PIPE;
	v->a[58287] = anon_sym_LT;
	v->a[58288] = anon_sym_GT;
	v->a[58289] = anon_sym_GT_GT;
	v->a[58290] = anon_sym_AMP_GT;
	v->a[58291] = anon_sym_AMP_GT_GT;
	v->a[58292] = anon_sym_LT_AMP;
	v->a[58293] = anon_sym_GT_AMP;
	v->a[58294] = anon_sym_GT_PIPE;
	v->a[58295] = anon_sym_LT_AMP_DASH;
	v->a[58296] = anon_sym_GT_AMP_DASH;
	v->a[58297] = anon_sym_LT_LT;
	v->a[58298] = anon_sym_LT_LT_DASH;
	v->a[58299] = anon_sym_AMP;
	small_parse_table_2915(v);
}

/* EOF small_parse_table_582.c */
