/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1113.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5565(t_small_parse_table_array *v)
{
	v->a[111300] = anon_sym_SEMI_AMP;
	v->a[111301] = anon_sym_SEMI_SEMI_AMP;
	v->a[111302] = anon_sym_PIPE_AMP;
	v->a[111303] = anon_sym_AMP_AMP;
	v->a[111304] = anon_sym_PIPE_PIPE;
	v->a[111305] = anon_sym_LT;
	v->a[111306] = anon_sym_GT;
	v->a[111307] = anon_sym_GT_GT;
	v->a[111308] = anon_sym_AMP_GT;
	v->a[111309] = anon_sym_AMP_GT_GT;
	v->a[111310] = anon_sym_LT_AMP;
	v->a[111311] = anon_sym_GT_AMP;
	v->a[111312] = anon_sym_GT_PIPE;
	v->a[111313] = anon_sym_LT_AMP_DASH;
	v->a[111314] = anon_sym_GT_AMP_DASH;
	v->a[111315] = anon_sym_LT_LT;
	v->a[111316] = anon_sym_LT_LT_DASH;
	v->a[111317] = anon_sym_AMP;
	v->a[111318] = anon_sym_SEMI;
	v->a[111319] = 16;
	small_parse_table_5566(v);
}

void	small_parse_table_5566(t_small_parse_table_array *v)
{
	v->a[111320] = actions(3);
	v->a[111321] = 1;
	v->a[111322] = sym_comment;
	v->a[111323] = actions(737);
	v->a[111324] = 1;
	v->a[111325] = aux_sym_number_token1;
	v->a[111326] = actions(739);
	v->a[111327] = 1;
	v->a[111328] = aux_sym_number_token2;
	v->a[111329] = actions(743);
	v->a[111330] = 1;
	v->a[111331] = anon_sym_DOLLAR_LPAREN;
	v->a[111332] = actions(755);
	v->a[111333] = 1;
	v->a[111334] = sym__brace_start;
	v->a[111335] = actions(5513);
	v->a[111336] = 1;
	v->a[111337] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[111338] = actions(5517);
	v->a[111339] = 1;
	small_parse_table_5567(v);
}

void	small_parse_table_5567(t_small_parse_table_array *v)
{
	v->a[111340] = anon_sym_DQUOTE;
	v->a[111341] = actions(5521);
	v->a[111342] = 1;
	v->a[111343] = anon_sym_DOLLAR_LBRACE;
	v->a[111344] = actions(5523);
	v->a[111345] = 1;
	v->a[111346] = anon_sym_BQUOTE;
	v->a[111347] = actions(5525);
	v->a[111348] = 1;
	v->a[111349] = anon_sym_DOLLAR_BQUOTE;
	v->a[111350] = actions(6348);
	v->a[111351] = 1;
	v->a[111352] = sym_word;
	v->a[111353] = actions(6352);
	v->a[111354] = 1;
	v->a[111355] = sym__special_character;
	v->a[111356] = actions(6356);
	v->a[111357] = 1;
	v->a[111358] = sym__comment_word;
	v->a[111359] = actions(6386);
	small_parse_table_5568(v);
}

void	small_parse_table_5568(t_small_parse_table_array *v)
{
	v->a[111360] = 1;
	v->a[111361] = anon_sym_DOLLAR;
	v->a[111362] = actions(6354);
	v->a[111363] = 3;
	v->a[111364] = sym_test_operator;
	v->a[111365] = sym__bare_dollar;
	v->a[111366] = sym_raw_string;
	v->a[111367] = state(599);
	v->a[111368] = 7;
	v->a[111369] = sym_arithmetic_expansion;
	v->a[111370] = sym_brace_expression;
	v->a[111371] = sym_string;
	v->a[111372] = sym_number;
	v->a[111373] = sym_simple_expansion;
	v->a[111374] = sym_expansion;
	v->a[111375] = sym_command_substitution;
	v->a[111376] = 3;
	v->a[111377] = actions(3);
	v->a[111378] = 1;
	v->a[111379] = sym_comment;
	small_parse_table_5569(v);
}

void	small_parse_table_5569(t_small_parse_table_array *v)
{
	v->a[111380] = actions(6163);
	v->a[111381] = 2;
	v->a[111382] = sym_file_descriptor;
	v->a[111383] = aux_sym_heredoc_redirect_token1;
	v->a[111384] = actions(6161);
	v->a[111385] = 21;
	v->a[111386] = anon_sym_PIPE;
	v->a[111387] = anon_sym_SEMI_SEMI;
	v->a[111388] = anon_sym_SEMI_AMP;
	v->a[111389] = anon_sym_SEMI_SEMI_AMP;
	v->a[111390] = anon_sym_PIPE_AMP;
	v->a[111391] = anon_sym_AMP_AMP;
	v->a[111392] = anon_sym_PIPE_PIPE;
	v->a[111393] = anon_sym_LT;
	v->a[111394] = anon_sym_GT;
	v->a[111395] = anon_sym_GT_GT;
	v->a[111396] = anon_sym_AMP_GT;
	v->a[111397] = anon_sym_AMP_GT_GT;
	v->a[111398] = anon_sym_LT_AMP;
	v->a[111399] = anon_sym_GT_AMP;
	small_parse_table_5570(v);
}

/* EOF small_parse_table_1113.c */
