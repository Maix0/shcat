/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_433.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2165(t_small_parse_table_array *v)
{
	v->a[43300] = actions(981);
	v->a[43301] = 2;
	v->a[43302] = sym_variable_name;
	v->a[43303] = aux_sym_heredoc_redirect_token1;
	v->a[43304] = actions(973);
	v->a[43305] = 10;
	v->a[43306] = anon_sym_esac;
	v->a[43307] = anon_sym_PIPE;
	v->a[43308] = anon_sym_SEMI_SEMI;
	v->a[43309] = anon_sym_AMP_AMP;
	v->a[43310] = anon_sym_PIPE_PIPE;
	v->a[43311] = anon_sym_LT;
	v->a[43312] = anon_sym_GT;
	v->a[43313] = anon_sym_GT_GT;
	v->a[43314] = anon_sym_LT_LT;
	v->a[43315] = anon_sym_SEMI;
	v->a[43316] = 7;
	v->a[43317] = actions(3);
	v->a[43318] = 1;
	v->a[43319] = sym_comment;
	small_parse_table_2166(v);
}

void	small_parse_table_2166(t_small_parse_table_array *v)
{
	v->a[43320] = actions(931);
	v->a[43321] = 1;
	v->a[43322] = anon_sym_RBRACE;
	v->a[43323] = actions(937);
	v->a[43324] = 1;
	v->a[43325] = anon_sym_PERCENT;
	v->a[43326] = state(1653);
	v->a[43327] = 1;
	v->a[43328] = sym__expansion_regex;
	v->a[43329] = state(1654);
	v->a[43330] = 1;
	v->a[43331] = sym__expansion_expression;
	v->a[43332] = actions(943);
	v->a[43333] = 3;
	v->a[43334] = sym__immediate_double_hash;
	v->a[43335] = anon_sym_POUND;
	v->a[43336] = anon_sym_PERCENT_PERCENT;
	v->a[43337] = actions(941);
	v->a[43338] = 8;
	v->a[43339] = anon_sym_COLON_DASH;
	small_parse_table_2167(v);
}

void	small_parse_table_2167(t_small_parse_table_array *v)
{
	v->a[43340] = anon_sym_DASH3;
	v->a[43341] = anon_sym_COLON_EQ;
	v->a[43342] = anon_sym_EQ2;
	v->a[43343] = anon_sym_COLON_QMARK;
	v->a[43344] = anon_sym_QMARK2;
	v->a[43345] = anon_sym_COLON_PLUS;
	v->a[43346] = anon_sym_PLUS3;
	v->a[43347] = 10;
	v->a[43348] = actions(3);
	v->a[43349] = 1;
	v->a[43350] = sym_comment;
	v->a[43351] = actions(580);
	v->a[43352] = 1;
	v->a[43353] = anon_sym_PIPE;
	v->a[43354] = actions(591);
	v->a[43355] = 1;
	v->a[43356] = anon_sym_RPAREN;
	v->a[43357] = actions(597);
	v->a[43358] = 1;
	v->a[43359] = anon_sym_LT_LT;
	small_parse_table_2168(v);
}

void	small_parse_table_2168(t_small_parse_table_array *v)
{
	v->a[43360] = actions(1870);
	v->a[43361] = 1;
	v->a[43362] = aux_sym_heredoc_redirect_token1;
	v->a[43363] = state(383);
	v->a[43364] = 1;
	v->a[43365] = sym_terminator;
	v->a[43366] = actions(593);
	v->a[43367] = 2;
	v->a[43368] = anon_sym_SEMI_SEMI;
	v->a[43369] = anon_sym_SEMI;
	v->a[43370] = actions(595);
	v->a[43371] = 2;
	v->a[43372] = anon_sym_AMP_AMP;
	v->a[43373] = anon_sym_PIPE_PIPE;
	v->a[43374] = actions(1868);
	v->a[43375] = 3;
	v->a[43376] = anon_sym_LT;
	v->a[43377] = anon_sym_GT;
	v->a[43378] = anon_sym_GT_GT;
	v->a[43379] = state(916);
	small_parse_table_2169(v);
}

void	small_parse_table_2169(t_small_parse_table_array *v)
{
	v->a[43380] = 3;
	v->a[43381] = sym_file_redirect;
	v->a[43382] = sym_heredoc_redirect;
	v->a[43383] = aux_sym_redirected_statement_repeat1;
	v->a[43384] = 6;
	v->a[43385] = actions(3);
	v->a[43386] = 1;
	v->a[43387] = sym_comment;
	v->a[43388] = actions(1890);
	v->a[43389] = 1;
	v->a[43390] = aux_sym_concatenation_token1;
	v->a[43391] = actions(1920);
	v->a[43392] = 1;
	v->a[43393] = sym__concat;
	v->a[43394] = state(766);
	v->a[43395] = 1;
	v->a[43396] = aux_sym_concatenation_repeat1;
	v->a[43397] = actions(921);
	v->a[43398] = 3;
	v->a[43399] = sym_variable_name;
	small_parse_table_2170(v);
}

/* EOF small_parse_table_433.c */
