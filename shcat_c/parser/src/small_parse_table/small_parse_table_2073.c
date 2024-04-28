/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2073.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10365(t_small_parse_table_array *v)
{
	v->a[207300] = sym_string;
	v->a[207301] = sym_translated_string;
	v->a[207302] = sym_number;
	v->a[207303] = sym_simple_expansion;
	v->a[207304] = sym_expansion;
	v->a[207305] = sym_command_substitution;
	v->a[207306] = sym_process_substitution;
	v->a[207307] = 20;
	v->a[207308] = actions(71);
	v->a[207309] = 1;
	v->a[207310] = sym_comment;
	v->a[207311] = actions(5405);
	v->a[207312] = 1;
	v->a[207313] = anon_sym_DOLLAR_LBRACK;
	v->a[207314] = actions(5407);
	v->a[207315] = 1;
	v->a[207316] = anon_sym_DOLLAR;
	v->a[207317] = actions(5409);
	v->a[207318] = 1;
	v->a[207319] = sym__special_character;
	small_parse_table_10366(v);
}

void	small_parse_table_10366(t_small_parse_table_array *v)
{
	v->a[207320] = actions(5411);
	v->a[207321] = 1;
	v->a[207322] = anon_sym_DQUOTE;
	v->a[207323] = actions(5415);
	v->a[207324] = 1;
	v->a[207325] = aux_sym_number_token1;
	v->a[207326] = actions(5417);
	v->a[207327] = 1;
	v->a[207328] = aux_sym_number_token2;
	v->a[207329] = actions(5419);
	v->a[207330] = 1;
	v->a[207331] = anon_sym_DOLLAR_LBRACE;
	v->a[207332] = actions(5421);
	v->a[207333] = 1;
	v->a[207334] = anon_sym_DOLLAR_LPAREN;
	v->a[207335] = actions(5423);
	v->a[207336] = 1;
	v->a[207337] = anon_sym_BQUOTE;
	v->a[207338] = actions(5425);
	v->a[207339] = 1;
	small_parse_table_10367(v);
}

void	small_parse_table_10367(t_small_parse_table_array *v)
{
	v->a[207340] = anon_sym_DOLLAR_BQUOTE;
	v->a[207341] = actions(5431);
	v->a[207342] = 1;
	v->a[207343] = sym__brace_start;
	v->a[207344] = actions(9654);
	v->a[207345] = 1;
	v->a[207346] = sym_word;
	v->a[207347] = actions(9658);
	v->a[207348] = 1;
	v->a[207349] = sym_test_operator;
	v->a[207350] = state(5544);
	v->a[207351] = 1;
	v->a[207352] = aux_sym__literal_repeat1;
	v->a[207353] = state(5629);
	v->a[207354] = 1;
	v->a[207355] = sym_concatenation;
	v->a[207356] = actions(5403);
	v->a[207357] = 2;
	v->a[207358] = anon_sym_LPAREN_LPAREN;
	v->a[207359] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_10368(v);
}

void	small_parse_table_10368(t_small_parse_table_array *v)
{
	v->a[207360] = actions(5427);
	v->a[207361] = 2;
	v->a[207362] = anon_sym_LT_LPAREN;
	v->a[207363] = anon_sym_GT_LPAREN;
	v->a[207364] = actions(9656);
	v->a[207365] = 2;
	v->a[207366] = sym_raw_string;
	v->a[207367] = sym_ansi_c_string;
	v->a[207368] = state(5412);
	v->a[207369] = 9;
	v->a[207370] = sym_arithmetic_expansion;
	v->a[207371] = sym_brace_expression;
	v->a[207372] = sym_string;
	v->a[207373] = sym_translated_string;
	v->a[207374] = sym_number;
	v->a[207375] = sym_simple_expansion;
	v->a[207376] = sym_expansion;
	v->a[207377] = sym_command_substitution;
	v->a[207378] = sym_process_substitution;
	v->a[207379] = 20;
	small_parse_table_10369(v);
}

void	small_parse_table_10369(t_small_parse_table_array *v)
{
	v->a[207380] = actions(71);
	v->a[207381] = 1;
	v->a[207382] = sym_comment;
	v->a[207383] = actions(3787);
	v->a[207384] = 1;
	v->a[207385] = anon_sym_DOLLAR;
	v->a[207386] = actions(3793);
	v->a[207387] = 1;
	v->a[207388] = aux_sym_number_token1;
	v->a[207389] = actions(3795);
	v->a[207390] = 1;
	v->a[207391] = aux_sym_number_token2;
	v->a[207392] = actions(3799);
	v->a[207393] = 1;
	v->a[207394] = anon_sym_DOLLAR_LPAREN;
	v->a[207395] = actions(3809);
	v->a[207396] = 1;
	v->a[207397] = sym__brace_start;
	v->a[207398] = actions(9636);
	v->a[207399] = 1;
	small_parse_table_10370(v);
}

/* EOF small_parse_table_2073.c */
