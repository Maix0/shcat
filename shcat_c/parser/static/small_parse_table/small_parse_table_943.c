/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_943.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4715(t_small_parse_table_array *v)
{
	v->a[94300] = sym_test_operator;
	v->a[94301] = actions(1169);
	v->a[94302] = 1;
	v->a[94303] = sym__brace_start;
	v->a[94304] = actions(3060);
	v->a[94305] = 1;
	v->a[94306] = anon_sym_BQUOTE;
	v->a[94307] = state(2484);
	v->a[94308] = 1;
	v->a[94309] = aux_sym__literal_repeat1;
	v->a[94310] = state(2979);
	v->a[94311] = 1;
	v->a[94312] = sym__expression;
	v->a[94313] = actions(1129);
	v->a[94314] = 2;
	v->a[94315] = anon_sym_LPAREN_LPAREN;
	v->a[94316] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[94317] = actions(1135);
	v->a[94318] = 2;
	v->a[94319] = anon_sym_PLUS_PLUS2;
	small_parse_table_4716(v);
}

void	small_parse_table_4716(t_small_parse_table_array *v)
{
	v->a[94320] = anon_sym_DASH_DASH2;
	v->a[94321] = actions(1137);
	v->a[94322] = 2;
	v->a[94323] = anon_sym_DASH2;
	v->a[94324] = anon_sym_PLUS2;
	v->a[94325] = actions(1151);
	v->a[94326] = 2;
	v->a[94327] = sym_raw_string;
	v->a[94328] = sym_ansi_c_string;
	v->a[94329] = actions(1165);
	v->a[94330] = 2;
	v->a[94331] = anon_sym_LT_LPAREN;
	v->a[94332] = anon_sym_GT_LPAREN;
	v->a[94333] = state(2594);
	v->a[94334] = 6;
	v->a[94335] = sym_binary_expression;
	v->a[94336] = sym_ternary_expression;
	v->a[94337] = sym_unary_expression;
	v->a[94338] = sym_postfix_expression;
	v->a[94339] = sym_parenthesized_expression;
	small_parse_table_4717(v);
}

void	small_parse_table_4717(t_small_parse_table_array *v)
{
	v->a[94340] = sym_concatenation;
	v->a[94341] = state(2573);
	v->a[94342] = 9;
	v->a[94343] = sym_arithmetic_expansion;
	v->a[94344] = sym_brace_expression;
	v->a[94345] = sym_string;
	v->a[94346] = sym_translated_string;
	v->a[94347] = sym_number;
	v->a[94348] = sym_simple_expansion;
	v->a[94349] = sym_expansion;
	v->a[94350] = sym_command_substitution;
	v->a[94351] = sym_process_substitution;
	v->a[94352] = 26;
	v->a[94353] = actions(71);
	v->a[94354] = 1;
	v->a[94355] = sym_comment;
	v->a[94356] = actions(1127);
	v->a[94357] = 1;
	v->a[94358] = sym_word;
	v->a[94359] = actions(1131);
	small_parse_table_4718(v);
}

void	small_parse_table_4718(t_small_parse_table_array *v)
{
	v->a[94360] = 1;
	v->a[94361] = anon_sym_LPAREN;
	v->a[94362] = actions(1133);
	v->a[94363] = 1;
	v->a[94364] = anon_sym_BANG;
	v->a[94365] = actions(1139);
	v->a[94366] = 1;
	v->a[94367] = anon_sym_TILDE;
	v->a[94368] = actions(1141);
	v->a[94369] = 1;
	v->a[94370] = anon_sym_DOLLAR_LBRACK;
	v->a[94371] = actions(1145);
	v->a[94372] = 1;
	v->a[94373] = anon_sym_DOLLAR;
	v->a[94374] = actions(1147);
	v->a[94375] = 1;
	v->a[94376] = sym__special_character;
	v->a[94377] = actions(1149);
	v->a[94378] = 1;
	v->a[94379] = anon_sym_DQUOTE;
	small_parse_table_4719(v);
}

void	small_parse_table_4719(t_small_parse_table_array *v)
{
	v->a[94380] = actions(1153);
	v->a[94381] = 1;
	v->a[94382] = aux_sym_number_token1;
	v->a[94383] = actions(1155);
	v->a[94384] = 1;
	v->a[94385] = aux_sym_number_token2;
	v->a[94386] = actions(1157);
	v->a[94387] = 1;
	v->a[94388] = anon_sym_DOLLAR_LBRACE;
	v->a[94389] = actions(1159);
	v->a[94390] = 1;
	v->a[94391] = anon_sym_DOLLAR_LPAREN;
	v->a[94392] = actions(1163);
	v->a[94393] = 1;
	v->a[94394] = anon_sym_DOLLAR_BQUOTE;
	v->a[94395] = actions(1167);
	v->a[94396] = 1;
	v->a[94397] = sym_test_operator;
	v->a[94398] = actions(1169);
	v->a[94399] = 1;
	small_parse_table_4720(v);
}

/* EOF small_parse_table_943.c */
