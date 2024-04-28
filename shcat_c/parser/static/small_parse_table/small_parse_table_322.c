/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_322.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1610(t_small_parse_table_array *v)
{
	v->a[32200] = anon_sym_AMP_GT;
	v->a[32201] = anon_sym_AMP_GT_GT;
	v->a[32202] = anon_sym_LT_AMP;
	v->a[32203] = anon_sym_GT_AMP;
	v->a[32204] = anon_sym_GT_PIPE;
	v->a[32205] = anon_sym_LT_AMP_DASH;
	v->a[32206] = anon_sym_GT_AMP_DASH;
	v->a[32207] = anon_sym_LT_LT_DASH;
	v->a[32208] = anon_sym_LT_LT_LT;
	v->a[32209] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32210] = anon_sym_DOLLAR_LBRACK;
	v->a[32211] = anon_sym_DOLLAR;
	v->a[32212] = sym__special_character;
	v->a[32213] = anon_sym_DQUOTE;
	v->a[32214] = sym_raw_string;
	v->a[32215] = sym_ansi_c_string;
	v->a[32216] = aux_sym_number_token1;
	v->a[32217] = aux_sym_number_token2;
	v->a[32218] = anon_sym_DOLLAR_LBRACE;
	v->a[32219] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1611(v);
}

void	small_parse_table_1611(t_small_parse_table_array *v)
{
	v->a[32220] = anon_sym_BQUOTE;
	v->a[32221] = anon_sym_DOLLAR_BQUOTE;
	v->a[32222] = anon_sym_LT_LPAREN;
	v->a[32223] = anon_sym_GT_LPAREN;
	v->a[32224] = sym_word;
	v->a[32225] = 22;
	v->a[32226] = actions(71);
	v->a[32227] = 1;
	v->a[32228] = sym_comment;
	v->a[32229] = actions(4581);
	v->a[32230] = 1;
	v->a[32231] = sym_word;
	v->a[32232] = actions(4587);
	v->a[32233] = 1;
	v->a[32234] = anon_sym_DOLLAR_LBRACK;
	v->a[32235] = actions(4590);
	v->a[32236] = 1;
	v->a[32237] = anon_sym_DOLLAR;
	v->a[32238] = actions(4593);
	v->a[32239] = 1;
	small_parse_table_1612(v);
}

void	small_parse_table_1612(t_small_parse_table_array *v)
{
	v->a[32240] = sym__special_character;
	v->a[32241] = actions(4596);
	v->a[32242] = 1;
	v->a[32243] = anon_sym_DQUOTE;
	v->a[32244] = actions(4602);
	v->a[32245] = 1;
	v->a[32246] = aux_sym_number_token1;
	v->a[32247] = actions(4605);
	v->a[32248] = 1;
	v->a[32249] = aux_sym_number_token2;
	v->a[32250] = actions(4608);
	v->a[32251] = 1;
	v->a[32252] = anon_sym_DOLLAR_LBRACE;
	v->a[32253] = actions(4611);
	v->a[32254] = 1;
	v->a[32255] = anon_sym_DOLLAR_LPAREN;
	v->a[32256] = actions(4614);
	v->a[32257] = 1;
	v->a[32258] = anon_sym_BQUOTE;
	v->a[32259] = actions(4617);
	small_parse_table_1613(v);
}

void	small_parse_table_1613(t_small_parse_table_array *v)
{
	v->a[32260] = 1;
	v->a[32261] = anon_sym_DOLLAR_BQUOTE;
	v->a[32262] = actions(4623);
	v->a[32263] = 1;
	v->a[32264] = sym_test_operator;
	v->a[32265] = actions(4626);
	v->a[32266] = 1;
	v->a[32267] = sym__brace_start;
	v->a[32268] = state(2715);
	v->a[32269] = 1;
	v->a[32270] = aux_sym__literal_repeat1;
	v->a[32271] = actions(4584);
	v->a[32272] = 2;
	v->a[32273] = anon_sym_LPAREN_LPAREN;
	v->a[32274] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32275] = actions(4599);
	v->a[32276] = 2;
	v->a[32277] = sym_raw_string;
	v->a[32278] = sym_ansi_c_string;
	v->a[32279] = actions(4620);
	small_parse_table_1614(v);
}

void	small_parse_table_1614(t_small_parse_table_array *v)
{
	v->a[32280] = 2;
	v->a[32281] = anon_sym_LT_LPAREN;
	v->a[32282] = anon_sym_GT_LPAREN;
	v->a[32283] = state(895);
	v->a[32284] = 2;
	v->a[32285] = sym_concatenation;
	v->a[32286] = aux_sym_for_statement_repeat1;
	v->a[32287] = actions(2214);
	v->a[32288] = 7;
	v->a[32289] = anon_sym_PIPE;
	v->a[32290] = anon_sym_LT;
	v->a[32291] = anon_sym_GT;
	v->a[32292] = anon_sym_LT_LT;
	v->a[32293] = anon_sym_AMP_GT;
	v->a[32294] = anon_sym_LT_AMP;
	v->a[32295] = anon_sym_GT_AMP;
	v->a[32296] = state(2438);
	v->a[32297] = 9;
	v->a[32298] = sym_arithmetic_expansion;
	v->a[32299] = sym_brace_expression;
	small_parse_table_1615(v);
}

/* EOF small_parse_table_322.c */
