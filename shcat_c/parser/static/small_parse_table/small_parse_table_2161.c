/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2161.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10805(t_small_parse_table_array *v)
{
	v->a[216100] = sym_comment;
	v->a[216101] = actions(9118);
	v->a[216102] = 1;
	v->a[216103] = anon_sym_DOLLAR_LBRACK;
	v->a[216104] = actions(9124);
	v->a[216105] = 1;
	v->a[216106] = anon_sym_DQUOTE;
	v->a[216107] = actions(9128);
	v->a[216108] = 1;
	v->a[216109] = aux_sym_number_token1;
	v->a[216110] = actions(9130);
	v->a[216111] = 1;
	v->a[216112] = aux_sym_number_token2;
	v->a[216113] = actions(9132);
	v->a[216114] = 1;
	v->a[216115] = anon_sym_DOLLAR_LBRACE;
	v->a[216116] = actions(9134);
	v->a[216117] = 1;
	v->a[216118] = anon_sym_DOLLAR_LPAREN;
	v->a[216119] = actions(9136);
	small_parse_table_10806(v);
}

void	small_parse_table_10806(t_small_parse_table_array *v)
{
	v->a[216120] = 1;
	v->a[216121] = anon_sym_BQUOTE;
	v->a[216122] = actions(9138);
	v->a[216123] = 1;
	v->a[216124] = anon_sym_DOLLAR_BQUOTE;
	v->a[216125] = actions(9144);
	v->a[216126] = 1;
	v->a[216127] = sym__brace_start;
	v->a[216128] = actions(9442);
	v->a[216129] = 1;
	v->a[216130] = sym_word;
	v->a[216131] = actions(9448);
	v->a[216132] = 1;
	v->a[216133] = sym__comment_word;
	v->a[216134] = actions(10320);
	v->a[216135] = 1;
	v->a[216136] = anon_sym_DOLLAR;
	v->a[216137] = actions(9116);
	v->a[216138] = 2;
	v->a[216139] = anon_sym_LPAREN_LPAREN;
	small_parse_table_10807(v);
}

void	small_parse_table_10807(t_small_parse_table_array *v)
{
	v->a[216140] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[216141] = actions(9140);
	v->a[216142] = 2;
	v->a[216143] = anon_sym_LT_LPAREN;
	v->a[216144] = anon_sym_GT_LPAREN;
	v->a[216145] = actions(9444);
	v->a[216146] = 2;
	v->a[216147] = sym_test_operator;
	v->a[216148] = sym__special_character;
	v->a[216149] = actions(9446);
	v->a[216150] = 3;
	v->a[216151] = sym__bare_dollar;
	v->a[216152] = sym_raw_string;
	v->a[216153] = sym_ansi_c_string;
	v->a[216154] = state(2401);
	v->a[216155] = 9;
	v->a[216156] = sym_arithmetic_expansion;
	v->a[216157] = sym_brace_expression;
	v->a[216158] = sym_string;
	v->a[216159] = sym_translated_string;
	small_parse_table_10808(v);
}

void	small_parse_table_10808(t_small_parse_table_array *v)
{
	v->a[216160] = sym_number;
	v->a[216161] = sym_simple_expansion;
	v->a[216162] = sym_expansion;
	v->a[216163] = sym_command_substitution;
	v->a[216164] = sym_process_substitution;
	v->a[216165] = 21;
	v->a[216166] = actions(71);
	v->a[216167] = 1;
	v->a[216168] = sym_comment;
	v->a[216169] = actions(3064);
	v->a[216170] = 1;
	v->a[216171] = sym_variable_name;
	v->a[216172] = actions(9278);
	v->a[216173] = 1;
	v->a[216174] = anon_sym_LPAREN;
	v->a[216175] = actions(9280);
	v->a[216176] = 1;
	v->a[216177] = anon_sym_BANG;
	v->a[216178] = actions(9286);
	v->a[216179] = 1;
	small_parse_table_10809(v);
}

void	small_parse_table_10809(t_small_parse_table_array *v)
{
	v->a[216180] = anon_sym_TILDE;
	v->a[216181] = actions(9288);
	v->a[216182] = 1;
	v->a[216183] = anon_sym_DOLLAR;
	v->a[216184] = actions(9290);
	v->a[216185] = 1;
	v->a[216186] = anon_sym_DQUOTE;
	v->a[216187] = actions(9292);
	v->a[216188] = 1;
	v->a[216189] = aux_sym_number_token1;
	v->a[216190] = actions(9294);
	v->a[216191] = 1;
	v->a[216192] = aux_sym_number_token2;
	v->a[216193] = actions(9296);
	v->a[216194] = 1;
	v->a[216195] = anon_sym_DOLLAR_LBRACE;
	v->a[216196] = actions(9298);
	v->a[216197] = 1;
	v->a[216198] = anon_sym_DOLLAR_LPAREN;
	v->a[216199] = actions(9300);
	small_parse_table_10810(v);
}

/* EOF small_parse_table_2161.c */
