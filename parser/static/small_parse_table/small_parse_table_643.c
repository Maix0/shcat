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
	v->a[64300] = 1;
	v->a[64301] = anon_sym_CARET;
	v->a[64302] = actions(4140);
	v->a[64303] = 1;
	v->a[64304] = anon_sym_AMP;
	v->a[64305] = actions(4150);
	v->a[64306] = 1;
	v->a[64307] = anon_sym_QMARK;
	v->a[64308] = actions(4163);
	v->a[64309] = 1;
	v->a[64310] = anon_sym_RPAREN_RPAREN;
	v->a[64311] = state(3545);
	v->a[64312] = 1;
	v->a[64313] = aux_sym_arithmetic_expansion_repeat1;
	v->a[64314] = actions(4128);
	v->a[64315] = 2;
	v->a[64316] = anon_sym_LT;
	v->a[64317] = anon_sym_GT;
	v->a[64318] = actions(4130);
	v->a[64319] = 2;
	small_parse_table_3216(v);
}

void	small_parse_table_3216(t_small_parse_table_array *v)
{
	v->a[64320] = anon_sym_GT_GT;
	v->a[64321] = anon_sym_LT_LT;
	v->a[64322] = actions(4142);
	v->a[64323] = 2;
	v->a[64324] = anon_sym_EQ_EQ;
	v->a[64325] = anon_sym_BANG_EQ;
	v->a[64326] = actions(4144);
	v->a[64327] = 2;
	v->a[64328] = anon_sym_LT_EQ;
	v->a[64329] = anon_sym_GT_EQ;
	v->a[64330] = actions(4146);
	v->a[64331] = 2;
	v->a[64332] = anon_sym_PLUS;
	v->a[64333] = anon_sym_DASH;
	v->a[64334] = actions(4152);
	v->a[64335] = 2;
	v->a[64336] = anon_sym_PLUS_PLUS2;
	v->a[64337] = anon_sym_DASH_DASH2;
	v->a[64338] = actions(4148);
	v->a[64339] = 3;
	small_parse_table_3217(v);
}

void	small_parse_table_3217(t_small_parse_table_array *v)
{
	v->a[64340] = anon_sym_STAR;
	v->a[64341] = anon_sym_SLASH;
	v->a[64342] = anon_sym_PERCENT;
	v->a[64343] = actions(4136);
	v->a[64344] = 10;
	v->a[64345] = anon_sym_PLUS_EQ;
	v->a[64346] = anon_sym_DASH_EQ;
	v->a[64347] = anon_sym_STAR_EQ;
	v->a[64348] = anon_sym_SLASH_EQ;
	v->a[64349] = anon_sym_PERCENT_EQ;
	v->a[64350] = anon_sym_LT_LT_EQ;
	v->a[64351] = anon_sym_GT_GT_EQ;
	v->a[64352] = anon_sym_AMP_EQ;
	v->a[64353] = anon_sym_CARET_EQ;
	v->a[64354] = anon_sym_PIPE_EQ;
	v->a[64355] = 3;
	v->a[64356] = actions(57);
	v->a[64357] = 1;
	v->a[64358] = sym_comment;
	v->a[64359] = actions(2906);
	small_parse_table_3218(v);
}

void	small_parse_table_3218(t_small_parse_table_array *v)
{
	v->a[64360] = 13;
	v->a[64361] = anon_sym_PIPE;
	v->a[64362] = anon_sym_LT;
	v->a[64363] = anon_sym_GT;
	v->a[64364] = anon_sym_AMP_GT;
	v->a[64365] = anon_sym_LT_AMP;
	v->a[64366] = anon_sym_GT_AMP;
	v->a[64367] = anon_sym_LT_LT;
	v->a[64368] = anon_sym_DOLLAR;
	v->a[64369] = aux_sym_number_token1;
	v->a[64370] = aux_sym_number_token2;
	v->a[64371] = anon_sym_DOLLAR_LPAREN;
	v->a[64372] = anon_sym_BQUOTE;
	v->a[64373] = sym_word;
	v->a[64374] = actions(2908);
	v->a[64375] = 22;
	v->a[64376] = sym_file_descriptor;
	v->a[64377] = sym__concat;
	v->a[64378] = sym_test_operator;
	v->a[64379] = sym__bare_dollar;
	small_parse_table_3219(v);
}

void	small_parse_table_3219(t_small_parse_table_array *v)
{
	v->a[64380] = sym__brace_start;
	v->a[64381] = anon_sym_LPAREN;
	v->a[64382] = anon_sym_PIPE_AMP;
	v->a[64383] = anon_sym_AMP_AMP;
	v->a[64384] = anon_sym_PIPE_PIPE;
	v->a[64385] = anon_sym_GT_GT;
	v->a[64386] = anon_sym_AMP_GT_GT;
	v->a[64387] = anon_sym_GT_PIPE;
	v->a[64388] = anon_sym_LT_AMP_DASH;
	v->a[64389] = anon_sym_GT_AMP_DASH;
	v->a[64390] = anon_sym_LT_LT_DASH;
	v->a[64391] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[64392] = aux_sym_concatenation_token1;
	v->a[64393] = sym__special_character;
	v->a[64394] = anon_sym_DQUOTE;
	v->a[64395] = sym_raw_string;
	v->a[64396] = anon_sym_DOLLAR_LBRACE;
	v->a[64397] = anon_sym_DOLLAR_BQUOTE;
	v->a[64398] = 6;
	v->a[64399] = actions(57);
	small_parse_table_3220(v);
}

/* EOF small_parse_table_643.c */
