/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_653.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3265(t_small_parse_table_array *v)
{
	v->a[65300] = 2;
	v->a[65301] = anon_sym_LT;
	v->a[65302] = anon_sym_GT;
	v->a[65303] = actions(4130);
	v->a[65304] = 2;
	v->a[65305] = anon_sym_GT_GT;
	v->a[65306] = anon_sym_LT_LT;
	v->a[65307] = actions(4142);
	v->a[65308] = 2;
	v->a[65309] = anon_sym_EQ_EQ;
	v->a[65310] = anon_sym_BANG_EQ;
	v->a[65311] = actions(4144);
	v->a[65312] = 2;
	v->a[65313] = anon_sym_LT_EQ;
	v->a[65314] = anon_sym_GT_EQ;
	v->a[65315] = actions(4146);
	v->a[65316] = 2;
	v->a[65317] = anon_sym_PLUS;
	v->a[65318] = anon_sym_DASH;
	v->a[65319] = actions(4152);
	small_parse_table_3266(v);
}

void	small_parse_table_3266(t_small_parse_table_array *v)
{
	v->a[65320] = 2;
	v->a[65321] = anon_sym_PLUS_PLUS2;
	v->a[65322] = anon_sym_DASH_DASH2;
	v->a[65323] = actions(4148);
	v->a[65324] = 3;
	v->a[65325] = anon_sym_STAR;
	v->a[65326] = anon_sym_SLASH;
	v->a[65327] = anon_sym_PERCENT;
	v->a[65328] = actions(4136);
	v->a[65329] = 10;
	v->a[65330] = anon_sym_PLUS_EQ;
	v->a[65331] = anon_sym_DASH_EQ;
	v->a[65332] = anon_sym_STAR_EQ;
	v->a[65333] = anon_sym_SLASH_EQ;
	v->a[65334] = anon_sym_PERCENT_EQ;
	v->a[65335] = anon_sym_LT_LT_EQ;
	v->a[65336] = anon_sym_GT_GT_EQ;
	v->a[65337] = anon_sym_AMP_EQ;
	v->a[65338] = anon_sym_CARET_EQ;
	v->a[65339] = anon_sym_PIPE_EQ;
	small_parse_table_3267(v);
}

void	small_parse_table_3267(t_small_parse_table_array *v)
{
	v->a[65340] = 6;
	v->a[65341] = actions(57);
	v->a[65342] = 1;
	v->a[65343] = sym_comment;
	v->a[65344] = state(1913);
	v->a[65345] = 1;
	v->a[65346] = aux_sym__literal_repeat1;
	v->a[65347] = state(2038);
	v->a[65348] = 1;
	v->a[65349] = sym_concatenation;
	v->a[65350] = state(1803);
	v->a[65351] = 7;
	v->a[65352] = sym_arithmetic_expansion;
	v->a[65353] = sym_brace_expression;
	v->a[65354] = sym_string;
	v->a[65355] = sym_number;
	v->a[65356] = sym_simple_expansion;
	v->a[65357] = sym_expansion;
	v->a[65358] = sym_command_substitution;
	v->a[65359] = actions(1528);
	small_parse_table_3268(v);
}

void	small_parse_table_3268(t_small_parse_table_array *v)
{
	v->a[65360] = 10;
	v->a[65361] = anon_sym_LT;
	v->a[65362] = anon_sym_GT;
	v->a[65363] = anon_sym_AMP_GT;
	v->a[65364] = anon_sym_LT_AMP;
	v->a[65365] = anon_sym_GT_AMP;
	v->a[65366] = anon_sym_DOLLAR;
	v->a[65367] = aux_sym_number_token1;
	v->a[65368] = aux_sym_number_token2;
	v->a[65369] = anon_sym_DOLLAR_LPAREN;
	v->a[65370] = sym_word;
	v->a[65371] = actions(1530);
	v->a[65372] = 16;
	v->a[65373] = sym_file_descriptor;
	v->a[65374] = sym_variable_name;
	v->a[65375] = sym_test_operator;
	v->a[65376] = sym__brace_start;
	v->a[65377] = anon_sym_GT_GT;
	v->a[65378] = anon_sym_AMP_GT_GT;
	v->a[65379] = anon_sym_GT_PIPE;
	small_parse_table_3269(v);
}

void	small_parse_table_3269(t_small_parse_table_array *v)
{
	v->a[65380] = anon_sym_LT_AMP_DASH;
	v->a[65381] = anon_sym_GT_AMP_DASH;
	v->a[65382] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65383] = sym__special_character;
	v->a[65384] = anon_sym_DQUOTE;
	v->a[65385] = sym_raw_string;
	v->a[65386] = anon_sym_DOLLAR_LBRACE;
	v->a[65387] = anon_sym_BQUOTE;
	v->a[65388] = anon_sym_DOLLAR_BQUOTE;
	v->a[65389] = 6;
	v->a[65390] = actions(3);
	v->a[65391] = 1;
	v->a[65392] = sym_comment;
	v->a[65393] = actions(3613);
	v->a[65394] = 1;
	v->a[65395] = aux_sym_concatenation_token1;
	v->a[65396] = actions(3674);
	v->a[65397] = 1;
	v->a[65398] = sym__concat;
	v->a[65399] = state(1405);
	small_parse_table_3270(v);
}

/* EOF small_parse_table_653.c */
