/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2752.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13760(t_small_parse_table_array *v)
{
	v->a[275200] = actions(11554);
	v->a[275201] = 8;
	v->a[275202] = anon_sym_LT;
	v->a[275203] = anon_sym_GT;
	v->a[275204] = anon_sym_GT_GT;
	v->a[275205] = anon_sym_AMP_GT;
	v->a[275206] = anon_sym_AMP_GT_GT;
	v->a[275207] = anon_sym_LT_AMP;
	v->a[275208] = anon_sym_GT_AMP;
	v->a[275209] = anon_sym_GT_PIPE;
	v->a[275210] = 3;
	v->a[275211] = actions(71);
	v->a[275212] = 1;
	v->a[275213] = sym_comment;
	v->a[275214] = actions(1292);
	v->a[275215] = 6;
	v->a[275216] = anon_sym_DOLLAR;
	v->a[275217] = aux_sym_number_token1;
	v->a[275218] = aux_sym_number_token2;
	v->a[275219] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_13761(v);
}

void	small_parse_table_13761(t_small_parse_table_array *v)
{
	v->a[275220] = anon_sym_BQUOTE;
	v->a[275221] = sym_word;
	v->a[275222] = actions(1294);
	v->a[275223] = 16;
	v->a[275224] = sym__concat;
	v->a[275225] = sym_test_operator;
	v->a[275226] = sym__brace_start;
	v->a[275227] = anon_sym_LPAREN_LPAREN;
	v->a[275228] = anon_sym_RPAREN;
	v->a[275229] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[275230] = anon_sym_DOLLAR_LBRACK;
	v->a[275231] = aux_sym_concatenation_token1;
	v->a[275232] = sym__special_character;
	v->a[275233] = anon_sym_DQUOTE;
	v->a[275234] = sym_raw_string;
	v->a[275235] = sym_ansi_c_string;
	v->a[275236] = anon_sym_DOLLAR_LBRACE;
	v->a[275237] = anon_sym_DOLLAR_BQUOTE;
	v->a[275238] = anon_sym_LT_LPAREN;
	v->a[275239] = anon_sym_GT_LPAREN;
	small_parse_table_13762(v);
}

void	small_parse_table_13762(t_small_parse_table_array *v)
{
	v->a[275240] = 5;
	v->a[275241] = actions(71);
	v->a[275242] = 1;
	v->a[275243] = sym_comment;
	v->a[275244] = state(5175);
	v->a[275245] = 1;
	v->a[275246] = aux_sym_concatenation_repeat1;
	v->a[275247] = actions(12327);
	v->a[275248] = 2;
	v->a[275249] = sym__concat;
	v->a[275250] = aux_sym_concatenation_token1;
	v->a[275251] = actions(4467);
	v->a[275252] = 7;
	v->a[275253] = anon_sym_PIPE;
	v->a[275254] = anon_sym_LT;
	v->a[275255] = anon_sym_GT;
	v->a[275256] = anon_sym_LT_LT;
	v->a[275257] = anon_sym_AMP_GT;
	v->a[275258] = anon_sym_LT_AMP;
	v->a[275259] = anon_sym_GT_AMP;
	small_parse_table_13763(v);
}

void	small_parse_table_13763(t_small_parse_table_array *v)
{
	v->a[275260] = actions(4469);
	v->a[275261] = 12;
	v->a[275262] = sym_file_descriptor;
	v->a[275263] = anon_sym_PIPE_PIPE;
	v->a[275264] = anon_sym_AMP_AMP;
	v->a[275265] = anon_sym_GT_GT;
	v->a[275266] = anon_sym_PIPE_AMP;
	v->a[275267] = anon_sym_RBRACK;
	v->a[275268] = anon_sym_AMP_GT_GT;
	v->a[275269] = anon_sym_GT_PIPE;
	v->a[275270] = anon_sym_LT_AMP_DASH;
	v->a[275271] = anon_sym_GT_AMP_DASH;
	v->a[275272] = anon_sym_LT_LT_DASH;
	v->a[275273] = anon_sym_LT_LT_LT;
	v->a[275274] = 4;
	v->a[275275] = actions(71);
	v->a[275276] = 1;
	v->a[275277] = sym_comment;
	v->a[275278] = actions(12360);
	v->a[275279] = 1;
	small_parse_table_13764(v);
}

void	small_parse_table_13764(t_small_parse_table_array *v)
{
	v->a[275280] = anon_sym_esac;
	v->a[275281] = actions(12356);
	v->a[275282] = 6;
	v->a[275283] = anon_sym_LPAREN;
	v->a[275284] = anon_sym_DOLLAR;
	v->a[275285] = aux_sym_number_token1;
	v->a[275286] = aux_sym_number_token2;
	v->a[275287] = anon_sym_DOLLAR_LPAREN;
	v->a[275288] = sym_word;
	v->a[275289] = actions(12358);
	v->a[275290] = 15;
	v->a[275291] = sym_test_operator;
	v->a[275292] = sym_extglob_pattern;
	v->a[275293] = sym__brace_start;
	v->a[275294] = anon_sym_LPAREN_LPAREN;
	v->a[275295] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[275296] = anon_sym_DOLLAR_LBRACK;
	v->a[275297] = sym__special_character;
	v->a[275298] = anon_sym_DQUOTE;
	v->a[275299] = sym_raw_string;
	small_parse_table_13765(v);
}

/* EOF small_parse_table_2752.c */
