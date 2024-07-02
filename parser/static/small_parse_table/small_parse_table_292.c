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
	v->a[29200] = anon_sym_LT_LT_DASH;
	v->a[29201] = aux_sym_heredoc_redirect_token1;
	v->a[29202] = anon_sym_AMP;
	v->a[29203] = anon_sym_SEMI;
	v->a[29204] = actions(690);
	v->a[29205] = 16;
	v->a[29206] = anon_sym_LT;
	v->a[29207] = anon_sym_GT;
	v->a[29208] = anon_sym_GT_GT;
	v->a[29209] = anon_sym_LT_AMP;
	v->a[29210] = anon_sym_GT_AMP;
	v->a[29211] = anon_sym_GT_PIPE;
	v->a[29212] = anon_sym_LT_GT;
	v->a[29213] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29214] = anon_sym_DOLLAR;
	v->a[29215] = anon_sym_DQUOTE;
	v->a[29216] = sym_raw_string;
	v->a[29217] = sym_number;
	v->a[29218] = anon_sym_DOLLAR_LBRACE;
	v->a[29219] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1461(v);
}

void	small_parse_table_1461(t_small_parse_table_array *v)
{
	v->a[29220] = anon_sym_BQUOTE;
	v->a[29221] = sym_word;
	v->a[29222] = 7;
	v->a[29223] = actions(3);
	v->a[29224] = 1;
	v->a[29225] = sym_comment;
	v->a[29226] = actions(921);
	v->a[29227] = 1;
	v->a[29228] = sym_file_descriptor;
	v->a[29229] = actions(938);
	v->a[29230] = 1;
	v->a[29231] = sym_variable_name;
	v->a[29232] = state(1038);
	v->a[29233] = 2;
	v->a[29234] = sym_variable_assignment;
	v->a[29235] = aux_sym__variable_assignments_repeat1;
	v->a[29236] = state(1034);
	v->a[29237] = 3;
	v->a[29238] = sym_file_redirect;
	v->a[29239] = sym_heredoc_redirect;
	small_parse_table_1462(v);
}

void	small_parse_table_1462(t_small_parse_table_array *v)
{
	v->a[29240] = aux_sym_redirected_statement_repeat1;
	v->a[29241] = actions(690);
	v->a[29242] = 8;
	v->a[29243] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29244] = anon_sym_DOLLAR;
	v->a[29245] = anon_sym_DQUOTE;
	v->a[29246] = sym_raw_string;
	v->a[29247] = sym_number;
	v->a[29248] = anon_sym_DOLLAR_LBRACE;
	v->a[29249] = anon_sym_DOLLAR_LPAREN;
	v->a[29250] = sym_word;
	v->a[29251] = actions(692);
	v->a[29252] = 17;
	v->a[29253] = anon_sym_PIPE;
	v->a[29254] = anon_sym_SEMI_SEMI;
	v->a[29255] = anon_sym_AMP_AMP;
	v->a[29256] = anon_sym_PIPE_PIPE;
	v->a[29257] = anon_sym_LT;
	v->a[29258] = anon_sym_GT;
	v->a[29259] = anon_sym_GT_GT;
	small_parse_table_1463(v);
}

void	small_parse_table_1463(t_small_parse_table_array *v)
{
	v->a[29260] = anon_sym_LT_AMP;
	v->a[29261] = anon_sym_GT_AMP;
	v->a[29262] = anon_sym_GT_PIPE;
	v->a[29263] = anon_sym_LT_GT;
	v->a[29264] = anon_sym_LT_LT;
	v->a[29265] = anon_sym_LT_LT_DASH;
	v->a[29266] = aux_sym_heredoc_redirect_token1;
	v->a[29267] = anon_sym_AMP;
	v->a[29268] = anon_sym_BQUOTE;
	v->a[29269] = anon_sym_SEMI;
	v->a[29270] = 7;
	v->a[29271] = actions(3);
	v->a[29272] = 1;
	v->a[29273] = sym_comment;
	v->a[29274] = actions(1085);
	v->a[29275] = 1;
	v->a[29276] = aux_sym_concatenation_token1;
	v->a[29277] = actions(1087);
	v->a[29278] = 1;
	v->a[29279] = sym__concat;
	small_parse_table_1464(v);
}

void	small_parse_table_1464(t_small_parse_table_array *v)
{
	v->a[29280] = actions(1105);
	v->a[29281] = 1;
	v->a[29282] = anon_sym_LPAREN;
	v->a[29283] = state(359);
	v->a[29284] = 1;
	v->a[29285] = aux_sym_concatenation_repeat1;
	v->a[29286] = actions(1051);
	v->a[29287] = 2;
	v->a[29288] = sym_file_descriptor;
	v->a[29289] = sym__bare_dollar;
	v->a[29290] = actions(1053);
	v->a[29291] = 26;
	v->a[29292] = anon_sym_esac;
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
