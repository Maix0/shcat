/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1193.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5965(t_small_parse_table_array *v)
{
	v->a[119300] = actions(6426);
	v->a[119301] = 1;
	v->a[119302] = sym__special_character;
	v->a[119303] = actions(6430);
	v->a[119304] = 1;
	v->a[119305] = sym__comment_word;
	v->a[119306] = actions(6428);
	v->a[119307] = 3;
	v->a[119308] = sym_test_operator;
	v->a[119309] = sym__bare_dollar;
	v->a[119310] = sym_raw_string;
	v->a[119311] = state(1969);
	v->a[119312] = 7;
	v->a[119313] = sym_arithmetic_expansion;
	v->a[119314] = sym_brace_expression;
	v->a[119315] = sym_string;
	v->a[119316] = sym_number;
	v->a[119317] = sym_simple_expansion;
	v->a[119318] = sym_expansion;
	v->a[119319] = sym_command_substitution;
	small_parse_table_5966(v);
}

void	small_parse_table_5966(t_small_parse_table_array *v)
{
	v->a[119320] = 16;
	v->a[119321] = actions(3);
	v->a[119322] = 1;
	v->a[119323] = sym_comment;
	v->a[119324] = actions(1707);
	v->a[119325] = 1;
	v->a[119326] = aux_sym_number_token1;
	v->a[119327] = actions(1709);
	v->a[119328] = 1;
	v->a[119329] = aux_sym_number_token2;
	v->a[119330] = actions(1713);
	v->a[119331] = 1;
	v->a[119332] = anon_sym_DOLLAR_LPAREN;
	v->a[119333] = actions(1721);
	v->a[119334] = 1;
	v->a[119335] = sym__brace_start;
	v->a[119336] = actions(6743);
	v->a[119337] = 1;
	v->a[119338] = sym_word;
	v->a[119339] = actions(6745);
	small_parse_table_5967(v);
}

void	small_parse_table_5967(t_small_parse_table_array *v)
{
	v->a[119340] = 1;
	v->a[119341] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[119342] = actions(6747);
	v->a[119343] = 1;
	v->a[119344] = sym__special_character;
	v->a[119345] = actions(6749);
	v->a[119346] = 1;
	v->a[119347] = anon_sym_DQUOTE;
	v->a[119348] = actions(6753);
	v->a[119349] = 1;
	v->a[119350] = anon_sym_DOLLAR_LBRACE;
	v->a[119351] = actions(6755);
	v->a[119352] = 1;
	v->a[119353] = anon_sym_BQUOTE;
	v->a[119354] = actions(6757);
	v->a[119355] = 1;
	v->a[119356] = anon_sym_DOLLAR_BQUOTE;
	v->a[119357] = actions(6759);
	v->a[119358] = 1;
	v->a[119359] = sym__comment_word;
	small_parse_table_5968(v);
}

void	small_parse_table_5968(t_small_parse_table_array *v)
{
	v->a[119360] = actions(6979);
	v->a[119361] = 1;
	v->a[119362] = anon_sym_DOLLAR;
	v->a[119363] = actions(6751);
	v->a[119364] = 3;
	v->a[119365] = sym_test_operator;
	v->a[119366] = sym__bare_dollar;
	v->a[119367] = sym_raw_string;
	v->a[119368] = state(1986);
	v->a[119369] = 7;
	v->a[119370] = sym_arithmetic_expansion;
	v->a[119371] = sym_brace_expression;
	v->a[119372] = sym_string;
	v->a[119373] = sym_number;
	v->a[119374] = sym_simple_expansion;
	v->a[119375] = sym_expansion;
	v->a[119376] = sym_command_substitution;
	v->a[119377] = 16;
	v->a[119378] = actions(3);
	v->a[119379] = 1;
	small_parse_table_5969(v);
}

void	small_parse_table_5969(t_small_parse_table_array *v)
{
	v->a[119380] = sym_comment;
	v->a[119381] = actions(5407);
	v->a[119382] = 1;
	v->a[119383] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[119384] = actions(5413);
	v->a[119385] = 1;
	v->a[119386] = anon_sym_DQUOTE;
	v->a[119387] = actions(5417);
	v->a[119388] = 1;
	v->a[119389] = aux_sym_number_token1;
	v->a[119390] = actions(5419);
	v->a[119391] = 1;
	v->a[119392] = aux_sym_number_token2;
	v->a[119393] = actions(5421);
	v->a[119394] = 1;
	v->a[119395] = anon_sym_DOLLAR_LBRACE;
	v->a[119396] = actions(5423);
	v->a[119397] = 1;
	v->a[119398] = anon_sym_DOLLAR_LPAREN;
	v->a[119399] = actions(5425);
	small_parse_table_5970(v);
}

/* EOF small_parse_table_1193.c */
