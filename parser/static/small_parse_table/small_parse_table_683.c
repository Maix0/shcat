/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_683.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3415(t_small_parse_table_array *v)
{
	v->a[68300] = sym__comment_word;
	v->a[68301] = sym_word;
	v->a[68302] = state(903);
	v->a[68303] = 5;
	v->a[68304] = sym_arithmetic_expansion;
	v->a[68305] = sym_string;
	v->a[68306] = sym_simple_expansion;
	v->a[68307] = sym_expansion;
	v->a[68308] = sym_command_substitution;
	v->a[68309] = 12;
	v->a[68310] = actions(3);
	v->a[68311] = 1;
	v->a[68312] = sym_comment;
	v->a[68313] = actions(2444);
	v->a[68314] = 1;
	v->a[68315] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68316] = actions(2448);
	v->a[68317] = 1;
	v->a[68318] = anon_sym_DQUOTE;
	v->a[68319] = actions(2450);
	small_parse_table_3416(v);
}

void	small_parse_table_3416(t_small_parse_table_array *v)
{
	v->a[68320] = 1;
	v->a[68321] = anon_sym_DOLLAR_LBRACE;
	v->a[68322] = actions(2452);
	v->a[68323] = 1;
	v->a[68324] = anon_sym_DOLLAR_LPAREN;
	v->a[68325] = actions(2454);
	v->a[68326] = 1;
	v->a[68327] = anon_sym_BQUOTE;
	v->a[68328] = actions(2553);
	v->a[68329] = 1;
	v->a[68330] = anon_sym_DOLLAR;
	v->a[68331] = actions(2596);
	v->a[68332] = 1;
	v->a[68333] = sym__comment_word;
	v->a[68334] = actions(2598);
	v->a[68335] = 1;
	v->a[68336] = sym__empty_value;
	v->a[68337] = state(664);
	v->a[68338] = 1;
	v->a[68339] = sym_concatenation;
	small_parse_table_3417(v);
}

void	small_parse_table_3417(t_small_parse_table_array *v)
{
	v->a[68340] = actions(2701);
	v->a[68341] = 3;
	v->a[68342] = sym_raw_string;
	v->a[68343] = sym_number;
	v->a[68344] = sym_word;
	v->a[68345] = state(406);
	v->a[68346] = 5;
	v->a[68347] = sym_arithmetic_expansion;
	v->a[68348] = sym_string;
	v->a[68349] = sym_simple_expansion;
	v->a[68350] = sym_expansion;
	v->a[68351] = sym_command_substitution;
	v->a[68352] = 12;
	v->a[68353] = actions(3);
	v->a[68354] = 1;
	v->a[68355] = sym_comment;
	v->a[68356] = actions(1067);
	v->a[68357] = 1;
	v->a[68358] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68359] = actions(1069);
	small_parse_table_3418(v);
}

void	small_parse_table_3418(t_small_parse_table_array *v)
{
	v->a[68360] = 1;
	v->a[68361] = anon_sym_DOLLAR;
	v->a[68362] = actions(1071);
	v->a[68363] = 1;
	v->a[68364] = anon_sym_DQUOTE;
	v->a[68365] = actions(1073);
	v->a[68366] = 1;
	v->a[68367] = anon_sym_DOLLAR_LBRACE;
	v->a[68368] = actions(1075);
	v->a[68369] = 1;
	v->a[68370] = anon_sym_DOLLAR_LPAREN;
	v->a[68371] = actions(1077);
	v->a[68372] = 1;
	v->a[68373] = anon_sym_BQUOTE;
	v->a[68374] = actions(2703);
	v->a[68375] = 1;
	v->a[68376] = aux_sym_heredoc_redirect_token1;
	v->a[68377] = state(1331);
	v->a[68378] = 1;
	v->a[68379] = aux_sym__heredoc_command;
	small_parse_table_3419(v);
}

void	small_parse_table_3419(t_small_parse_table_array *v)
{
	v->a[68380] = state(1725);
	v->a[68381] = 1;
	v->a[68382] = sym_concatenation;
	v->a[68383] = actions(1057);
	v->a[68384] = 3;
	v->a[68385] = sym_raw_string;
	v->a[68386] = sym_number;
	v->a[68387] = sym_word;
	v->a[68388] = state(1589);
	v->a[68389] = 5;
	v->a[68390] = sym_arithmetic_expansion;
	v->a[68391] = sym_string;
	v->a[68392] = sym_simple_expansion;
	v->a[68393] = sym_expansion;
	v->a[68394] = sym_command_substitution;
	v->a[68395] = 10;
	v->a[68396] = actions(3);
	v->a[68397] = 1;
	v->a[68398] = sym_comment;
	v->a[68399] = actions(2358);
	small_parse_table_3420(v);
}

/* EOF small_parse_table_683.c */
