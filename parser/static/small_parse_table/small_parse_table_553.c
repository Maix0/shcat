/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_553.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2765(t_small_parse_table_array *v)
{
	v->a[55300] = anon_sym_PIPE_PIPE;
	v->a[55301] = anon_sym_LT;
	v->a[55302] = anon_sym_GT;
	v->a[55303] = anon_sym_GT_GT;
	v->a[55304] = anon_sym_AMP_GT;
	v->a[55305] = anon_sym_AMP_GT_GT;
	v->a[55306] = anon_sym_LT_AMP;
	v->a[55307] = anon_sym_GT_AMP;
	v->a[55308] = anon_sym_GT_PIPE;
	v->a[55309] = anon_sym_LT_AMP_DASH;
	v->a[55310] = anon_sym_GT_AMP_DASH;
	v->a[55311] = anon_sym_LT_LT;
	v->a[55312] = anon_sym_LT_LT_DASH;
	v->a[55313] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55314] = aux_sym_concatenation_token1;
	v->a[55315] = anon_sym_DOLLAR;
	v->a[55316] = anon_sym_DQUOTE;
	v->a[55317] = sym_raw_string;
	v->a[55318] = aux_sym_number_token1;
	v->a[55319] = aux_sym_number_token2;
	small_parse_table_2766(v);
}

void	small_parse_table_2766(t_small_parse_table_array *v)
{
	v->a[55320] = anon_sym_DOLLAR_LBRACE;
	v->a[55321] = anon_sym_DOLLAR_LPAREN;
	v->a[55322] = anon_sym_BQUOTE;
	v->a[55323] = sym_word;
	v->a[55324] = 18;
	v->a[55325] = actions(1404);
	v->a[55326] = 1;
	v->a[55327] = sym_comment;
	v->a[55328] = actions(1979);
	v->a[55329] = 1;
	v->a[55330] = anon_sym_LPAREN;
	v->a[55331] = actions(1981);
	v->a[55332] = 1;
	v->a[55333] = anon_sym_BANG;
	v->a[55334] = actions(1989);
	v->a[55335] = 1;
	v->a[55336] = anon_sym_TILDE;
	v->a[55337] = actions(1991);
	v->a[55338] = 1;
	v->a[55339] = anon_sym_DOLLAR;
	small_parse_table_2767(v);
}

void	small_parse_table_2767(t_small_parse_table_array *v)
{
	v->a[55340] = actions(1993);
	v->a[55341] = 1;
	v->a[55342] = anon_sym_DQUOTE;
	v->a[55343] = actions(1995);
	v->a[55344] = 1;
	v->a[55345] = aux_sym_number_token1;
	v->a[55346] = actions(1997);
	v->a[55347] = 1;
	v->a[55348] = aux_sym_number_token2;
	v->a[55349] = actions(1999);
	v->a[55350] = 1;
	v->a[55351] = anon_sym_DOLLAR_LBRACE;
	v->a[55352] = actions(2001);
	v->a[55353] = 1;
	v->a[55354] = anon_sym_DOLLAR_LPAREN;
	v->a[55355] = actions(2003);
	v->a[55356] = 1;
	v->a[55357] = anon_sym_BQUOTE;
	v->a[55358] = actions(2005);
	v->a[55359] = 1;
	small_parse_table_2768(v);
}

void	small_parse_table_2768(t_small_parse_table_array *v)
{
	v->a[55360] = aux_sym__simple_variable_name_token1;
	v->a[55361] = actions(2007);
	v->a[55362] = 1;
	v->a[55363] = sym_variable_name;
	v->a[55364] = actions(2045);
	v->a[55365] = 1;
	v->a[55366] = anon_sym_RPAREN_RPAREN;
	v->a[55367] = actions(1985);
	v->a[55368] = 2;
	v->a[55369] = anon_sym_PLUS_PLUS;
	v->a[55370] = anon_sym_DASH_DASH;
	v->a[55371] = actions(1987);
	v->a[55372] = 2;
	v->a[55373] = anon_sym_DASH2;
	v->a[55374] = anon_sym_PLUS2;
	v->a[55375] = state(530);
	v->a[55376] = 4;
	v->a[55377] = sym_string;
	v->a[55378] = sym_number;
	v->a[55379] = sym_simple_expansion;
	small_parse_table_2769(v);
}

void	small_parse_table_2769(t_small_parse_table_array *v)
{
	v->a[55380] = sym_expansion;
	v->a[55381] = state(655);
	v->a[55382] = 8;
	v->a[55383] = sym__arithmetic_expression;
	v->a[55384] = sym_arithmetic_literal;
	v->a[55385] = sym_arithmetic_binary_expression;
	v->a[55386] = sym_arithmetic_ternary_expression;
	v->a[55387] = sym_arithmetic_unary_expression;
	v->a[55388] = sym_arithmetic_postfix_expression;
	v->a[55389] = sym_arithmetic_parenthesized_expression;
	v->a[55390] = sym_command_substitution;
	v->a[55391] = 18;
	v->a[55392] = actions(1404);
	v->a[55393] = 1;
	v->a[55394] = sym_comment;
	v->a[55395] = actions(1979);
	v->a[55396] = 1;
	v->a[55397] = anon_sym_LPAREN;
	v->a[55398] = actions(1981);
	v->a[55399] = 1;
	small_parse_table_2770(v);
}

/* EOF small_parse_table_553.c */
