/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2041.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10205(t_small_parse_table_array *v)
{
	v->a[204100] = sym_expansion;
	v->a[204101] = sym_command_substitution;
	v->a[204102] = sym_process_substitution;
	v->a[204103] = 18;
	v->a[204104] = actions(3);
	v->a[204105] = 1;
	v->a[204106] = sym_comment;
	v->a[204107] = actions(9118);
	v->a[204108] = 1;
	v->a[204109] = anon_sym_DOLLAR_LBRACK;
	v->a[204110] = actions(9120);
	v->a[204111] = 1;
	v->a[204112] = anon_sym_DOLLAR;
	v->a[204113] = actions(9124);
	v->a[204114] = 1;
	v->a[204115] = anon_sym_DQUOTE;
	v->a[204116] = actions(9128);
	v->a[204117] = 1;
	v->a[204118] = aux_sym_number_token1;
	v->a[204119] = actions(9130);
	small_parse_table_10206(v);
}

void	small_parse_table_10206(t_small_parse_table_array *v)
{
	v->a[204120] = 1;
	v->a[204121] = aux_sym_number_token2;
	v->a[204122] = actions(9132);
	v->a[204123] = 1;
	v->a[204124] = anon_sym_DOLLAR_LBRACE;
	v->a[204125] = actions(9134);
	v->a[204126] = 1;
	v->a[204127] = anon_sym_DOLLAR_LPAREN;
	v->a[204128] = actions(9136);
	v->a[204129] = 1;
	v->a[204130] = anon_sym_BQUOTE;
	v->a[204131] = actions(9138);
	v->a[204132] = 1;
	v->a[204133] = anon_sym_DOLLAR_BQUOTE;
	v->a[204134] = actions(9144);
	v->a[204135] = 1;
	v->a[204136] = sym__brace_start;
	v->a[204137] = actions(9442);
	v->a[204138] = 1;
	v->a[204139] = sym_word;
	small_parse_table_10207(v);
}

void	small_parse_table_10207(t_small_parse_table_array *v)
{
	v->a[204140] = actions(9448);
	v->a[204141] = 1;
	v->a[204142] = sym__comment_word;
	v->a[204143] = actions(9116);
	v->a[204144] = 2;
	v->a[204145] = anon_sym_LPAREN_LPAREN;
	v->a[204146] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[204147] = actions(9140);
	v->a[204148] = 2;
	v->a[204149] = anon_sym_LT_LPAREN;
	v->a[204150] = anon_sym_GT_LPAREN;
	v->a[204151] = actions(9444);
	v->a[204152] = 2;
	v->a[204153] = sym_test_operator;
	v->a[204154] = sym__special_character;
	v->a[204155] = actions(9446);
	v->a[204156] = 3;
	v->a[204157] = sym__bare_dollar;
	v->a[204158] = sym_raw_string;
	v->a[204159] = sym_ansi_c_string;
	small_parse_table_10208(v);
}

void	small_parse_table_10208(t_small_parse_table_array *v)
{
	v->a[204160] = state(2401);
	v->a[204161] = 9;
	v->a[204162] = sym_arithmetic_expansion;
	v->a[204163] = sym_brace_expression;
	v->a[204164] = sym_string;
	v->a[204165] = sym_translated_string;
	v->a[204166] = sym_number;
	v->a[204167] = sym_simple_expansion;
	v->a[204168] = sym_expansion;
	v->a[204169] = sym_command_substitution;
	v->a[204170] = sym_process_substitution;
	v->a[204171] = 20;
	v->a[204172] = actions(71);
	v->a[204173] = 1;
	v->a[204174] = sym_comment;
	v->a[204175] = actions(5315);
	v->a[204176] = 1;
	v->a[204177] = anon_sym_DOLLAR_LBRACK;
	v->a[204178] = actions(5317);
	v->a[204179] = 1;
	small_parse_table_10209(v);
}

void	small_parse_table_10209(t_small_parse_table_array *v)
{
	v->a[204180] = anon_sym_DOLLAR;
	v->a[204181] = actions(5321);
	v->a[204182] = 1;
	v->a[204183] = anon_sym_DQUOTE;
	v->a[204184] = actions(5325);
	v->a[204185] = 1;
	v->a[204186] = aux_sym_number_token1;
	v->a[204187] = actions(5327);
	v->a[204188] = 1;
	v->a[204189] = aux_sym_number_token2;
	v->a[204190] = actions(5329);
	v->a[204191] = 1;
	v->a[204192] = anon_sym_DOLLAR_LBRACE;
	v->a[204193] = actions(5331);
	v->a[204194] = 1;
	v->a[204195] = anon_sym_DOLLAR_LPAREN;
	v->a[204196] = actions(5333);
	v->a[204197] = 1;
	v->a[204198] = anon_sym_BQUOTE;
	v->a[204199] = actions(5335);
	small_parse_table_10210(v);
}

/* EOF small_parse_table_2041.c */
