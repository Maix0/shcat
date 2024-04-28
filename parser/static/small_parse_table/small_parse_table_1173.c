/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1173.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5865(t_small_parse_table_array *v)
{
	v->a[117300] = sym_process_substitution;
	v->a[117301] = 26;
	v->a[117302] = actions(71);
	v->a[117303] = 1;
	v->a[117304] = sym_comment;
	v->a[117305] = actions(1131);
	v->a[117306] = 1;
	v->a[117307] = anon_sym_LPAREN;
	v->a[117308] = actions(1141);
	v->a[117309] = 1;
	v->a[117310] = anon_sym_DOLLAR_LBRACK;
	v->a[117311] = actions(1145);
	v->a[117312] = 1;
	v->a[117313] = anon_sym_DOLLAR;
	v->a[117314] = actions(1149);
	v->a[117315] = 1;
	v->a[117316] = anon_sym_DQUOTE;
	v->a[117317] = actions(1153);
	v->a[117318] = 1;
	v->a[117319] = aux_sym_number_token1;
	small_parse_table_5866(v);
}

void	small_parse_table_5866(t_small_parse_table_array *v)
{
	v->a[117320] = actions(1155);
	v->a[117321] = 1;
	v->a[117322] = aux_sym_number_token2;
	v->a[117323] = actions(1157);
	v->a[117324] = 1;
	v->a[117325] = anon_sym_DOLLAR_LBRACE;
	v->a[117326] = actions(1159);
	v->a[117327] = 1;
	v->a[117328] = anon_sym_DOLLAR_LPAREN;
	v->a[117329] = actions(1163);
	v->a[117330] = 1;
	v->a[117331] = anon_sym_DOLLAR_BQUOTE;
	v->a[117332] = actions(1169);
	v->a[117333] = 1;
	v->a[117334] = sym__brace_start;
	v->a[117335] = actions(1187);
	v->a[117336] = 1;
	v->a[117337] = sym_word;
	v->a[117338] = actions(1189);
	v->a[117339] = 1;
	small_parse_table_5867(v);
}

void	small_parse_table_5867(t_small_parse_table_array *v)
{
	v->a[117340] = anon_sym_BANG;
	v->a[117341] = actions(1195);
	v->a[117342] = 1;
	v->a[117343] = anon_sym_TILDE;
	v->a[117344] = actions(1201);
	v->a[117345] = 1;
	v->a[117346] = sym_test_operator;
	v->a[117347] = actions(3060);
	v->a[117348] = 1;
	v->a[117349] = anon_sym_BQUOTE;
	v->a[117350] = actions(5779);
	v->a[117351] = 1;
	v->a[117352] = sym__special_character;
	v->a[117353] = state(2717);
	v->a[117354] = 1;
	v->a[117355] = aux_sym__literal_repeat1;
	v->a[117356] = state(3034);
	v->a[117357] = 1;
	v->a[117358] = sym__expression;
	v->a[117359] = actions(1129);
	small_parse_table_5868(v);
}

void	small_parse_table_5868(t_small_parse_table_array *v)
{
	v->a[117360] = 2;
	v->a[117361] = anon_sym_LPAREN_LPAREN;
	v->a[117362] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[117363] = actions(1165);
	v->a[117364] = 2;
	v->a[117365] = anon_sym_LT_LPAREN;
	v->a[117366] = anon_sym_GT_LPAREN;
	v->a[117367] = actions(1191);
	v->a[117368] = 2;
	v->a[117369] = anon_sym_PLUS_PLUS2;
	v->a[117370] = anon_sym_DASH_DASH2;
	v->a[117371] = actions(1193);
	v->a[117372] = 2;
	v->a[117373] = anon_sym_DASH2;
	v->a[117374] = anon_sym_PLUS2;
	v->a[117375] = actions(1199);
	v->a[117376] = 2;
	v->a[117377] = sym_raw_string;
	v->a[117378] = sym_ansi_c_string;
	v->a[117379] = state(2594);
	small_parse_table_5869(v);
}

void	small_parse_table_5869(t_small_parse_table_array *v)
{
	v->a[117380] = 6;
	v->a[117381] = sym_binary_expression;
	v->a[117382] = sym_ternary_expression;
	v->a[117383] = sym_unary_expression;
	v->a[117384] = sym_postfix_expression;
	v->a[117385] = sym_parenthesized_expression;
	v->a[117386] = sym_concatenation;
	v->a[117387] = state(2503);
	v->a[117388] = 9;
	v->a[117389] = sym_arithmetic_expansion;
	v->a[117390] = sym_brace_expression;
	v->a[117391] = sym_string;
	v->a[117392] = sym_translated_string;
	v->a[117393] = sym_number;
	v->a[117394] = sym_simple_expansion;
	v->a[117395] = sym_expansion;
	v->a[117396] = sym_command_substitution;
	v->a[117397] = sym_process_substitution;
	v->a[117398] = 27;
	v->a[117399] = actions(71);
	small_parse_table_5870(v);
}

/* EOF small_parse_table_1173.c */
