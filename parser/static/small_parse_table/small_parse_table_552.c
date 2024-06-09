/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_552.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2760(t_small_parse_table_array *v)
{
	v->a[55200] = sym_number;
	v->a[55201] = sym_simple_expansion;
	v->a[55202] = sym_expansion;
	v->a[55203] = state(604);
	v->a[55204] = 8;
	v->a[55205] = sym__arithmetic_expression;
	v->a[55206] = sym_arithmetic_literal;
	v->a[55207] = sym_arithmetic_binary_expression;
	v->a[55208] = sym_arithmetic_ternary_expression;
	v->a[55209] = sym_arithmetic_unary_expression;
	v->a[55210] = sym_arithmetic_postfix_expression;
	v->a[55211] = sym_arithmetic_parenthesized_expression;
	v->a[55212] = sym_command_substitution;
	v->a[55213] = 3;
	v->a[55214] = actions(3);
	v->a[55215] = 1;
	v->a[55216] = sym_comment;
	v->a[55217] = actions(1243);
	v->a[55218] = 3;
	v->a[55219] = sym_file_descriptor;
	small_parse_table_2761(v);
}

void	small_parse_table_2761(t_small_parse_table_array *v)
{
	v->a[55220] = sym__concat;
	v->a[55221] = sym__bare_dollar;
	v->a[55222] = actions(1245);
	v->a[55223] = 26;
	v->a[55224] = anon_sym_PIPE;
	v->a[55225] = anon_sym_AMP_AMP;
	v->a[55226] = anon_sym_PIPE_PIPE;
	v->a[55227] = anon_sym_LT;
	v->a[55228] = anon_sym_GT;
	v->a[55229] = anon_sym_GT_GT;
	v->a[55230] = anon_sym_AMP_GT;
	v->a[55231] = anon_sym_AMP_GT_GT;
	v->a[55232] = anon_sym_LT_AMP;
	v->a[55233] = anon_sym_GT_AMP;
	v->a[55234] = anon_sym_GT_PIPE;
	v->a[55235] = anon_sym_LT_AMP_DASH;
	v->a[55236] = anon_sym_GT_AMP_DASH;
	v->a[55237] = anon_sym_LT_LT;
	v->a[55238] = anon_sym_LT_LT_DASH;
	v->a[55239] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2762(v);
}

void	small_parse_table_2762(t_small_parse_table_array *v)
{
	v->a[55240] = aux_sym_concatenation_token1;
	v->a[55241] = anon_sym_DOLLAR;
	v->a[55242] = anon_sym_DQUOTE;
	v->a[55243] = sym_raw_string;
	v->a[55244] = aux_sym_number_token1;
	v->a[55245] = aux_sym_number_token2;
	v->a[55246] = anon_sym_DOLLAR_LBRACE;
	v->a[55247] = anon_sym_DOLLAR_LPAREN;
	v->a[55248] = anon_sym_BQUOTE;
	v->a[55249] = sym_word;
	v->a[55250] = 3;
	v->a[55251] = actions(3);
	v->a[55252] = 1;
	v->a[55253] = sym_comment;
	v->a[55254] = actions(1251);
	v->a[55255] = 3;
	v->a[55256] = sym_file_descriptor;
	v->a[55257] = sym__concat;
	v->a[55258] = sym_variable_name;
	v->a[55259] = actions(1253);
	small_parse_table_2763(v);
}

void	small_parse_table_2763(t_small_parse_table_array *v)
{
	v->a[55260] = 26;
	v->a[55261] = anon_sym_PIPE;
	v->a[55262] = anon_sym_AMP_AMP;
	v->a[55263] = anon_sym_PIPE_PIPE;
	v->a[55264] = anon_sym_LT;
	v->a[55265] = anon_sym_GT;
	v->a[55266] = anon_sym_GT_GT;
	v->a[55267] = anon_sym_AMP_GT;
	v->a[55268] = anon_sym_AMP_GT_GT;
	v->a[55269] = anon_sym_LT_AMP;
	v->a[55270] = anon_sym_GT_AMP;
	v->a[55271] = anon_sym_GT_PIPE;
	v->a[55272] = anon_sym_LT_AMP_DASH;
	v->a[55273] = anon_sym_GT_AMP_DASH;
	v->a[55274] = anon_sym_LT_LT;
	v->a[55275] = anon_sym_LT_LT_DASH;
	v->a[55276] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55277] = aux_sym_concatenation_token1;
	v->a[55278] = anon_sym_DOLLAR;
	v->a[55279] = anon_sym_DQUOTE;
	small_parse_table_2764(v);
}

void	small_parse_table_2764(t_small_parse_table_array *v)
{
	v->a[55280] = sym_raw_string;
	v->a[55281] = aux_sym_number_token1;
	v->a[55282] = aux_sym_number_token2;
	v->a[55283] = anon_sym_DOLLAR_LBRACE;
	v->a[55284] = anon_sym_DOLLAR_LPAREN;
	v->a[55285] = anon_sym_BQUOTE;
	v->a[55286] = sym_word;
	v->a[55287] = 3;
	v->a[55288] = actions(3);
	v->a[55289] = 1;
	v->a[55290] = sym_comment;
	v->a[55291] = actions(1329);
	v->a[55292] = 3;
	v->a[55293] = sym_file_descriptor;
	v->a[55294] = sym__concat;
	v->a[55295] = sym__bare_dollar;
	v->a[55296] = actions(1327);
	v->a[55297] = 26;
	v->a[55298] = anon_sym_PIPE;
	v->a[55299] = anon_sym_AMP_AMP;
	small_parse_table_2765(v);
}

/* EOF small_parse_table_552.c */
