/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2374.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11870(t_small_parse_table_array *v)
{
	v->a[237400] = actions(3799);
	v->a[237401] = 1;
	v->a[237402] = anon_sym_DOLLAR_LPAREN;
	v->a[237403] = actions(3809);
	v->a[237404] = 1;
	v->a[237405] = sym__brace_start;
	v->a[237406] = actions(9636);
	v->a[237407] = 1;
	v->a[237408] = anon_sym_DOLLAR_LBRACK;
	v->a[237409] = actions(9640);
	v->a[237410] = 1;
	v->a[237411] = anon_sym_DQUOTE;
	v->a[237412] = actions(9644);
	v->a[237413] = 1;
	v->a[237414] = anon_sym_DOLLAR_LBRACE;
	v->a[237415] = actions(9646);
	v->a[237416] = 1;
	v->a[237417] = anon_sym_BQUOTE;
	v->a[237418] = actions(9648);
	v->a[237419] = 1;
	small_parse_table_11871(v);
}

void	small_parse_table_11871(t_small_parse_table_array *v)
{
	v->a[237420] = anon_sym_DOLLAR_BQUOTE;
	v->a[237421] = actions(11176);
	v->a[237422] = 1;
	v->a[237423] = sym_word;
	v->a[237424] = actions(11178);
	v->a[237425] = 1;
	v->a[237426] = sym__special_character;
	v->a[237427] = actions(11182);
	v->a[237428] = 1;
	v->a[237429] = sym_test_operator;
	v->a[237430] = state(4294);
	v->a[237431] = 1;
	v->a[237432] = aux_sym__literal_repeat1;
	v->a[237433] = state(4861);
	v->a[237434] = 1;
	v->a[237435] = sym_concatenation;
	v->a[237436] = actions(9634);
	v->a[237437] = 2;
	v->a[237438] = anon_sym_LPAREN_LPAREN;
	v->a[237439] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_11872(v);
}

void	small_parse_table_11872(t_small_parse_table_array *v)
{
	v->a[237440] = actions(9650);
	v->a[237441] = 2;
	v->a[237442] = anon_sym_LT_LPAREN;
	v->a[237443] = anon_sym_GT_LPAREN;
	v->a[237444] = actions(11180);
	v->a[237445] = 2;
	v->a[237446] = sym_raw_string;
	v->a[237447] = sym_ansi_c_string;
	v->a[237448] = state(5130);
	v->a[237449] = 9;
	v->a[237450] = sym_arithmetic_expansion;
	v->a[237451] = sym_brace_expression;
	v->a[237452] = sym_string;
	v->a[237453] = sym_translated_string;
	v->a[237454] = sym_number;
	v->a[237455] = sym_simple_expansion;
	v->a[237456] = sym_expansion;
	v->a[237457] = sym_command_substitution;
	v->a[237458] = sym_process_substitution;
	v->a[237459] = 20;
	small_parse_table_11873(v);
}

void	small_parse_table_11873(t_small_parse_table_array *v)
{
	v->a[237460] = actions(71);
	v->a[237461] = 1;
	v->a[237462] = sym_comment;
	v->a[237463] = actions(3787);
	v->a[237464] = 1;
	v->a[237465] = anon_sym_DOLLAR;
	v->a[237466] = actions(3793);
	v->a[237467] = 1;
	v->a[237468] = aux_sym_number_token1;
	v->a[237469] = actions(3795);
	v->a[237470] = 1;
	v->a[237471] = aux_sym_number_token2;
	v->a[237472] = actions(3799);
	v->a[237473] = 1;
	v->a[237474] = anon_sym_DOLLAR_LPAREN;
	v->a[237475] = actions(3809);
	v->a[237476] = 1;
	v->a[237477] = sym__brace_start;
	v->a[237478] = actions(9636);
	v->a[237479] = 1;
	small_parse_table_11874(v);
}

void	small_parse_table_11874(t_small_parse_table_array *v)
{
	v->a[237480] = anon_sym_DOLLAR_LBRACK;
	v->a[237481] = actions(9640);
	v->a[237482] = 1;
	v->a[237483] = anon_sym_DQUOTE;
	v->a[237484] = actions(9644);
	v->a[237485] = 1;
	v->a[237486] = anon_sym_DOLLAR_LBRACE;
	v->a[237487] = actions(9646);
	v->a[237488] = 1;
	v->a[237489] = anon_sym_BQUOTE;
	v->a[237490] = actions(9648);
	v->a[237491] = 1;
	v->a[237492] = anon_sym_DOLLAR_BQUOTE;
	v->a[237493] = actions(11178);
	v->a[237494] = 1;
	v->a[237495] = sym__special_character;
	v->a[237496] = actions(11184);
	v->a[237497] = 1;
	v->a[237498] = sym_word;
	v->a[237499] = actions(11188);
	small_parse_table_11875(v);
}

/* EOF small_parse_table_2374.c */
