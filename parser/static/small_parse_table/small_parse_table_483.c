/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_483.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2415(t_small_parse_table_array *v)
{
	v->a[48300] = anon_sym_DQUOTE;
	v->a[48301] = sym_raw_string;
	v->a[48302] = sym_number;
	v->a[48303] = anon_sym_DOLLAR_LBRACE;
	v->a[48304] = anon_sym_DOLLAR_LPAREN;
	v->a[48305] = anon_sym_BQUOTE;
	v->a[48306] = sym_word;
	v->a[48307] = anon_sym_SEMI;
	v->a[48308] = 5;
	v->a[48309] = actions(3);
	v->a[48310] = 1;
	v->a[48311] = sym_comment;
	v->a[48312] = actions(811);
	v->a[48313] = 1;
	v->a[48314] = sym_variable_name;
	v->a[48315] = actions(1572);
	v->a[48316] = 1;
	v->a[48317] = sym_file_descriptor;
	v->a[48318] = actions(805);
	v->a[48319] = 9;
	small_parse_table_2416(v);
}

void	small_parse_table_2416(t_small_parse_table_array *v)
{
	v->a[48320] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48321] = anon_sym_DOLLAR;
	v->a[48322] = anon_sym_DQUOTE;
	v->a[48323] = sym_raw_string;
	v->a[48324] = sym_number;
	v->a[48325] = anon_sym_DOLLAR_LBRACE;
	v->a[48326] = anon_sym_DOLLAR_LPAREN;
	v->a[48327] = anon_sym_BQUOTE;
	v->a[48328] = sym_word;
	v->a[48329] = actions(1570);
	v->a[48330] = 20;
	v->a[48331] = anon_sym_PIPE;
	v->a[48332] = anon_sym_RPAREN;
	v->a[48333] = anon_sym_SEMI_SEMI;
	v->a[48334] = anon_sym_AMP_AMP;
	v->a[48335] = anon_sym_PIPE_PIPE;
	v->a[48336] = anon_sym_LT;
	v->a[48337] = anon_sym_GT;
	v->a[48338] = anon_sym_GT_GT;
	v->a[48339] = anon_sym_AMP_GT;
	small_parse_table_2417(v);
}

void	small_parse_table_2417(t_small_parse_table_array *v)
{
	v->a[48340] = anon_sym_AMP_GT_GT;
	v->a[48341] = anon_sym_LT_AMP;
	v->a[48342] = anon_sym_GT_AMP;
	v->a[48343] = anon_sym_GT_PIPE;
	v->a[48344] = anon_sym_LT_AMP_DASH;
	v->a[48345] = anon_sym_GT_AMP_DASH;
	v->a[48346] = anon_sym_LT_LT;
	v->a[48347] = anon_sym_LT_LT_DASH;
	v->a[48348] = aux_sym_heredoc_redirect_token1;
	v->a[48349] = anon_sym_AMP;
	v->a[48350] = anon_sym_SEMI;
	v->a[48351] = 17;
	v->a[48352] = actions(3);
	v->a[48353] = 1;
	v->a[48354] = sym_comment;
	v->a[48355] = actions(59);
	v->a[48356] = 1;
	v->a[48357] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48358] = actions(61);
	v->a[48359] = 1;
	small_parse_table_2418(v);
}

void	small_parse_table_2418(t_small_parse_table_array *v)
{
	v->a[48360] = anon_sym_DOLLAR;
	v->a[48361] = actions(63);
	v->a[48362] = 1;
	v->a[48363] = anon_sym_DQUOTE;
	v->a[48364] = actions(67);
	v->a[48365] = 1;
	v->a[48366] = anon_sym_DOLLAR_LBRACE;
	v->a[48367] = actions(69);
	v->a[48368] = 1;
	v->a[48369] = anon_sym_DOLLAR_LPAREN;
	v->a[48370] = actions(71);
	v->a[48371] = 1;
	v->a[48372] = anon_sym_BQUOTE;
	v->a[48373] = actions(377);
	v->a[48374] = 1;
	v->a[48375] = sym_variable_name;
	v->a[48376] = actions(1201);
	v->a[48377] = 1;
	v->a[48378] = sym_file_descriptor;
	v->a[48379] = state(190);
	small_parse_table_2419(v);
}

void	small_parse_table_2419(t_small_parse_table_array *v)
{
	v->a[48380] = 1;
	v->a[48381] = sym_command_name;
	v->a[48382] = state(647);
	v->a[48383] = 1;
	v->a[48384] = sym_concatenation;
	v->a[48385] = state(1477);
	v->a[48386] = 1;
	v->a[48387] = sym_file_redirect;
	v->a[48388] = actions(1199);
	v->a[48389] = 2;
	v->a[48390] = anon_sym_LT_AMP_DASH;
	v->a[48391] = anon_sym_GT_AMP_DASH;
	v->a[48392] = state(1241);
	v->a[48393] = 2;
	v->a[48394] = sym_variable_assignment;
	v->a[48395] = aux_sym_command_repeat1;
	v->a[48396] = actions(65);
	v->a[48397] = 3;
	v->a[48398] = sym_raw_string;
	v->a[48399] = sym_number;
	small_parse_table_2420(v);
}

/* EOF small_parse_table_483.c */
