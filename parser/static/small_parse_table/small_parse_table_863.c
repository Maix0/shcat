/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_863.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4315(t_small_parse_table_array *v)
{
	v->a[86300] = sym_command_substitution;
	v->a[86301] = 21;
	v->a[86302] = actions(57);
	v->a[86303] = 1;
	v->a[86304] = sym_comment;
	v->a[86305] = actions(4614);
	v->a[86306] = 1;
	v->a[86307] = anon_sym_LPAREN;
	v->a[86308] = actions(4616);
	v->a[86309] = 1;
	v->a[86310] = anon_sym_BANG;
	v->a[86311] = actions(4622);
	v->a[86312] = 1;
	v->a[86313] = anon_sym_TILDE;
	v->a[86314] = actions(4624);
	v->a[86315] = 1;
	v->a[86316] = anon_sym_DOLLAR;
	v->a[86317] = actions(4626);
	v->a[86318] = 1;
	v->a[86319] = anon_sym_DQUOTE;
	small_parse_table_4316(v);
}

void	small_parse_table_4316(t_small_parse_table_array *v)
{
	v->a[86320] = actions(4628);
	v->a[86321] = 1;
	v->a[86322] = aux_sym_number_token1;
	v->a[86323] = actions(4630);
	v->a[86324] = 1;
	v->a[86325] = aux_sym_number_token2;
	v->a[86326] = actions(4632);
	v->a[86327] = 1;
	v->a[86328] = anon_sym_DOLLAR_LBRACE;
	v->a[86329] = actions(4634);
	v->a[86330] = 1;
	v->a[86331] = anon_sym_DOLLAR_LPAREN;
	v->a[86332] = actions(4636);
	v->a[86333] = 1;
	v->a[86334] = anon_sym_BQUOTE;
	v->a[86335] = actions(4638);
	v->a[86336] = 1;
	v->a[86337] = anon_sym_DOLLAR_BQUOTE;
	v->a[86338] = actions(4805);
	v->a[86339] = 1;
	small_parse_table_4317(v);
}

void	small_parse_table_4317(t_small_parse_table_array *v)
{
	v->a[86340] = aux_sym__simple_variable_name_token1;
	v->a[86341] = actions(4807);
	v->a[86342] = 1;
	v->a[86343] = sym_variable_name;
	v->a[86344] = state(1637);
	v->a[86345] = 1;
	v->a[86346] = sym__arithmetic_postfix_expression;
	v->a[86347] = state(1638);
	v->a[86348] = 1;
	v->a[86349] = sym__arithmetic_unary_expression;
	v->a[86350] = state(1640);
	v->a[86351] = 1;
	v->a[86352] = sym__arithmetic_ternary_expression;
	v->a[86353] = state(1642);
	v->a[86354] = 1;
	v->a[86355] = sym__arithmetic_binary_expression;
	v->a[86356] = actions(4618);
	v->a[86357] = 2;
	v->a[86358] = anon_sym_PLUS_PLUS;
	v->a[86359] = anon_sym_DASH_DASH;
	small_parse_table_4318(v);
}

void	small_parse_table_4318(t_small_parse_table_array *v)
{
	v->a[86360] = actions(4620);
	v->a[86361] = 2;
	v->a[86362] = anon_sym_DASH2;
	v->a[86363] = anon_sym_PLUS2;
	v->a[86364] = state(1602);
	v->a[86365] = 8;
	v->a[86366] = sym__arithmetic_expression;
	v->a[86367] = sym__arithmetic_literal;
	v->a[86368] = sym__arithmetic_parenthesized_expression;
	v->a[86369] = sym_string;
	v->a[86370] = sym_number;
	v->a[86371] = sym_simple_expansion;
	v->a[86372] = sym_expansion;
	v->a[86373] = sym_command_substitution;
	v->a[86374] = 21;
	v->a[86375] = actions(57);
	v->a[86376] = 1;
	v->a[86377] = sym_comment;
	v->a[86378] = actions(4328);
	v->a[86379] = 1;
	small_parse_table_4319(v);
}

void	small_parse_table_4319(t_small_parse_table_array *v)
{
	v->a[86380] = sym_word;
	v->a[86381] = actions(4340);
	v->a[86382] = 1;
	v->a[86383] = anon_sym_DOLLAR;
	v->a[86384] = actions(4346);
	v->a[86385] = 1;
	v->a[86386] = aux_sym_number_token1;
	v->a[86387] = actions(4348);
	v->a[86388] = 1;
	v->a[86389] = aux_sym_number_token2;
	v->a[86390] = actions(4352);
	v->a[86391] = 1;
	v->a[86392] = anon_sym_DOLLAR_LPAREN;
	v->a[86393] = actions(4360);
	v->a[86394] = 1;
	v->a[86395] = sym_extglob_pattern;
	v->a[86396] = actions(4362);
	v->a[86397] = 1;
	v->a[86398] = sym__brace_start;
	v->a[86399] = actions(4548);
	small_parse_table_4320(v);
}

/* EOF small_parse_table_863.c */
