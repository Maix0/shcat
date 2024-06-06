/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1153.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5765(t_small_parse_table_array *v)
{
	v->a[115300] = actions(6627);
	v->a[115301] = 1;
	v->a[115302] = sym__special_character;
	v->a[115303] = actions(6631);
	v->a[115304] = 1;
	v->a[115305] = sym__comment_word;
	v->a[115306] = actions(6741);
	v->a[115307] = 1;
	v->a[115308] = anon_sym_DOLLAR;
	v->a[115309] = actions(6629);
	v->a[115310] = 3;
	v->a[115311] = sym_test_operator;
	v->a[115312] = sym__bare_dollar;
	v->a[115313] = sym_raw_string;
	v->a[115314] = state(1903);
	v->a[115315] = 7;
	v->a[115316] = sym_arithmetic_expansion;
	v->a[115317] = sym_brace_expression;
	v->a[115318] = sym_string;
	v->a[115319] = sym_number;
	small_parse_table_5766(v);
}

void	small_parse_table_5766(t_small_parse_table_array *v)
{
	v->a[115320] = sym_simple_expansion;
	v->a[115321] = sym_expansion;
	v->a[115322] = sym_command_substitution;
	v->a[115323] = 16;
	v->a[115324] = actions(3);
	v->a[115325] = 1;
	v->a[115326] = sym_comment;
	v->a[115327] = actions(1701);
	v->a[115328] = 1;
	v->a[115329] = anon_sym_DOLLAR;
	v->a[115330] = actions(1707);
	v->a[115331] = 1;
	v->a[115332] = aux_sym_number_token1;
	v->a[115333] = actions(1709);
	v->a[115334] = 1;
	v->a[115335] = aux_sym_number_token2;
	v->a[115336] = actions(1713);
	v->a[115337] = 1;
	v->a[115338] = anon_sym_DOLLAR_LPAREN;
	v->a[115339] = actions(1721);
	small_parse_table_5767(v);
}

void	small_parse_table_5767(t_small_parse_table_array *v)
{
	v->a[115340] = 1;
	v->a[115341] = sym__brace_start;
	v->a[115342] = actions(6743);
	v->a[115343] = 1;
	v->a[115344] = sym_word;
	v->a[115345] = actions(6745);
	v->a[115346] = 1;
	v->a[115347] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[115348] = actions(6747);
	v->a[115349] = 1;
	v->a[115350] = sym__special_character;
	v->a[115351] = actions(6749);
	v->a[115352] = 1;
	v->a[115353] = anon_sym_DQUOTE;
	v->a[115354] = actions(6753);
	v->a[115355] = 1;
	v->a[115356] = anon_sym_DOLLAR_LBRACE;
	v->a[115357] = actions(6755);
	v->a[115358] = 1;
	v->a[115359] = anon_sym_BQUOTE;
	small_parse_table_5768(v);
}

void	small_parse_table_5768(t_small_parse_table_array *v)
{
	v->a[115360] = actions(6757);
	v->a[115361] = 1;
	v->a[115362] = anon_sym_DOLLAR_BQUOTE;
	v->a[115363] = actions(6759);
	v->a[115364] = 1;
	v->a[115365] = sym__comment_word;
	v->a[115366] = actions(6751);
	v->a[115367] = 3;
	v->a[115368] = sym_test_operator;
	v->a[115369] = sym__bare_dollar;
	v->a[115370] = sym_raw_string;
	v->a[115371] = state(1986);
	v->a[115372] = 7;
	v->a[115373] = sym_arithmetic_expansion;
	v->a[115374] = sym_brace_expression;
	v->a[115375] = sym_string;
	v->a[115376] = sym_number;
	v->a[115377] = sym_simple_expansion;
	v->a[115378] = sym_expansion;
	v->a[115379] = sym_command_substitution;
	small_parse_table_5769(v);
}

void	small_parse_table_5769(t_small_parse_table_array *v)
{
	v->a[115380] = 16;
	v->a[115381] = actions(3);
	v->a[115382] = 1;
	v->a[115383] = sym_comment;
	v->a[115384] = actions(2154);
	v->a[115385] = 1;
	v->a[115386] = anon_sym_DOLLAR;
	v->a[115387] = actions(2160);
	v->a[115388] = 1;
	v->a[115389] = aux_sym_number_token1;
	v->a[115390] = actions(2162);
	v->a[115391] = 1;
	v->a[115392] = aux_sym_number_token2;
	v->a[115393] = actions(2166);
	v->a[115394] = 1;
	v->a[115395] = anon_sym_DOLLAR_LPAREN;
	v->a[115396] = actions(2174);
	v->a[115397] = 1;
	v->a[115398] = sym__brace_start;
	v->a[115399] = actions(5989);
	small_parse_table_5770(v);
}

/* EOF small_parse_table_1153.c */
