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
	v->a[46200] = actions(1596);
	v->a[46201] = 1;
	v->a[46202] = anon_sym_BQUOTE;
	v->a[46203] = actions(1598);
	v->a[46204] = 1;
	v->a[46205] = sym_variable_name;
	v->a[46206] = actions(1673);
	v->a[46207] = 1;
	v->a[46208] = anon_sym_RPAREN_RPAREN;
	v->a[46209] = actions(1580);
	v->a[46210] = 2;
	v->a[46211] = anon_sym_PLUS_PLUS;
	v->a[46212] = anon_sym_DASH_DASH;
	v->a[46213] = actions(1582);
	v->a[46214] = 2;
	v->a[46215] = anon_sym_DASH2;
	v->a[46216] = anon_sym_PLUS2;
	v->a[46217] = actions(1590);
	v->a[46218] = 2;
	v->a[46219] = sym_number;
	small_parse_table_2311(v);
}

void	small_parse_table_2311(t_small_parse_table_array *v)
{
	v->a[46220] = aux_sym__simple_variable_name_token1;
	v->a[46221] = state(238);
	v->a[46222] = 3;
	v->a[46223] = sym_string;
	v->a[46224] = sym_simple_expansion;
	v->a[46225] = sym_expansion;
	v->a[46226] = state(307);
	v->a[46227] = 8;
	v->a[46228] = sym__arithmetic_expression;
	v->a[46229] = sym_arithmetic_literal;
	v->a[46230] = sym_arithmetic_binary_expression;
	v->a[46231] = sym_arithmetic_ternary_expression;
	v->a[46232] = sym_arithmetic_unary_expression;
	v->a[46233] = sym_arithmetic_postfix_expression;
	v->a[46234] = sym_arithmetic_parenthesized_expression;
	v->a[46235] = sym_command_substitution;
	v->a[46236] = 18;
	v->a[46237] = actions(3);
	v->a[46238] = 1;
	v->a[46239] = sym_comment;
	small_parse_table_2312(v);
}

void	small_parse_table_2312(t_small_parse_table_array *v)
{
	v->a[46240] = actions(1637);
	v->a[46241] = 1;
	v->a[46242] = anon_sym_LPAREN;
	v->a[46243] = actions(1641);
	v->a[46244] = 1;
	v->a[46245] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46246] = actions(1643);
	v->a[46247] = 1;
	v->a[46248] = anon_sym_DOLLAR;
	v->a[46249] = actions(1645);
	v->a[46250] = 1;
	v->a[46251] = anon_sym_DQUOTE;
	v->a[46252] = actions(1647);
	v->a[46253] = 1;
	v->a[46254] = anon_sym_DOLLAR_LBRACE;
	v->a[46255] = actions(1649);
	v->a[46256] = 1;
	v->a[46257] = anon_sym_DOLLAR_LPAREN;
	v->a[46258] = actions(1651);
	v->a[46259] = 1;
	small_parse_table_2313(v);
}

void	small_parse_table_2313(t_small_parse_table_array *v)
{
	v->a[46260] = anon_sym_BQUOTE;
	v->a[46261] = actions(1653);
	v->a[46262] = 1;
	v->a[46263] = sym_extglob_pattern;
	v->a[46264] = actions(1675);
	v->a[46265] = 1;
	v->a[46266] = anon_sym_esac;
	v->a[46267] = state(999);
	v->a[46268] = 1;
	v->a[46269] = sym_terminator;
	v->a[46270] = state(1017);
	v->a[46271] = 1;
	v->a[46272] = aux_sym_case_statement_repeat1;
	v->a[46273] = state(1713);
	v->a[46274] = 1;
	v->a[46275] = sym_case_item;
	v->a[46276] = state(1965);
	v->a[46277] = 1;
	v->a[46278] = sym__case_item_last;
	v->a[46279] = state(1873);
	small_parse_table_2314(v);
}

void	small_parse_table_2314(t_small_parse_table_array *v)
{
	v->a[46280] = 2;
	v->a[46281] = sym_concatenation;
	v->a[46282] = sym__extglob_blob;
	v->a[46283] = actions(1633);
	v->a[46284] = 3;
	v->a[46285] = sym_raw_string;
	v->a[46286] = sym_number;
	v->a[46287] = sym_word;
	v->a[46288] = actions(1639);
	v->a[46289] = 4;
	v->a[46290] = anon_sym_SEMI_SEMI;
	v->a[46291] = aux_sym_heredoc_redirect_token1;
	v->a[46292] = anon_sym_AMP;
	v->a[46293] = anon_sym_SEMI;
	v->a[46294] = state(1806);
	v->a[46295] = 5;
	v->a[46296] = sym_arithmetic_expansion;
	v->a[46297] = sym_string;
	v->a[46298] = sym_simple_expansion;
	v->a[46299] = sym_expansion;
	small_parse_table_2315(v);
}

/* EOF small_parse_table_462.c */
