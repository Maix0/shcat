/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_823.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4115(t_small_parse_table_array *v)
{
	v->a[82300] = anon_sym_SEMI_SEMI_AMP;
	v->a[82301] = anon_sym_PIPE_AMP;
	v->a[82302] = anon_sym_AMP_GT;
	v->a[82303] = anon_sym_AMP_GT_GT;
	v->a[82304] = anon_sym_LT_AMP;
	v->a[82305] = anon_sym_GT_AMP;
	v->a[82306] = anon_sym_GT_PIPE;
	v->a[82307] = anon_sym_LT_AMP_DASH;
	v->a[82308] = anon_sym_GT_AMP_DASH;
	v->a[82309] = anon_sym_LT_LT_DASH;
	v->a[82310] = anon_sym_LT_LT_LT;
	v->a[82311] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[82312] = anon_sym_DOLLAR_LBRACK;
	v->a[82313] = anon_sym_DOLLAR;
	v->a[82314] = sym__special_character;
	v->a[82315] = anon_sym_DQUOTE;
	v->a[82316] = sym_raw_string;
	v->a[82317] = sym_ansi_c_string;
	v->a[82318] = aux_sym_number_token1;
	v->a[82319] = aux_sym_number_token2;
	small_parse_table_4116(v);
}

void	small_parse_table_4116(t_small_parse_table_array *v)
{
	v->a[82320] = anon_sym_DOLLAR_LBRACE;
	v->a[82321] = anon_sym_DOLLAR_LPAREN;
	v->a[82322] = anon_sym_BQUOTE;
	v->a[82323] = anon_sym_DOLLAR_BQUOTE;
	v->a[82324] = anon_sym_LT_LPAREN;
	v->a[82325] = anon_sym_GT_LPAREN;
	v->a[82326] = sym_word;
	v->a[82327] = 27;
	v->a[82328] = actions(71);
	v->a[82329] = 1;
	v->a[82330] = sym_comment;
	v->a[82331] = actions(1131);
	v->a[82332] = 1;
	v->a[82333] = anon_sym_LPAREN;
	v->a[82334] = actions(1141);
	v->a[82335] = 1;
	v->a[82336] = anon_sym_DOLLAR_LBRACK;
	v->a[82337] = actions(1145);
	v->a[82338] = 1;
	v->a[82339] = anon_sym_DOLLAR;
	small_parse_table_4117(v);
}

void	small_parse_table_4117(t_small_parse_table_array *v)
{
	v->a[82340] = actions(1149);
	v->a[82341] = 1;
	v->a[82342] = anon_sym_DQUOTE;
	v->a[82343] = actions(1153);
	v->a[82344] = 1;
	v->a[82345] = aux_sym_number_token1;
	v->a[82346] = actions(1155);
	v->a[82347] = 1;
	v->a[82348] = aux_sym_number_token2;
	v->a[82349] = actions(1157);
	v->a[82350] = 1;
	v->a[82351] = anon_sym_DOLLAR_LBRACE;
	v->a[82352] = actions(1159);
	v->a[82353] = 1;
	v->a[82354] = anon_sym_DOLLAR_LPAREN;
	v->a[82355] = actions(1163);
	v->a[82356] = 1;
	v->a[82357] = anon_sym_DOLLAR_BQUOTE;
	v->a[82358] = actions(1169);
	v->a[82359] = 1;
	small_parse_table_4118(v);
}

void	small_parse_table_4118(t_small_parse_table_array *v)
{
	v->a[82360] = sym__brace_start;
	v->a[82361] = actions(1187);
	v->a[82362] = 1;
	v->a[82363] = sym_word;
	v->a[82364] = actions(1189);
	v->a[82365] = 1;
	v->a[82366] = anon_sym_BANG;
	v->a[82367] = actions(1195);
	v->a[82368] = 1;
	v->a[82369] = anon_sym_TILDE;
	v->a[82370] = actions(1201);
	v->a[82371] = 1;
	v->a[82372] = sym_test_operator;
	v->a[82373] = actions(3060);
	v->a[82374] = 1;
	v->a[82375] = anon_sym_BQUOTE;
	v->a[82376] = actions(5779);
	v->a[82377] = 1;
	v->a[82378] = sym__special_character;
	v->a[82379] = state(2717);
	small_parse_table_4119(v);
}

void	small_parse_table_4119(t_small_parse_table_array *v)
{
	v->a[82380] = 1;
	v->a[82381] = aux_sym__literal_repeat1;
	v->a[82382] = state(3128);
	v->a[82383] = 1;
	v->a[82384] = sym__expression;
	v->a[82385] = state(7408);
	v->a[82386] = 1;
	v->a[82387] = sym__test_command_binary_expression;
	v->a[82388] = actions(1129);
	v->a[82389] = 2;
	v->a[82390] = anon_sym_LPAREN_LPAREN;
	v->a[82391] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[82392] = actions(1165);
	v->a[82393] = 2;
	v->a[82394] = anon_sym_LT_LPAREN;
	v->a[82395] = anon_sym_GT_LPAREN;
	v->a[82396] = actions(1191);
	v->a[82397] = 2;
	v->a[82398] = anon_sym_PLUS_PLUS2;
	v->a[82399] = anon_sym_DASH_DASH2;
	small_parse_table_4120(v);
}

/* EOF small_parse_table_823.c */
