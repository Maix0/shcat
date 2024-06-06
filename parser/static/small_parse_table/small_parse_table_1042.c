/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1042.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5210(t_small_parse_table_array *v)
{
	v->a[104200] = 1;
	v->a[104201] = anon_sym_BQUOTE;
	v->a[104202] = actions(5354);
	v->a[104203] = 1;
	v->a[104204] = anon_sym_DOLLAR_BQUOTE;
	v->a[104205] = actions(5360);
	v->a[104206] = 1;
	v->a[104207] = sym__brace_start;
	v->a[104208] = actions(5985);
	v->a[104209] = 1;
	v->a[104210] = sym_word;
	v->a[104211] = state(1237);
	v->a[104212] = 1;
	v->a[104213] = aux_sym__literal_repeat1;
	v->a[104214] = actions(5987);
	v->a[104215] = 2;
	v->a[104216] = sym_test_operator;
	v->a[104217] = sym_raw_string;
	v->a[104218] = state(364);
	v->a[104219] = 2;
	small_parse_table_5211(v);
}

void	small_parse_table_5211(t_small_parse_table_array *v)
{
	v->a[104220] = sym_concatenation;
	v->a[104221] = aux_sym_for_statement_repeat1;
	v->a[104222] = state(768);
	v->a[104223] = 7;
	v->a[104224] = sym_arithmetic_expansion;
	v->a[104225] = sym_brace_expression;
	v->a[104226] = sym_string;
	v->a[104227] = sym_number;
	v->a[104228] = sym_simple_expansion;
	v->a[104229] = sym_expansion;
	v->a[104230] = sym_command_substitution;
	v->a[104231] = 17;
	v->a[104232] = actions(57);
	v->a[104233] = 1;
	v->a[104234] = sym_comment;
	v->a[104235] = actions(2150);
	v->a[104236] = 1;
	v->a[104237] = sym_word;
	v->a[104238] = actions(2154);
	v->a[104239] = 1;
	small_parse_table_5212(v);
}

void	small_parse_table_5212(t_small_parse_table_array *v)
{
	v->a[104240] = anon_sym_DOLLAR;
	v->a[104241] = actions(2160);
	v->a[104242] = 1;
	v->a[104243] = aux_sym_number_token1;
	v->a[104244] = actions(2162);
	v->a[104245] = 1;
	v->a[104246] = aux_sym_number_token2;
	v->a[104247] = actions(2166);
	v->a[104248] = 1;
	v->a[104249] = anon_sym_DOLLAR_LPAREN;
	v->a[104250] = actions(2174);
	v->a[104251] = 1;
	v->a[104252] = sym__brace_start;
	v->a[104253] = actions(5989);
	v->a[104254] = 1;
	v->a[104255] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[104256] = actions(5991);
	v->a[104257] = 1;
	v->a[104258] = sym__special_character;
	v->a[104259] = actions(5993);
	small_parse_table_5213(v);
}

void	small_parse_table_5213(t_small_parse_table_array *v)
{
	v->a[104260] = 1;
	v->a[104261] = anon_sym_DQUOTE;
	v->a[104262] = actions(5995);
	v->a[104263] = 1;
	v->a[104264] = anon_sym_DOLLAR_LBRACE;
	v->a[104265] = actions(5997);
	v->a[104266] = 1;
	v->a[104267] = anon_sym_BQUOTE;
	v->a[104268] = actions(5999);
	v->a[104269] = 1;
	v->a[104270] = anon_sym_DOLLAR_BQUOTE;
	v->a[104271] = state(1270);
	v->a[104272] = 1;
	v->a[104273] = aux_sym__literal_repeat1;
	v->a[104274] = actions(2172);
	v->a[104275] = 2;
	v->a[104276] = sym_test_operator;
	v->a[104277] = sym_raw_string;
	v->a[104278] = state(419);
	v->a[104279] = 2;
	small_parse_table_5214(v);
}

void	small_parse_table_5214(t_small_parse_table_array *v)
{
	v->a[104280] = sym_concatenation;
	v->a[104281] = aux_sym_for_statement_repeat1;
	v->a[104282] = state(1069);
	v->a[104283] = 7;
	v->a[104284] = sym_arithmetic_expansion;
	v->a[104285] = sym_brace_expression;
	v->a[104286] = sym_string;
	v->a[104287] = sym_number;
	v->a[104288] = sym_simple_expansion;
	v->a[104289] = sym_expansion;
	v->a[104290] = sym_command_substitution;
	v->a[104291] = 3;
	v->a[104292] = actions(3);
	v->a[104293] = 1;
	v->a[104294] = sym_comment;
	v->a[104295] = actions(3641);
	v->a[104296] = 2;
	v->a[104297] = sym_file_descriptor;
	v->a[104298] = aux_sym_heredoc_redirect_token1;
	v->a[104299] = actions(3639);
	small_parse_table_5215(v);
}

/* EOF small_parse_table_1042.c */
