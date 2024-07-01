/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_482.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2410(t_small_parse_table_array *v)
{
	v->a[48200] = anon_sym_DOLLAR;
	v->a[48201] = actions(1574);
	v->a[48202] = 1;
	v->a[48203] = anon_sym_DQUOTE;
	v->a[48204] = actions(1578);
	v->a[48205] = 1;
	v->a[48206] = anon_sym_DOLLAR_LBRACE;
	v->a[48207] = actions(1580);
	v->a[48208] = 1;
	v->a[48209] = anon_sym_DOLLAR_LPAREN;
	v->a[48210] = actions(1582);
	v->a[48211] = 1;
	v->a[48212] = anon_sym_BQUOTE;
	v->a[48213] = actions(1584);
	v->a[48214] = 1;
	v->a[48215] = sym_variable_name;
	v->a[48216] = actions(1566);
	v->a[48217] = 2;
	v->a[48218] = anon_sym_PLUS_PLUS;
	v->a[48219] = anon_sym_DASH_DASH;
	small_parse_table_2411(v);
}

void	small_parse_table_2411(t_small_parse_table_array *v)
{
	v->a[48220] = actions(1568);
	v->a[48221] = 2;
	v->a[48222] = anon_sym_DASH2;
	v->a[48223] = anon_sym_PLUS2;
	v->a[48224] = actions(1576);
	v->a[48225] = 2;
	v->a[48226] = sym_number;
	v->a[48227] = aux_sym__simple_variable_name_token1;
	v->a[48228] = state(255);
	v->a[48229] = 3;
	v->a[48230] = sym_string;
	v->a[48231] = sym_simple_expansion;
	v->a[48232] = sym_expansion;
	v->a[48233] = state(206);
	v->a[48234] = 8;
	v->a[48235] = sym__arithmetic_expression;
	v->a[48236] = sym_arithmetic_literal;
	v->a[48237] = sym_arithmetic_binary_expression;
	v->a[48238] = sym_arithmetic_ternary_expression;
	v->a[48239] = sym_arithmetic_unary_expression;
	small_parse_table_2412(v);
}

void	small_parse_table_2412(t_small_parse_table_array *v)
{
	v->a[48240] = sym_arithmetic_postfix_expression;
	v->a[48241] = sym_arithmetic_parenthesized_expression;
	v->a[48242] = sym_command_substitution;
	v->a[48243] = 3;
	v->a[48244] = actions(3);
	v->a[48245] = 1;
	v->a[48246] = sym_comment;
	v->a[48247] = actions(846);
	v->a[48248] = 3;
	v->a[48249] = sym_file_descriptor;
	v->a[48250] = sym__concat;
	v->a[48251] = sym__bare_dollar;
	v->a[48252] = actions(844);
	v->a[48253] = 23;
	v->a[48254] = anon_sym_LPAREN;
	v->a[48255] = anon_sym_PIPE;
	v->a[48256] = anon_sym_AMP_AMP;
	v->a[48257] = anon_sym_PIPE_PIPE;
	v->a[48258] = anon_sym_LT;
	v->a[48259] = anon_sym_GT;
	small_parse_table_2413(v);
}

void	small_parse_table_2413(t_small_parse_table_array *v)
{
	v->a[48260] = anon_sym_GT_GT;
	v->a[48261] = anon_sym_LT_AMP;
	v->a[48262] = anon_sym_GT_AMP;
	v->a[48263] = anon_sym_GT_PIPE;
	v->a[48264] = anon_sym_LT_GT;
	v->a[48265] = anon_sym_LT_LT;
	v->a[48266] = anon_sym_LT_LT_DASH;
	v->a[48267] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48268] = aux_sym_concatenation_token1;
	v->a[48269] = anon_sym_DOLLAR;
	v->a[48270] = anon_sym_DQUOTE;
	v->a[48271] = sym_raw_string;
	v->a[48272] = sym_number;
	v->a[48273] = anon_sym_DOLLAR_LBRACE;
	v->a[48274] = anon_sym_DOLLAR_LPAREN;
	v->a[48275] = anon_sym_BQUOTE;
	v->a[48276] = sym_word;
	v->a[48277] = 15;
	v->a[48278] = actions(664);
	v->a[48279] = 1;
	small_parse_table_2414(v);
}

void	small_parse_table_2414(t_small_parse_table_array *v)
{
	v->a[48280] = sym_comment;
	v->a[48281] = actions(1560);
	v->a[48282] = 1;
	v->a[48283] = anon_sym_LPAREN;
	v->a[48284] = actions(1562);
	v->a[48285] = 1;
	v->a[48286] = anon_sym_BANG;
	v->a[48287] = actions(1570);
	v->a[48288] = 1;
	v->a[48289] = anon_sym_TILDE;
	v->a[48290] = actions(1572);
	v->a[48291] = 1;
	v->a[48292] = anon_sym_DOLLAR;
	v->a[48293] = actions(1574);
	v->a[48294] = 1;
	v->a[48295] = anon_sym_DQUOTE;
	v->a[48296] = actions(1578);
	v->a[48297] = 1;
	v->a[48298] = anon_sym_DOLLAR_LBRACE;
	v->a[48299] = actions(1580);
	small_parse_table_2415(v);
}

/* EOF small_parse_table_482.c */
