/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2081.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10405(t_small_parse_table_array *v)
{
	v->a[208100] = actions(8930);
	v->a[208101] = 1;
	v->a[208102] = anon_sym_DQUOTE;
	v->a[208103] = actions(8934);
	v->a[208104] = 1;
	v->a[208105] = anon_sym_DOLLAR_LBRACE;
	v->a[208106] = actions(8936);
	v->a[208107] = 1;
	v->a[208108] = anon_sym_BQUOTE;
	v->a[208109] = actions(8938);
	v->a[208110] = 1;
	v->a[208111] = anon_sym_DOLLAR_BQUOTE;
	v->a[208112] = actions(9696);
	v->a[208113] = 1;
	v->a[208114] = sym_word;
	v->a[208115] = actions(9704);
	v->a[208116] = 1;
	v->a[208117] = sym__comment_word;
	v->a[208118] = actions(9738);
	v->a[208119] = 1;
	small_parse_table_10406(v);
}

void	small_parse_table_10406(t_small_parse_table_array *v)
{
	v->a[208120] = anon_sym_DOLLAR;
	v->a[208121] = actions(8924);
	v->a[208122] = 2;
	v->a[208123] = anon_sym_LPAREN_LPAREN;
	v->a[208124] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[208125] = actions(8940);
	v->a[208126] = 2;
	v->a[208127] = anon_sym_LT_LPAREN;
	v->a[208128] = anon_sym_GT_LPAREN;
	v->a[208129] = actions(9700);
	v->a[208130] = 2;
	v->a[208131] = sym_test_operator;
	v->a[208132] = sym__special_character;
	v->a[208133] = actions(9702);
	v->a[208134] = 3;
	v->a[208135] = sym__bare_dollar;
	v->a[208136] = sym_raw_string;
	v->a[208137] = sym_ansi_c_string;
	v->a[208138] = state(1851);
	v->a[208139] = 9;
	small_parse_table_10407(v);
}

void	small_parse_table_10407(t_small_parse_table_array *v)
{
	v->a[208140] = sym_arithmetic_expansion;
	v->a[208141] = sym_brace_expression;
	v->a[208142] = sym_string;
	v->a[208143] = sym_translated_string;
	v->a[208144] = sym_number;
	v->a[208145] = sym_simple_expansion;
	v->a[208146] = sym_expansion;
	v->a[208147] = sym_command_substitution;
	v->a[208148] = sym_process_substitution;
	v->a[208149] = 18;
	v->a[208150] = actions(3);
	v->a[208151] = 1;
	v->a[208152] = sym_comment;
	v->a[208153] = actions(3882);
	v->a[208154] = 1;
	v->a[208155] = anon_sym_DOLLAR;
	v->a[208156] = actions(3886);
	v->a[208157] = 1;
	v->a[208158] = aux_sym_number_token1;
	v->a[208159] = actions(3888);
	small_parse_table_10408(v);
}

void	small_parse_table_10408(t_small_parse_table_array *v)
{
	v->a[208160] = 1;
	v->a[208161] = aux_sym_number_token2;
	v->a[208162] = actions(3892);
	v->a[208163] = 1;
	v->a[208164] = anon_sym_DOLLAR_LPAREN;
	v->a[208165] = actions(3902);
	v->a[208166] = 1;
	v->a[208167] = sym__brace_start;
	v->a[208168] = actions(8992);
	v->a[208169] = 1;
	v->a[208170] = anon_sym_DOLLAR_LBRACK;
	v->a[208171] = actions(8996);
	v->a[208172] = 1;
	v->a[208173] = anon_sym_DQUOTE;
	v->a[208174] = actions(9000);
	v->a[208175] = 1;
	v->a[208176] = anon_sym_DOLLAR_LBRACE;
	v->a[208177] = actions(9002);
	v->a[208178] = 1;
	v->a[208179] = anon_sym_BQUOTE;
	small_parse_table_10409(v);
}

void	small_parse_table_10409(t_small_parse_table_array *v)
{
	v->a[208180] = actions(9004);
	v->a[208181] = 1;
	v->a[208182] = anon_sym_DOLLAR_BQUOTE;
	v->a[208183] = actions(9740);
	v->a[208184] = 1;
	v->a[208185] = sym_word;
	v->a[208186] = actions(9746);
	v->a[208187] = 1;
	v->a[208188] = sym__comment_word;
	v->a[208189] = actions(8990);
	v->a[208190] = 2;
	v->a[208191] = anon_sym_LPAREN_LPAREN;
	v->a[208192] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[208193] = actions(9006);
	v->a[208194] = 2;
	v->a[208195] = anon_sym_LT_LPAREN;
	v->a[208196] = anon_sym_GT_LPAREN;
	v->a[208197] = actions(9742);
	v->a[208198] = 2;
	v->a[208199] = sym_test_operator;
	small_parse_table_10410(v);
}

/* EOF small_parse_table_2081.c */
