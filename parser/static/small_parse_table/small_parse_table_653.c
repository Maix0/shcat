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
	v->a[65300] = anon_sym_DOLLAR_LPAREN;
	v->a[65301] = actions(2514);
	v->a[65302] = 1;
	v->a[65303] = anon_sym_BQUOTE;
	v->a[65304] = actions(2558);
	v->a[65305] = 1;
	v->a[65306] = anon_sym_DOLLAR;
	v->a[65307] = actions(2560);
	v->a[65308] = 1;
	v->a[65309] = sym__comment_word;
	v->a[65310] = actions(2562);
	v->a[65311] = 1;
	v->a[65312] = sym__empty_value;
	v->a[65313] = state(1465);
	v->a[65314] = 1;
	v->a[65315] = sym_concatenation;
	v->a[65316] = actions(2556);
	v->a[65317] = 3;
	v->a[65318] = sym_raw_string;
	v->a[65319] = sym_number;
	small_parse_table_3266(v);
}

void	small_parse_table_3266(t_small_parse_table_array *v)
{
	v->a[65320] = sym_word;
	v->a[65321] = state(1351);
	v->a[65322] = 5;
	v->a[65323] = sym_arithmetic_expansion;
	v->a[65324] = sym_string;
	v->a[65325] = sym_simple_expansion;
	v->a[65326] = sym_expansion;
	v->a[65327] = sym_command_substitution;
	v->a[65328] = 5;
	v->a[65329] = actions(3);
	v->a[65330] = 1;
	v->a[65331] = sym_comment;
	v->a[65332] = actions(2564);
	v->a[65333] = 1;
	v->a[65334] = anon_sym_PIPE;
	v->a[65335] = state(1266);
	v->a[65336] = 1;
	v->a[65337] = aux_sym_pipeline_repeat1;
	v->a[65338] = actions(2033);
	v->a[65339] = 2;
	small_parse_table_3267(v);
}

void	small_parse_table_3267(t_small_parse_table_array *v)
{
	v->a[65340] = sym_file_descriptor;
	v->a[65341] = aux_sym_heredoc_redirect_token1;
	v->a[65342] = actions(2038);
	v->a[65343] = 13;
	v->a[65344] = anon_sym_SEMI_SEMI;
	v->a[65345] = anon_sym_AMP_AMP;
	v->a[65346] = anon_sym_PIPE_PIPE;
	v->a[65347] = anon_sym_LT;
	v->a[65348] = anon_sym_GT;
	v->a[65349] = anon_sym_GT_GT;
	v->a[65350] = anon_sym_LT_AMP;
	v->a[65351] = anon_sym_GT_AMP;
	v->a[65352] = anon_sym_GT_PIPE;
	v->a[65353] = anon_sym_LT_GT;
	v->a[65354] = anon_sym_LT_LT;
	v->a[65355] = anon_sym_LT_LT_DASH;
	v->a[65356] = anon_sym_SEMI;
	v->a[65357] = 10;
	v->a[65358] = actions(3);
	v->a[65359] = 1;
	small_parse_table_3268(v);
}

void	small_parse_table_3268(t_small_parse_table_array *v)
{
	v->a[65360] = sym_comment;
	v->a[65361] = actions(2331);
	v->a[65362] = 1;
	v->a[65363] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65364] = actions(2335);
	v->a[65365] = 1;
	v->a[65366] = anon_sym_DQUOTE;
	v->a[65367] = actions(2337);
	v->a[65368] = 1;
	v->a[65369] = anon_sym_DOLLAR_LBRACE;
	v->a[65370] = actions(2339);
	v->a[65371] = 1;
	v->a[65372] = anon_sym_DOLLAR_LPAREN;
	v->a[65373] = actions(2341);
	v->a[65374] = 1;
	v->a[65375] = anon_sym_BQUOTE;
	v->a[65376] = actions(2343);
	v->a[65377] = 1;
	v->a[65378] = sym__bare_dollar;
	v->a[65379] = actions(2567);
	small_parse_table_3269(v);
}

void	small_parse_table_3269(t_small_parse_table_array *v)
{
	v->a[65380] = 1;
	v->a[65381] = anon_sym_DOLLAR;
	v->a[65382] = actions(2329);
	v->a[65383] = 5;
	v->a[65384] = aux_sym_concatenation_token1;
	v->a[65385] = sym_raw_string;
	v->a[65386] = sym_number;
	v->a[65387] = sym__comment_word;
	v->a[65388] = sym_word;
	v->a[65389] = state(488);
	v->a[65390] = 5;
	v->a[65391] = sym_arithmetic_expansion;
	v->a[65392] = sym_string;
	v->a[65393] = sym_simple_expansion;
	v->a[65394] = sym_expansion;
	v->a[65395] = sym_command_substitution;
	v->a[65396] = 3;
	v->a[65397] = actions(3);
	v->a[65398] = 1;
	v->a[65399] = sym_comment;
	small_parse_table_3270(v);
}

/* EOF small_parse_table_653.c */
