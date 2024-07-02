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
	v->a[46300] = sym_command_substitution;
	v->a[46301] = 16;
	v->a[46302] = actions(680);
	v->a[46303] = 1;
	v->a[46304] = sym_comment;
	v->a[46305] = actions(1574);
	v->a[46306] = 1;
	v->a[46307] = anon_sym_LPAREN;
	v->a[46308] = actions(1576);
	v->a[46309] = 1;
	v->a[46310] = anon_sym_BANG;
	v->a[46311] = actions(1584);
	v->a[46312] = 1;
	v->a[46313] = anon_sym_TILDE;
	v->a[46314] = actions(1586);
	v->a[46315] = 1;
	v->a[46316] = anon_sym_DOLLAR;
	v->a[46317] = actions(1588);
	v->a[46318] = 1;
	v->a[46319] = anon_sym_DQUOTE;
	small_parse_table_2316(v);
}

void	small_parse_table_2316(t_small_parse_table_array *v)
{
	v->a[46320] = actions(1592);
	v->a[46321] = 1;
	v->a[46322] = anon_sym_DOLLAR_LBRACE;
	v->a[46323] = actions(1594);
	v->a[46324] = 1;
	v->a[46325] = anon_sym_DOLLAR_LPAREN;
	v->a[46326] = actions(1596);
	v->a[46327] = 1;
	v->a[46328] = anon_sym_BQUOTE;
	v->a[46329] = actions(1598);
	v->a[46330] = 1;
	v->a[46331] = sym_variable_name;
	v->a[46332] = actions(1677);
	v->a[46333] = 1;
	v->a[46334] = anon_sym_RPAREN_RPAREN;
	v->a[46335] = actions(1580);
	v->a[46336] = 2;
	v->a[46337] = anon_sym_PLUS_PLUS;
	v->a[46338] = anon_sym_DASH_DASH;
	v->a[46339] = actions(1582);
	small_parse_table_2317(v);
}

void	small_parse_table_2317(t_small_parse_table_array *v)
{
	v->a[46340] = 2;
	v->a[46341] = anon_sym_DASH2;
	v->a[46342] = anon_sym_PLUS2;
	v->a[46343] = actions(1590);
	v->a[46344] = 2;
	v->a[46345] = sym_number;
	v->a[46346] = aux_sym__simple_variable_name_token1;
	v->a[46347] = state(238);
	v->a[46348] = 3;
	v->a[46349] = sym_string;
	v->a[46350] = sym_simple_expansion;
	v->a[46351] = sym_expansion;
	v->a[46352] = state(300);
	v->a[46353] = 8;
	v->a[46354] = sym__arithmetic_expression;
	v->a[46355] = sym_arithmetic_literal;
	v->a[46356] = sym_arithmetic_binary_expression;
	v->a[46357] = sym_arithmetic_ternary_expression;
	v->a[46358] = sym_arithmetic_unary_expression;
	v->a[46359] = sym_arithmetic_postfix_expression;
	small_parse_table_2318(v);
}

void	small_parse_table_2318(t_small_parse_table_array *v)
{
	v->a[46360] = sym_arithmetic_parenthesized_expression;
	v->a[46361] = sym_command_substitution;
	v->a[46362] = 16;
	v->a[46363] = actions(680);
	v->a[46364] = 1;
	v->a[46365] = sym_comment;
	v->a[46366] = actions(1574);
	v->a[46367] = 1;
	v->a[46368] = anon_sym_LPAREN;
	v->a[46369] = actions(1576);
	v->a[46370] = 1;
	v->a[46371] = anon_sym_BANG;
	v->a[46372] = actions(1584);
	v->a[46373] = 1;
	v->a[46374] = anon_sym_TILDE;
	v->a[46375] = actions(1586);
	v->a[46376] = 1;
	v->a[46377] = anon_sym_DOLLAR;
	v->a[46378] = actions(1588);
	v->a[46379] = 1;
	small_parse_table_2319(v);
}

void	small_parse_table_2319(t_small_parse_table_array *v)
{
	v->a[46380] = anon_sym_DQUOTE;
	v->a[46381] = actions(1592);
	v->a[46382] = 1;
	v->a[46383] = anon_sym_DOLLAR_LBRACE;
	v->a[46384] = actions(1594);
	v->a[46385] = 1;
	v->a[46386] = anon_sym_DOLLAR_LPAREN;
	v->a[46387] = actions(1596);
	v->a[46388] = 1;
	v->a[46389] = anon_sym_BQUOTE;
	v->a[46390] = actions(1598);
	v->a[46391] = 1;
	v->a[46392] = sym_variable_name;
	v->a[46393] = actions(1679);
	v->a[46394] = 1;
	v->a[46395] = anon_sym_RPAREN_RPAREN;
	v->a[46396] = actions(1580);
	v->a[46397] = 2;
	v->a[46398] = anon_sym_PLUS_PLUS;
	v->a[46399] = anon_sym_DASH_DASH;
	small_parse_table_2320(v);
}

/* EOF small_parse_table_463.c */
