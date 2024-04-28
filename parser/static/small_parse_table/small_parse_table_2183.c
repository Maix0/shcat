/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2183.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10915(t_small_parse_table_array *v)
{
	v->a[218300] = 3;
	v->a[218301] = sym__bare_dollar;
	v->a[218302] = sym_raw_string;
	v->a[218303] = sym_ansi_c_string;
	v->a[218304] = state(1733);
	v->a[218305] = 9;
	v->a[218306] = sym_arithmetic_expansion;
	v->a[218307] = sym_brace_expression;
	v->a[218308] = sym_string;
	v->a[218309] = sym_translated_string;
	v->a[218310] = sym_number;
	v->a[218311] = sym_simple_expansion;
	v->a[218312] = sym_expansion;
	v->a[218313] = sym_command_substitution;
	v->a[218314] = sym_process_substitution;
	v->a[218315] = 21;
	v->a[218316] = actions(71);
	v->a[218317] = 1;
	v->a[218318] = sym_comment;
	v->a[218319] = actions(3064);
	small_parse_table_10916(v);
}

void	small_parse_table_10916(t_small_parse_table_array *v)
{
	v->a[218320] = 1;
	v->a[218321] = sym_variable_name;
	v->a[218322] = actions(9278);
	v->a[218323] = 1;
	v->a[218324] = anon_sym_LPAREN;
	v->a[218325] = actions(9280);
	v->a[218326] = 1;
	v->a[218327] = anon_sym_BANG;
	v->a[218328] = actions(9286);
	v->a[218329] = 1;
	v->a[218330] = anon_sym_TILDE;
	v->a[218331] = actions(9288);
	v->a[218332] = 1;
	v->a[218333] = anon_sym_DOLLAR;
	v->a[218334] = actions(9290);
	v->a[218335] = 1;
	v->a[218336] = anon_sym_DQUOTE;
	v->a[218337] = actions(9292);
	v->a[218338] = 1;
	v->a[218339] = aux_sym_number_token1;
	small_parse_table_10917(v);
}

void	small_parse_table_10917(t_small_parse_table_array *v)
{
	v->a[218340] = actions(9294);
	v->a[218341] = 1;
	v->a[218342] = aux_sym_number_token2;
	v->a[218343] = actions(9296);
	v->a[218344] = 1;
	v->a[218345] = anon_sym_DOLLAR_LBRACE;
	v->a[218346] = actions(9298);
	v->a[218347] = 1;
	v->a[218348] = anon_sym_DOLLAR_LPAREN;
	v->a[218349] = actions(9300);
	v->a[218350] = 1;
	v->a[218351] = anon_sym_BQUOTE;
	v->a[218352] = actions(9302);
	v->a[218353] = 1;
	v->a[218354] = anon_sym_DOLLAR_BQUOTE;
	v->a[218355] = actions(10402);
	v->a[218356] = 1;
	v->a[218357] = aux_sym__simple_variable_name_token1;
	v->a[218358] = state(2801);
	v->a[218359] = 1;
	small_parse_table_10918(v);
}

void	small_parse_table_10918(t_small_parse_table_array *v)
{
	v->a[218360] = sym__arithmetic_binary_expression;
	v->a[218361] = state(2803);
	v->a[218362] = 1;
	v->a[218363] = sym__arithmetic_ternary_expression;
	v->a[218364] = state(2809);
	v->a[218365] = 1;
	v->a[218366] = sym__arithmetic_unary_expression;
	v->a[218367] = state(2825);
	v->a[218368] = 1;
	v->a[218369] = sym__arithmetic_postfix_expression;
	v->a[218370] = actions(9282);
	v->a[218371] = 2;
	v->a[218372] = anon_sym_PLUS_PLUS2;
	v->a[218373] = anon_sym_DASH_DASH2;
	v->a[218374] = actions(9284);
	v->a[218375] = 2;
	v->a[218376] = anon_sym_DASH2;
	v->a[218377] = anon_sym_PLUS2;
	v->a[218378] = state(2844);
	v->a[218379] = 9;
	small_parse_table_10919(v);
}

void	small_parse_table_10919(t_small_parse_table_array *v)
{
	v->a[218380] = sym_subscript;
	v->a[218381] = sym__arithmetic_expression;
	v->a[218382] = sym__arithmetic_literal;
	v->a[218383] = sym__arithmetic_parenthesized_expression;
	v->a[218384] = sym_string;
	v->a[218385] = sym_number;
	v->a[218386] = sym_simple_expansion;
	v->a[218387] = sym_expansion;
	v->a[218388] = sym_command_substitution;
	v->a[218389] = 21;
	v->a[218390] = actions(71);
	v->a[218391] = 1;
	v->a[218392] = sym_comment;
	v->a[218393] = actions(9364);
	v->a[218394] = 1;
	v->a[218395] = anon_sym_LPAREN;
	v->a[218396] = actions(9366);
	v->a[218397] = 1;
	v->a[218398] = anon_sym_BANG;
	v->a[218399] = actions(9372);
	small_parse_table_10920(v);
}

/* EOF small_parse_table_2183.c */
