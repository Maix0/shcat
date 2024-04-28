/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2003.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10015(t_small_parse_table_array *v)
{
	v->a[200300] = sym__comment_word;
	v->a[200301] = actions(8842);
	v->a[200302] = 3;
	v->a[200303] = sym__bare_dollar;
	v->a[200304] = sym_raw_string;
	v->a[200305] = sym_ansi_c_string;
	v->a[200306] = state(2730);
	v->a[200307] = 9;
	v->a[200308] = sym_arithmetic_expansion;
	v->a[200309] = sym_brace_expression;
	v->a[200310] = sym_string;
	v->a[200311] = sym_translated_string;
	v->a[200312] = sym_number;
	v->a[200313] = sym_simple_expansion;
	v->a[200314] = sym_expansion;
	v->a[200315] = sym_command_substitution;
	v->a[200316] = sym_process_substitution;
	v->a[200317] = 8;
	v->a[200318] = actions(3);
	v->a[200319] = 1;
	small_parse_table_10016(v);
}

void	small_parse_table_10016(t_small_parse_table_array *v)
{
	v->a[200320] = sym_comment;
	v->a[200321] = actions(1241);
	v->a[200322] = 1;
	v->a[200323] = sym_file_descriptor;
	v->a[200324] = actions(9150);
	v->a[200325] = 1;
	v->a[200326] = anon_sym_DQUOTE;
	v->a[200327] = actions(9154);
	v->a[200328] = 1;
	v->a[200329] = sym_variable_name;
	v->a[200330] = state(5537);
	v->a[200331] = 1;
	v->a[200332] = sym_string;
	v->a[200333] = actions(9152);
	v->a[200334] = 2;
	v->a[200335] = aux_sym__simple_variable_name_token1;
	v->a[200336] = aux_sym__multiline_variable_name_token1;
	v->a[200337] = actions(9148);
	v->a[200338] = 9;
	v->a[200339] = anon_sym_DASH;
	small_parse_table_10017(v);
}

void	small_parse_table_10017(t_small_parse_table_array *v)
{
	v->a[200340] = anon_sym_STAR;
	v->a[200341] = anon_sym_BANG;
	v->a[200342] = anon_sym_QMARK;
	v->a[200343] = anon_sym_DOLLAR;
	v->a[200344] = anon_sym_POUND;
	v->a[200345] = anon_sym_AT2;
	v->a[200346] = anon_sym_0;
	v->a[200347] = anon_sym__;
	v->a[200348] = actions(1239);
	v->a[200349] = 16;
	v->a[200350] = anon_sym_PIPE_PIPE;
	v->a[200351] = anon_sym_AMP_AMP;
	v->a[200352] = anon_sym_PIPE;
	v->a[200353] = anon_sym_LT;
	v->a[200354] = anon_sym_GT;
	v->a[200355] = anon_sym_LT_LT;
	v->a[200356] = anon_sym_GT_GT;
	v->a[200357] = anon_sym_PIPE_AMP;
	v->a[200358] = anon_sym_AMP_GT;
	v->a[200359] = anon_sym_AMP_GT_GT;
	small_parse_table_10018(v);
}

void	small_parse_table_10018(t_small_parse_table_array *v)
{
	v->a[200360] = anon_sym_LT_AMP;
	v->a[200361] = anon_sym_GT_AMP;
	v->a[200362] = anon_sym_GT_PIPE;
	v->a[200363] = anon_sym_LT_AMP_DASH;
	v->a[200364] = anon_sym_GT_AMP_DASH;
	v->a[200365] = anon_sym_LT_LT_DASH;
	v->a[200366] = 20;
	v->a[200367] = actions(71);
	v->a[200368] = 1;
	v->a[200369] = sym_comment;
	v->a[200370] = actions(9114);
	v->a[200371] = 1;
	v->a[200372] = sym_word;
	v->a[200373] = actions(9118);
	v->a[200374] = 1;
	v->a[200375] = anon_sym_DOLLAR_LBRACK;
	v->a[200376] = actions(9120);
	v->a[200377] = 1;
	v->a[200378] = anon_sym_DOLLAR;
	v->a[200379] = actions(9122);
	small_parse_table_10019(v);
}

void	small_parse_table_10019(t_small_parse_table_array *v)
{
	v->a[200380] = 1;
	v->a[200381] = sym__special_character;
	v->a[200382] = actions(9124);
	v->a[200383] = 1;
	v->a[200384] = anon_sym_DQUOTE;
	v->a[200385] = actions(9128);
	v->a[200386] = 1;
	v->a[200387] = aux_sym_number_token1;
	v->a[200388] = actions(9130);
	v->a[200389] = 1;
	v->a[200390] = aux_sym_number_token2;
	v->a[200391] = actions(9132);
	v->a[200392] = 1;
	v->a[200393] = anon_sym_DOLLAR_LBRACE;
	v->a[200394] = actions(9134);
	v->a[200395] = 1;
	v->a[200396] = anon_sym_DOLLAR_LPAREN;
	v->a[200397] = actions(9136);
	v->a[200398] = 1;
	v->a[200399] = anon_sym_BQUOTE;
	small_parse_table_10020(v);
}

/* EOF small_parse_table_2003.c */
