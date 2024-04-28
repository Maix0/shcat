/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_163.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_815(t_small_parse_table_array *v)
{
	v->a[16300] = anon_sym_AMP_GT_GT;
	v->a[16301] = anon_sym_LT_AMP;
	v->a[16302] = anon_sym_GT_AMP;
	v->a[16303] = anon_sym_GT_PIPE;
	v->a[16304] = anon_sym_LT_AMP_DASH;
	v->a[16305] = anon_sym_GT_AMP_DASH;
	v->a[16306] = anon_sym_LT_LT_DASH;
	v->a[16307] = aux_sym_heredoc_redirect_token1;
	v->a[16308] = anon_sym_LT_LT_LT;
	v->a[16309] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16310] = anon_sym_DOLLAR_LBRACK;
	v->a[16311] = sym__special_character;
	v->a[16312] = sym_raw_string;
	v->a[16313] = sym_ansi_c_string;
	v->a[16314] = aux_sym_number_token1;
	v->a[16315] = aux_sym_number_token2;
	v->a[16316] = anon_sym_DOLLAR_LBRACE;
	v->a[16317] = anon_sym_DOLLAR_LPAREN;
	v->a[16318] = anon_sym_BQUOTE;
	v->a[16319] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_816(v);
}

void	small_parse_table_816(t_small_parse_table_array *v)
{
	v->a[16320] = anon_sym_LT_LPAREN;
	v->a[16321] = anon_sym_GT_LPAREN;
	v->a[16322] = sym_word;
	v->a[16323] = 36;
	v->a[16324] = actions(71);
	v->a[16325] = 1;
	v->a[16326] = sym_comment;
	v->a[16327] = actions(235);
	v->a[16328] = 1;
	v->a[16329] = anon_sym_RPAREN_RPAREN;
	v->a[16330] = actions(1141);
	v->a[16331] = 1;
	v->a[16332] = anon_sym_DOLLAR_LBRACK;
	v->a[16333] = actions(1145);
	v->a[16334] = 1;
	v->a[16335] = anon_sym_DOLLAR;
	v->a[16336] = actions(1149);
	v->a[16337] = 1;
	v->a[16338] = anon_sym_DQUOTE;
	v->a[16339] = actions(1153);
	small_parse_table_817(v);
}

void	small_parse_table_817(t_small_parse_table_array *v)
{
	v->a[16340] = 1;
	v->a[16341] = aux_sym_number_token1;
	v->a[16342] = actions(1155);
	v->a[16343] = 1;
	v->a[16344] = aux_sym_number_token2;
	v->a[16345] = actions(1157);
	v->a[16346] = 1;
	v->a[16347] = anon_sym_DOLLAR_LBRACE;
	v->a[16348] = actions(1159);
	v->a[16349] = 1;
	v->a[16350] = anon_sym_DOLLAR_LPAREN;
	v->a[16351] = actions(1163);
	v->a[16352] = 1;
	v->a[16353] = anon_sym_DOLLAR_BQUOTE;
	v->a[16354] = actions(1169);
	v->a[16355] = 1;
	v->a[16356] = sym__brace_start;
	v->a[16357] = actions(1171);
	v->a[16358] = 1;
	v->a[16359] = sym_word;
	small_parse_table_818(v);
}

void	small_parse_table_818(t_small_parse_table_array *v)
{
	v->a[16360] = actions(1181);
	v->a[16361] = 1;
	v->a[16362] = sym__special_character;
	v->a[16363] = actions(1185);
	v->a[16364] = 1;
	v->a[16365] = sym_test_operator;
	v->a[16366] = actions(3050);
	v->a[16367] = 1;
	v->a[16368] = anon_sym_LPAREN;
	v->a[16369] = actions(3052);
	v->a[16370] = 1;
	v->a[16371] = anon_sym_BANG;
	v->a[16372] = actions(3058);
	v->a[16373] = 1;
	v->a[16374] = anon_sym_TILDE;
	v->a[16375] = actions(3060);
	v->a[16376] = 1;
	v->a[16377] = anon_sym_BQUOTE;
	v->a[16378] = actions(3064);
	v->a[16379] = 1;
	small_parse_table_819(v);
}

void	small_parse_table_819(t_small_parse_table_array *v)
{
	v->a[16380] = sym_variable_name;
	v->a[16381] = actions(3469);
	v->a[16382] = 1;
	v->a[16383] = aux_sym__simple_variable_name_token1;
	v->a[16384] = state(2387);
	v->a[16385] = 1;
	v->a[16386] = sym_command_substitution;
	v->a[16387] = state(2484);
	v->a[16388] = 1;
	v->a[16389] = aux_sym__literal_repeat1;
	v->a[16390] = state(2801);
	v->a[16391] = 1;
	v->a[16392] = sym__arithmetic_binary_expression;
	v->a[16393] = state(2803);
	v->a[16394] = 1;
	v->a[16395] = sym__arithmetic_ternary_expression;
	v->a[16396] = state(2809);
	v->a[16397] = 1;
	v->a[16398] = sym__arithmetic_unary_expression;
	v->a[16399] = state(2825);
	small_parse_table_820(v);
}

/* EOF small_parse_table_163.c */
