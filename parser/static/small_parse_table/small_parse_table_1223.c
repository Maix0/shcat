/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1223.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6115(t_small_parse_table_array *v)
{
	v->a[122300] = actions(2492);
	v->a[122301] = 1;
	v->a[122302] = anon_sym_DQUOTE;
	v->a[122303] = actions(2496);
	v->a[122304] = 1;
	v->a[122305] = aux_sym_number_token1;
	v->a[122306] = actions(2498);
	v->a[122307] = 1;
	v->a[122308] = aux_sym_number_token2;
	v->a[122309] = actions(2500);
	v->a[122310] = 1;
	v->a[122311] = anon_sym_DOLLAR_LBRACE;
	v->a[122312] = actions(2502);
	v->a[122313] = 1;
	v->a[122314] = anon_sym_DOLLAR_LPAREN;
	v->a[122315] = actions(2504);
	v->a[122316] = 1;
	v->a[122317] = anon_sym_BQUOTE;
	v->a[122318] = actions(2506);
	v->a[122319] = 1;
	small_parse_table_6116(v);
}

void	small_parse_table_6116(t_small_parse_table_array *v)
{
	v->a[122320] = anon_sym_DOLLAR_BQUOTE;
	v->a[122321] = actions(2510);
	v->a[122322] = 1;
	v->a[122323] = sym__brace_start;
	v->a[122324] = actions(6531);
	v->a[122325] = 1;
	v->a[122326] = sym_word;
	v->a[122327] = actions(6535);
	v->a[122328] = 1;
	v->a[122329] = sym__special_character;
	v->a[122330] = actions(6539);
	v->a[122331] = 1;
	v->a[122332] = sym__comment_word;
	v->a[122333] = actions(6537);
	v->a[122334] = 3;
	v->a[122335] = sym_test_operator;
	v->a[122336] = sym__bare_dollar;
	v->a[122337] = sym_raw_string;
	v->a[122338] = state(1596);
	v->a[122339] = 7;
	small_parse_table_6117(v);
}

void	small_parse_table_6117(t_small_parse_table_array *v)
{
	v->a[122340] = sym_arithmetic_expansion;
	v->a[122341] = sym_brace_expression;
	v->a[122342] = sym_string;
	v->a[122343] = sym_number;
	v->a[122344] = sym_simple_expansion;
	v->a[122345] = sym_expansion;
	v->a[122346] = sym_command_substitution;
	v->a[122347] = 16;
	v->a[122348] = actions(3);
	v->a[122349] = 1;
	v->a[122350] = sym_comment;
	v->a[122351] = actions(731);
	v->a[122352] = 1;
	v->a[122353] = anon_sym_DOLLAR;
	v->a[122354] = actions(737);
	v->a[122355] = 1;
	v->a[122356] = aux_sym_number_token1;
	v->a[122357] = actions(739);
	v->a[122358] = 1;
	v->a[122359] = aux_sym_number_token2;
	small_parse_table_6118(v);
}

void	small_parse_table_6118(t_small_parse_table_array *v)
{
	v->a[122360] = actions(743);
	v->a[122361] = 1;
	v->a[122362] = anon_sym_DOLLAR_LPAREN;
	v->a[122363] = actions(755);
	v->a[122364] = 1;
	v->a[122365] = sym__brace_start;
	v->a[122366] = actions(5513);
	v->a[122367] = 1;
	v->a[122368] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[122369] = actions(5517);
	v->a[122370] = 1;
	v->a[122371] = anon_sym_DQUOTE;
	v->a[122372] = actions(5521);
	v->a[122373] = 1;
	v->a[122374] = anon_sym_DOLLAR_LBRACE;
	v->a[122375] = actions(5523);
	v->a[122376] = 1;
	v->a[122377] = anon_sym_BQUOTE;
	v->a[122378] = actions(5525);
	v->a[122379] = 1;
	small_parse_table_6119(v);
}

void	small_parse_table_6119(t_small_parse_table_array *v)
{
	v->a[122380] = anon_sym_DOLLAR_BQUOTE;
	v->a[122381] = actions(6348);
	v->a[122382] = 1;
	v->a[122383] = sym_word;
	v->a[122384] = actions(6352);
	v->a[122385] = 1;
	v->a[122386] = sym__special_character;
	v->a[122387] = actions(6356);
	v->a[122388] = 1;
	v->a[122389] = sym__comment_word;
	v->a[122390] = actions(6354);
	v->a[122391] = 3;
	v->a[122392] = sym_test_operator;
	v->a[122393] = sym__bare_dollar;
	v->a[122394] = sym_raw_string;
	v->a[122395] = state(599);
	v->a[122396] = 7;
	v->a[122397] = sym_arithmetic_expansion;
	v->a[122398] = sym_brace_expression;
	v->a[122399] = sym_string;
	small_parse_table_6120(v);
}

/* EOF small_parse_table_1223.c */
