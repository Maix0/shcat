/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2301.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11505(t_small_parse_table_array *v)
{
	v->a[230100] = state(3398);
	v->a[230101] = 1;
	v->a[230102] = sym__arithmetic_unary_expression;
	v->a[230103] = state(3400);
	v->a[230104] = 1;
	v->a[230105] = sym__arithmetic_postfix_expression;
	v->a[230106] = actions(9368);
	v->a[230107] = 2;
	v->a[230108] = anon_sym_PLUS_PLUS2;
	v->a[230109] = anon_sym_DASH_DASH2;
	v->a[230110] = actions(9370);
	v->a[230111] = 2;
	v->a[230112] = anon_sym_DASH2;
	v->a[230113] = anon_sym_PLUS2;
	v->a[230114] = state(3449);
	v->a[230115] = 9;
	v->a[230116] = sym_subscript;
	v->a[230117] = sym__arithmetic_expression;
	v->a[230118] = sym__arithmetic_literal;
	v->a[230119] = sym__arithmetic_parenthesized_expression;
	small_parse_table_11506(v);
}

void	small_parse_table_11506(t_small_parse_table_array *v)
{
	v->a[230120] = sym_string;
	v->a[230121] = sym_number;
	v->a[230122] = sym_simple_expansion;
	v->a[230123] = sym_expansion;
	v->a[230124] = sym_command_substitution;
	v->a[230125] = 18;
	v->a[230126] = actions(3);
	v->a[230127] = 1;
	v->a[230128] = sym_comment;
	v->a[230129] = actions(8474);
	v->a[230130] = 1;
	v->a[230131] = anon_sym_DOLLAR_LBRACK;
	v->a[230132] = actions(8480);
	v->a[230133] = 1;
	v->a[230134] = anon_sym_DQUOTE;
	v->a[230135] = actions(8484);
	v->a[230136] = 1;
	v->a[230137] = aux_sym_number_token1;
	v->a[230138] = actions(8486);
	v->a[230139] = 1;
	small_parse_table_11507(v);
}

void	small_parse_table_11507(t_small_parse_table_array *v)
{
	v->a[230140] = aux_sym_number_token2;
	v->a[230141] = actions(8488);
	v->a[230142] = 1;
	v->a[230143] = anon_sym_DOLLAR_LBRACE;
	v->a[230144] = actions(8490);
	v->a[230145] = 1;
	v->a[230146] = anon_sym_DOLLAR_LPAREN;
	v->a[230147] = actions(8492);
	v->a[230148] = 1;
	v->a[230149] = anon_sym_BQUOTE;
	v->a[230150] = actions(8494);
	v->a[230151] = 1;
	v->a[230152] = anon_sym_DOLLAR_BQUOTE;
	v->a[230153] = actions(8504);
	v->a[230154] = 1;
	v->a[230155] = sym__brace_start;
	v->a[230156] = actions(10720);
	v->a[230157] = 1;
	v->a[230158] = sym_word;
	v->a[230159] = actions(10728);
	small_parse_table_11508(v);
}

void	small_parse_table_11508(t_small_parse_table_array *v)
{
	v->a[230160] = 1;
	v->a[230161] = sym__comment_word;
	v->a[230162] = actions(10894);
	v->a[230163] = 1;
	v->a[230164] = anon_sym_DOLLAR;
	v->a[230165] = actions(8470);
	v->a[230166] = 2;
	v->a[230167] = anon_sym_LPAREN_LPAREN;
	v->a[230168] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[230169] = actions(8496);
	v->a[230170] = 2;
	v->a[230171] = anon_sym_LT_LPAREN;
	v->a[230172] = anon_sym_GT_LPAREN;
	v->a[230173] = actions(10724);
	v->a[230174] = 2;
	v->a[230175] = sym_test_operator;
	v->a[230176] = sym__special_character;
	v->a[230177] = actions(10726);
	v->a[230178] = 3;
	v->a[230179] = sym__bare_dollar;
	small_parse_table_11509(v);
}

void	small_parse_table_11509(t_small_parse_table_array *v)
{
	v->a[230180] = sym_raw_string;
	v->a[230181] = sym_ansi_c_string;
	v->a[230182] = state(1625);
	v->a[230183] = 9;
	v->a[230184] = sym_arithmetic_expansion;
	v->a[230185] = sym_brace_expression;
	v->a[230186] = sym_string;
	v->a[230187] = sym_translated_string;
	v->a[230188] = sym_number;
	v->a[230189] = sym_simple_expansion;
	v->a[230190] = sym_expansion;
	v->a[230191] = sym_command_substitution;
	v->a[230192] = sym_process_substitution;
	v->a[230193] = 18;
	v->a[230194] = actions(3);
	v->a[230195] = 1;
	v->a[230196] = sym_comment;
	v->a[230197] = actions(9754);
	v->a[230198] = 1;
	v->a[230199] = sym_word;
	small_parse_table_11510(v);
}

/* EOF small_parse_table_2301.c */
