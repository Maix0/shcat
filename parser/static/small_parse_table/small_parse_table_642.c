/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_642.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3210(t_small_parse_table_array *v)
{
	v->a[64200] = actions(1871);
	v->a[64201] = 1;
	v->a[64202] = anon_sym_BANG;
	v->a[64203] = actions(1879);
	v->a[64204] = 1;
	v->a[64205] = anon_sym_TILDE;
	v->a[64206] = actions(1881);
	v->a[64207] = 1;
	v->a[64208] = anon_sym_DOLLAR;
	v->a[64209] = actions(1883);
	v->a[64210] = 1;
	v->a[64211] = anon_sym_DQUOTE;
	v->a[64212] = actions(1887);
	v->a[64213] = 1;
	v->a[64214] = anon_sym_DOLLAR_LBRACE;
	v->a[64215] = actions(1889);
	v->a[64216] = 1;
	v->a[64217] = anon_sym_DOLLAR_LPAREN;
	v->a[64218] = actions(1891);
	v->a[64219] = 1;
	small_parse_table_3211(v);
}

void	small_parse_table_3211(t_small_parse_table_array *v)
{
	v->a[64220] = anon_sym_BQUOTE;
	v->a[64221] = actions(1893);
	v->a[64222] = 1;
	v->a[64223] = sym_variable_name;
	v->a[64224] = actions(1875);
	v->a[64225] = 2;
	v->a[64226] = anon_sym_PLUS_PLUS;
	v->a[64227] = anon_sym_DASH_DASH;
	v->a[64228] = actions(1877);
	v->a[64229] = 2;
	v->a[64230] = anon_sym_DASH2;
	v->a[64231] = anon_sym_PLUS2;
	v->a[64232] = actions(1885);
	v->a[64233] = 2;
	v->a[64234] = sym_number;
	v->a[64235] = aux_sym__simple_variable_name_token1;
	v->a[64236] = state(365);
	v->a[64237] = 3;
	v->a[64238] = sym_string;
	v->a[64239] = sym_simple_expansion;
	small_parse_table_3212(v);
}

void	small_parse_table_3212(t_small_parse_table_array *v)
{
	v->a[64240] = sym_expansion;
	v->a[64241] = state(360);
	v->a[64242] = 8;
	v->a[64243] = sym__arithmetic_expression;
	v->a[64244] = sym_arithmetic_literal;
	v->a[64245] = sym_arithmetic_binary_expression;
	v->a[64246] = sym_arithmetic_ternary_expression;
	v->a[64247] = sym_arithmetic_unary_expression;
	v->a[64248] = sym_arithmetic_postfix_expression;
	v->a[64249] = sym_arithmetic_parenthesized_expression;
	v->a[64250] = sym_command_substitution;
	v->a[64251] = 3;
	v->a[64252] = actions(3);
	v->a[64253] = 1;
	v->a[64254] = sym_comment;
	v->a[64255] = actions(608);
	v->a[64256] = 2;
	v->a[64257] = sym_file_descriptor;
	v->a[64258] = sym_variable_name;
	v->a[64259] = actions(610);
	small_parse_table_3213(v);
}

void	small_parse_table_3213(t_small_parse_table_array *v)
{
	v->a[64260] = 24;
	v->a[64261] = anon_sym_PIPE;
	v->a[64262] = anon_sym_AMP_AMP;
	v->a[64263] = anon_sym_PIPE_PIPE;
	v->a[64264] = anon_sym_LT;
	v->a[64265] = anon_sym_GT;
	v->a[64266] = anon_sym_GT_GT;
	v->a[64267] = anon_sym_AMP_GT;
	v->a[64268] = anon_sym_AMP_GT_GT;
	v->a[64269] = anon_sym_LT_AMP;
	v->a[64270] = anon_sym_GT_AMP;
	v->a[64271] = anon_sym_GT_PIPE;
	v->a[64272] = anon_sym_LT_AMP_DASH;
	v->a[64273] = anon_sym_GT_AMP_DASH;
	v->a[64274] = anon_sym_LT_LT;
	v->a[64275] = anon_sym_LT_LT_DASH;
	v->a[64276] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[64277] = anon_sym_DOLLAR;
	v->a[64278] = anon_sym_DQUOTE;
	v->a[64279] = sym_raw_string;
	small_parse_table_3214(v);
}

void	small_parse_table_3214(t_small_parse_table_array *v)
{
	v->a[64280] = sym_number;
	v->a[64281] = anon_sym_DOLLAR_LBRACE;
	v->a[64282] = anon_sym_DOLLAR_LPAREN;
	v->a[64283] = anon_sym_BQUOTE;
	v->a[64284] = sym_word;
	v->a[64285] = 17;
	v->a[64286] = actions(3);
	v->a[64287] = 1;
	v->a[64288] = sym_comment;
	v->a[64289] = actions(1959);
	v->a[64290] = 1;
	v->a[64291] = anon_sym_LPAREN;
	v->a[64292] = actions(1963);
	v->a[64293] = 1;
	v->a[64294] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[64295] = actions(1965);
	v->a[64296] = 1;
	v->a[64297] = anon_sym_DOLLAR;
	v->a[64298] = actions(1967);
	v->a[64299] = 1;
	small_parse_table_3215(v);
}

/* EOF small_parse_table_642.c */
