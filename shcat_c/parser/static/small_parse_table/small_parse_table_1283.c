/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1283.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6415(t_small_parse_table_array *v)
{
	v->a[128300] = anon_sym_PLUS;
	v->a[128301] = anon_sym_DASH;
	v->a[128302] = anon_sym_STAR;
	v->a[128303] = anon_sym_SLASH;
	v->a[128304] = anon_sym_PERCENT;
	v->a[128305] = anon_sym_STAR_STAR;
	v->a[128306] = actions(1294);
	v->a[128307] = 27;
	v->a[128308] = sym__concat;
	v->a[128309] = sym_test_operator;
	v->a[128310] = anon_sym_RPAREN_RPAREN;
	v->a[128311] = anon_sym_PLUS_PLUS;
	v->a[128312] = anon_sym_DASH_DASH;
	v->a[128313] = anon_sym_PLUS_EQ;
	v->a[128314] = anon_sym_DASH_EQ;
	v->a[128315] = anon_sym_STAR_EQ;
	v->a[128316] = anon_sym_SLASH_EQ;
	v->a[128317] = anon_sym_PERCENT_EQ;
	v->a[128318] = anon_sym_STAR_STAR_EQ;
	v->a[128319] = anon_sym_LT_LT_EQ;
	small_parse_table_6416(v);
}

void	small_parse_table_6416(t_small_parse_table_array *v)
{
	v->a[128320] = anon_sym_GT_GT_EQ;
	v->a[128321] = anon_sym_AMP_EQ;
	v->a[128322] = anon_sym_CARET_EQ;
	v->a[128323] = anon_sym_PIPE_EQ;
	v->a[128324] = anon_sym_PIPE_PIPE;
	v->a[128325] = anon_sym_AMP_AMP;
	v->a[128326] = anon_sym_EQ_EQ;
	v->a[128327] = anon_sym_BANG_EQ;
	v->a[128328] = anon_sym_LT_EQ;
	v->a[128329] = anon_sym_GT_EQ;
	v->a[128330] = anon_sym_RBRACK_RBRACK;
	v->a[128331] = anon_sym_EQ_TILDE;
	v->a[128332] = anon_sym_QMARK;
	v->a[128333] = anon_sym_COLON;
	v->a[128334] = aux_sym_concatenation_token1;
	v->a[128335] = 5;
	v->a[128336] = actions(71);
	v->a[128337] = 1;
	v->a[128338] = sym_comment;
	v->a[128339] = state(2350);
	small_parse_table_6417(v);
}

void	small_parse_table_6417(t_small_parse_table_array *v)
{
	v->a[128340] = 1;
	v->a[128341] = aux_sym_concatenation_repeat1;
	v->a[128342] = actions(6514);
	v->a[128343] = 2;
	v->a[128344] = sym__concat;
	v->a[128345] = aux_sym_concatenation_token1;
	v->a[128346] = actions(5373);
	v->a[128347] = 13;
	v->a[128348] = anon_sym_PIPE;
	v->a[128349] = anon_sym_LT;
	v->a[128350] = anon_sym_GT;
	v->a[128351] = anon_sym_LT_LT;
	v->a[128352] = anon_sym_AMP_GT;
	v->a[128353] = anon_sym_LT_AMP;
	v->a[128354] = anon_sym_GT_AMP;
	v->a[128355] = anon_sym_DOLLAR;
	v->a[128356] = aux_sym_number_token1;
	v->a[128357] = aux_sym_number_token2;
	v->a[128358] = anon_sym_DOLLAR_LPAREN;
	v->a[128359] = anon_sym_BQUOTE;
	small_parse_table_6418(v);
}

void	small_parse_table_6418(t_small_parse_table_array *v)
{
	v->a[128360] = sym_word;
	v->a[128361] = actions(5375);
	v->a[128362] = 25;
	v->a[128363] = sym_file_descriptor;
	v->a[128364] = sym_variable_name;
	v->a[128365] = sym_test_operator;
	v->a[128366] = sym__brace_start;
	v->a[128367] = anon_sym_LPAREN_LPAREN;
	v->a[128368] = anon_sym_PIPE_PIPE;
	v->a[128369] = anon_sym_AMP_AMP;
	v->a[128370] = anon_sym_GT_GT;
	v->a[128371] = anon_sym_PIPE_AMP;
	v->a[128372] = anon_sym_AMP_GT_GT;
	v->a[128373] = anon_sym_GT_PIPE;
	v->a[128374] = anon_sym_LT_AMP_DASH;
	v->a[128375] = anon_sym_GT_AMP_DASH;
	v->a[128376] = anon_sym_LT_LT_DASH;
	v->a[128377] = anon_sym_LT_LT_LT;
	v->a[128378] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[128379] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_6419(v);
}

void	small_parse_table_6419(t_small_parse_table_array *v)
{
	v->a[128380] = sym__special_character;
	v->a[128381] = anon_sym_DQUOTE;
	v->a[128382] = sym_raw_string;
	v->a[128383] = sym_ansi_c_string;
	v->a[128384] = anon_sym_DOLLAR_LBRACE;
	v->a[128385] = anon_sym_DOLLAR_BQUOTE;
	v->a[128386] = anon_sym_LT_LPAREN;
	v->a[128387] = anon_sym_GT_LPAREN;
	v->a[128388] = 6;
	v->a[128389] = actions(71);
	v->a[128390] = 1;
	v->a[128391] = sym_comment;
	v->a[128392] = actions(6526);
	v->a[128393] = 1;
	v->a[128394] = aux_sym_concatenation_token1;
	v->a[128395] = actions(6650);
	v->a[128396] = 1;
	v->a[128397] = sym__concat;
	v->a[128398] = state(2425);
	v->a[128399] = 1;
	small_parse_table_6420(v);
}

/* EOF small_parse_table_1283.c */
