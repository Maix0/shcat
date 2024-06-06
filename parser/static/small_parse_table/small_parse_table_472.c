/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_472.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2360(t_small_parse_table_array *v)
{
	v->a[47200] = actions(3052);
	v->a[47201] = 1;
	v->a[47202] = sym_word;
	v->a[47203] = actions(3054);
	v->a[47204] = 1;
	v->a[47205] = sym__special_character;
	v->a[47206] = actions(3621);
	v->a[47207] = 1;
	v->a[47208] = sym_variable_name;
	v->a[47209] = state(289);
	v->a[47210] = 1;
	v->a[47211] = sym_command_name;
	v->a[47212] = state(1048);
	v->a[47213] = 1;
	v->a[47214] = aux_sym__literal_repeat1;
	v->a[47215] = state(1192);
	v->a[47216] = 1;
	v->a[47217] = sym_concatenation;
	v->a[47218] = state(1995);
	v->a[47219] = 1;
	small_parse_table_2361(v);
}

void	small_parse_table_2361(t_small_parse_table_array *v)
{
	v->a[47220] = sym_file_redirect;
	v->a[47221] = actions(439);
	v->a[47222] = 2;
	v->a[47223] = sym_test_operator;
	v->a[47224] = sym_raw_string;
	v->a[47225] = actions(2896);
	v->a[47226] = 2;
	v->a[47227] = anon_sym_LT_AMP_DASH;
	v->a[47228] = anon_sym_GT_AMP_DASH;
	v->a[47229] = state(1776);
	v->a[47230] = 2;
	v->a[47231] = sym_variable_assignment;
	v->a[47232] = aux_sym_command_repeat1;
	v->a[47233] = actions(2894);
	v->a[47234] = 3;
	v->a[47235] = anon_sym_GT_GT;
	v->a[47236] = anon_sym_AMP_GT_GT;
	v->a[47237] = anon_sym_GT_PIPE;
	v->a[47238] = actions(2892);
	v->a[47239] = 5;
	small_parse_table_2362(v);
}

void	small_parse_table_2362(t_small_parse_table_array *v)
{
	v->a[47240] = anon_sym_LT;
	v->a[47241] = anon_sym_GT;
	v->a[47242] = anon_sym_AMP_GT;
	v->a[47243] = anon_sym_LT_AMP;
	v->a[47244] = anon_sym_GT_AMP;
	v->a[47245] = state(702);
	v->a[47246] = 7;
	v->a[47247] = sym_arithmetic_expansion;
	v->a[47248] = sym_brace_expression;
	v->a[47249] = sym_string;
	v->a[47250] = sym_number;
	v->a[47251] = sym_simple_expansion;
	v->a[47252] = sym_expansion;
	v->a[47253] = sym_command_substitution;
	v->a[47254] = 3;
	v->a[47255] = actions(3);
	v->a[47256] = 1;
	v->a[47257] = sym_comment;
	v->a[47258] = actions(2828);
	v->a[47259] = 6;
	small_parse_table_2363(v);
}

void	small_parse_table_2363(t_small_parse_table_array *v)
{
	v->a[47260] = sym_file_descriptor;
	v->a[47261] = sym__concat;
	v->a[47262] = sym_variable_name;
	v->a[47263] = sym_test_operator;
	v->a[47264] = sym__brace_start;
	v->a[47265] = aux_sym_heredoc_redirect_token1;
	v->a[47266] = actions(2826);
	v->a[47267] = 33;
	v->a[47268] = anon_sym_PIPE;
	v->a[47269] = anon_sym_RPAREN;
	v->a[47270] = anon_sym_SEMI_SEMI;
	v->a[47271] = anon_sym_PIPE_AMP;
	v->a[47272] = anon_sym_AMP_AMP;
	v->a[47273] = anon_sym_PIPE_PIPE;
	v->a[47274] = anon_sym_LT;
	v->a[47275] = anon_sym_GT;
	v->a[47276] = anon_sym_GT_GT;
	v->a[47277] = anon_sym_AMP_GT;
	v->a[47278] = anon_sym_AMP_GT_GT;
	v->a[47279] = anon_sym_LT_AMP;
	small_parse_table_2364(v);
}

void	small_parse_table_2364(t_small_parse_table_array *v)
{
	v->a[47280] = anon_sym_GT_AMP;
	v->a[47281] = anon_sym_GT_PIPE;
	v->a[47282] = anon_sym_LT_AMP_DASH;
	v->a[47283] = anon_sym_GT_AMP_DASH;
	v->a[47284] = anon_sym_LT_LT;
	v->a[47285] = anon_sym_LT_LT_DASH;
	v->a[47286] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47287] = anon_sym_AMP;
	v->a[47288] = aux_sym_concatenation_token1;
	v->a[47289] = anon_sym_DOLLAR;
	v->a[47290] = sym__special_character;
	v->a[47291] = anon_sym_DQUOTE;
	v->a[47292] = sym_raw_string;
	v->a[47293] = aux_sym_number_token1;
	v->a[47294] = aux_sym_number_token2;
	v->a[47295] = anon_sym_DOLLAR_LBRACE;
	v->a[47296] = anon_sym_DOLLAR_LPAREN;
	v->a[47297] = anon_sym_BQUOTE;
	v->a[47298] = anon_sym_DOLLAR_BQUOTE;
	v->a[47299] = sym_word;
	small_parse_table_2365(v);
}

/* EOF small_parse_table_472.c */
