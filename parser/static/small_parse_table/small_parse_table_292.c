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
	v->a[29200] = 2;
	v->a[29201] = sym_file_redirect;
	v->a[29202] = aux_sym_redirected_statement_repeat2;
	v->a[29203] = actions(1064);
	v->a[29204] = 3;
	v->a[29205] = sym_raw_string;
	v->a[29206] = sym_number;
	v->a[29207] = sym_word;
	v->a[29208] = state(1573);
	v->a[29209] = 5;
	v->a[29210] = sym_arithmetic_expansion;
	v->a[29211] = sym_string;
	v->a[29212] = sym_simple_expansion;
	v->a[29213] = sym_expansion;
	v->a[29214] = sym_command_substitution;
	v->a[29215] = actions(1070);
	v->a[29216] = 7;
	v->a[29217] = anon_sym_LT;
	v->a[29218] = anon_sym_GT;
	v->a[29219] = anon_sym_GT_GT;
	small_parse_table_1461(v);
}

void	small_parse_table_1461(t_small_parse_table_array *v)
{
	v->a[29220] = anon_sym_LT_AMP;
	v->a[29221] = anon_sym_GT_AMP;
	v->a[29222] = anon_sym_GT_PIPE;
	v->a[29223] = anon_sym_LT_GT;
	v->a[29224] = 7;
	v->a[29225] = actions(3);
	v->a[29226] = 1;
	v->a[29227] = sym_comment;
	v->a[29228] = actions(949);
	v->a[29229] = 1;
	v->a[29230] = sym_file_descriptor;
	v->a[29231] = actions(992);
	v->a[29232] = 1;
	v->a[29233] = sym_variable_name;
	v->a[29234] = state(1030);
	v->a[29235] = 2;
	v->a[29236] = sym_variable_assignment;
	v->a[29237] = aux_sym__variable_assignments_repeat1;
	v->a[29238] = state(1059);
	v->a[29239] = 3;
	small_parse_table_1462(v);
}

void	small_parse_table_1462(t_small_parse_table_array *v)
{
	v->a[29240] = sym_file_redirect;
	v->a[29241] = sym_heredoc_redirect;
	v->a[29242] = aux_sym_redirected_statement_repeat1;
	v->a[29243] = actions(734);
	v->a[29244] = 8;
	v->a[29245] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29246] = anon_sym_DOLLAR;
	v->a[29247] = anon_sym_DQUOTE;
	v->a[29248] = sym_raw_string;
	v->a[29249] = sym_number;
	v->a[29250] = anon_sym_DOLLAR_LBRACE;
	v->a[29251] = anon_sym_DOLLAR_LPAREN;
	v->a[29252] = sym_word;
	v->a[29253] = actions(736);
	v->a[29254] = 17;
	v->a[29255] = anon_sym_PIPE;
	v->a[29256] = anon_sym_SEMI_SEMI;
	v->a[29257] = anon_sym_AMP_AMP;
	v->a[29258] = anon_sym_PIPE_PIPE;
	v->a[29259] = anon_sym_LT;
	small_parse_table_1463(v);
}

void	small_parse_table_1463(t_small_parse_table_array *v)
{
	v->a[29260] = anon_sym_GT;
	v->a[29261] = anon_sym_GT_GT;
	v->a[29262] = anon_sym_LT_AMP;
	v->a[29263] = anon_sym_GT_AMP;
	v->a[29264] = anon_sym_GT_PIPE;
	v->a[29265] = anon_sym_LT_GT;
	v->a[29266] = anon_sym_LT_LT;
	v->a[29267] = anon_sym_LT_LT_DASH;
	v->a[29268] = aux_sym_heredoc_redirect_token1;
	v->a[29269] = anon_sym_AMP;
	v->a[29270] = anon_sym_BQUOTE;
	v->a[29271] = anon_sym_SEMI;
	v->a[29272] = 6;
	v->a[29273] = actions(3);
	v->a[29274] = 1;
	v->a[29275] = sym_comment;
	v->a[29276] = actions(1102);
	v->a[29277] = 1;
	v->a[29278] = aux_sym_concatenation_token1;
	v->a[29279] = actions(1105);
	small_parse_table_1464(v);
}

void	small_parse_table_1464(t_small_parse_table_array *v)
{
	v->a[29280] = 1;
	v->a[29281] = sym__concat;
	v->a[29282] = state(354);
	v->a[29283] = 1;
	v->a[29284] = aux_sym_concatenation_repeat1;
	v->a[29285] = actions(1093);
	v->a[29286] = 2;
	v->a[29287] = sym_file_descriptor;
	v->a[29288] = sym__bare_dollar;
	v->a[29289] = actions(1088);
	v->a[29290] = 27;
	v->a[29291] = anon_sym_esac;
	v->a[29292] = anon_sym_LPAREN;
	v->a[29293] = anon_sym_PIPE;
	v->a[29294] = anon_sym_SEMI_SEMI;
	v->a[29295] = anon_sym_AMP_AMP;
	v->a[29296] = anon_sym_PIPE_PIPE;
	v->a[29297] = anon_sym_LT;
	v->a[29298] = anon_sym_GT;
	v->a[29299] = anon_sym_GT_GT;
	small_parse_table_1465(v);
}

/* EOF small_parse_table_292.c */
