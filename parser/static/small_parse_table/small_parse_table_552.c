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
	v->a[55200] = sym_command_substitution;
	v->a[55201] = 6;
	v->a[55202] = actions(3);
	v->a[55203] = 1;
	v->a[55204] = sym_comment;
	v->a[55205] = actions(1865);
	v->a[55206] = 1;
	v->a[55207] = aux_sym_concatenation_token1;
	v->a[55208] = actions(1868);
	v->a[55209] = 1;
	v->a[55210] = sym__concat;
	v->a[55211] = state(893);
	v->a[55212] = 1;
	v->a[55213] = aux_sym_concatenation_repeat1;
	v->a[55214] = actions(988);
	v->a[55215] = 4;
	v->a[55216] = sym_file_descriptor;
	v->a[55217] = sym_variable_name;
	v->a[55218] = ts_builtin_sym_end;
	v->a[55219] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2761(v);
}

void	small_parse_table_2761(t_small_parse_table_array *v)
{
	v->a[55220] = actions(983);
	v->a[55221] = 20;
	v->a[55222] = anon_sym_PIPE;
	v->a[55223] = anon_sym_RPAREN;
	v->a[55224] = anon_sym_SEMI_SEMI;
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
	v->a[55239] = anon_sym_AMP;
	small_parse_table_2762(v);
}

void	small_parse_table_2762(t_small_parse_table_array *v)
{
	v->a[55240] = anon_sym_BQUOTE;
	v->a[55241] = anon_sym_SEMI;
	v->a[55242] = 16;
	v->a[55243] = actions(1074);
	v->a[55244] = 1;
	v->a[55245] = sym_comment;
	v->a[55246] = actions(1831);
	v->a[55247] = 1;
	v->a[55248] = anon_sym_LPAREN;
	v->a[55249] = actions(1833);
	v->a[55250] = 1;
	v->a[55251] = anon_sym_BANG;
	v->a[55252] = actions(1841);
	v->a[55253] = 1;
	v->a[55254] = anon_sym_TILDE;
	v->a[55255] = actions(1843);
	v->a[55256] = 1;
	v->a[55257] = anon_sym_DOLLAR;
	v->a[55258] = actions(1845);
	v->a[55259] = 1;
	small_parse_table_2763(v);
}

void	small_parse_table_2763(t_small_parse_table_array *v)
{
	v->a[55260] = anon_sym_DQUOTE;
	v->a[55261] = actions(1849);
	v->a[55262] = 1;
	v->a[55263] = anon_sym_DOLLAR_LBRACE;
	v->a[55264] = actions(1851);
	v->a[55265] = 1;
	v->a[55266] = anon_sym_DOLLAR_LPAREN;
	v->a[55267] = actions(1853);
	v->a[55268] = 1;
	v->a[55269] = anon_sym_BQUOTE;
	v->a[55270] = actions(1855);
	v->a[55271] = 1;
	v->a[55272] = sym_variable_name;
	v->a[55273] = actions(1871);
	v->a[55274] = 1;
	v->a[55275] = anon_sym_RPAREN_RPAREN;
	v->a[55276] = actions(1837);
	v->a[55277] = 2;
	v->a[55278] = anon_sym_PLUS_PLUS;
	v->a[55279] = anon_sym_DASH_DASH;
	small_parse_table_2764(v);
}

void	small_parse_table_2764(t_small_parse_table_array *v)
{
	v->a[55280] = actions(1839);
	v->a[55281] = 2;
	v->a[55282] = anon_sym_DASH2;
	v->a[55283] = anon_sym_PLUS2;
	v->a[55284] = actions(1847);
	v->a[55285] = 2;
	v->a[55286] = sym_number;
	v->a[55287] = aux_sym__simple_variable_name_token1;
	v->a[55288] = state(370);
	v->a[55289] = 3;
	v->a[55290] = sym_string;
	v->a[55291] = sym_simple_expansion;
	v->a[55292] = sym_expansion;
	v->a[55293] = state(467);
	v->a[55294] = 8;
	v->a[55295] = sym__arithmetic_expression;
	v->a[55296] = sym_arithmetic_literal;
	v->a[55297] = sym_arithmetic_binary_expression;
	v->a[55298] = sym_arithmetic_ternary_expression;
	v->a[55299] = sym_arithmetic_unary_expression;
	small_parse_table_2765(v);
}

/* EOF small_parse_table_552.c */
