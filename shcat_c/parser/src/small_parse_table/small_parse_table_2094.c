/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2094.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10470(t_small_parse_table_array *v)
{
	v->a[209400] = anon_sym_GT_LPAREN;
	v->a[209401] = actions(9864);
	v->a[209402] = 2;
	v->a[209403] = sym_test_operator;
	v->a[209404] = sym__special_character;
	v->a[209405] = actions(9866);
	v->a[209406] = 3;
	v->a[209407] = sym__bare_dollar;
	v->a[209408] = sym_raw_string;
	v->a[209409] = sym_ansi_c_string;
	v->a[209410] = state(4357);
	v->a[209411] = 9;
	v->a[209412] = sym_arithmetic_expansion;
	v->a[209413] = sym_brace_expression;
	v->a[209414] = sym_string;
	v->a[209415] = sym_translated_string;
	v->a[209416] = sym_number;
	v->a[209417] = sym_simple_expansion;
	v->a[209418] = sym_expansion;
	v->a[209419] = sym_command_substitution;
	small_parse_table_10471(v);
}

void	small_parse_table_10471(t_small_parse_table_array *v)
{
	v->a[209420] = sym_process_substitution;
	v->a[209421] = 18;
	v->a[209422] = actions(3);
	v->a[209423] = 1;
	v->a[209424] = sym_comment;
	v->a[209425] = actions(3793);
	v->a[209426] = 1;
	v->a[209427] = aux_sym_number_token1;
	v->a[209428] = actions(3795);
	v->a[209429] = 1;
	v->a[209430] = aux_sym_number_token2;
	v->a[209431] = actions(3799);
	v->a[209432] = 1;
	v->a[209433] = anon_sym_DOLLAR_LPAREN;
	v->a[209434] = actions(3809);
	v->a[209435] = 1;
	v->a[209436] = sym__brace_start;
	v->a[209437] = actions(9636);
	v->a[209438] = 1;
	v->a[209439] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_10472(v);
}

void	small_parse_table_10472(t_small_parse_table_array *v)
{
	v->a[209440] = actions(9640);
	v->a[209441] = 1;
	v->a[209442] = anon_sym_DQUOTE;
	v->a[209443] = actions(9644);
	v->a[209444] = 1;
	v->a[209445] = anon_sym_DOLLAR_LBRACE;
	v->a[209446] = actions(9646);
	v->a[209447] = 1;
	v->a[209448] = anon_sym_BQUOTE;
	v->a[209449] = actions(9648);
	v->a[209450] = 1;
	v->a[209451] = anon_sym_DOLLAR_BQUOTE;
	v->a[209452] = actions(9872);
	v->a[209453] = 1;
	v->a[209454] = sym_word;
	v->a[209455] = actions(9874);
	v->a[209456] = 1;
	v->a[209457] = anon_sym_DOLLAR;
	v->a[209458] = actions(9880);
	v->a[209459] = 1;
	small_parse_table_10473(v);
}

void	small_parse_table_10473(t_small_parse_table_array *v)
{
	v->a[209460] = sym__comment_word;
	v->a[209461] = actions(9634);
	v->a[209462] = 2;
	v->a[209463] = anon_sym_LPAREN_LPAREN;
	v->a[209464] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[209465] = actions(9650);
	v->a[209466] = 2;
	v->a[209467] = anon_sym_LT_LPAREN;
	v->a[209468] = anon_sym_GT_LPAREN;
	v->a[209469] = actions(9876);
	v->a[209470] = 2;
	v->a[209471] = sym_test_operator;
	v->a[209472] = sym__special_character;
	v->a[209473] = actions(9878);
	v->a[209474] = 3;
	v->a[209475] = sym__bare_dollar;
	v->a[209476] = sym_raw_string;
	v->a[209477] = sym_ansi_c_string;
	v->a[209478] = state(4337);
	v->a[209479] = 9;
	small_parse_table_10474(v);
}

void	small_parse_table_10474(t_small_parse_table_array *v)
{
	v->a[209480] = sym_arithmetic_expansion;
	v->a[209481] = sym_brace_expression;
	v->a[209482] = sym_string;
	v->a[209483] = sym_translated_string;
	v->a[209484] = sym_number;
	v->a[209485] = sym_simple_expansion;
	v->a[209486] = sym_expansion;
	v->a[209487] = sym_command_substitution;
	v->a[209488] = sym_process_substitution;
	v->a[209489] = 21;
	v->a[209490] = actions(71);
	v->a[209491] = 1;
	v->a[209492] = sym_comment;
	v->a[209493] = actions(9364);
	v->a[209494] = 1;
	v->a[209495] = anon_sym_LPAREN;
	v->a[209496] = actions(9366);
	v->a[209497] = 1;
	v->a[209498] = anon_sym_BANG;
	v->a[209499] = actions(9372);
	small_parse_table_10475(v);
}

/* EOF small_parse_table_2094.c */
