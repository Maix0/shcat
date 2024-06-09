/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_292.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1460(t_small_parse_table_array *v)
{
	v->a[29200] = anon_sym_AMP_AMP;
	v->a[29201] = anon_sym_PIPE_PIPE;
	v->a[29202] = state(1011);
	v->a[29203] = 2;
	v->a[29204] = sym_variable_assignment;
	v->a[29205] = aux_sym_variable_assignments_repeat1;
	v->a[29206] = state(1095);
	v->a[29207] = 3;
	v->a[29208] = sym_file_redirect;
	v->a[29209] = sym_heredoc_redirect;
	v->a[29210] = aux_sym_redirected_statement_repeat1;
	v->a[29211] = actions(1163);
	v->a[29212] = 4;
	v->a[29213] = anon_sym_SEMI_SEMI;
	v->a[29214] = aux_sym_heredoc_redirect_token1;
	v->a[29215] = anon_sym_AMP;
	v->a[29216] = anon_sym_SEMI;
	v->a[29217] = actions(1000);
	v->a[29218] = 19;
	v->a[29219] = anon_sym_LT;
	small_parse_table_1461(v);
}

void	small_parse_table_1461(t_small_parse_table_array *v)
{
	v->a[29220] = anon_sym_GT;
	v->a[29221] = anon_sym_GT_GT;
	v->a[29222] = anon_sym_AMP_GT;
	v->a[29223] = anon_sym_AMP_GT_GT;
	v->a[29224] = anon_sym_LT_AMP;
	v->a[29225] = anon_sym_GT_AMP;
	v->a[29226] = anon_sym_GT_PIPE;
	v->a[29227] = anon_sym_LT_AMP_DASH;
	v->a[29228] = anon_sym_GT_AMP_DASH;
	v->a[29229] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29230] = anon_sym_DOLLAR;
	v->a[29231] = anon_sym_DQUOTE;
	v->a[29232] = sym_raw_string;
	v->a[29233] = aux_sym_number_token1;
	v->a[29234] = aux_sym_number_token2;
	v->a[29235] = anon_sym_DOLLAR_LBRACE;
	v->a[29236] = anon_sym_DOLLAR_LPAREN;
	v->a[29237] = sym_word;
	v->a[29238] = 23;
	v->a[29239] = actions(3);
	small_parse_table_1462(v);
}

void	small_parse_table_1462(t_small_parse_table_array *v)
{
	v->a[29240] = 1;
	v->a[29241] = sym_comment;
	v->a[29242] = actions(17);
	v->a[29243] = 1;
	v->a[29244] = anon_sym_LPAREN;
	v->a[29245] = actions(63);
	v->a[29246] = 1;
	v->a[29247] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29248] = actions(65);
	v->a[29249] = 1;
	v->a[29250] = anon_sym_DOLLAR;
	v->a[29251] = actions(67);
	v->a[29252] = 1;
	v->a[29253] = anon_sym_DQUOTE;
	v->a[29254] = actions(71);
	v->a[29255] = 1;
	v->a[29256] = aux_sym_number_token1;
	v->a[29257] = actions(73);
	v->a[29258] = 1;
	v->a[29259] = aux_sym_number_token2;
	small_parse_table_1463(v);
}

void	small_parse_table_1463(t_small_parse_table_array *v)
{
	v->a[29260] = actions(75);
	v->a[29261] = 1;
	v->a[29262] = anon_sym_DOLLAR_LBRACE;
	v->a[29263] = actions(77);
	v->a[29264] = 1;
	v->a[29265] = anon_sym_DOLLAR_LPAREN;
	v->a[29266] = actions(79);
	v->a[29267] = 1;
	v->a[29268] = anon_sym_BQUOTE;
	v->a[29269] = actions(83);
	v->a[29270] = 1;
	v->a[29271] = sym_variable_name;
	v->a[29272] = actions(1102);
	v->a[29273] = 1;
	v->a[29274] = sym_file_descriptor;
	v->a[29275] = state(190);
	v->a[29276] = 1;
	v->a[29277] = sym_command_name;
	v->a[29278] = state(582);
	v->a[29279] = 1;
	small_parse_table_1464(v);
}

void	small_parse_table_1464(t_small_parse_table_array *v)
{
	v->a[29280] = sym_concatenation;
	v->a[29281] = state(587);
	v->a[29282] = 1;
	v->a[29283] = aux_sym_command_repeat1;
	v->a[29284] = state(724);
	v->a[29285] = 1;
	v->a[29286] = sym_variable_assignment;
	v->a[29287] = state(1175);
	v->a[29288] = 1;
	v->a[29289] = sym_subshell;
	v->a[29290] = state(1179);
	v->a[29291] = 1;
	v->a[29292] = sym_command;
	v->a[29293] = state(1237);
	v->a[29294] = 1;
	v->a[29295] = sym_file_redirect;
	v->a[29296] = actions(69);
	v->a[29297] = 2;
	v->a[29298] = sym_raw_string;
	v->a[29299] = sym_word;
	small_parse_table_1465(v);
}

/* EOF small_parse_table_292.c */
