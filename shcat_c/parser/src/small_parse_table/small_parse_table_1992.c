/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1992.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9960(t_small_parse_table_array *v)
{
	v->a[199200] = aux_sym__literal_repeat1;
	v->a[199201] = actions(8924);
	v->a[199202] = 2;
	v->a[199203] = anon_sym_LPAREN_LPAREN;
	v->a[199204] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[199205] = actions(8940);
	v->a[199206] = 2;
	v->a[199207] = anon_sym_LT_LPAREN;
	v->a[199208] = anon_sym_GT_LPAREN;
	v->a[199209] = actions(9036);
	v->a[199210] = 2;
	v->a[199211] = sym_raw_string;
	v->a[199212] = sym_ansi_c_string;
	v->a[199213] = state(754);
	v->a[199214] = 2;
	v->a[199215] = sym_concatenation;
	v->a[199216] = aux_sym_for_statement_repeat1;
	v->a[199217] = state(1918);
	v->a[199218] = 9;
	v->a[199219] = sym_arithmetic_expansion;
	small_parse_table_9961(v);
}

void	small_parse_table_9961(t_small_parse_table_array *v)
{
	v->a[199220] = sym_brace_expression;
	v->a[199221] = sym_string;
	v->a[199222] = sym_translated_string;
	v->a[199223] = sym_number;
	v->a[199224] = sym_simple_expansion;
	v->a[199225] = sym_expansion;
	v->a[199226] = sym_command_substitution;
	v->a[199227] = sym_process_substitution;
	v->a[199228] = 20;
	v->a[199229] = actions(71);
	v->a[199230] = 1;
	v->a[199231] = sym_comment;
	v->a[199232] = actions(3397);
	v->a[199233] = 1;
	v->a[199234] = anon_sym_DOLLAR;
	v->a[199235] = actions(3401);
	v->a[199236] = 1;
	v->a[199237] = aux_sym_number_token1;
	v->a[199238] = actions(3403);
	v->a[199239] = 1;
	small_parse_table_9962(v);
}

void	small_parse_table_9962(t_small_parse_table_array *v)
{
	v->a[199240] = aux_sym_number_token2;
	v->a[199241] = actions(3407);
	v->a[199242] = 1;
	v->a[199243] = anon_sym_DOLLAR_LPAREN;
	v->a[199244] = actions(3417);
	v->a[199245] = 1;
	v->a[199246] = sym__brace_start;
	v->a[199247] = actions(3663);
	v->a[199248] = 1;
	v->a[199249] = sym_word;
	v->a[199250] = actions(3667);
	v->a[199251] = 1;
	v->a[199252] = sym_test_operator;
	v->a[199253] = actions(8926);
	v->a[199254] = 1;
	v->a[199255] = anon_sym_DOLLAR_LBRACK;
	v->a[199256] = actions(8930);
	v->a[199257] = 1;
	v->a[199258] = anon_sym_DQUOTE;
	v->a[199259] = actions(8934);
	small_parse_table_9963(v);
}

void	small_parse_table_9963(t_small_parse_table_array *v)
{
	v->a[199260] = 1;
	v->a[199261] = anon_sym_DOLLAR_LBRACE;
	v->a[199262] = actions(8936);
	v->a[199263] = 1;
	v->a[199264] = anon_sym_BQUOTE;
	v->a[199265] = actions(8938);
	v->a[199266] = 1;
	v->a[199267] = anon_sym_DOLLAR_BQUOTE;
	v->a[199268] = actions(9034);
	v->a[199269] = 1;
	v->a[199270] = sym__special_character;
	v->a[199271] = state(2161);
	v->a[199272] = 1;
	v->a[199273] = aux_sym__literal_repeat1;
	v->a[199274] = actions(8924);
	v->a[199275] = 2;
	v->a[199276] = anon_sym_LPAREN_LPAREN;
	v->a[199277] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[199278] = actions(8940);
	v->a[199279] = 2;
	small_parse_table_9964(v);
}

void	small_parse_table_9964(t_small_parse_table_array *v)
{
	v->a[199280] = anon_sym_LT_LPAREN;
	v->a[199281] = anon_sym_GT_LPAREN;
	v->a[199282] = actions(9036);
	v->a[199283] = 2;
	v->a[199284] = sym_raw_string;
	v->a[199285] = sym_ansi_c_string;
	v->a[199286] = state(755);
	v->a[199287] = 2;
	v->a[199288] = sym_concatenation;
	v->a[199289] = aux_sym_for_statement_repeat1;
	v->a[199290] = state(1918);
	v->a[199291] = 9;
	v->a[199292] = sym_arithmetic_expansion;
	v->a[199293] = sym_brace_expression;
	v->a[199294] = sym_string;
	v->a[199295] = sym_translated_string;
	v->a[199296] = sym_number;
	v->a[199297] = sym_simple_expansion;
	v->a[199298] = sym_expansion;
	v->a[199299] = sym_command_substitution;
	small_parse_table_9965(v);
}

/* EOF small_parse_table_1992.c */
