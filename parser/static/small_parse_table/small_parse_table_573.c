/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_573.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2865(t_small_parse_table_array *v)
{
	v->a[57300] = actions(1716);
	v->a[57301] = 3;
	v->a[57302] = sym_raw_string;
	v->a[57303] = sym_number;
	v->a[57304] = sym_word;
	v->a[57305] = state(1772);
	v->a[57306] = 5;
	v->a[57307] = sym_arithmetic_expansion;
	v->a[57308] = sym_string;
	v->a[57309] = sym_simple_expansion;
	v->a[57310] = sym_expansion;
	v->a[57311] = sym_command_substitution;
	v->a[57312] = 11;
	v->a[57313] = actions(3);
	v->a[57314] = 1;
	v->a[57315] = sym_comment;
	v->a[57316] = actions(782);
	v->a[57317] = 1;
	v->a[57318] = anon_sym_PIPE;
	v->a[57319] = actions(806);
	small_parse_table_2866(v);
}

void	small_parse_table_2866(t_small_parse_table_array *v)
{
	v->a[57320] = 1;
	v->a[57321] = ts_builtin_sym_end;
	v->a[57322] = actions(1882);
	v->a[57323] = 1;
	v->a[57324] = aux_sym_heredoc_redirect_token1;
	v->a[57325] = actions(1884);
	v->a[57326] = 1;
	v->a[57327] = sym_file_descriptor;
	v->a[57328] = state(690);
	v->a[57329] = 1;
	v->a[57330] = sym_terminator;
	v->a[57331] = actions(790);
	v->a[57332] = 2;
	v->a[57333] = anon_sym_LT_LT;
	v->a[57334] = anon_sym_LT_LT_DASH;
	v->a[57335] = actions(808);
	v->a[57336] = 2;
	v->a[57337] = anon_sym_SEMI_SEMI;
	v->a[57338] = anon_sym_SEMI;
	v->a[57339] = actions(810);
	small_parse_table_2867(v);
}

void	small_parse_table_2867(t_small_parse_table_array *v)
{
	v->a[57340] = 2;
	v->a[57341] = anon_sym_AMP_AMP;
	v->a[57342] = anon_sym_PIPE_PIPE;
	v->a[57343] = state(1046);
	v->a[57344] = 3;
	v->a[57345] = sym_file_redirect;
	v->a[57346] = sym_heredoc_redirect;
	v->a[57347] = aux_sym_redirected_statement_repeat1;
	v->a[57348] = actions(1880);
	v->a[57349] = 7;
	v->a[57350] = anon_sym_LT;
	v->a[57351] = anon_sym_GT;
	v->a[57352] = anon_sym_GT_GT;
	v->a[57353] = anon_sym_LT_AMP;
	v->a[57354] = anon_sym_GT_AMP;
	v->a[57355] = anon_sym_GT_PIPE;
	v->a[57356] = anon_sym_LT_GT;
	v->a[57357] = 15;
	v->a[57358] = actions(3);
	v->a[57359] = 1;
	small_parse_table_2868(v);
}

void	small_parse_table_2868(t_small_parse_table_array *v)
{
	v->a[57360] = sym_comment;
	v->a[57361] = actions(1720);
	v->a[57362] = 1;
	v->a[57363] = anon_sym_LPAREN;
	v->a[57364] = actions(1724);
	v->a[57365] = 1;
	v->a[57366] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57367] = actions(1726);
	v->a[57368] = 1;
	v->a[57369] = anon_sym_DOLLAR;
	v->a[57370] = actions(1728);
	v->a[57371] = 1;
	v->a[57372] = anon_sym_DQUOTE;
	v->a[57373] = actions(1730);
	v->a[57374] = 1;
	v->a[57375] = anon_sym_DOLLAR_LBRACE;
	v->a[57376] = actions(1732);
	v->a[57377] = 1;
	v->a[57378] = anon_sym_DOLLAR_LPAREN;
	v->a[57379] = actions(1734);
	small_parse_table_2869(v);
}

void	small_parse_table_2869(t_small_parse_table_array *v)
{
	v->a[57380] = 1;
	v->a[57381] = anon_sym_BQUOTE;
	v->a[57382] = actions(1736);
	v->a[57383] = 1;
	v->a[57384] = sym_extglob_pattern;
	v->a[57385] = state(1050);
	v->a[57386] = 1;
	v->a[57387] = aux_sym_case_statement_repeat1;
	v->a[57388] = state(1682);
	v->a[57389] = 1;
	v->a[57390] = sym_case_item;
	v->a[57391] = state(1952);
	v->a[57392] = 1;
	v->a[57393] = sym__case_item_last;
	v->a[57394] = state(1877);
	v->a[57395] = 2;
	v->a[57396] = sym_concatenation;
	v->a[57397] = sym__extglob_blob;
	v->a[57398] = actions(1716);
	v->a[57399] = 3;
	small_parse_table_2870(v);
}

/* EOF small_parse_table_573.c */
