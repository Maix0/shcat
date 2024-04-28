/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1893.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9465(t_small_parse_table_array *v)
{
	v->a[189300] = sym_ansi_c_string;
	v->a[189301] = actions(8124);
	v->a[189302] = 2;
	v->a[189303] = anon_sym_LT_LPAREN;
	v->a[189304] = anon_sym_GT_LPAREN;
	v->a[189305] = state(1667);
	v->a[189306] = 2;
	v->a[189307] = sym_concatenation;
	v->a[189308] = sym_array;
	v->a[189309] = state(1148);
	v->a[189310] = 9;
	v->a[189311] = sym_arithmetic_expansion;
	v->a[189312] = sym_brace_expression;
	v->a[189313] = sym_string;
	v->a[189314] = sym_translated_string;
	v->a[189315] = sym_number;
	v->a[189316] = sym_simple_expansion;
	v->a[189317] = sym_expansion;
	v->a[189318] = sym_command_substitution;
	v->a[189319] = sym_process_substitution;
	small_parse_table_9466(v);
}

void	small_parse_table_9466(t_small_parse_table_array *v)
{
	v->a[189320] = 3;
	v->a[189321] = actions(71);
	v->a[189322] = 1;
	v->a[189323] = sym_comment;
	v->a[189324] = actions(1356);
	v->a[189325] = 11;
	v->a[189326] = anon_sym_LT;
	v->a[189327] = anon_sym_GT;
	v->a[189328] = anon_sym_AMP_GT;
	v->a[189329] = anon_sym_LT_AMP;
	v->a[189330] = anon_sym_GT_AMP;
	v->a[189331] = anon_sym_DOLLAR;
	v->a[189332] = aux_sym_number_token1;
	v->a[189333] = aux_sym_number_token2;
	v->a[189334] = anon_sym_DOLLAR_LPAREN;
	v->a[189335] = anon_sym_BQUOTE;
	v->a[189336] = sym_word;
	v->a[189337] = actions(1358);
	v->a[189338] = 23;
	v->a[189339] = sym_file_descriptor;
	small_parse_table_9467(v);
}

void	small_parse_table_9467(t_small_parse_table_array *v)
{
	v->a[189340] = sym__concat;
	v->a[189341] = sym_variable_name;
	v->a[189342] = sym_test_operator;
	v->a[189343] = sym__brace_start;
	v->a[189344] = anon_sym_LPAREN_LPAREN;
	v->a[189345] = anon_sym_GT_GT;
	v->a[189346] = anon_sym_AMP_GT_GT;
	v->a[189347] = anon_sym_GT_PIPE;
	v->a[189348] = anon_sym_LT_AMP_DASH;
	v->a[189349] = anon_sym_GT_AMP_DASH;
	v->a[189350] = anon_sym_LT_LT_LT;
	v->a[189351] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[189352] = anon_sym_DOLLAR_LBRACK;
	v->a[189353] = aux_sym_concatenation_token1;
	v->a[189354] = sym__special_character;
	v->a[189355] = anon_sym_DQUOTE;
	v->a[189356] = sym_raw_string;
	v->a[189357] = sym_ansi_c_string;
	v->a[189358] = anon_sym_DOLLAR_LBRACE;
	v->a[189359] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_9468(v);
}

void	small_parse_table_9468(t_small_parse_table_array *v)
{
	v->a[189360] = anon_sym_LT_LPAREN;
	v->a[189361] = anon_sym_GT_LPAREN;
	v->a[189362] = 23;
	v->a[189363] = actions(3);
	v->a[189364] = 1;
	v->a[189365] = sym_comment;
	v->a[189366] = actions(8134);
	v->a[189367] = 1;
	v->a[189368] = sym_word;
	v->a[189369] = actions(8138);
	v->a[189370] = 1;
	v->a[189371] = anon_sym_LPAREN;
	v->a[189372] = actions(8140);
	v->a[189373] = 1;
	v->a[189374] = anon_sym_DOLLAR_LBRACK;
	v->a[189375] = actions(8142);
	v->a[189376] = 1;
	v->a[189377] = anon_sym_DOLLAR;
	v->a[189378] = actions(8144);
	v->a[189379] = 1;
	small_parse_table_9469(v);
}

void	small_parse_table_9469(t_small_parse_table_array *v)
{
	v->a[189380] = sym__special_character;
	v->a[189381] = actions(8146);
	v->a[189382] = 1;
	v->a[189383] = anon_sym_DQUOTE;
	v->a[189384] = actions(8150);
	v->a[189385] = 1;
	v->a[189386] = aux_sym_number_token1;
	v->a[189387] = actions(8152);
	v->a[189388] = 1;
	v->a[189389] = aux_sym_number_token2;
	v->a[189390] = actions(8154);
	v->a[189391] = 1;
	v->a[189392] = anon_sym_DOLLAR_LBRACE;
	v->a[189393] = actions(8156);
	v->a[189394] = 1;
	v->a[189395] = anon_sym_DOLLAR_LPAREN;
	v->a[189396] = actions(8158);
	v->a[189397] = 1;
	v->a[189398] = anon_sym_BQUOTE;
	v->a[189399] = actions(8160);
	small_parse_table_9470(v);
}

/* EOF small_parse_table_1893.c */
