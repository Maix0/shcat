/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_833.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4165(t_small_parse_table_array *v)
{
	v->a[83300] = 1;
	v->a[83301] = anon_sym_LPAREN;
	v->a[83302] = actions(4616);
	v->a[83303] = 1;
	v->a[83304] = anon_sym_BANG;
	v->a[83305] = actions(4622);
	v->a[83306] = 1;
	v->a[83307] = anon_sym_TILDE;
	v->a[83308] = actions(4624);
	v->a[83309] = 1;
	v->a[83310] = anon_sym_DOLLAR;
	v->a[83311] = actions(4626);
	v->a[83312] = 1;
	v->a[83313] = anon_sym_DQUOTE;
	v->a[83314] = actions(4628);
	v->a[83315] = 1;
	v->a[83316] = aux_sym_number_token1;
	v->a[83317] = actions(4630);
	v->a[83318] = 1;
	v->a[83319] = aux_sym_number_token2;
	small_parse_table_4166(v);
}

void	small_parse_table_4166(t_small_parse_table_array *v)
{
	v->a[83320] = actions(4632);
	v->a[83321] = 1;
	v->a[83322] = anon_sym_DOLLAR_LBRACE;
	v->a[83323] = actions(4634);
	v->a[83324] = 1;
	v->a[83325] = anon_sym_DOLLAR_LPAREN;
	v->a[83326] = actions(4636);
	v->a[83327] = 1;
	v->a[83328] = anon_sym_BQUOTE;
	v->a[83329] = actions(4638);
	v->a[83330] = 1;
	v->a[83331] = anon_sym_DOLLAR_BQUOTE;
	v->a[83332] = actions(4681);
	v->a[83333] = 1;
	v->a[83334] = aux_sym__simple_variable_name_token1;
	v->a[83335] = actions(4683);
	v->a[83336] = 1;
	v->a[83337] = sym_variable_name;
	v->a[83338] = state(1637);
	v->a[83339] = 1;
	small_parse_table_4167(v);
}

void	small_parse_table_4167(t_small_parse_table_array *v)
{
	v->a[83340] = sym__arithmetic_postfix_expression;
	v->a[83341] = state(1638);
	v->a[83342] = 1;
	v->a[83343] = sym__arithmetic_unary_expression;
	v->a[83344] = state(1640);
	v->a[83345] = 1;
	v->a[83346] = sym__arithmetic_ternary_expression;
	v->a[83347] = state(1642);
	v->a[83348] = 1;
	v->a[83349] = sym__arithmetic_binary_expression;
	v->a[83350] = actions(4618);
	v->a[83351] = 2;
	v->a[83352] = anon_sym_PLUS_PLUS;
	v->a[83353] = anon_sym_DASH_DASH;
	v->a[83354] = actions(4620);
	v->a[83355] = 2;
	v->a[83356] = anon_sym_DASH2;
	v->a[83357] = anon_sym_PLUS2;
	v->a[83358] = state(1611);
	v->a[83359] = 8;
	small_parse_table_4168(v);
}

void	small_parse_table_4168(t_small_parse_table_array *v)
{
	v->a[83360] = sym__arithmetic_expression;
	v->a[83361] = sym__arithmetic_literal;
	v->a[83362] = sym__arithmetic_parenthesized_expression;
	v->a[83363] = sym_string;
	v->a[83364] = sym_number;
	v->a[83365] = sym_simple_expansion;
	v->a[83366] = sym_expansion;
	v->a[83367] = sym_command_substitution;
	v->a[83368] = 6;
	v->a[83369] = actions(3);
	v->a[83370] = 1;
	v->a[83371] = sym_comment;
	v->a[83372] = actions(828);
	v->a[83373] = 1;
	v->a[83374] = sym_file_descriptor;
	v->a[83375] = actions(4582);
	v->a[83376] = 1;
	v->a[83377] = sym_variable_name;
	v->a[83378] = actions(4580);
	v->a[83379] = 2;
	small_parse_table_4169(v);
}

void	small_parse_table_4169(t_small_parse_table_array *v)
{
	v->a[83380] = aux_sym__simple_variable_name_token1;
	v->a[83381] = aux_sym__multiline_variable_name_token1;
	v->a[83382] = actions(4578);
	v->a[83383] = 9;
	v->a[83384] = anon_sym_BANG;
	v->a[83385] = anon_sym_DASH;
	v->a[83386] = anon_sym_STAR;
	v->a[83387] = anon_sym_QMARK;
	v->a[83388] = anon_sym_DOLLAR;
	v->a[83389] = anon_sym_POUND;
	v->a[83390] = anon_sym_AT;
	v->a[83391] = anon_sym_0;
	v->a[83392] = anon_sym__;
	v->a[83393] = actions(826);
	v->a[83394] = 16;
	v->a[83395] = anon_sym_PIPE;
	v->a[83396] = anon_sym_PIPE_AMP;
	v->a[83397] = anon_sym_AMP_AMP;
	v->a[83398] = anon_sym_PIPE_PIPE;
	v->a[83399] = anon_sym_LT;
	small_parse_table_4170(v);
}

/* EOF small_parse_table_833.c */
