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
	v->a[29300] = 1;
	v->a[29301] = anon_sym_DQUOTE;
	v->a[29302] = actions(63);
	v->a[29303] = 1;
	v->a[29304] = anon_sym_DOLLAR_LBRACE;
	v->a[29305] = actions(65);
	v->a[29306] = 1;
	v->a[29307] = anon_sym_DOLLAR_LPAREN;
	v->a[29308] = actions(67);
	v->a[29309] = 1;
	v->a[29310] = anon_sym_BQUOTE;
	v->a[29311] = actions(357);
	v->a[29312] = 1;
	v->a[29313] = sym_variable_name;
	v->a[29314] = actions(1095);
	v->a[29315] = 1;
	v->a[29316] = sym_file_descriptor;
	v->a[29317] = state(315);
	v->a[29318] = 1;
	v->a[29319] = sym_command_name;
	small_parse_table_1466(v);
}

void	small_parse_table_1466(t_small_parse_table_array *v)
{
	v->a[29320] = state(622);
	v->a[29321] = 1;
	v->a[29322] = aux_sym_command_repeat1;
	v->a[29323] = state(661);
	v->a[29324] = 1;
	v->a[29325] = sym_concatenation;
	v->a[29326] = state(668);
	v->a[29327] = 1;
	v->a[29328] = sym_variable_assignment;
	v->a[29329] = state(1121);
	v->a[29330] = 1;
	v->a[29331] = sym_command;
	v->a[29332] = state(1171);
	v->a[29333] = 1;
	v->a[29334] = sym_subshell;
	v->a[29335] = state(1203);
	v->a[29336] = 1;
	v->a[29337] = sym_file_redirect;
	v->a[29338] = actions(353);
	v->a[29339] = 3;
	small_parse_table_1467(v);
}

void	small_parse_table_1467(t_small_parse_table_array *v)
{
	v->a[29340] = sym_raw_string;
	v->a[29341] = sym_number;
	v->a[29342] = sym_word;
	v->a[29343] = state(620);
	v->a[29344] = 5;
	v->a[29345] = sym_arithmetic_expansion;
	v->a[29346] = sym_string;
	v->a[29347] = sym_simple_expansion;
	v->a[29348] = sym_expansion;
	v->a[29349] = sym_command_substitution;
	v->a[29350] = actions(1093);
	v->a[29351] = 7;
	v->a[29352] = anon_sym_LT;
	v->a[29353] = anon_sym_GT;
	v->a[29354] = anon_sym_GT_GT;
	v->a[29355] = anon_sym_LT_AMP;
	v->a[29356] = anon_sym_GT_AMP;
	v->a[29357] = anon_sym_GT_PIPE;
	v->a[29358] = anon_sym_LT_GT;
	v->a[29359] = 5;
	small_parse_table_1468(v);
}

void	small_parse_table_1468(t_small_parse_table_array *v)
{
	v->a[29360] = actions(3);
	v->a[29361] = 1;
	v->a[29362] = sym_comment;
	v->a[29363] = actions(529);
	v->a[29364] = 2;
	v->a[29365] = sym_file_descriptor;
	v->a[29366] = sym_variable_name;
	v->a[29367] = state(368);
	v->a[29368] = 2;
	v->a[29369] = sym_concatenation;
	v->a[29370] = aux_sym_for_statement_repeat1;
	v->a[29371] = state(685);
	v->a[29372] = 5;
	v->a[29373] = sym_arithmetic_expansion;
	v->a[29374] = sym_string;
	v->a[29375] = sym_simple_expansion;
	v->a[29376] = sym_expansion;
	v->a[29377] = sym_command_substitution;
	v->a[29378] = actions(531);
	v->a[29379] = 22;
	small_parse_table_1469(v);
}

void	small_parse_table_1469(t_small_parse_table_array *v)
{
	v->a[29380] = anon_sym_PIPE;
	v->a[29381] = anon_sym_AMP_AMP;
	v->a[29382] = anon_sym_PIPE_PIPE;
	v->a[29383] = anon_sym_LT;
	v->a[29384] = anon_sym_GT;
	v->a[29385] = anon_sym_GT_GT;
	v->a[29386] = anon_sym_LT_AMP;
	v->a[29387] = anon_sym_GT_AMP;
	v->a[29388] = anon_sym_GT_PIPE;
	v->a[29389] = anon_sym_LT_GT;
	v->a[29390] = anon_sym_LT_LT;
	v->a[29391] = anon_sym_LT_LT_DASH;
	v->a[29392] = aux_sym_heredoc_redirect_token1;
	v->a[29393] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29394] = anon_sym_DOLLAR;
	v->a[29395] = anon_sym_DQUOTE;
	v->a[29396] = sym_raw_string;
	v->a[29397] = sym_number;
	v->a[29398] = anon_sym_DOLLAR_LBRACE;
	v->a[29399] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1470(v);
}

/* EOF small_parse_table_293.c */
