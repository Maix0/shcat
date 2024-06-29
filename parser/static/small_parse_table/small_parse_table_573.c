/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_573.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2865(t_small_parse_table_array *v)
{
	v->a[57300] = aux_sym__simple_variable_name_token1;
	v->a[57301] = state(370);
	v->a[57302] = 3;
	v->a[57303] = sym_string;
	v->a[57304] = sym_simple_expansion;
	v->a[57305] = sym_expansion;
	v->a[57306] = state(449);
	v->a[57307] = 8;
	v->a[57308] = sym__arithmetic_expression;
	v->a[57309] = sym_arithmetic_literal;
	v->a[57310] = sym_arithmetic_binary_expression;
	v->a[57311] = sym_arithmetic_ternary_expression;
	v->a[57312] = sym_arithmetic_unary_expression;
	v->a[57313] = sym_arithmetic_postfix_expression;
	v->a[57314] = sym_arithmetic_parenthesized_expression;
	v->a[57315] = sym_command_substitution;
	v->a[57316] = 18;
	v->a[57317] = actions(3);
	v->a[57318] = 1;
	v->a[57319] = sym_comment;
	small_parse_table_2866(v);
}

void	small_parse_table_2866(t_small_parse_table_array *v)
{
	v->a[57320] = actions(1879);
	v->a[57321] = 1;
	v->a[57322] = anon_sym_LPAREN;
	v->a[57323] = actions(1883);
	v->a[57324] = 1;
	v->a[57325] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57326] = actions(1885);
	v->a[57327] = 1;
	v->a[57328] = anon_sym_DOLLAR;
	v->a[57329] = actions(1887);
	v->a[57330] = 1;
	v->a[57331] = anon_sym_DQUOTE;
	v->a[57332] = actions(1889);
	v->a[57333] = 1;
	v->a[57334] = anon_sym_DOLLAR_LBRACE;
	v->a[57335] = actions(1891);
	v->a[57336] = 1;
	v->a[57337] = anon_sym_DOLLAR_LPAREN;
	v->a[57338] = actions(1893);
	v->a[57339] = 1;
	small_parse_table_2867(v);
}

void	small_parse_table_2867(t_small_parse_table_array *v)
{
	v->a[57340] = anon_sym_BQUOTE;
	v->a[57341] = actions(1895);
	v->a[57342] = 1;
	v->a[57343] = sym_extglob_pattern;
	v->a[57344] = actions(1941);
	v->a[57345] = 1;
	v->a[57346] = anon_sym_esac;
	v->a[57347] = state(1312);
	v->a[57348] = 1;
	v->a[57349] = sym_terminator;
	v->a[57350] = state(1372);
	v->a[57351] = 1;
	v->a[57352] = aux_sym_case_statement_repeat1;
	v->a[57353] = state(1923);
	v->a[57354] = 1;
	v->a[57355] = sym_case_item;
	v->a[57356] = state(2281);
	v->a[57357] = 1;
	v->a[57358] = sym__case_item_last;
	v->a[57359] = state(2078);
	small_parse_table_2868(v);
}

void	small_parse_table_2868(t_small_parse_table_array *v)
{
	v->a[57360] = 2;
	v->a[57361] = sym_concatenation;
	v->a[57362] = sym__extglob_blob;
	v->a[57363] = actions(1875);
	v->a[57364] = 3;
	v->a[57365] = sym_raw_string;
	v->a[57366] = sym_number;
	v->a[57367] = sym_word;
	v->a[57368] = actions(1881);
	v->a[57369] = 4;
	v->a[57370] = anon_sym_SEMI_SEMI;
	v->a[57371] = aux_sym_heredoc_redirect_token1;
	v->a[57372] = anon_sym_AMP;
	v->a[57373] = anon_sym_SEMI;
	v->a[57374] = state(2004);
	v->a[57375] = 5;
	v->a[57376] = sym_arithmetic_expansion;
	v->a[57377] = sym_string;
	v->a[57378] = sym_simple_expansion;
	v->a[57379] = sym_expansion;
	small_parse_table_2869(v);
}

void	small_parse_table_2869(t_small_parse_table_array *v)
{
	v->a[57380] = sym_command_substitution;
	v->a[57381] = 16;
	v->a[57382] = actions(1074);
	v->a[57383] = 1;
	v->a[57384] = sym_comment;
	v->a[57385] = actions(1831);
	v->a[57386] = 1;
	v->a[57387] = anon_sym_LPAREN;
	v->a[57388] = actions(1833);
	v->a[57389] = 1;
	v->a[57390] = anon_sym_BANG;
	v->a[57391] = actions(1841);
	v->a[57392] = 1;
	v->a[57393] = anon_sym_TILDE;
	v->a[57394] = actions(1843);
	v->a[57395] = 1;
	v->a[57396] = anon_sym_DOLLAR;
	v->a[57397] = actions(1845);
	v->a[57398] = 1;
	v->a[57399] = anon_sym_DQUOTE;
	small_parse_table_2870(v);
}

/* EOF small_parse_table_573.c */
