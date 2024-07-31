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
	v->a[46300] = sym_raw_string;
	v->a[46301] = sym_number;
	v->a[46302] = anon_sym_DOLLAR_LBRACE;
	v->a[46303] = anon_sym_DOLLAR_LPAREN;
	v->a[46304] = anon_sym_BQUOTE;
	v->a[46305] = sym_word;
	v->a[46306] = 10;
	v->a[46307] = actions(3);
	v->a[46308] = 1;
	v->a[46309] = sym_comment;
	v->a[46310] = actions(746);
	v->a[46311] = 1;
	v->a[46312] = anon_sym_PIPE;
	v->a[46313] = actions(752);
	v->a[46314] = 1;
	v->a[46315] = anon_sym_SEMI;
	v->a[46316] = actions(1595);
	v->a[46317] = 1;
	v->a[46318] = aux_sym_heredoc_redirect_token1;
	v->a[46319] = state(477);
	small_parse_table_2316(v);
}

void	small_parse_table_2316(t_small_parse_table_array *v)
{
	v->a[46320] = 1;
	v->a[46321] = sym_terminator;
	v->a[46322] = actions(748);
	v->a[46323] = 2;
	v->a[46324] = anon_sym_AMP_AMP;
	v->a[46325] = anon_sym_PIPE_PIPE;
	v->a[46326] = actions(750);
	v->a[46327] = 2;
	v->a[46328] = anon_sym_LT_LT;
	v->a[46329] = anon_sym_LT_LT_DASH;
	v->a[46330] = actions(842);
	v->a[46331] = 2;
	v->a[46332] = anon_sym_esac;
	v->a[46333] = anon_sym_SEMI_SEMI;
	v->a[46334] = state(931);
	v->a[46335] = 3;
	v->a[46336] = sym_file_redirect;
	v->a[46337] = sym_heredoc_redirect;
	v->a[46338] = aux_sym_redirected_statement_repeat1;
	v->a[46339] = actions(1593);
	small_parse_table_2317(v);
}

void	small_parse_table_2317(t_small_parse_table_array *v)
{
	v->a[46340] = 7;
	v->a[46341] = anon_sym_LT;
	v->a[46342] = anon_sym_GT;
	v->a[46343] = anon_sym_GT_GT;
	v->a[46344] = anon_sym_LT_AMP;
	v->a[46345] = anon_sym_GT_AMP;
	v->a[46346] = anon_sym_GT_PIPE;
	v->a[46347] = anon_sym_LT_GT;
	v->a[46348] = 10;
	v->a[46349] = actions(3);
	v->a[46350] = 1;
	v->a[46351] = sym_comment;
	v->a[46352] = actions(746);
	v->a[46353] = 1;
	v->a[46354] = anon_sym_PIPE;
	v->a[46355] = actions(844);
	v->a[46356] = 1;
	v->a[46357] = ts_builtin_sym_end;
	v->a[46358] = actions(1605);
	v->a[46359] = 1;
	small_parse_table_2318(v);
}

void	small_parse_table_2318(t_small_parse_table_array *v)
{
	v->a[46360] = aux_sym_heredoc_redirect_token1;
	v->a[46361] = state(582);
	v->a[46362] = 1;
	v->a[46363] = sym_terminator;
	v->a[46364] = actions(846);
	v->a[46365] = 2;
	v->a[46366] = anon_sym_SEMI_SEMI;
	v->a[46367] = anon_sym_SEMI;
	v->a[46368] = actions(848);
	v->a[46369] = 2;
	v->a[46370] = anon_sym_AMP_AMP;
	v->a[46371] = anon_sym_PIPE_PIPE;
	v->a[46372] = actions(850);
	v->a[46373] = 2;
	v->a[46374] = anon_sym_LT_LT;
	v->a[46375] = anon_sym_LT_LT_DASH;
	v->a[46376] = state(924);
	v->a[46377] = 3;
	v->a[46378] = sym_file_redirect;
	v->a[46379] = sym_heredoc_redirect;
	small_parse_table_2319(v);
}

void	small_parse_table_2319(t_small_parse_table_array *v)
{
	v->a[46380] = aux_sym_redirected_statement_repeat1;
	v->a[46381] = actions(1603);
	v->a[46382] = 7;
	v->a[46383] = anon_sym_LT;
	v->a[46384] = anon_sym_GT;
	v->a[46385] = anon_sym_GT_GT;
	v->a[46386] = anon_sym_LT_AMP;
	v->a[46387] = anon_sym_GT_AMP;
	v->a[46388] = anon_sym_GT_PIPE;
	v->a[46389] = anon_sym_LT_GT;
	v->a[46390] = 5;
	v->a[46391] = actions(3);
	v->a[46392] = 1;
	v->a[46393] = sym_comment;
	v->a[46394] = actions(1021);
	v->a[46395] = 1;
	v->a[46396] = sym_variable_name;
	v->a[46397] = actions(1019);
	v->a[46398] = 2;
	v->a[46399] = aux_sym__simple_variable_name_token1;
	small_parse_table_2320(v);
}

/* EOF small_parse_table_463.c */
