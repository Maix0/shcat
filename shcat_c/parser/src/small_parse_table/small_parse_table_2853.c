/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2853.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14265(t_small_parse_table_array *v)
{
	v->a[285300] = sym__brace_start;
	v->a[285301] = anon_sym_LPAREN_LPAREN;
	v->a[285302] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[285303] = anon_sym_DOLLAR_LBRACK;
	v->a[285304] = sym__special_character;
	v->a[285305] = anon_sym_DQUOTE;
	v->a[285306] = sym_raw_string;
	v->a[285307] = sym_ansi_c_string;
	v->a[285308] = anon_sym_DOLLAR_LBRACE;
	v->a[285309] = anon_sym_BQUOTE;
	v->a[285310] = anon_sym_DOLLAR_BQUOTE;
	v->a[285311] = anon_sym_LT_LPAREN;
	v->a[285312] = anon_sym_GT_LPAREN;
	v->a[285313] = 6;
	v->a[285314] = actions(3);
	v->a[285315] = 1;
	v->a[285316] = sym_comment;
	v->a[285317] = actions(11651);
	v->a[285318] = 1;
	v->a[285319] = aux_sym_concatenation_token1;
	small_parse_table_14266(v);
}

void	small_parse_table_14266(t_small_parse_table_array *v)
{
	v->a[285320] = actions(11653);
	v->a[285321] = 1;
	v->a[285322] = sym__concat;
	v->a[285323] = state(5392);
	v->a[285324] = 1;
	v->a[285325] = aux_sym_concatenation_repeat1;
	v->a[285326] = actions(2096);
	v->a[285327] = 2;
	v->a[285328] = sym_file_descriptor;
	v->a[285329] = aux_sym_heredoc_redirect_token1;
	v->a[285330] = actions(2094);
	v->a[285331] = 16;
	v->a[285332] = anon_sym_PIPE_PIPE;
	v->a[285333] = anon_sym_AMP_AMP;
	v->a[285334] = anon_sym_PIPE;
	v->a[285335] = anon_sym_LT;
	v->a[285336] = anon_sym_GT;
	v->a[285337] = anon_sym_LT_LT;
	v->a[285338] = anon_sym_GT_GT;
	v->a[285339] = anon_sym_PIPE_AMP;
	small_parse_table_14267(v);
}

void	small_parse_table_14267(t_small_parse_table_array *v)
{
	v->a[285340] = anon_sym_AMP_GT;
	v->a[285341] = anon_sym_AMP_GT_GT;
	v->a[285342] = anon_sym_LT_AMP;
	v->a[285343] = anon_sym_GT_AMP;
	v->a[285344] = anon_sym_GT_PIPE;
	v->a[285345] = anon_sym_LT_AMP_DASH;
	v->a[285346] = anon_sym_GT_AMP_DASH;
	v->a[285347] = anon_sym_LT_LT_DASH;
	v->a[285348] = 3;
	v->a[285349] = actions(71);
	v->a[285350] = 1;
	v->a[285351] = sym_comment;
	v->a[285352] = actions(1328);
	v->a[285353] = 7;
	v->a[285354] = anon_sym_PIPE;
	v->a[285355] = anon_sym_LT;
	v->a[285356] = anon_sym_GT;
	v->a[285357] = anon_sym_LT_LT;
	v->a[285358] = anon_sym_AMP_GT;
	v->a[285359] = anon_sym_LT_AMP;
	small_parse_table_14268(v);
}

void	small_parse_table_14268(t_small_parse_table_array *v)
{
	v->a[285360] = anon_sym_GT_AMP;
	v->a[285361] = actions(1330);
	v->a[285362] = 14;
	v->a[285363] = sym_file_descriptor;
	v->a[285364] = sym__concat;
	v->a[285365] = anon_sym_PIPE_PIPE;
	v->a[285366] = anon_sym_AMP_AMP;
	v->a[285367] = anon_sym_GT_GT;
	v->a[285368] = anon_sym_PIPE_AMP;
	v->a[285369] = anon_sym_RBRACK;
	v->a[285370] = anon_sym_AMP_GT_GT;
	v->a[285371] = anon_sym_GT_PIPE;
	v->a[285372] = anon_sym_LT_AMP_DASH;
	v->a[285373] = anon_sym_GT_AMP_DASH;
	v->a[285374] = anon_sym_LT_LT_DASH;
	v->a[285375] = anon_sym_LT_LT_LT;
	v->a[285376] = aux_sym_concatenation_token1;
	v->a[285377] = 3;
	v->a[285378] = actions(71);
	v->a[285379] = 1;
	small_parse_table_14269(v);
}

void	small_parse_table_14269(t_small_parse_table_array *v)
{
	v->a[285380] = sym_comment;
	v->a[285381] = actions(1292);
	v->a[285382] = 7;
	v->a[285383] = anon_sym_PIPE;
	v->a[285384] = anon_sym_LT;
	v->a[285385] = anon_sym_GT;
	v->a[285386] = anon_sym_LT_LT;
	v->a[285387] = anon_sym_AMP_GT;
	v->a[285388] = anon_sym_LT_AMP;
	v->a[285389] = anon_sym_GT_AMP;
	v->a[285390] = actions(1294);
	v->a[285391] = 14;
	v->a[285392] = sym_file_descriptor;
	v->a[285393] = sym__concat;
	v->a[285394] = anon_sym_PIPE_PIPE;
	v->a[285395] = anon_sym_AMP_AMP;
	v->a[285396] = anon_sym_GT_GT;
	v->a[285397] = anon_sym_PIPE_AMP;
	v->a[285398] = anon_sym_RBRACK;
	v->a[285399] = anon_sym_AMP_GT_GT;
	small_parse_table_14270(v);
}

/* EOF small_parse_table_2853.c */
