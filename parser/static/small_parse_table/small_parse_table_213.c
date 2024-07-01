/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_213.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1065(t_small_parse_table_array *v)
{
	v->a[21300] = 5;
	v->a[21301] = sym_arithmetic_expansion;
	v->a[21302] = sym_string;
	v->a[21303] = sym_simple_expansion;
	v->a[21304] = sym_expansion;
	v->a[21305] = sym_command_substitution;
	v->a[21306] = actions(541);
	v->a[21307] = 18;
	v->a[21308] = anon_sym_esac;
	v->a[21309] = anon_sym_PIPE;
	v->a[21310] = anon_sym_SEMI_SEMI;
	v->a[21311] = anon_sym_AMP_AMP;
	v->a[21312] = anon_sym_PIPE_PIPE;
	v->a[21313] = anon_sym_LT;
	v->a[21314] = anon_sym_GT;
	v->a[21315] = anon_sym_GT_GT;
	v->a[21316] = anon_sym_LT_AMP;
	v->a[21317] = anon_sym_GT_AMP;
	v->a[21318] = anon_sym_GT_PIPE;
	v->a[21319] = anon_sym_LT_AMP_DASH;
	small_parse_table_1066(v);
}

void	small_parse_table_1066(t_small_parse_table_array *v)
{
	v->a[21320] = anon_sym_GT_AMP_DASH;
	v->a[21321] = anon_sym_LT_LT;
	v->a[21322] = anon_sym_LT_LT_DASH;
	v->a[21323] = aux_sym_heredoc_redirect_token1;
	v->a[21324] = anon_sym_AMP;
	v->a[21325] = anon_sym_SEMI;
	v->a[21326] = 14;
	v->a[21327] = actions(3);
	v->a[21328] = 1;
	v->a[21329] = sym_comment;
	v->a[21330] = actions(548);
	v->a[21331] = 1;
	v->a[21332] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21333] = actions(551);
	v->a[21334] = 1;
	v->a[21335] = anon_sym_DOLLAR;
	v->a[21336] = actions(554);
	v->a[21337] = 1;
	v->a[21338] = anon_sym_DQUOTE;
	v->a[21339] = actions(557);
	small_parse_table_1067(v);
}

void	small_parse_table_1067(t_small_parse_table_array *v)
{
	v->a[21340] = 1;
	v->a[21341] = anon_sym_DOLLAR_LBRACE;
	v->a[21342] = actions(560);
	v->a[21343] = 1;
	v->a[21344] = anon_sym_DOLLAR_LPAREN;
	v->a[21345] = actions(563);
	v->a[21346] = 1;
	v->a[21347] = anon_sym_BQUOTE;
	v->a[21348] = actions(566);
	v->a[21349] = 1;
	v->a[21350] = sym__bare_dollar;
	v->a[21351] = state(194);
	v->a[21352] = 1;
	v->a[21353] = aux_sym_command_repeat2;
	v->a[21354] = state(731);
	v->a[21355] = 1;
	v->a[21356] = sym_concatenation;
	v->a[21357] = actions(536);
	v->a[21358] = 2;
	v->a[21359] = sym_file_descriptor;
	small_parse_table_1068(v);
}

void	small_parse_table_1068(t_small_parse_table_array *v)
{
	v->a[21360] = ts_builtin_sym_end;
	v->a[21361] = actions(545);
	v->a[21362] = 3;
	v->a[21363] = sym_raw_string;
	v->a[21364] = sym_number;
	v->a[21365] = sym_word;
	v->a[21366] = state(476);
	v->a[21367] = 5;
	v->a[21368] = sym_arithmetic_expansion;
	v->a[21369] = sym_string;
	v->a[21370] = sym_simple_expansion;
	v->a[21371] = sym_expansion;
	v->a[21372] = sym_command_substitution;
	v->a[21373] = actions(516);
	v->a[21374] = 17;
	v->a[21375] = anon_sym_PIPE;
	v->a[21376] = anon_sym_SEMI_SEMI;
	v->a[21377] = anon_sym_AMP_AMP;
	v->a[21378] = anon_sym_PIPE_PIPE;
	v->a[21379] = anon_sym_LT;
	small_parse_table_1069(v);
}

void	small_parse_table_1069(t_small_parse_table_array *v)
{
	v->a[21380] = anon_sym_GT;
	v->a[21381] = anon_sym_GT_GT;
	v->a[21382] = anon_sym_LT_AMP;
	v->a[21383] = anon_sym_GT_AMP;
	v->a[21384] = anon_sym_GT_PIPE;
	v->a[21385] = anon_sym_LT_AMP_DASH;
	v->a[21386] = anon_sym_GT_AMP_DASH;
	v->a[21387] = anon_sym_LT_LT;
	v->a[21388] = anon_sym_LT_LT_DASH;
	v->a[21389] = aux_sym_heredoc_redirect_token1;
	v->a[21390] = anon_sym_AMP;
	v->a[21391] = anon_sym_SEMI;
	v->a[21392] = 14;
	v->a[21393] = actions(3);
	v->a[21394] = 1;
	v->a[21395] = sym_comment;
	v->a[21396] = actions(459);
	v->a[21397] = 1;
	v->a[21398] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21399] = actions(461);
	small_parse_table_1070(v);
}

/* EOF small_parse_table_213.c */
