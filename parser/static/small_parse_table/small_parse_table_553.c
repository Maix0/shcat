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
	v->a[55300] = sym_arithmetic_postfix_expression;
	v->a[55301] = sym_arithmetic_parenthesized_expression;
	v->a[55302] = sym_command_substitution;
	v->a[55303] = 16;
	v->a[55304] = actions(1074);
	v->a[55305] = 1;
	v->a[55306] = sym_comment;
	v->a[55307] = actions(1831);
	v->a[55308] = 1;
	v->a[55309] = anon_sym_LPAREN;
	v->a[55310] = actions(1833);
	v->a[55311] = 1;
	v->a[55312] = anon_sym_BANG;
	v->a[55313] = actions(1841);
	v->a[55314] = 1;
	v->a[55315] = anon_sym_TILDE;
	v->a[55316] = actions(1843);
	v->a[55317] = 1;
	v->a[55318] = anon_sym_DOLLAR;
	v->a[55319] = actions(1845);
	small_parse_table_2766(v);
}

void	small_parse_table_2766(t_small_parse_table_array *v)
{
	v->a[55320] = 1;
	v->a[55321] = anon_sym_DQUOTE;
	v->a[55322] = actions(1849);
	v->a[55323] = 1;
	v->a[55324] = anon_sym_DOLLAR_LBRACE;
	v->a[55325] = actions(1851);
	v->a[55326] = 1;
	v->a[55327] = anon_sym_DOLLAR_LPAREN;
	v->a[55328] = actions(1853);
	v->a[55329] = 1;
	v->a[55330] = anon_sym_BQUOTE;
	v->a[55331] = actions(1855);
	v->a[55332] = 1;
	v->a[55333] = sym_variable_name;
	v->a[55334] = actions(1873);
	v->a[55335] = 1;
	v->a[55336] = anon_sym_RPAREN_RPAREN;
	v->a[55337] = actions(1837);
	v->a[55338] = 2;
	v->a[55339] = anon_sym_PLUS_PLUS;
	small_parse_table_2767(v);
}

void	small_parse_table_2767(t_small_parse_table_array *v)
{
	v->a[55340] = anon_sym_DASH_DASH;
	v->a[55341] = actions(1839);
	v->a[55342] = 2;
	v->a[55343] = anon_sym_DASH2;
	v->a[55344] = anon_sym_PLUS2;
	v->a[55345] = actions(1847);
	v->a[55346] = 2;
	v->a[55347] = sym_number;
	v->a[55348] = aux_sym__simple_variable_name_token1;
	v->a[55349] = state(370);
	v->a[55350] = 3;
	v->a[55351] = sym_string;
	v->a[55352] = sym_simple_expansion;
	v->a[55353] = sym_expansion;
	v->a[55354] = state(423);
	v->a[55355] = 8;
	v->a[55356] = sym__arithmetic_expression;
	v->a[55357] = sym_arithmetic_literal;
	v->a[55358] = sym_arithmetic_binary_expression;
	v->a[55359] = sym_arithmetic_ternary_expression;
	small_parse_table_2768(v);
}

void	small_parse_table_2768(t_small_parse_table_array *v)
{
	v->a[55360] = sym_arithmetic_unary_expression;
	v->a[55361] = sym_arithmetic_postfix_expression;
	v->a[55362] = sym_arithmetic_parenthesized_expression;
	v->a[55363] = sym_command_substitution;
	v->a[55364] = 18;
	v->a[55365] = actions(3);
	v->a[55366] = 1;
	v->a[55367] = sym_comment;
	v->a[55368] = actions(1877);
	v->a[55369] = 1;
	v->a[55370] = anon_sym_esac;
	v->a[55371] = actions(1879);
	v->a[55372] = 1;
	v->a[55373] = anon_sym_LPAREN;
	v->a[55374] = actions(1883);
	v->a[55375] = 1;
	v->a[55376] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55377] = actions(1885);
	v->a[55378] = 1;
	v->a[55379] = anon_sym_DOLLAR;
	small_parse_table_2769(v);
}

void	small_parse_table_2769(t_small_parse_table_array *v)
{
	v->a[55380] = actions(1887);
	v->a[55381] = 1;
	v->a[55382] = anon_sym_DQUOTE;
	v->a[55383] = actions(1889);
	v->a[55384] = 1;
	v->a[55385] = anon_sym_DOLLAR_LBRACE;
	v->a[55386] = actions(1891);
	v->a[55387] = 1;
	v->a[55388] = anon_sym_DOLLAR_LPAREN;
	v->a[55389] = actions(1893);
	v->a[55390] = 1;
	v->a[55391] = anon_sym_BQUOTE;
	v->a[55392] = actions(1895);
	v->a[55393] = 1;
	v->a[55394] = sym_extglob_pattern;
	v->a[55395] = state(1299);
	v->a[55396] = 1;
	v->a[55397] = sym_terminator;
	v->a[55398] = state(1360);
	v->a[55399] = 1;
	small_parse_table_2770(v);
}

/* EOF small_parse_table_553.c */
