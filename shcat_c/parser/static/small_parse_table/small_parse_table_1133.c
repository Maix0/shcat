/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1133.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5665(t_small_parse_table_array *v)
{
	v->a[113300] = actions(1199);
	v->a[113301] = 2;
	v->a[113302] = sym_raw_string;
	v->a[113303] = sym_ansi_c_string;
	v->a[113304] = state(2594);
	v->a[113305] = 6;
	v->a[113306] = sym_binary_expression;
	v->a[113307] = sym_ternary_expression;
	v->a[113308] = sym_unary_expression;
	v->a[113309] = sym_postfix_expression;
	v->a[113310] = sym_parenthesized_expression;
	v->a[113311] = sym_concatenation;
	v->a[113312] = state(2503);
	v->a[113313] = 9;
	v->a[113314] = sym_arithmetic_expansion;
	v->a[113315] = sym_brace_expression;
	v->a[113316] = sym_string;
	v->a[113317] = sym_translated_string;
	v->a[113318] = sym_number;
	v->a[113319] = sym_simple_expansion;
	small_parse_table_5666(v);
}

void	small_parse_table_5666(t_small_parse_table_array *v)
{
	v->a[113320] = sym_expansion;
	v->a[113321] = sym_command_substitution;
	v->a[113322] = sym_process_substitution;
	v->a[113323] = 26;
	v->a[113324] = actions(71);
	v->a[113325] = 1;
	v->a[113326] = sym_comment;
	v->a[113327] = actions(1131);
	v->a[113328] = 1;
	v->a[113329] = anon_sym_LPAREN;
	v->a[113330] = actions(1141);
	v->a[113331] = 1;
	v->a[113332] = anon_sym_DOLLAR_LBRACK;
	v->a[113333] = actions(1145);
	v->a[113334] = 1;
	v->a[113335] = anon_sym_DOLLAR;
	v->a[113336] = actions(1149);
	v->a[113337] = 1;
	v->a[113338] = anon_sym_DQUOTE;
	v->a[113339] = actions(1153);
	small_parse_table_5667(v);
}

void	small_parse_table_5667(t_small_parse_table_array *v)
{
	v->a[113340] = 1;
	v->a[113341] = aux_sym_number_token1;
	v->a[113342] = actions(1155);
	v->a[113343] = 1;
	v->a[113344] = aux_sym_number_token2;
	v->a[113345] = actions(1157);
	v->a[113346] = 1;
	v->a[113347] = anon_sym_DOLLAR_LBRACE;
	v->a[113348] = actions(1159);
	v->a[113349] = 1;
	v->a[113350] = anon_sym_DOLLAR_LPAREN;
	v->a[113351] = actions(1163);
	v->a[113352] = 1;
	v->a[113353] = anon_sym_DOLLAR_BQUOTE;
	v->a[113354] = actions(1169);
	v->a[113355] = 1;
	v->a[113356] = sym__brace_start;
	v->a[113357] = actions(1187);
	v->a[113358] = 1;
	v->a[113359] = sym_word;
	small_parse_table_5668(v);
}

void	small_parse_table_5668(t_small_parse_table_array *v)
{
	v->a[113360] = actions(1189);
	v->a[113361] = 1;
	v->a[113362] = anon_sym_BANG;
	v->a[113363] = actions(1195);
	v->a[113364] = 1;
	v->a[113365] = anon_sym_TILDE;
	v->a[113366] = actions(1201);
	v->a[113367] = 1;
	v->a[113368] = sym_test_operator;
	v->a[113369] = actions(3060);
	v->a[113370] = 1;
	v->a[113371] = anon_sym_BQUOTE;
	v->a[113372] = actions(5779);
	v->a[113373] = 1;
	v->a[113374] = sym__special_character;
	v->a[113375] = state(2717);
	v->a[113376] = 1;
	v->a[113377] = aux_sym__literal_repeat1;
	v->a[113378] = state(3043);
	v->a[113379] = 1;
	small_parse_table_5669(v);
}

void	small_parse_table_5669(t_small_parse_table_array *v)
{
	v->a[113380] = sym__expression;
	v->a[113381] = actions(1129);
	v->a[113382] = 2;
	v->a[113383] = anon_sym_LPAREN_LPAREN;
	v->a[113384] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[113385] = actions(1165);
	v->a[113386] = 2;
	v->a[113387] = anon_sym_LT_LPAREN;
	v->a[113388] = anon_sym_GT_LPAREN;
	v->a[113389] = actions(1191);
	v->a[113390] = 2;
	v->a[113391] = anon_sym_PLUS_PLUS2;
	v->a[113392] = anon_sym_DASH_DASH2;
	v->a[113393] = actions(1193);
	v->a[113394] = 2;
	v->a[113395] = anon_sym_DASH2;
	v->a[113396] = anon_sym_PLUS2;
	v->a[113397] = actions(1199);
	v->a[113398] = 2;
	v->a[113399] = sym_raw_string;
	small_parse_table_5670(v);
}

/* EOF small_parse_table_1133.c */
