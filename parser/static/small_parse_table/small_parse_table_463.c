/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_463.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2315(t_small_parse_table_array *v)
{
	v->a[46300] = 1;
	v->a[46301] = anon_sym_LPAREN;
	v->a[46302] = actions(1562);
	v->a[46303] = 1;
	v->a[46304] = anon_sym_BANG;
	v->a[46305] = actions(1570);
	v->a[46306] = 1;
	v->a[46307] = anon_sym_TILDE;
	v->a[46308] = actions(1572);
	v->a[46309] = 1;
	v->a[46310] = anon_sym_DOLLAR;
	v->a[46311] = actions(1574);
	v->a[46312] = 1;
	v->a[46313] = anon_sym_DQUOTE;
	v->a[46314] = actions(1578);
	v->a[46315] = 1;
	v->a[46316] = anon_sym_DOLLAR_LBRACE;
	v->a[46317] = actions(1580);
	v->a[46318] = 1;
	v->a[46319] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2316(v);
}

void	small_parse_table_2316(t_small_parse_table_array *v)
{
	v->a[46320] = actions(1582);
	v->a[46321] = 1;
	v->a[46322] = anon_sym_BQUOTE;
	v->a[46323] = actions(1584);
	v->a[46324] = 1;
	v->a[46325] = sym_variable_name;
	v->a[46326] = actions(1701);
	v->a[46327] = 1;
	v->a[46328] = anon_sym_RPAREN_RPAREN;
	v->a[46329] = actions(1566);
	v->a[46330] = 2;
	v->a[46331] = anon_sym_PLUS_PLUS;
	v->a[46332] = anon_sym_DASH_DASH;
	v->a[46333] = actions(1568);
	v->a[46334] = 2;
	v->a[46335] = anon_sym_DASH2;
	v->a[46336] = anon_sym_PLUS2;
	v->a[46337] = actions(1576);
	v->a[46338] = 2;
	v->a[46339] = sym_number;
	small_parse_table_2317(v);
}

void	small_parse_table_2317(t_small_parse_table_array *v)
{
	v->a[46340] = aux_sym__simple_variable_name_token1;
	v->a[46341] = state(255);
	v->a[46342] = 3;
	v->a[46343] = sym_string;
	v->a[46344] = sym_simple_expansion;
	v->a[46345] = sym_expansion;
	v->a[46346] = state(338);
	v->a[46347] = 8;
	v->a[46348] = sym__arithmetic_expression;
	v->a[46349] = sym_arithmetic_literal;
	v->a[46350] = sym_arithmetic_binary_expression;
	v->a[46351] = sym_arithmetic_ternary_expression;
	v->a[46352] = sym_arithmetic_unary_expression;
	v->a[46353] = sym_arithmetic_postfix_expression;
	v->a[46354] = sym_arithmetic_parenthesized_expression;
	v->a[46355] = sym_command_substitution;
	v->a[46356] = 4;
	v->a[46357] = actions(3);
	v->a[46358] = 1;
	v->a[46359] = sym_comment;
	small_parse_table_2318(v);
}

void	small_parse_table_2318(t_small_parse_table_array *v)
{
	v->a[46360] = actions(1612);
	v->a[46361] = 1;
	v->a[46362] = ts_builtin_sym_end;
	v->a[46363] = actions(1441);
	v->a[46364] = 2;
	v->a[46365] = sym_file_descriptor;
	v->a[46366] = sym_variable_name;
	v->a[46367] = actions(1437);
	v->a[46368] = 24;
	v->a[46369] = anon_sym_for;
	v->a[46370] = anon_sym_while;
	v->a[46371] = anon_sym_until;
	v->a[46372] = anon_sym_if;
	v->a[46373] = anon_sym_case;
	v->a[46374] = anon_sym_LPAREN;
	v->a[46375] = anon_sym_LBRACE;
	v->a[46376] = anon_sym_BANG;
	v->a[46377] = anon_sym_LT;
	v->a[46378] = anon_sym_GT;
	v->a[46379] = anon_sym_GT_GT;
	small_parse_table_2319(v);
}

void	small_parse_table_2319(t_small_parse_table_array *v)
{
	v->a[46380] = anon_sym_LT_AMP;
	v->a[46381] = anon_sym_GT_AMP;
	v->a[46382] = anon_sym_GT_PIPE;
	v->a[46383] = anon_sym_LT_GT;
	v->a[46384] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46385] = anon_sym_DOLLAR;
	v->a[46386] = anon_sym_DQUOTE;
	v->a[46387] = sym_raw_string;
	v->a[46388] = sym_number;
	v->a[46389] = anon_sym_DOLLAR_LBRACE;
	v->a[46390] = anon_sym_DOLLAR_LPAREN;
	v->a[46391] = anon_sym_BQUOTE;
	v->a[46392] = sym_word;
	v->a[46393] = 6;
	v->a[46394] = actions(3);
	v->a[46395] = 1;
	v->a[46396] = sym_comment;
	v->a[46397] = actions(1170);
	v->a[46398] = 1;
	v->a[46399] = aux_sym_concatenation_token1;
	small_parse_table_2320(v);
}

/* EOF small_parse_table_463.c */
