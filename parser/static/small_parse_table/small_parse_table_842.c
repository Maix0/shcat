/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_842.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4210(t_small_parse_table_array *v)
{
	v->a[84200] = actions(4596);
	v->a[84201] = 1;
	v->a[84202] = anon_sym_DQUOTE;
	v->a[84203] = actions(4598);
	v->a[84204] = 1;
	v->a[84205] = aux_sym_number_token1;
	v->a[84206] = actions(4600);
	v->a[84207] = 1;
	v->a[84208] = aux_sym_number_token2;
	v->a[84209] = actions(4602);
	v->a[84210] = 1;
	v->a[84211] = anon_sym_DOLLAR_LBRACE;
	v->a[84212] = actions(4604);
	v->a[84213] = 1;
	v->a[84214] = anon_sym_DOLLAR_LPAREN;
	v->a[84215] = actions(4606);
	v->a[84216] = 1;
	v->a[84217] = anon_sym_BQUOTE;
	v->a[84218] = actions(4608);
	v->a[84219] = 1;
	small_parse_table_4211(v);
}

void	small_parse_table_4211(t_small_parse_table_array *v)
{
	v->a[84220] = anon_sym_DOLLAR_BQUOTE;
	v->a[84221] = actions(4697);
	v->a[84222] = 1;
	v->a[84223] = aux_sym__simple_variable_name_token1;
	v->a[84224] = actions(4699);
	v->a[84225] = 1;
	v->a[84226] = sym_variable_name;
	v->a[84227] = state(1476);
	v->a[84228] = 1;
	v->a[84229] = sym__arithmetic_postfix_expression;
	v->a[84230] = state(1478);
	v->a[84231] = 1;
	v->a[84232] = sym__arithmetic_unary_expression;
	v->a[84233] = state(1490);
	v->a[84234] = 1;
	v->a[84235] = sym__arithmetic_ternary_expression;
	v->a[84236] = state(1511);
	v->a[84237] = 1;
	v->a[84238] = sym__arithmetic_binary_expression;
	v->a[84239] = actions(4588);
	small_parse_table_4212(v);
}

void	small_parse_table_4212(t_small_parse_table_array *v)
{
	v->a[84240] = 2;
	v->a[84241] = anon_sym_PLUS_PLUS;
	v->a[84242] = anon_sym_DASH_DASH;
	v->a[84243] = actions(4590);
	v->a[84244] = 2;
	v->a[84245] = anon_sym_DASH2;
	v->a[84246] = anon_sym_PLUS2;
	v->a[84247] = state(1463);
	v->a[84248] = 8;
	v->a[84249] = sym__arithmetic_expression;
	v->a[84250] = sym__arithmetic_literal;
	v->a[84251] = sym__arithmetic_parenthesized_expression;
	v->a[84252] = sym_string;
	v->a[84253] = sym_number;
	v->a[84254] = sym_simple_expansion;
	v->a[84255] = sym_expansion;
	v->a[84256] = sym_command_substitution;
	v->a[84257] = 21;
	v->a[84258] = actions(57);
	v->a[84259] = 1;
	small_parse_table_4213(v);
}

void	small_parse_table_4213(t_small_parse_table_array *v)
{
	v->a[84260] = sym_comment;
	v->a[84261] = actions(4584);
	v->a[84262] = 1;
	v->a[84263] = anon_sym_LPAREN;
	v->a[84264] = actions(4586);
	v->a[84265] = 1;
	v->a[84266] = anon_sym_BANG;
	v->a[84267] = actions(4592);
	v->a[84268] = 1;
	v->a[84269] = anon_sym_TILDE;
	v->a[84270] = actions(4594);
	v->a[84271] = 1;
	v->a[84272] = anon_sym_DOLLAR;
	v->a[84273] = actions(4596);
	v->a[84274] = 1;
	v->a[84275] = anon_sym_DQUOTE;
	v->a[84276] = actions(4598);
	v->a[84277] = 1;
	v->a[84278] = aux_sym_number_token1;
	v->a[84279] = actions(4600);
	small_parse_table_4214(v);
}

void	small_parse_table_4214(t_small_parse_table_array *v)
{
	v->a[84280] = 1;
	v->a[84281] = aux_sym_number_token2;
	v->a[84282] = actions(4602);
	v->a[84283] = 1;
	v->a[84284] = anon_sym_DOLLAR_LBRACE;
	v->a[84285] = actions(4604);
	v->a[84286] = 1;
	v->a[84287] = anon_sym_DOLLAR_LPAREN;
	v->a[84288] = actions(4606);
	v->a[84289] = 1;
	v->a[84290] = anon_sym_BQUOTE;
	v->a[84291] = actions(4608);
	v->a[84292] = 1;
	v->a[84293] = anon_sym_DOLLAR_BQUOTE;
	v->a[84294] = actions(4701);
	v->a[84295] = 1;
	v->a[84296] = aux_sym__simple_variable_name_token1;
	v->a[84297] = actions(4703);
	v->a[84298] = 1;
	v->a[84299] = sym_variable_name;
	small_parse_table_4215(v);
}

/* EOF small_parse_table_842.c */
