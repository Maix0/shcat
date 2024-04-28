/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1063.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5315(t_small_parse_table_array *v)
{
	v->a[106300] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[106301] = anon_sym_DOLLAR_LBRACK;
	v->a[106302] = anon_sym_DOLLAR;
	v->a[106303] = sym__special_character;
	v->a[106304] = anon_sym_DQUOTE;
	v->a[106305] = sym_raw_string;
	v->a[106306] = sym_ansi_c_string;
	v->a[106307] = aux_sym_number_token1;
	v->a[106308] = aux_sym_number_token2;
	v->a[106309] = anon_sym_DOLLAR_LBRACE;
	v->a[106310] = anon_sym_DOLLAR_LPAREN;
	v->a[106311] = anon_sym_BQUOTE;
	v->a[106312] = anon_sym_DOLLAR_BQUOTE;
	v->a[106313] = anon_sym_LT_LPAREN;
	v->a[106314] = anon_sym_GT_LPAREN;
	v->a[106315] = sym_word;
	v->a[106316] = 26;
	v->a[106317] = actions(71);
	v->a[106318] = 1;
	v->a[106319] = sym_comment;
	small_parse_table_5316(v);
}

void	small_parse_table_5316(t_small_parse_table_array *v)
{
	v->a[106320] = actions(107);
	v->a[106321] = 1;
	v->a[106322] = anon_sym_TILDE;
	v->a[106323] = actions(237);
	v->a[106324] = 1;
	v->a[106325] = sym_word;
	v->a[106326] = actions(248);
	v->a[106327] = 1;
	v->a[106328] = anon_sym_LPAREN;
	v->a[106329] = actions(250);
	v->a[106330] = 1;
	v->a[106331] = anon_sym_BANG;
	v->a[106332] = actions(258);
	v->a[106333] = 1;
	v->a[106334] = anon_sym_DOLLAR;
	v->a[106335] = actions(264);
	v->a[106336] = 1;
	v->a[106337] = aux_sym_number_token1;
	v->a[106338] = actions(266);
	v->a[106339] = 1;
	small_parse_table_5317(v);
}

void	small_parse_table_5317(t_small_parse_table_array *v)
{
	v->a[106340] = aux_sym_number_token2;
	v->a[106341] = actions(270);
	v->a[106342] = 1;
	v->a[106343] = anon_sym_DOLLAR_LPAREN;
	v->a[106344] = actions(282);
	v->a[106345] = 1;
	v->a[106346] = sym_test_operator;
	v->a[106347] = actions(284);
	v->a[106348] = 1;
	v->a[106349] = sym__brace_start;
	v->a[106350] = actions(1075);
	v->a[106351] = 1;
	v->a[106352] = anon_sym_DOLLAR_LBRACK;
	v->a[106353] = actions(1079);
	v->a[106354] = 1;
	v->a[106355] = sym__special_character;
	v->a[106356] = actions(1081);
	v->a[106357] = 1;
	v->a[106358] = anon_sym_DQUOTE;
	v->a[106359] = actions(1085);
	small_parse_table_5318(v);
}

void	small_parse_table_5318(t_small_parse_table_array *v)
{
	v->a[106360] = 1;
	v->a[106361] = anon_sym_DOLLAR_LBRACE;
	v->a[106362] = actions(1087);
	v->a[106363] = 1;
	v->a[106364] = anon_sym_DOLLAR_BQUOTE;
	v->a[106365] = actions(3598);
	v->a[106366] = 1;
	v->a[106367] = anon_sym_BQUOTE;
	v->a[106368] = state(2690);
	v->a[106369] = 1;
	v->a[106370] = aux_sym__literal_repeat1;
	v->a[106371] = state(3107);
	v->a[106372] = 1;
	v->a[106373] = sym__expression;
	v->a[106374] = actions(103);
	v->a[106375] = 2;
	v->a[106376] = anon_sym_PLUS_PLUS2;
	v->a[106377] = anon_sym_DASH_DASH2;
	v->a[106378] = actions(105);
	v->a[106379] = 2;
	small_parse_table_5319(v);
}

void	small_parse_table_5319(t_small_parse_table_array *v)
{
	v->a[106380] = anon_sym_DASH2;
	v->a[106381] = anon_sym_PLUS2;
	v->a[106382] = actions(1073);
	v->a[106383] = 2;
	v->a[106384] = anon_sym_LPAREN_LPAREN;
	v->a[106385] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[106386] = actions(1083);
	v->a[106387] = 2;
	v->a[106388] = sym_raw_string;
	v->a[106389] = sym_ansi_c_string;
	v->a[106390] = actions(1089);
	v->a[106391] = 2;
	v->a[106392] = anon_sym_LT_LPAREN;
	v->a[106393] = anon_sym_GT_LPAREN;
	v->a[106394] = state(3053);
	v->a[106395] = 6;
	v->a[106396] = sym_binary_expression;
	v->a[106397] = sym_ternary_expression;
	v->a[106398] = sym_unary_expression;
	v->a[106399] = sym_postfix_expression;
	small_parse_table_5320(v);
}

/* EOF small_parse_table_1063.c */
