/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_462.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2310(t_small_parse_table_array *v)
{
	v->a[46200] = state(194);
	v->a[46201] = 3;
	v->a[46202] = sym_string;
	v->a[46203] = sym_simple_expansion;
	v->a[46204] = sym_expansion;
	v->a[46205] = state(316);
	v->a[46206] = 8;
	v->a[46207] = sym__arithmetic_expression;
	v->a[46208] = sym_arithmetic_literal;
	v->a[46209] = sym_arithmetic_binary_expression;
	v->a[46210] = sym_arithmetic_ternary_expression;
	v->a[46211] = sym_arithmetic_unary_expression;
	v->a[46212] = sym_arithmetic_postfix_expression;
	v->a[46213] = sym_arithmetic_parenthesized_expression;
	v->a[46214] = sym_command_substitution;
	v->a[46215] = 7;
	v->a[46216] = actions(3);
	v->a[46217] = 1;
	v->a[46218] = sym_comment;
	v->a[46219] = actions(1457);
	small_parse_table_2311(v);
}

void	small_parse_table_2311(t_small_parse_table_array *v)
{
	v->a[46220] = 1;
	v->a[46221] = sym_file_descriptor;
	v->a[46222] = actions(1460);
	v->a[46223] = 1;
	v->a[46224] = sym_variable_name;
	v->a[46225] = actions(1675);
	v->a[46226] = 1;
	v->a[46227] = anon_sym_RPAREN;
	v->a[46228] = actions(1454);
	v->a[46229] = 7;
	v->a[46230] = anon_sym_LT;
	v->a[46231] = anon_sym_GT;
	v->a[46232] = anon_sym_GT_GT;
	v->a[46233] = anon_sym_LT_AMP;
	v->a[46234] = anon_sym_GT_AMP;
	v->a[46235] = anon_sym_GT_PIPE;
	v->a[46236] = anon_sym_LT_GT;
	v->a[46237] = actions(1449);
	v->a[46238] = 8;
	v->a[46239] = anon_sym_PIPE;
	small_parse_table_2312(v);
}

void	small_parse_table_2312(t_small_parse_table_array *v)
{
	v->a[46240] = anon_sym_SEMI_SEMI;
	v->a[46241] = anon_sym_AMP_AMP;
	v->a[46242] = anon_sym_PIPE_PIPE;
	v->a[46243] = anon_sym_LT_LT;
	v->a[46244] = anon_sym_LT_LT_DASH;
	v->a[46245] = aux_sym_heredoc_redirect_token1;
	v->a[46246] = anon_sym_SEMI;
	v->a[46247] = actions(1447);
	v->a[46248] = 9;
	v->a[46249] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46250] = anon_sym_DOLLAR;
	v->a[46251] = anon_sym_DQUOTE;
	v->a[46252] = sym_raw_string;
	v->a[46253] = sym_number;
	v->a[46254] = anon_sym_DOLLAR_LBRACE;
	v->a[46255] = anon_sym_DOLLAR_LPAREN;
	v->a[46256] = anon_sym_BQUOTE;
	v->a[46257] = sym_word;
	v->a[46258] = 6;
	v->a[46259] = actions(3);
	small_parse_table_2313(v);
}

void	small_parse_table_2313(t_small_parse_table_array *v)
{
	v->a[46260] = 1;
	v->a[46261] = sym_comment;
	v->a[46262] = actions(367);
	v->a[46263] = 1;
	v->a[46264] = sym_file_descriptor;
	v->a[46265] = actions(1433);
	v->a[46266] = 1;
	v->a[46267] = sym_variable_name;
	v->a[46268] = actions(1431);
	v->a[46269] = 2;
	v->a[46270] = aux_sym__simple_variable_name_token1;
	v->a[46271] = aux_sym__multiline_variable_name_token1;
	v->a[46272] = actions(1429);
	v->a[46273] = 8;
	v->a[46274] = anon_sym_BANG;
	v->a[46275] = anon_sym_DASH;
	v->a[46276] = anon_sym_STAR;
	v->a[46277] = anon_sym_QMARK;
	v->a[46278] = anon_sym_DOLLAR;
	v->a[46279] = anon_sym_POUND;
	small_parse_table_2314(v);
}

void	small_parse_table_2314(t_small_parse_table_array *v)
{
	v->a[46280] = anon_sym_AT;
	v->a[46281] = anon_sym_0;
	v->a[46282] = actions(361);
	v->a[46283] = 15;
	v->a[46284] = anon_sym_PIPE;
	v->a[46285] = anon_sym_SEMI_SEMI;
	v->a[46286] = anon_sym_AMP_AMP;
	v->a[46287] = anon_sym_PIPE_PIPE;
	v->a[46288] = anon_sym_LT;
	v->a[46289] = anon_sym_GT;
	v->a[46290] = anon_sym_GT_GT;
	v->a[46291] = anon_sym_LT_AMP;
	v->a[46292] = anon_sym_GT_AMP;
	v->a[46293] = anon_sym_GT_PIPE;
	v->a[46294] = anon_sym_LT_GT;
	v->a[46295] = anon_sym_LT_LT;
	v->a[46296] = anon_sym_LT_LT_DASH;
	v->a[46297] = aux_sym_heredoc_redirect_token1;
	v->a[46298] = anon_sym_SEMI;
	v->a[46299] = 4;
	small_parse_table_2315(v);
}

/* EOF small_parse_table_462.c */
