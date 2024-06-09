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
	v->a[29300] = actions(1100);
	v->a[29301] = 2;
	v->a[29302] = anon_sym_LT_AMP_DASH;
	v->a[29303] = anon_sym_GT_AMP_DASH;
	v->a[29304] = state(397);
	v->a[29305] = 6;
	v->a[29306] = sym_arithmetic_expansion;
	v->a[29307] = sym_string;
	v->a[29308] = sym_number;
	v->a[29309] = sym_simple_expansion;
	v->a[29310] = sym_expansion;
	v->a[29311] = sym_command_substitution;
	v->a[29312] = actions(1098);
	v->a[29313] = 8;
	v->a[29314] = anon_sym_LT;
	v->a[29315] = anon_sym_GT;
	v->a[29316] = anon_sym_GT_GT;
	v->a[29317] = anon_sym_AMP_GT;
	v->a[29318] = anon_sym_AMP_GT_GT;
	v->a[29319] = anon_sym_LT_AMP;
	small_parse_table_1466(v);
}

void	small_parse_table_1466(t_small_parse_table_array *v)
{
	v->a[29320] = anon_sym_GT_AMP;
	v->a[29321] = anon_sym_GT_PIPE;
	v->a[29322] = 10;
	v->a[29323] = actions(3);
	v->a[29324] = 1;
	v->a[29325] = sym_comment;
	v->a[29326] = actions(1002);
	v->a[29327] = 1;
	v->a[29328] = anon_sym_PIPE;
	v->a[29329] = actions(1006);
	v->a[29330] = 1;
	v->a[29331] = sym_file_descriptor;
	v->a[29332] = actions(1095);
	v->a[29333] = 1;
	v->a[29334] = sym_variable_name;
	v->a[29335] = actions(1062);
	v->a[29336] = 2;
	v->a[29337] = anon_sym_LT_LT;
	v->a[29338] = anon_sym_LT_LT_DASH;
	v->a[29339] = actions(1093);
	small_parse_table_1467(v);
}

void	small_parse_table_1467(t_small_parse_table_array *v)
{
	v->a[29340] = 2;
	v->a[29341] = anon_sym_AMP_AMP;
	v->a[29342] = anon_sym_PIPE_PIPE;
	v->a[29343] = state(1151);
	v->a[29344] = 2;
	v->a[29345] = sym_variable_assignment;
	v->a[29346] = aux_sym_variable_assignments_repeat1;
	v->a[29347] = state(1160);
	v->a[29348] = 3;
	v->a[29349] = sym_file_redirect;
	v->a[29350] = sym_heredoc_redirect;
	v->a[29351] = aux_sym_redirected_statement_repeat1;
	v->a[29352] = actions(1165);
	v->a[29353] = 4;
	v->a[29354] = anon_sym_SEMI_SEMI;
	v->a[29355] = aux_sym_heredoc_redirect_token1;
	v->a[29356] = anon_sym_AMP;
	v->a[29357] = anon_sym_SEMI;
	v->a[29358] = actions(1000);
	v->a[29359] = 20;
	small_parse_table_1468(v);
}

void	small_parse_table_1468(t_small_parse_table_array *v)
{
	v->a[29360] = anon_sym_LT;
	v->a[29361] = anon_sym_GT;
	v->a[29362] = anon_sym_GT_GT;
	v->a[29363] = anon_sym_AMP_GT;
	v->a[29364] = anon_sym_AMP_GT_GT;
	v->a[29365] = anon_sym_LT_AMP;
	v->a[29366] = anon_sym_GT_AMP;
	v->a[29367] = anon_sym_GT_PIPE;
	v->a[29368] = anon_sym_LT_AMP_DASH;
	v->a[29369] = anon_sym_GT_AMP_DASH;
	v->a[29370] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29371] = anon_sym_DOLLAR;
	v->a[29372] = anon_sym_DQUOTE;
	v->a[29373] = sym_raw_string;
	v->a[29374] = aux_sym_number_token1;
	v->a[29375] = aux_sym_number_token2;
	v->a[29376] = anon_sym_DOLLAR_LBRACE;
	v->a[29377] = anon_sym_DOLLAR_LPAREN;
	v->a[29378] = anon_sym_BQUOTE;
	v->a[29379] = sym_word;
	small_parse_table_1469(v);
}

void	small_parse_table_1469(t_small_parse_table_array *v)
{
	v->a[29380] = 8;
	v->a[29381] = actions(3);
	v->a[29382] = 1;
	v->a[29383] = sym_comment;
	v->a[29384] = actions(1002);
	v->a[29385] = 1;
	v->a[29386] = anon_sym_PIPE;
	v->a[29387] = actions(1006);
	v->a[29388] = 1;
	v->a[29389] = sym_file_descriptor;
	v->a[29390] = actions(1124);
	v->a[29391] = 1;
	v->a[29392] = sym_variable_name;
	v->a[29393] = state(1011);
	v->a[29394] = 2;
	v->a[29395] = sym_variable_assignment;
	v->a[29396] = aux_sym_variable_assignments_repeat1;
	v->a[29397] = state(1095);
	v->a[29398] = 3;
	v->a[29399] = sym_file_redirect;
	small_parse_table_1470(v);
}

/* EOF small_parse_table_293.c */
