/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_603.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3015(t_small_parse_table_array *v)
{
	v->a[60300] = 1;
	v->a[60301] = sym_variable_name;
	v->a[60302] = actions(2081);
	v->a[60303] = 2;
	v->a[60304] = anon_sym_PLUS_PLUS;
	v->a[60305] = anon_sym_DASH_DASH;
	v->a[60306] = actions(2083);
	v->a[60307] = 2;
	v->a[60308] = anon_sym_DASH2;
	v->a[60309] = anon_sym_PLUS2;
	v->a[60310] = state(588);
	v->a[60311] = 4;
	v->a[60312] = sym_string;
	v->a[60313] = sym_number;
	v->a[60314] = sym_simple_expansion;
	v->a[60315] = sym_expansion;
	v->a[60316] = state(673);
	v->a[60317] = 8;
	v->a[60318] = sym__arithmetic_expression;
	v->a[60319] = sym_arithmetic_literal;
	small_parse_table_3016(v);
}

void	small_parse_table_3016(t_small_parse_table_array *v)
{
	v->a[60320] = sym_arithmetic_binary_expression;
	v->a[60321] = sym_arithmetic_ternary_expression;
	v->a[60322] = sym_arithmetic_unary_expression;
	v->a[60323] = sym_arithmetic_postfix_expression;
	v->a[60324] = sym_arithmetic_parenthesized_expression;
	v->a[60325] = sym_command_substitution;
	v->a[60326] = 3;
	v->a[60327] = actions(3);
	v->a[60328] = 1;
	v->a[60329] = sym_comment;
	v->a[60330] = actions(1261);
	v->a[60331] = 2;
	v->a[60332] = sym_file_descriptor;
	v->a[60333] = sym__bare_dollar;
	v->a[60334] = actions(1259);
	v->a[60335] = 25;
	v->a[60336] = anon_sym_PIPE;
	v->a[60337] = anon_sym_AMP_AMP;
	v->a[60338] = anon_sym_PIPE_PIPE;
	v->a[60339] = anon_sym_LT;
	small_parse_table_3017(v);
}

void	small_parse_table_3017(t_small_parse_table_array *v)
{
	v->a[60340] = anon_sym_GT;
	v->a[60341] = anon_sym_GT_GT;
	v->a[60342] = anon_sym_AMP_GT;
	v->a[60343] = anon_sym_AMP_GT_GT;
	v->a[60344] = anon_sym_LT_AMP;
	v->a[60345] = anon_sym_GT_AMP;
	v->a[60346] = anon_sym_GT_PIPE;
	v->a[60347] = anon_sym_LT_AMP_DASH;
	v->a[60348] = anon_sym_GT_AMP_DASH;
	v->a[60349] = anon_sym_LT_LT;
	v->a[60350] = anon_sym_LT_LT_DASH;
	v->a[60351] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60352] = anon_sym_DOLLAR;
	v->a[60353] = anon_sym_DQUOTE;
	v->a[60354] = sym_raw_string;
	v->a[60355] = aux_sym_number_token1;
	v->a[60356] = aux_sym_number_token2;
	v->a[60357] = anon_sym_DOLLAR_LBRACE;
	v->a[60358] = anon_sym_DOLLAR_LPAREN;
	v->a[60359] = anon_sym_BQUOTE;
	small_parse_table_3018(v);
}

void	small_parse_table_3018(t_small_parse_table_array *v)
{
	v->a[60360] = sym_word;
	v->a[60361] = 3;
	v->a[60362] = actions(3);
	v->a[60363] = 1;
	v->a[60364] = sym_comment;
	v->a[60365] = actions(555);
	v->a[60366] = 2;
	v->a[60367] = sym_file_descriptor;
	v->a[60368] = sym_variable_name;
	v->a[60369] = actions(553);
	v->a[60370] = 25;
	v->a[60371] = anon_sym_PIPE;
	v->a[60372] = anon_sym_AMP_AMP;
	v->a[60373] = anon_sym_PIPE_PIPE;
	v->a[60374] = anon_sym_LT;
	v->a[60375] = anon_sym_GT;
	v->a[60376] = anon_sym_GT_GT;
	v->a[60377] = anon_sym_AMP_GT;
	v->a[60378] = anon_sym_AMP_GT_GT;
	v->a[60379] = anon_sym_LT_AMP;
	small_parse_table_3019(v);
}

void	small_parse_table_3019(t_small_parse_table_array *v)
{
	v->a[60380] = anon_sym_GT_AMP;
	v->a[60381] = anon_sym_GT_PIPE;
	v->a[60382] = anon_sym_LT_AMP_DASH;
	v->a[60383] = anon_sym_GT_AMP_DASH;
	v->a[60384] = anon_sym_LT_LT;
	v->a[60385] = anon_sym_LT_LT_DASH;
	v->a[60386] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60387] = anon_sym_DOLLAR;
	v->a[60388] = anon_sym_DQUOTE;
	v->a[60389] = sym_raw_string;
	v->a[60390] = aux_sym_number_token1;
	v->a[60391] = aux_sym_number_token2;
	v->a[60392] = anon_sym_DOLLAR_LBRACE;
	v->a[60393] = anon_sym_DOLLAR_LPAREN;
	v->a[60394] = anon_sym_BQUOTE;
	v->a[60395] = sym_word;
	v->a[60396] = 3;
	v->a[60397] = actions(3);
	v->a[60398] = 1;
	v->a[60399] = sym_comment;
	small_parse_table_3020(v);
}

/* EOF small_parse_table_603.c */
