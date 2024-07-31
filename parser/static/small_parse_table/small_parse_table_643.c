/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_643.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3215(t_small_parse_table_array *v)
{
	v->a[64300] = sym_command_substitution;
	v->a[64301] = 3;
	v->a[64302] = actions(407);
	v->a[64303] = 1;
	v->a[64304] = sym_comment;
	v->a[64305] = actions(1785);
	v->a[64306] = 4;
	v->a[64307] = anon_sym_PIPE;
	v->a[64308] = anon_sym_LT;
	v->a[64309] = anon_sym_GT;
	v->a[64310] = anon_sym_LT_LT;
	v->a[64311] = actions(1783);
	v->a[64312] = 8;
	v->a[64313] = anon_sym_AMP_AMP;
	v->a[64314] = anon_sym_PIPE_PIPE;
	v->a[64315] = anon_sym_GT_GT;
	v->a[64316] = anon_sym_LT_AMP;
	v->a[64317] = anon_sym_GT_AMP;
	v->a[64318] = anon_sym_GT_PIPE;
	v->a[64319] = anon_sym_LT_GT;
	small_parse_table_3216(v);
}

void	small_parse_table_3216(t_small_parse_table_array *v)
{
	v->a[64320] = anon_sym_LT_LT_DASH;
	v->a[64321] = 10;
	v->a[64322] = actions(3);
	v->a[64323] = 1;
	v->a[64324] = sym_comment;
	v->a[64325] = actions(2548);
	v->a[64326] = 1;
	v->a[64327] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[64328] = actions(2554);
	v->a[64329] = 1;
	v->a[64330] = sym_string_content;
	v->a[64331] = actions(2556);
	v->a[64332] = 1;
	v->a[64333] = anon_sym_DOLLAR_LBRACE;
	v->a[64334] = actions(2558);
	v->a[64335] = 1;
	v->a[64336] = anon_sym_DOLLAR_LPAREN;
	v->a[64337] = actions(2560);
	v->a[64338] = 1;
	v->a[64339] = anon_sym_BQUOTE;
	small_parse_table_3217(v);
}

void	small_parse_table_3217(t_small_parse_table_array *v)
{
	v->a[64340] = actions(2841);
	v->a[64341] = 1;
	v->a[64342] = anon_sym_DOLLAR;
	v->a[64343] = actions(2843);
	v->a[64344] = 1;
	v->a[64345] = anon_sym_DQUOTE;
	v->a[64346] = state(1417);
	v->a[64347] = 1;
	v->a[64348] = aux_sym_string_repeat1;
	v->a[64349] = state(1477);
	v->a[64350] = 4;
	v->a[64351] = sym_arithmetic_expansion;
	v->a[64352] = sym_simple_expansion;
	v->a[64353] = sym_expansion;
	v->a[64354] = sym_command_substitution;
	v->a[64355] = 8;
	v->a[64356] = actions(3);
	v->a[64357] = 1;
	v->a[64358] = sym_comment;
	v->a[64359] = actions(2566);
	small_parse_table_3218(v);
}

void	small_parse_table_3218(t_small_parse_table_array *v)
{
	v->a[64360] = 1;
	v->a[64361] = anon_sym_POUND;
	v->a[64362] = actions(2568);
	v->a[64363] = 1;
	v->a[64364] = aux_sym__simple_variable_name_token1;
	v->a[64365] = actions(2570);
	v->a[64366] = 1;
	v->a[64367] = anon_sym_0;
	v->a[64368] = actions(2572);
	v->a[64369] = 1;
	v->a[64370] = sym_variable_name;
	v->a[64371] = actions(2845);
	v->a[64372] = 1;
	v->a[64373] = anon_sym_RBRACE;
	v->a[64374] = state(1676);
	v->a[64375] = 1;
	v->a[64376] = sym__expansion_body;
	v->a[64377] = actions(2564);
	v->a[64378] = 6;
	v->a[64379] = anon_sym_BANG;
	small_parse_table_3219(v);
}

void	small_parse_table_3219(t_small_parse_table_array *v)
{
	v->a[64380] = anon_sym_DASH;
	v->a[64381] = anon_sym_STAR;
	v->a[64382] = anon_sym_QMARK;
	v->a[64383] = anon_sym_DOLLAR;
	v->a[64384] = anon_sym_AT;
	v->a[64385] = 3;
	v->a[64386] = actions(407);
	v->a[64387] = 1;
	v->a[64388] = sym_comment;
	v->a[64389] = actions(1834);
	v->a[64390] = 4;
	v->a[64391] = anon_sym_PIPE;
	v->a[64392] = anon_sym_LT;
	v->a[64393] = anon_sym_GT;
	v->a[64394] = anon_sym_LT_LT;
	v->a[64395] = actions(1832);
	v->a[64396] = 8;
	v->a[64397] = anon_sym_AMP_AMP;
	v->a[64398] = anon_sym_PIPE_PIPE;
	v->a[64399] = anon_sym_GT_GT;
	small_parse_table_3220(v);
}

/* EOF small_parse_table_643.c */
