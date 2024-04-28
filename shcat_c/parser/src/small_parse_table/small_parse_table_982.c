/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_982.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4910(t_small_parse_table_array *v)
{
	v->a[98200] = 2;
	v->a[98201] = anon_sym_DASH2;
	v->a[98202] = anon_sym_PLUS2;
	v->a[98203] = actions(352);
	v->a[98204] = 2;
	v->a[98205] = anon_sym_LPAREN_LPAREN;
	v->a[98206] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[98207] = actions(373);
	v->a[98208] = 2;
	v->a[98209] = sym_raw_string;
	v->a[98210] = sym_ansi_c_string;
	v->a[98211] = actions(387);
	v->a[98212] = 2;
	v->a[98213] = anon_sym_LT_LPAREN;
	v->a[98214] = anon_sym_GT_LPAREN;
	v->a[98215] = state(3071);
	v->a[98216] = 6;
	v->a[98217] = sym_binary_expression;
	v->a[98218] = sym_ternary_expression;
	v->a[98219] = sym_unary_expression;
	small_parse_table_4911(v);
}

void	small_parse_table_4911(t_small_parse_table_array *v)
{
	v->a[98220] = sym_postfix_expression;
	v->a[98221] = sym_parenthesized_expression;
	v->a[98222] = sym_concatenation;
	v->a[98223] = state(2521);
	v->a[98224] = 9;
	v->a[98225] = sym_arithmetic_expansion;
	v->a[98226] = sym_brace_expression;
	v->a[98227] = sym_string;
	v->a[98228] = sym_translated_string;
	v->a[98229] = sym_number;
	v->a[98230] = sym_simple_expansion;
	v->a[98231] = sym_expansion;
	v->a[98232] = sym_command_substitution;
	v->a[98233] = sym_process_substitution;
	v->a[98234] = 26;
	v->a[98235] = actions(71);
	v->a[98236] = 1;
	v->a[98237] = sym_comment;
	v->a[98238] = actions(187);
	v->a[98239] = 1;
	small_parse_table_4912(v);
}

void	small_parse_table_4912(t_small_parse_table_array *v)
{
	v->a[98240] = anon_sym_TILDE;
	v->a[98241] = actions(350);
	v->a[98242] = 1;
	v->a[98243] = sym_word;
	v->a[98244] = actions(359);
	v->a[98245] = 1;
	v->a[98246] = anon_sym_LPAREN;
	v->a[98247] = actions(361);
	v->a[98248] = 1;
	v->a[98249] = anon_sym_BANG;
	v->a[98250] = actions(363);
	v->a[98251] = 1;
	v->a[98252] = anon_sym_DOLLAR_LBRACK;
	v->a[98253] = actions(367);
	v->a[98254] = 1;
	v->a[98255] = anon_sym_DOLLAR;
	v->a[98256] = actions(371);
	v->a[98257] = 1;
	v->a[98258] = anon_sym_DQUOTE;
	v->a[98259] = actions(375);
	small_parse_table_4913(v);
}

void	small_parse_table_4913(t_small_parse_table_array *v)
{
	v->a[98260] = 1;
	v->a[98261] = aux_sym_number_token1;
	v->a[98262] = actions(377);
	v->a[98263] = 1;
	v->a[98264] = aux_sym_number_token2;
	v->a[98265] = actions(379);
	v->a[98266] = 1;
	v->a[98267] = anon_sym_DOLLAR_LBRACE;
	v->a[98268] = actions(381);
	v->a[98269] = 1;
	v->a[98270] = anon_sym_DOLLAR_LPAREN;
	v->a[98271] = actions(385);
	v->a[98272] = 1;
	v->a[98273] = anon_sym_DOLLAR_BQUOTE;
	v->a[98274] = actions(389);
	v->a[98275] = 1;
	v->a[98276] = sym_test_operator;
	v->a[98277] = actions(391);
	v->a[98278] = 1;
	v->a[98279] = sym__brace_start;
	small_parse_table_4914(v);
}

void	small_parse_table_4914(t_small_parse_table_array *v)
{
	v->a[98280] = actions(5807);
	v->a[98281] = 1;
	v->a[98282] = sym__special_character;
	v->a[98283] = actions(5809);
	v->a[98284] = 1;
	v->a[98285] = anon_sym_BQUOTE;
	v->a[98286] = state(2641);
	v->a[98287] = 1;
	v->a[98288] = aux_sym__literal_repeat1;
	v->a[98289] = state(2964);
	v->a[98290] = 1;
	v->a[98291] = sym__expression;
	v->a[98292] = actions(183);
	v->a[98293] = 2;
	v->a[98294] = anon_sym_PLUS_PLUS2;
	v->a[98295] = anon_sym_DASH_DASH2;
	v->a[98296] = actions(185);
	v->a[98297] = 2;
	v->a[98298] = anon_sym_DASH2;
	v->a[98299] = anon_sym_PLUS2;
	small_parse_table_4915(v);
}

/* EOF small_parse_table_982.c */
