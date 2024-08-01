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
	v->a[29200] = anon_sym_LPAREN;
	v->a[29201] = actions(782);
	v->a[29202] = 1;
	v->a[29203] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29204] = actions(784);
	v->a[29205] = 1;
	v->a[29206] = anon_sym_DOLLAR;
	v->a[29207] = actions(786);
	v->a[29208] = 1;
	v->a[29209] = anon_sym_DQUOTE;
	v->a[29210] = actions(788);
	v->a[29211] = 1;
	v->a[29212] = anon_sym_DOLLAR_LBRACE;
	v->a[29213] = actions(790);
	v->a[29214] = 1;
	v->a[29215] = anon_sym_DOLLAR_LPAREN;
	v->a[29216] = actions(792);
	v->a[29217] = 1;
	v->a[29218] = anon_sym_BQUOTE;
	v->a[29219] = actions(794);
	small_parse_table_1461(v);
}

void	small_parse_table_1461(t_small_parse_table_array *v)
{
	v->a[29220] = 1;
	v->a[29221] = sym_extglob_pattern;
	v->a[29222] = actions(1218);
	v->a[29223] = 1;
	v->a[29224] = anon_sym_esac;
	v->a[29225] = state(576);
	v->a[29226] = 1;
	v->a[29227] = aux_sym_case_statement_repeat1;
	v->a[29228] = state(1232);
	v->a[29229] = 1;
	v->a[29230] = sym_case_item;
	v->a[29231] = state(1660);
	v->a[29232] = 1;
	v->a[29233] = sym__case_item_last;
	v->a[29234] = state(1538);
	v->a[29235] = 2;
	v->a[29236] = sym_concatenation;
	v->a[29237] = sym__extglob_blob;
	v->a[29238] = actions(774);
	v->a[29239] = 3;
	small_parse_table_1462(v);
}

void	small_parse_table_1462(t_small_parse_table_array *v)
{
	v->a[29240] = sym_raw_string;
	v->a[29241] = sym_number;
	v->a[29242] = sym_word;
	v->a[29243] = state(1468);
	v->a[29244] = 5;
	v->a[29245] = sym_arithmetic_expansion;
	v->a[29246] = sym_string;
	v->a[29247] = sym_simple_expansion;
	v->a[29248] = sym_expansion;
	v->a[29249] = sym_command_substitution;
	v->a[29250] = 7;
	v->a[29251] = actions(3);
	v->a[29252] = 1;
	v->a[29253] = sym_comment;
	v->a[29254] = actions(841);
	v->a[29255] = 1;
	v->a[29256] = sym__bare_dollar;
	v->a[29257] = actions(857);
	v->a[29258] = 1;
	v->a[29259] = aux_sym_concatenation_token1;
	small_parse_table_1463(v);
}

void	small_parse_table_1463(t_small_parse_table_array *v)
{
	v->a[29260] = actions(859);
	v->a[29261] = 1;
	v->a[29262] = sym__concat;
	v->a[29263] = actions(1220);
	v->a[29264] = 1;
	v->a[29265] = anon_sym_LPAREN;
	v->a[29266] = state(579);
	v->a[29267] = 1;
	v->a[29268] = aux_sym_concatenation_repeat1;
	v->a[29269] = actions(833);
	v->a[29270] = 17;
	v->a[29271] = anon_sym_PIPE;
	v->a[29272] = anon_sym_AMP_AMP;
	v->a[29273] = anon_sym_PIPE_PIPE;
	v->a[29274] = anon_sym_LT;
	v->a[29275] = anon_sym_GT;
	v->a[29276] = anon_sym_GT_GT;
	v->a[29277] = anon_sym_LT_LT;
	v->a[29278] = aux_sym_heredoc_redirect_token1;
	v->a[29279] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1464(v);
}

void	small_parse_table_1464(t_small_parse_table_array *v)
{
	v->a[29280] = anon_sym_DOLLAR;
	v->a[29281] = anon_sym_DQUOTE;
	v->a[29282] = sym_raw_string;
	v->a[29283] = sym_number;
	v->a[29284] = anon_sym_DOLLAR_LBRACE;
	v->a[29285] = anon_sym_DOLLAR_LPAREN;
	v->a[29286] = anon_sym_BQUOTE;
	v->a[29287] = sym_word;
	v->a[29288] = 5;
	v->a[29289] = actions(3);
	v->a[29290] = 1;
	v->a[29291] = sym_comment;
	v->a[29292] = actions(1183);
	v->a[29293] = 1;
	v->a[29294] = sym_variable_name;
	v->a[29295] = actions(1181);
	v->a[29296] = 2;
	v->a[29297] = aux_sym__simple_variable_name_token1;
	v->a[29298] = aux_sym__multiline_variable_name_token1;
	v->a[29299] = actions(1179);
	small_parse_table_1465(v);
}

/* EOF small_parse_table_292.c */
