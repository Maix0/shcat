/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_293.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1465(t_small_parse_table_array *v)
{
	v->a[29300] = anon_sym_LT_AMP;
	v->a[29301] = anon_sym_GT_AMP;
	v->a[29302] = anon_sym_GT_PIPE;
	v->a[29303] = anon_sym_LT_GT;
	v->a[29304] = anon_sym_LT_LT;
	v->a[29305] = anon_sym_LT_LT_DASH;
	v->a[29306] = aux_sym_heredoc_redirect_token1;
	v->a[29307] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29308] = anon_sym_AMP;
	v->a[29309] = anon_sym_DOLLAR;
	v->a[29310] = anon_sym_DQUOTE;
	v->a[29311] = sym_raw_string;
	v->a[29312] = sym_number;
	v->a[29313] = anon_sym_DOLLAR_LBRACE;
	v->a[29314] = anon_sym_DOLLAR_LPAREN;
	v->a[29315] = anon_sym_BQUOTE;
	v->a[29316] = sym_word;
	v->a[29317] = anon_sym_SEMI;
	v->a[29318] = 19;
	v->a[29319] = actions(3);
	small_parse_table_1466(v);
}

void	small_parse_table_1466(t_small_parse_table_array *v)
{
	v->a[29320] = 1;
	v->a[29321] = sym_comment;
	v->a[29322] = actions(1066);
	v->a[29323] = 1;
	v->a[29324] = anon_sym_PIPE;
	v->a[29325] = actions(1074);
	v->a[29326] = 1;
	v->a[29327] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29328] = actions(1076);
	v->a[29329] = 1;
	v->a[29330] = anon_sym_DOLLAR;
	v->a[29331] = actions(1078);
	v->a[29332] = 1;
	v->a[29333] = anon_sym_DQUOTE;
	v->a[29334] = actions(1080);
	v->a[29335] = 1;
	v->a[29336] = anon_sym_DOLLAR_LBRACE;
	v->a[29337] = actions(1082);
	v->a[29338] = 1;
	v->a[29339] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1467(v);
}

void	small_parse_table_1467(t_small_parse_table_array *v)
{
	v->a[29340] = actions(1084);
	v->a[29341] = 1;
	v->a[29342] = anon_sym_BQUOTE;
	v->a[29343] = actions(1086);
	v->a[29344] = 1;
	v->a[29345] = sym_file_descriptor;
	v->a[29346] = actions(1108);
	v->a[29347] = 1;
	v->a[29348] = aux_sym_heredoc_redirect_token1;
	v->a[29349] = state(1302);
	v->a[29350] = 1;
	v->a[29351] = aux_sym__heredoc_command;
	v->a[29352] = state(1721);
	v->a[29353] = 1;
	v->a[29354] = sym_concatenation;
	v->a[29355] = state(1943);
	v->a[29356] = 1;
	v->a[29357] = sym__heredoc_expression;
	v->a[29358] = state(1946);
	v->a[29359] = 1;
	small_parse_table_1468(v);
}

void	small_parse_table_1468(t_small_parse_table_array *v)
{
	v->a[29360] = sym__heredoc_pipeline;
	v->a[29361] = actions(1068);
	v->a[29362] = 2;
	v->a[29363] = anon_sym_AMP_AMP;
	v->a[29364] = anon_sym_PIPE_PIPE;
	v->a[29365] = state(1468);
	v->a[29366] = 2;
	v->a[29367] = sym_file_redirect;
	v->a[29368] = aux_sym_redirected_statement_repeat2;
	v->a[29369] = actions(1064);
	v->a[29370] = 3;
	v->a[29371] = sym_raw_string;
	v->a[29372] = sym_number;
	v->a[29373] = sym_word;
	v->a[29374] = state(1573);
	v->a[29375] = 5;
	v->a[29376] = sym_arithmetic_expansion;
	v->a[29377] = sym_string;
	v->a[29378] = sym_simple_expansion;
	v->a[29379] = sym_expansion;
	small_parse_table_1469(v);
}

void	small_parse_table_1469(t_small_parse_table_array *v)
{
	v->a[29380] = sym_command_substitution;
	v->a[29381] = actions(1070);
	v->a[29382] = 7;
	v->a[29383] = anon_sym_LT;
	v->a[29384] = anon_sym_GT;
	v->a[29385] = anon_sym_GT_GT;
	v->a[29386] = anon_sym_LT_AMP;
	v->a[29387] = anon_sym_GT_AMP;
	v->a[29388] = anon_sym_GT_PIPE;
	v->a[29389] = anon_sym_LT_GT;
	v->a[29390] = 19;
	v->a[29391] = actions(3);
	v->a[29392] = 1;
	v->a[29393] = sym_comment;
	v->a[29394] = actions(1066);
	v->a[29395] = 1;
	v->a[29396] = anon_sym_PIPE;
	v->a[29397] = actions(1074);
	v->a[29398] = 1;
	v->a[29399] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1470(v);
}

/* EOF small_parse_table_293.c */
