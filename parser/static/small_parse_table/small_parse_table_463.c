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
	v->a[46300] = sym__concat;
	v->a[46301] = state(765);
	v->a[46302] = 1;
	v->a[46303] = aux_sym_concatenation_repeat1;
	v->a[46304] = actions(1095);
	v->a[46305] = 2;
	v->a[46306] = sym_file_descriptor;
	v->a[46307] = sym__bare_dollar;
	v->a[46308] = actions(1097);
	v->a[46309] = 24;
	v->a[46310] = anon_sym_LPAREN;
	v->a[46311] = anon_sym_PIPE;
	v->a[46312] = anon_sym_AMP_AMP;
	v->a[46313] = anon_sym_PIPE_PIPE;
	v->a[46314] = anon_sym_LT;
	v->a[46315] = anon_sym_GT;
	v->a[46316] = anon_sym_GT_GT;
	v->a[46317] = anon_sym_LT_AMP;
	v->a[46318] = anon_sym_GT_AMP;
	v->a[46319] = anon_sym_GT_PIPE;
	small_parse_table_2316(v);
}

void	small_parse_table_2316(t_small_parse_table_array *v)
{
	v->a[46320] = anon_sym_LT_AMP_DASH;
	v->a[46321] = anon_sym_GT_AMP_DASH;
	v->a[46322] = anon_sym_LT_LT;
	v->a[46323] = anon_sym_LT_LT_DASH;
	v->a[46324] = aux_sym_heredoc_redirect_token1;
	v->a[46325] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46326] = anon_sym_DOLLAR;
	v->a[46327] = anon_sym_DQUOTE;
	v->a[46328] = sym_raw_string;
	v->a[46329] = sym_number;
	v->a[46330] = anon_sym_DOLLAR_LBRACE;
	v->a[46331] = anon_sym_DOLLAR_LPAREN;
	v->a[46332] = anon_sym_BQUOTE;
	v->a[46333] = sym_word;
	v->a[46334] = 6;
	v->a[46335] = actions(3);
	v->a[46336] = 1;
	v->a[46337] = sym_comment;
	v->a[46338] = actions(1530);
	v->a[46339] = 1;
	small_parse_table_2317(v);
}

void	small_parse_table_2317(t_small_parse_table_array *v)
{
	v->a[46340] = sym_file_descriptor;
	v->a[46341] = actions(1533);
	v->a[46342] = 1;
	v->a[46343] = sym_variable_name;
	v->a[46344] = actions(1527);
	v->a[46345] = 8;
	v->a[46346] = anon_sym_LT;
	v->a[46347] = anon_sym_GT;
	v->a[46348] = anon_sym_GT_GT;
	v->a[46349] = anon_sym_LT_AMP;
	v->a[46350] = anon_sym_GT_AMP;
	v->a[46351] = anon_sym_GT_PIPE;
	v->a[46352] = anon_sym_LT_AMP_DASH;
	v->a[46353] = anon_sym_GT_AMP_DASH;
	v->a[46354] = actions(1520);
	v->a[46355] = 9;
	v->a[46356] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46357] = anon_sym_DOLLAR;
	v->a[46358] = anon_sym_DQUOTE;
	v->a[46359] = sym_raw_string;
	small_parse_table_2318(v);
}

void	small_parse_table_2318(t_small_parse_table_array *v)
{
	v->a[46360] = sym_number;
	v->a[46361] = anon_sym_DOLLAR_LBRACE;
	v->a[46362] = anon_sym_DOLLAR_LPAREN;
	v->a[46363] = anon_sym_BQUOTE;
	v->a[46364] = sym_word;
	v->a[46365] = actions(1522);
	v->a[46366] = 10;
	v->a[46367] = anon_sym_PIPE;
	v->a[46368] = anon_sym_RPAREN;
	v->a[46369] = anon_sym_SEMI_SEMI;
	v->a[46370] = anon_sym_AMP_AMP;
	v->a[46371] = anon_sym_PIPE_PIPE;
	v->a[46372] = anon_sym_LT_LT;
	v->a[46373] = anon_sym_LT_LT_DASH;
	v->a[46374] = aux_sym_heredoc_redirect_token1;
	v->a[46375] = anon_sym_AMP;
	v->a[46376] = anon_sym_SEMI;
	v->a[46377] = 17;
	v->a[46378] = actions(3);
	v->a[46379] = 1;
	small_parse_table_2319(v);
}

void	small_parse_table_2319(t_small_parse_table_array *v)
{
	v->a[46380] = sym_comment;
	v->a[46381] = actions(59);
	v->a[46382] = 1;
	v->a[46383] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46384] = actions(61);
	v->a[46385] = 1;
	v->a[46386] = anon_sym_DOLLAR;
	v->a[46387] = actions(63);
	v->a[46388] = 1;
	v->a[46389] = anon_sym_DQUOTE;
	v->a[46390] = actions(67);
	v->a[46391] = 1;
	v->a[46392] = anon_sym_DOLLAR_LBRACE;
	v->a[46393] = actions(69);
	v->a[46394] = 1;
	v->a[46395] = anon_sym_DOLLAR_LPAREN;
	v->a[46396] = actions(71);
	v->a[46397] = 1;
	v->a[46398] = anon_sym_BQUOTE;
	v->a[46399] = actions(377);
	small_parse_table_2320(v);
}

/* EOF small_parse_table_463.c */
