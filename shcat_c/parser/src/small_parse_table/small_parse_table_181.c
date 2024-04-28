/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_181.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_905(t_small_parse_table_array *v)
{
	v->a[18100] = 21;
	v->a[18101] = actions(3);
	v->a[18102] = 1;
	v->a[18103] = sym_comment;
	v->a[18104] = actions(3115);
	v->a[18105] = 1;
	v->a[18106] = anon_sym_DQUOTE;
	v->a[18107] = actions(3395);
	v->a[18108] = 1;
	v->a[18109] = anon_sym_DOLLAR_LBRACK;
	v->a[18110] = actions(3397);
	v->a[18111] = 1;
	v->a[18112] = anon_sym_DOLLAR;
	v->a[18113] = actions(3401);
	v->a[18114] = 1;
	v->a[18115] = aux_sym_number_token1;
	v->a[18116] = actions(3403);
	v->a[18117] = 1;
	v->a[18118] = aux_sym_number_token2;
	v->a[18119] = actions(3405);
	small_parse_table_906(v);
}

void	small_parse_table_906(t_small_parse_table_array *v)
{
	v->a[18120] = 1;
	v->a[18121] = anon_sym_DOLLAR_LBRACE;
	v->a[18122] = actions(3407);
	v->a[18123] = 1;
	v->a[18124] = anon_sym_DOLLAR_LPAREN;
	v->a[18125] = actions(3409);
	v->a[18126] = 1;
	v->a[18127] = anon_sym_BQUOTE;
	v->a[18128] = actions(3411);
	v->a[18129] = 1;
	v->a[18130] = anon_sym_DOLLAR_BQUOTE;
	v->a[18131] = actions(3417);
	v->a[18132] = 1;
	v->a[18133] = sym__brace_start;
	v->a[18134] = actions(3665);
	v->a[18135] = 1;
	v->a[18136] = sym__special_character;
	v->a[18137] = actions(3667);
	v->a[18138] = 1;
	v->a[18139] = sym_test_operator;
	small_parse_table_907(v);
}

void	small_parse_table_907(t_small_parse_table_array *v)
{
	v->a[18140] = state(2161);
	v->a[18141] = 1;
	v->a[18142] = aux_sym__literal_repeat1;
	v->a[18143] = actions(2074);
	v->a[18144] = 2;
	v->a[18145] = sym_file_descriptor;
	v->a[18146] = aux_sym_heredoc_redirect_token1;
	v->a[18147] = actions(3393);
	v->a[18148] = 2;
	v->a[18149] = anon_sym_LPAREN_LPAREN;
	v->a[18150] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18151] = actions(3413);
	v->a[18152] = 2;
	v->a[18153] = anon_sym_LT_LPAREN;
	v->a[18154] = anon_sym_GT_LPAREN;
	v->a[18155] = state(715);
	v->a[18156] = 2;
	v->a[18157] = sym_concatenation;
	v->a[18158] = aux_sym_for_statement_repeat1;
	v->a[18159] = actions(3663);
	small_parse_table_908(v);
}

void	small_parse_table_908(t_small_parse_table_array *v)
{
	v->a[18160] = 3;
	v->a[18161] = sym_raw_string;
	v->a[18162] = sym_ansi_c_string;
	v->a[18163] = sym_word;
	v->a[18164] = state(1918);
	v->a[18165] = 9;
	v->a[18166] = sym_arithmetic_expansion;
	v->a[18167] = sym_brace_expression;
	v->a[18168] = sym_string;
	v->a[18169] = sym_translated_string;
	v->a[18170] = sym_number;
	v->a[18171] = sym_simple_expansion;
	v->a[18172] = sym_expansion;
	v->a[18173] = sym_command_substitution;
	v->a[18174] = sym_process_substitution;
	v->a[18175] = actions(2072);
	v->a[18176] = 20;
	v->a[18177] = anon_sym_SEMI;
	v->a[18178] = anon_sym_PIPE_PIPE;
	v->a[18179] = anon_sym_AMP_AMP;
	small_parse_table_909(v);
}

void	small_parse_table_909(t_small_parse_table_array *v)
{
	v->a[18180] = anon_sym_PIPE;
	v->a[18181] = anon_sym_AMP;
	v->a[18182] = anon_sym_LT;
	v->a[18183] = anon_sym_GT;
	v->a[18184] = anon_sym_LT_LT;
	v->a[18185] = anon_sym_GT_GT;
	v->a[18186] = anon_sym_SEMI_SEMI;
	v->a[18187] = anon_sym_PIPE_AMP;
	v->a[18188] = anon_sym_AMP_GT;
	v->a[18189] = anon_sym_AMP_GT_GT;
	v->a[18190] = anon_sym_LT_AMP;
	v->a[18191] = anon_sym_GT_AMP;
	v->a[18192] = anon_sym_GT_PIPE;
	v->a[18193] = anon_sym_LT_AMP_DASH;
	v->a[18194] = anon_sym_GT_AMP_DASH;
	v->a[18195] = anon_sym_LT_LT_DASH;
	v->a[18196] = anon_sym_LT_LT_LT;
	v->a[18197] = 21;
	v->a[18198] = actions(3);
	v->a[18199] = 1;
	small_parse_table_910(v);
}

/* EOF small_parse_table_181.c */
