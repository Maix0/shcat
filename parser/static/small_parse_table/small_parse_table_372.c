/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_372.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1860(t_small_parse_table_array *v)
{
	v->a[37200] = aux_sym__simple_variable_name_token1;
	v->a[37201] = sym_word;
	v->a[37202] = anon_sym_SEMI;
	v->a[37203] = 19;
	v->a[37204] = actions(57);
	v->a[37205] = 1;
	v->a[37206] = sym_comment;
	v->a[37207] = actions(3481);
	v->a[37208] = 1;
	v->a[37209] = sym_word;
	v->a[37210] = actions(3483);
	v->a[37211] = 1;
	v->a[37212] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37213] = actions(3485);
	v->a[37214] = 1;
	v->a[37215] = anon_sym_DOLLAR;
	v->a[37216] = actions(3487);
	v->a[37217] = 1;
	v->a[37218] = sym__special_character;
	v->a[37219] = actions(3489);
	small_parse_table_1861(v);
}

void	small_parse_table_1861(t_small_parse_table_array *v)
{
	v->a[37220] = 1;
	v->a[37221] = anon_sym_DQUOTE;
	v->a[37222] = actions(3493);
	v->a[37223] = 1;
	v->a[37224] = aux_sym_number_token1;
	v->a[37225] = actions(3495);
	v->a[37226] = 1;
	v->a[37227] = aux_sym_number_token2;
	v->a[37228] = actions(3497);
	v->a[37229] = 1;
	v->a[37230] = anon_sym_DOLLAR_LBRACE;
	v->a[37231] = actions(3499);
	v->a[37232] = 1;
	v->a[37233] = anon_sym_DOLLAR_LPAREN;
	v->a[37234] = actions(3501);
	v->a[37235] = 1;
	v->a[37236] = anon_sym_BQUOTE;
	v->a[37237] = actions(3503);
	v->a[37238] = 1;
	v->a[37239] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_1862(v);
}

void	small_parse_table_1862(t_small_parse_table_array *v)
{
	v->a[37240] = actions(3505);
	v->a[37241] = 1;
	v->a[37242] = sym__brace_start;
	v->a[37243] = state(2675);
	v->a[37244] = 1;
	v->a[37245] = aux_sym__literal_repeat1;
	v->a[37246] = state(2739);
	v->a[37247] = 1;
	v->a[37248] = sym_concatenation;
	v->a[37249] = actions(3491);
	v->a[37250] = 2;
	v->a[37251] = sym_test_operator;
	v->a[37252] = sym_raw_string;
	v->a[37253] = actions(1532);
	v->a[37254] = 7;
	v->a[37255] = anon_sym_PIPE;
	v->a[37256] = anon_sym_LT;
	v->a[37257] = anon_sym_GT;
	v->a[37258] = anon_sym_AMP_GT;
	v->a[37259] = anon_sym_LT_AMP;
	small_parse_table_1863(v);
}

void	small_parse_table_1863(t_small_parse_table_array *v)
{
	v->a[37260] = anon_sym_GT_AMP;
	v->a[37261] = anon_sym_LT_LT;
	v->a[37262] = state(2650);
	v->a[37263] = 7;
	v->a[37264] = sym_arithmetic_expansion;
	v->a[37265] = sym_brace_expression;
	v->a[37266] = sym_string;
	v->a[37267] = sym_number;
	v->a[37268] = sym_simple_expansion;
	v->a[37269] = sym_expansion;
	v->a[37270] = sym_command_substitution;
	v->a[37271] = actions(1534);
	v->a[37272] = 10;
	v->a[37273] = sym_file_descriptor;
	v->a[37274] = anon_sym_PIPE_AMP;
	v->a[37275] = anon_sym_AMP_AMP;
	v->a[37276] = anon_sym_PIPE_PIPE;
	v->a[37277] = anon_sym_GT_GT;
	v->a[37278] = anon_sym_AMP_GT_GT;
	v->a[37279] = anon_sym_GT_PIPE;
	small_parse_table_1864(v);
}

void	small_parse_table_1864(t_small_parse_table_array *v)
{
	v->a[37280] = anon_sym_LT_AMP_DASH;
	v->a[37281] = anon_sym_GT_AMP_DASH;
	v->a[37282] = anon_sym_LT_LT_DASH;
	v->a[37283] = 3;
	v->a[37284] = actions(3);
	v->a[37285] = 1;
	v->a[37286] = sym_comment;
	v->a[37287] = actions(2908);
	v->a[37288] = 6;
	v->a[37289] = sym_file_descriptor;
	v->a[37290] = sym__concat;
	v->a[37291] = sym_test_operator;
	v->a[37292] = sym__bare_dollar;
	v->a[37293] = sym__brace_start;
	v->a[37294] = aux_sym_heredoc_redirect_token1;
	v->a[37295] = actions(2906);
	v->a[37296] = 34;
	v->a[37297] = anon_sym_LPAREN;
	v->a[37298] = anon_sym_PIPE;
	v->a[37299] = anon_sym_RPAREN;
	small_parse_table_1865(v);
}

/* EOF small_parse_table_372.c */
