/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2142.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10710(t_small_parse_table_array *v)
{
	v->a[214200] = 1;
	v->a[214201] = sym_concatenation;
	v->a[214202] = actions(10132);
	v->a[214203] = 2;
	v->a[214204] = anon_sym_LPAREN_LPAREN;
	v->a[214205] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[214206] = actions(10148);
	v->a[214207] = 2;
	v->a[214208] = anon_sym_LT_LPAREN;
	v->a[214209] = anon_sym_GT_LPAREN;
	v->a[214210] = actions(10202);
	v->a[214211] = 2;
	v->a[214212] = sym_raw_string;
	v->a[214213] = sym_ansi_c_string;
	v->a[214214] = state(4375);
	v->a[214215] = 9;
	v->a[214216] = sym_arithmetic_expansion;
	v->a[214217] = sym_brace_expression;
	v->a[214218] = sym_string;
	v->a[214219] = sym_translated_string;
	small_parse_table_10711(v);
}

void	small_parse_table_10711(t_small_parse_table_array *v)
{
	v->a[214220] = sym_number;
	v->a[214221] = sym_simple_expansion;
	v->a[214222] = sym_expansion;
	v->a[214223] = sym_command_substitution;
	v->a[214224] = sym_process_substitution;
	v->a[214225] = 18;
	v->a[214226] = actions(3);
	v->a[214227] = 1;
	v->a[214228] = sym_comment;
	v->a[214229] = actions(6488);
	v->a[214230] = 1;
	v->a[214231] = anon_sym_DOLLAR;
	v->a[214232] = actions(6494);
	v->a[214233] = 1;
	v->a[214234] = aux_sym_number_token1;
	v->a[214235] = actions(6496);
	v->a[214236] = 1;
	v->a[214237] = aux_sym_number_token2;
	v->a[214238] = actions(6500);
	v->a[214239] = 1;
	small_parse_table_10712(v);
}

void	small_parse_table_10712(t_small_parse_table_array *v)
{
	v->a[214240] = anon_sym_DOLLAR_LPAREN;
	v->a[214241] = actions(6512);
	v->a[214242] = 1;
	v->a[214243] = sym__brace_start;
	v->a[214244] = actions(7226);
	v->a[214245] = 1;
	v->a[214246] = anon_sym_DOLLAR_LBRACK;
	v->a[214247] = actions(7230);
	v->a[214248] = 1;
	v->a[214249] = anon_sym_DQUOTE;
	v->a[214250] = actions(7234);
	v->a[214251] = 1;
	v->a[214252] = anon_sym_DOLLAR_LBRACE;
	v->a[214253] = actions(7236);
	v->a[214254] = 1;
	v->a[214255] = anon_sym_BQUOTE;
	v->a[214256] = actions(7238);
	v->a[214257] = 1;
	v->a[214258] = anon_sym_DOLLAR_BQUOTE;
	v->a[214259] = actions(10206);
	small_parse_table_10713(v);
}

void	small_parse_table_10713(t_small_parse_table_array *v)
{
	v->a[214260] = 1;
	v->a[214261] = sym_word;
	v->a[214262] = actions(10212);
	v->a[214263] = 1;
	v->a[214264] = sym__comment_word;
	v->a[214265] = actions(7224);
	v->a[214266] = 2;
	v->a[214267] = anon_sym_LPAREN_LPAREN;
	v->a[214268] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[214269] = actions(7240);
	v->a[214270] = 2;
	v->a[214271] = anon_sym_LT_LPAREN;
	v->a[214272] = anon_sym_GT_LPAREN;
	v->a[214273] = actions(10208);
	v->a[214274] = 2;
	v->a[214275] = sym_test_operator;
	v->a[214276] = sym__special_character;
	v->a[214277] = actions(10210);
	v->a[214278] = 3;
	v->a[214279] = sym__bare_dollar;
	small_parse_table_10714(v);
}

void	small_parse_table_10714(t_small_parse_table_array *v)
{
	v->a[214280] = sym_raw_string;
	v->a[214281] = sym_ansi_c_string;
	v->a[214282] = state(6494);
	v->a[214283] = 9;
	v->a[214284] = sym_arithmetic_expansion;
	v->a[214285] = sym_brace_expression;
	v->a[214286] = sym_string;
	v->a[214287] = sym_translated_string;
	v->a[214288] = sym_number;
	v->a[214289] = sym_simple_expansion;
	v->a[214290] = sym_expansion;
	v->a[214291] = sym_command_substitution;
	v->a[214292] = sym_process_substitution;
	v->a[214293] = 18;
	v->a[214294] = actions(3);
	v->a[214295] = 1;
	v->a[214296] = sym_comment;
	v->a[214297] = actions(3401);
	v->a[214298] = 1;
	v->a[214299] = aux_sym_number_token1;
	small_parse_table_10715(v);
}

/* EOF small_parse_table_2142.c */
