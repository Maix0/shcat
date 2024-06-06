/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1173.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5865(t_small_parse_table_array *v)
{
	v->a[117300] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[117301] = actions(6885);
	v->a[117302] = 1;
	v->a[117303] = sym__special_character;
	v->a[117304] = actions(6887);
	v->a[117305] = 1;
	v->a[117306] = anon_sym_DQUOTE;
	v->a[117307] = actions(6891);
	v->a[117308] = 1;
	v->a[117309] = anon_sym_DOLLAR_LBRACE;
	v->a[117310] = actions(6893);
	v->a[117311] = 1;
	v->a[117312] = anon_sym_BQUOTE;
	v->a[117313] = actions(6895);
	v->a[117314] = 1;
	v->a[117315] = anon_sym_DOLLAR_BQUOTE;
	v->a[117316] = actions(6897);
	v->a[117317] = 1;
	v->a[117318] = sym__comment_word;
	v->a[117319] = actions(6899);
	small_parse_table_5866(v);
}

void	small_parse_table_5866(t_small_parse_table_array *v)
{
	v->a[117320] = 1;
	v->a[117321] = anon_sym_DOLLAR;
	v->a[117322] = actions(6889);
	v->a[117323] = 3;
	v->a[117324] = sym_test_operator;
	v->a[117325] = sym__bare_dollar;
	v->a[117326] = sym_raw_string;
	v->a[117327] = state(1005);
	v->a[117328] = 7;
	v->a[117329] = sym_arithmetic_expansion;
	v->a[117330] = sym_brace_expression;
	v->a[117331] = sym_string;
	v->a[117332] = sym_number;
	v->a[117333] = sym_simple_expansion;
	v->a[117334] = sym_expansion;
	v->a[117335] = sym_command_substitution;
	v->a[117336] = 17;
	v->a[117337] = actions(57);
	v->a[117338] = 1;
	v->a[117339] = sym_comment;
	small_parse_table_5867(v);
}

void	small_parse_table_5867(t_small_parse_table_array *v)
{
	v->a[117340] = actions(6390);
	v->a[117341] = 1;
	v->a[117342] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[117343] = actions(6392);
	v->a[117344] = 1;
	v->a[117345] = anon_sym_DOLLAR;
	v->a[117346] = actions(6394);
	v->a[117347] = 1;
	v->a[117348] = sym__special_character;
	v->a[117349] = actions(6396);
	v->a[117350] = 1;
	v->a[117351] = anon_sym_DQUOTE;
	v->a[117352] = actions(6400);
	v->a[117353] = 1;
	v->a[117354] = aux_sym_number_token1;
	v->a[117355] = actions(6402);
	v->a[117356] = 1;
	v->a[117357] = aux_sym_number_token2;
	v->a[117358] = actions(6404);
	v->a[117359] = 1;
	small_parse_table_5868(v);
}

void	small_parse_table_5868(t_small_parse_table_array *v)
{
	v->a[117360] = anon_sym_DOLLAR_LBRACE;
	v->a[117361] = actions(6406);
	v->a[117362] = 1;
	v->a[117363] = anon_sym_DOLLAR_LPAREN;
	v->a[117364] = actions(6408);
	v->a[117365] = 1;
	v->a[117366] = anon_sym_BQUOTE;
	v->a[117367] = actions(6410);
	v->a[117368] = 1;
	v->a[117369] = anon_sym_DOLLAR_BQUOTE;
	v->a[117370] = actions(6412);
	v->a[117371] = 1;
	v->a[117372] = sym__brace_start;
	v->a[117373] = actions(6901);
	v->a[117374] = 1;
	v->a[117375] = sym_word;
	v->a[117376] = state(3249);
	v->a[117377] = 1;
	v->a[117378] = aux_sym__literal_repeat1;
	v->a[117379] = state(3397);
	small_parse_table_5869(v);
}

void	small_parse_table_5869(t_small_parse_table_array *v)
{
	v->a[117380] = 1;
	v->a[117381] = sym_concatenation;
	v->a[117382] = actions(6903);
	v->a[117383] = 2;
	v->a[117384] = sym_test_operator;
	v->a[117385] = sym_raw_string;
	v->a[117386] = state(3233);
	v->a[117387] = 7;
	v->a[117388] = sym_arithmetic_expansion;
	v->a[117389] = sym_brace_expression;
	v->a[117390] = sym_string;
	v->a[117391] = sym_number;
	v->a[117392] = sym_simple_expansion;
	v->a[117393] = sym_expansion;
	v->a[117394] = sym_command_substitution;
	v->a[117395] = 16;
	v->a[117396] = actions(3);
	v->a[117397] = 1;
	v->a[117398] = sym_comment;
	v->a[117399] = actions(5407);
	small_parse_table_5870(v);
}

/* EOF small_parse_table_1173.c */
