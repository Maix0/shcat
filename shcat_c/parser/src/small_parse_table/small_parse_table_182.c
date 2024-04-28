/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_182.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_910(t_small_parse_table_array *v)
{
	v->a[18200] = sym_comment;
	v->a[18201] = actions(3115);
	v->a[18202] = 1;
	v->a[18203] = anon_sym_DQUOTE;
	v->a[18204] = actions(3395);
	v->a[18205] = 1;
	v->a[18206] = anon_sym_DOLLAR_LBRACK;
	v->a[18207] = actions(3397);
	v->a[18208] = 1;
	v->a[18209] = anon_sym_DOLLAR;
	v->a[18210] = actions(3401);
	v->a[18211] = 1;
	v->a[18212] = aux_sym_number_token1;
	v->a[18213] = actions(3403);
	v->a[18214] = 1;
	v->a[18215] = aux_sym_number_token2;
	v->a[18216] = actions(3405);
	v->a[18217] = 1;
	v->a[18218] = anon_sym_DOLLAR_LBRACE;
	v->a[18219] = actions(3407);
	small_parse_table_911(v);
}

void	small_parse_table_911(t_small_parse_table_array *v)
{
	v->a[18220] = 1;
	v->a[18221] = anon_sym_DOLLAR_LPAREN;
	v->a[18222] = actions(3409);
	v->a[18223] = 1;
	v->a[18224] = anon_sym_BQUOTE;
	v->a[18225] = actions(3411);
	v->a[18226] = 1;
	v->a[18227] = anon_sym_DOLLAR_BQUOTE;
	v->a[18228] = actions(3417);
	v->a[18229] = 1;
	v->a[18230] = sym__brace_start;
	v->a[18231] = actions(3665);
	v->a[18232] = 1;
	v->a[18233] = sym__special_character;
	v->a[18234] = actions(3667);
	v->a[18235] = 1;
	v->a[18236] = sym_test_operator;
	v->a[18237] = state(2161);
	v->a[18238] = 1;
	v->a[18239] = aux_sym__literal_repeat1;
	small_parse_table_912(v);
}

void	small_parse_table_912(t_small_parse_table_array *v)
{
	v->a[18240] = actions(2096);
	v->a[18241] = 2;
	v->a[18242] = sym_file_descriptor;
	v->a[18243] = aux_sym_heredoc_redirect_token1;
	v->a[18244] = actions(3393);
	v->a[18245] = 2;
	v->a[18246] = anon_sym_LPAREN_LPAREN;
	v->a[18247] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18248] = actions(3413);
	v->a[18249] = 2;
	v->a[18250] = anon_sym_LT_LPAREN;
	v->a[18251] = anon_sym_GT_LPAREN;
	v->a[18252] = state(715);
	v->a[18253] = 2;
	v->a[18254] = sym_concatenation;
	v->a[18255] = aux_sym_for_statement_repeat1;
	v->a[18256] = actions(3663);
	v->a[18257] = 3;
	v->a[18258] = sym_raw_string;
	v->a[18259] = sym_ansi_c_string;
	small_parse_table_913(v);
}

void	small_parse_table_913(t_small_parse_table_array *v)
{
	v->a[18260] = sym_word;
	v->a[18261] = state(1918);
	v->a[18262] = 9;
	v->a[18263] = sym_arithmetic_expansion;
	v->a[18264] = sym_brace_expression;
	v->a[18265] = sym_string;
	v->a[18266] = sym_translated_string;
	v->a[18267] = sym_number;
	v->a[18268] = sym_simple_expansion;
	v->a[18269] = sym_expansion;
	v->a[18270] = sym_command_substitution;
	v->a[18271] = sym_process_substitution;
	v->a[18272] = actions(2094);
	v->a[18273] = 20;
	v->a[18274] = anon_sym_SEMI;
	v->a[18275] = anon_sym_PIPE_PIPE;
	v->a[18276] = anon_sym_AMP_AMP;
	v->a[18277] = anon_sym_PIPE;
	v->a[18278] = anon_sym_AMP;
	v->a[18279] = anon_sym_LT;
	small_parse_table_914(v);
}

void	small_parse_table_914(t_small_parse_table_array *v)
{
	v->a[18280] = anon_sym_GT;
	v->a[18281] = anon_sym_LT_LT;
	v->a[18282] = anon_sym_GT_GT;
	v->a[18283] = anon_sym_SEMI_SEMI;
	v->a[18284] = anon_sym_PIPE_AMP;
	v->a[18285] = anon_sym_AMP_GT;
	v->a[18286] = anon_sym_AMP_GT_GT;
	v->a[18287] = anon_sym_LT_AMP;
	v->a[18288] = anon_sym_GT_AMP;
	v->a[18289] = anon_sym_GT_PIPE;
	v->a[18290] = anon_sym_LT_AMP_DASH;
	v->a[18291] = anon_sym_GT_AMP_DASH;
	v->a[18292] = anon_sym_LT_LT_DASH;
	v->a[18293] = anon_sym_LT_LT_LT;
	v->a[18294] = 8;
	v->a[18295] = actions(3);
	v->a[18296] = 1;
	v->a[18297] = sym_comment;
	v->a[18298] = actions(3439);
	v->a[18299] = 1;
	small_parse_table_915(v);
}

/* EOF small_parse_table_182.c */
