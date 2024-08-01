/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_463.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2315(t_small_parse_table_array *v)
{
	v->a[46300] = anon_sym_SEMI;
	v->a[46301] = 3;
	v->a[46302] = actions(3);
	v->a[46303] = 1;
	v->a[46304] = sym_comment;
	v->a[46305] = actions(2085);
	v->a[46306] = 2;
	v->a[46307] = ts_builtin_sym_end;
	v->a[46308] = aux_sym_heredoc_redirect_token1;
	v->a[46309] = actions(2087);
	v->a[46310] = 11;
	v->a[46311] = anon_sym_PIPE;
	v->a[46312] = anon_sym_RPAREN;
	v->a[46313] = anon_sym_SEMI_SEMI;
	v->a[46314] = anon_sym_AMP_AMP;
	v->a[46315] = anon_sym_PIPE_PIPE;
	v->a[46316] = anon_sym_LT;
	v->a[46317] = anon_sym_GT;
	v->a[46318] = anon_sym_GT_GT;
	v->a[46319] = anon_sym_LT_LT;
	small_parse_table_2316(v);
}

void	small_parse_table_2316(t_small_parse_table_array *v)
{
	v->a[46320] = anon_sym_BQUOTE;
	v->a[46321] = anon_sym_SEMI;
	v->a[46322] = 6;
	v->a[46323] = actions(3);
	v->a[46324] = 1;
	v->a[46325] = sym_comment;
	v->a[46326] = actions(2013);
	v->a[46327] = 1;
	v->a[46328] = sym_string_content;
	v->a[46329] = actions(2017);
	v->a[46330] = 1;
	v->a[46331] = sym_variable_name;
	v->a[46332] = actions(2089);
	v->a[46333] = 1;
	v->a[46334] = anon_sym_DQUOTE;
	v->a[46335] = actions(2015);
	v->a[46336] = 2;
	v->a[46337] = aux_sym__simple_variable_name_token1;
	v->a[46338] = aux_sym__multiline_variable_name_token1;
	v->a[46339] = actions(2009);
	small_parse_table_2317(v);
}

void	small_parse_table_2317(t_small_parse_table_array *v)
{
	v->a[46340] = 8;
	v->a[46341] = anon_sym_BANG;
	v->a[46342] = anon_sym_DASH;
	v->a[46343] = anon_sym_STAR;
	v->a[46344] = anon_sym_QMARK;
	v->a[46345] = anon_sym_DOLLAR;
	v->a[46346] = anon_sym_POUND;
	v->a[46347] = anon_sym_AT;
	v->a[46348] = anon_sym_0;
	v->a[46349] = 5;
	v->a[46350] = actions(3);
	v->a[46351] = 1;
	v->a[46352] = sym_comment;
	v->a[46353] = actions(2065);
	v->a[46354] = 2;
	v->a[46355] = ts_builtin_sym_end;
	v->a[46356] = aux_sym_heredoc_redirect_token1;
	v->a[46357] = state(996);
	v->a[46358] = 2;
	v->a[46359] = sym_file_redirect;
	small_parse_table_2318(v);
}

void	small_parse_table_2318(t_small_parse_table_array *v)
{
	v->a[46360] = aux_sym_redirected_statement_repeat2;
	v->a[46361] = actions(1872);
	v->a[46362] = 3;
	v->a[46363] = anon_sym_LT;
	v->a[46364] = anon_sym_GT;
	v->a[46365] = anon_sym_GT_GT;
	v->a[46366] = actions(2063);
	v->a[46367] = 6;
	v->a[46368] = anon_sym_PIPE;
	v->a[46369] = anon_sym_SEMI_SEMI;
	v->a[46370] = anon_sym_AMP_AMP;
	v->a[46371] = anon_sym_PIPE_PIPE;
	v->a[46372] = anon_sym_LT_LT;
	v->a[46373] = anon_sym_SEMI;
	v->a[46374] = 5;
	v->a[46375] = actions(3);
	v->a[46376] = 1;
	v->a[46377] = sym_comment;
	v->a[46378] = actions(2093);
	v->a[46379] = 1;
	small_parse_table_2319(v);
}

void	small_parse_table_2319(t_small_parse_table_array *v)
{
	v->a[46380] = aux_sym_heredoc_redirect_token1;
	v->a[46381] = state(1004);
	v->a[46382] = 2;
	v->a[46383] = sym_file_redirect;
	v->a[46384] = aux_sym_redirected_statement_repeat2;
	v->a[46385] = actions(1880);
	v->a[46386] = 3;
	v->a[46387] = anon_sym_LT;
	v->a[46388] = anon_sym_GT;
	v->a[46389] = anon_sym_GT_GT;
	v->a[46390] = actions(2091);
	v->a[46391] = 7;
	v->a[46392] = anon_sym_PIPE;
	v->a[46393] = anon_sym_SEMI_SEMI;
	v->a[46394] = anon_sym_AMP_AMP;
	v->a[46395] = anon_sym_PIPE_PIPE;
	v->a[46396] = anon_sym_LT_LT;
	v->a[46397] = anon_sym_BQUOTE;
	v->a[46398] = anon_sym_SEMI;
	v->a[46399] = 8;
	small_parse_table_2320(v);
}

/* EOF small_parse_table_463.c */
