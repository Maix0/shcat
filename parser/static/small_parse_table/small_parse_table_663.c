/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_663.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3315(t_small_parse_table_array *v)
{
	v->a[66300] = sym_comment;
	v->a[66301] = actions(1869);
	v->a[66302] = 1;
	v->a[66303] = anon_sym_LPAREN;
	v->a[66304] = actions(1871);
	v->a[66305] = 1;
	v->a[66306] = anon_sym_BANG;
	v->a[66307] = actions(1879);
	v->a[66308] = 1;
	v->a[66309] = anon_sym_TILDE;
	v->a[66310] = actions(1881);
	v->a[66311] = 1;
	v->a[66312] = anon_sym_DOLLAR;
	v->a[66313] = actions(1883);
	v->a[66314] = 1;
	v->a[66315] = anon_sym_DQUOTE;
	v->a[66316] = actions(1887);
	v->a[66317] = 1;
	v->a[66318] = anon_sym_DOLLAR_LBRACE;
	v->a[66319] = actions(1889);
	small_parse_table_3316(v);
}

void	small_parse_table_3316(t_small_parse_table_array *v)
{
	v->a[66320] = 1;
	v->a[66321] = anon_sym_DOLLAR_LPAREN;
	v->a[66322] = actions(1891);
	v->a[66323] = 1;
	v->a[66324] = anon_sym_BQUOTE;
	v->a[66325] = actions(1893);
	v->a[66326] = 1;
	v->a[66327] = sym_variable_name;
	v->a[66328] = actions(1875);
	v->a[66329] = 2;
	v->a[66330] = anon_sym_PLUS_PLUS;
	v->a[66331] = anon_sym_DASH_DASH;
	v->a[66332] = actions(1877);
	v->a[66333] = 2;
	v->a[66334] = anon_sym_DASH2;
	v->a[66335] = anon_sym_PLUS2;
	v->a[66336] = actions(1885);
	v->a[66337] = 2;
	v->a[66338] = sym_number;
	v->a[66339] = aux_sym__simple_variable_name_token1;
	small_parse_table_3317(v);
}

void	small_parse_table_3317(t_small_parse_table_array *v)
{
	v->a[66340] = state(365);
	v->a[66341] = 3;
	v->a[66342] = sym_string;
	v->a[66343] = sym_simple_expansion;
	v->a[66344] = sym_expansion;
	v->a[66345] = state(307);
	v->a[66346] = 8;
	v->a[66347] = sym__arithmetic_expression;
	v->a[66348] = sym_arithmetic_literal;
	v->a[66349] = sym_arithmetic_binary_expression;
	v->a[66350] = sym_arithmetic_ternary_expression;
	v->a[66351] = sym_arithmetic_unary_expression;
	v->a[66352] = sym_arithmetic_postfix_expression;
	v->a[66353] = sym_arithmetic_parenthesized_expression;
	v->a[66354] = sym_command_substitution;
	v->a[66355] = 15;
	v->a[66356] = actions(1094);
	v->a[66357] = 1;
	v->a[66358] = sym_comment;
	v->a[66359] = actions(2003);
	small_parse_table_3318(v);
}

void	small_parse_table_3318(t_small_parse_table_array *v)
{
	v->a[66360] = 1;
	v->a[66361] = anon_sym_LPAREN;
	v->a[66362] = actions(2005);
	v->a[66363] = 1;
	v->a[66364] = anon_sym_BANG;
	v->a[66365] = actions(2011);
	v->a[66366] = 1;
	v->a[66367] = anon_sym_TILDE;
	v->a[66368] = actions(2013);
	v->a[66369] = 1;
	v->a[66370] = anon_sym_DOLLAR;
	v->a[66371] = actions(2015);
	v->a[66372] = 1;
	v->a[66373] = anon_sym_DQUOTE;
	v->a[66374] = actions(2019);
	v->a[66375] = 1;
	v->a[66376] = anon_sym_DOLLAR_LBRACE;
	v->a[66377] = actions(2021);
	v->a[66378] = 1;
	v->a[66379] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3319(v);
}

void	small_parse_table_3319(t_small_parse_table_array *v)
{
	v->a[66380] = actions(2023);
	v->a[66381] = 1;
	v->a[66382] = anon_sym_BQUOTE;
	v->a[66383] = actions(2025);
	v->a[66384] = 1;
	v->a[66385] = sym_variable_name;
	v->a[66386] = actions(2007);
	v->a[66387] = 2;
	v->a[66388] = anon_sym_PLUS_PLUS;
	v->a[66389] = anon_sym_DASH_DASH;
	v->a[66390] = actions(2009);
	v->a[66391] = 2;
	v->a[66392] = anon_sym_DASH2;
	v->a[66393] = anon_sym_PLUS2;
	v->a[66394] = actions(2017);
	v->a[66395] = 2;
	v->a[66396] = sym_number;
	v->a[66397] = aux_sym__simple_variable_name_token1;
	v->a[66398] = state(503);
	v->a[66399] = 3;
	small_parse_table_3320(v);
}

/* EOF small_parse_table_663.c */
