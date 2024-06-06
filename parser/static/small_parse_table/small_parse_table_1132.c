/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1132.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5660(t_small_parse_table_array *v)
{
	v->a[113200] = anon_sym_SEMI;
	v->a[113201] = 3;
	v->a[113202] = actions(3);
	v->a[113203] = 1;
	v->a[113204] = sym_comment;
	v->a[113205] = actions(6137);
	v->a[113206] = 2;
	v->a[113207] = sym_file_descriptor;
	v->a[113208] = aux_sym_heredoc_redirect_token1;
	v->a[113209] = actions(6139);
	v->a[113210] = 21;
	v->a[113211] = anon_sym_PIPE;
	v->a[113212] = anon_sym_SEMI_SEMI;
	v->a[113213] = anon_sym_SEMI_AMP;
	v->a[113214] = anon_sym_SEMI_SEMI_AMP;
	v->a[113215] = anon_sym_PIPE_AMP;
	v->a[113216] = anon_sym_AMP_AMP;
	v->a[113217] = anon_sym_PIPE_PIPE;
	v->a[113218] = anon_sym_LT;
	v->a[113219] = anon_sym_GT;
	small_parse_table_5661(v);
}

void	small_parse_table_5661(t_small_parse_table_array *v)
{
	v->a[113220] = anon_sym_GT_GT;
	v->a[113221] = anon_sym_AMP_GT;
	v->a[113222] = anon_sym_AMP_GT_GT;
	v->a[113223] = anon_sym_LT_AMP;
	v->a[113224] = anon_sym_GT_AMP;
	v->a[113225] = anon_sym_GT_PIPE;
	v->a[113226] = anon_sym_LT_AMP_DASH;
	v->a[113227] = anon_sym_GT_AMP_DASH;
	v->a[113228] = anon_sym_LT_LT;
	v->a[113229] = anon_sym_LT_LT_DASH;
	v->a[113230] = anon_sym_AMP;
	v->a[113231] = anon_sym_SEMI;
	v->a[113232] = 16;
	v->a[113233] = actions(3);
	v->a[113234] = 1;
	v->a[113235] = sym_comment;
	v->a[113236] = actions(2486);
	v->a[113237] = 1;
	v->a[113238] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[113239] = actions(2492);
	small_parse_table_5662(v);
}

void	small_parse_table_5662(t_small_parse_table_array *v)
{
	v->a[113240] = 1;
	v->a[113241] = anon_sym_DQUOTE;
	v->a[113242] = actions(2496);
	v->a[113243] = 1;
	v->a[113244] = aux_sym_number_token1;
	v->a[113245] = actions(2498);
	v->a[113246] = 1;
	v->a[113247] = aux_sym_number_token2;
	v->a[113248] = actions(2500);
	v->a[113249] = 1;
	v->a[113250] = anon_sym_DOLLAR_LBRACE;
	v->a[113251] = actions(2502);
	v->a[113252] = 1;
	v->a[113253] = anon_sym_DOLLAR_LPAREN;
	v->a[113254] = actions(2504);
	v->a[113255] = 1;
	v->a[113256] = anon_sym_BQUOTE;
	v->a[113257] = actions(2506);
	v->a[113258] = 1;
	v->a[113259] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_5663(v);
}

void	small_parse_table_5663(t_small_parse_table_array *v)
{
	v->a[113260] = actions(2510);
	v->a[113261] = 1;
	v->a[113262] = sym__brace_start;
	v->a[113263] = actions(6531);
	v->a[113264] = 1;
	v->a[113265] = sym_word;
	v->a[113266] = actions(6533);
	v->a[113267] = 1;
	v->a[113268] = anon_sym_DOLLAR;
	v->a[113269] = actions(6535);
	v->a[113270] = 1;
	v->a[113271] = sym__special_character;
	v->a[113272] = actions(6539);
	v->a[113273] = 1;
	v->a[113274] = sym__comment_word;
	v->a[113275] = actions(6537);
	v->a[113276] = 3;
	v->a[113277] = sym_test_operator;
	v->a[113278] = sym__bare_dollar;
	v->a[113279] = sym_raw_string;
	small_parse_table_5664(v);
}

void	small_parse_table_5664(t_small_parse_table_array *v)
{
	v->a[113280] = state(1596);
	v->a[113281] = 7;
	v->a[113282] = sym_arithmetic_expansion;
	v->a[113283] = sym_brace_expression;
	v->a[113284] = sym_string;
	v->a[113285] = sym_number;
	v->a[113286] = sym_simple_expansion;
	v->a[113287] = sym_expansion;
	v->a[113288] = sym_command_substitution;
	v->a[113289] = 16;
	v->a[113290] = actions(3);
	v->a[113291] = 1;
	v->a[113292] = sym_comment;
	v->a[113293] = actions(661);
	v->a[113294] = 1;
	v->a[113295] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[113296] = actions(663);
	v->a[113297] = 1;
	v->a[113298] = anon_sym_DOLLAR;
	v->a[113299] = actions(667);
	small_parse_table_5665(v);
}

/* EOF small_parse_table_1132.c */
