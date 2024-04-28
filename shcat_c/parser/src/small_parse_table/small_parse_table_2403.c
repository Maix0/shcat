/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2403.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12015(t_small_parse_table_array *v)
{
	v->a[240300] = 2;
	v->a[240301] = sym_file_descriptor;
	v->a[240302] = aux_sym_heredoc_redirect_token1;
	v->a[240303] = actions(1251);
	v->a[240304] = 23;
	v->a[240305] = anon_sym_SEMI;
	v->a[240306] = anon_sym_PIPE_PIPE;
	v->a[240307] = anon_sym_AMP_AMP;
	v->a[240308] = anon_sym_PIPE;
	v->a[240309] = anon_sym_AMP;
	v->a[240310] = anon_sym_LT;
	v->a[240311] = anon_sym_GT;
	v->a[240312] = anon_sym_LT_LT;
	v->a[240313] = anon_sym_GT_GT;
	v->a[240314] = anon_sym_esac;
	v->a[240315] = anon_sym_SEMI_SEMI;
	v->a[240316] = anon_sym_SEMI_AMP;
	v->a[240317] = anon_sym_SEMI_SEMI_AMP;
	v->a[240318] = anon_sym_PIPE_AMP;
	v->a[240319] = anon_sym_AMP_GT;
	small_parse_table_12016(v);
}

void	small_parse_table_12016(t_small_parse_table_array *v)
{
	v->a[240320] = anon_sym_AMP_GT_GT;
	v->a[240321] = anon_sym_LT_AMP;
	v->a[240322] = anon_sym_GT_AMP;
	v->a[240323] = anon_sym_GT_PIPE;
	v->a[240324] = anon_sym_LT_AMP_DASH;
	v->a[240325] = anon_sym_GT_AMP_DASH;
	v->a[240326] = anon_sym_LT_LT_DASH;
	v->a[240327] = anon_sym_LT_LT_LT;
	v->a[240328] = 6;
	v->a[240329] = actions(3);
	v->a[240330] = 1;
	v->a[240331] = sym_comment;
	v->a[240332] = actions(11301);
	v->a[240333] = 1;
	v->a[240334] = aux_sym_concatenation_token1;
	v->a[240335] = actions(11303);
	v->a[240336] = 1;
	v->a[240337] = sym__concat;
	v->a[240338] = state(4309);
	v->a[240339] = 1;
	small_parse_table_12017(v);
}

void	small_parse_table_12017(t_small_parse_table_array *v)
{
	v->a[240340] = aux_sym_concatenation_repeat1;
	v->a[240341] = actions(1263);
	v->a[240342] = 2;
	v->a[240343] = sym_file_descriptor;
	v->a[240344] = aux_sym_heredoc_redirect_token1;
	v->a[240345] = actions(1261);
	v->a[240346] = 23;
	v->a[240347] = anon_sym_SEMI;
	v->a[240348] = anon_sym_PIPE_PIPE;
	v->a[240349] = anon_sym_AMP_AMP;
	v->a[240350] = anon_sym_PIPE;
	v->a[240351] = anon_sym_AMP;
	v->a[240352] = anon_sym_LT;
	v->a[240353] = anon_sym_GT;
	v->a[240354] = anon_sym_LT_LT;
	v->a[240355] = anon_sym_GT_GT;
	v->a[240356] = anon_sym_SEMI_SEMI;
	v->a[240357] = anon_sym_SEMI_AMP;
	v->a[240358] = anon_sym_SEMI_SEMI_AMP;
	v->a[240359] = anon_sym_PIPE_AMP;
	small_parse_table_12018(v);
}

void	small_parse_table_12018(t_small_parse_table_array *v)
{
	v->a[240360] = anon_sym_AMP_GT;
	v->a[240361] = anon_sym_AMP_GT_GT;
	v->a[240362] = anon_sym_LT_AMP;
	v->a[240363] = anon_sym_GT_AMP;
	v->a[240364] = anon_sym_GT_PIPE;
	v->a[240365] = anon_sym_LT_AMP_DASH;
	v->a[240366] = anon_sym_GT_AMP_DASH;
	v->a[240367] = anon_sym_LT_LT_DASH;
	v->a[240368] = anon_sym_LT_LT_LT;
	v->a[240369] = sym__special_character;
	v->a[240370] = 6;
	v->a[240371] = actions(3);
	v->a[240372] = 1;
	v->a[240373] = sym_comment;
	v->a[240374] = actions(11305);
	v->a[240375] = 1;
	v->a[240376] = anon_sym_LT_LT_LT;
	v->a[240377] = state(5069);
	v->a[240378] = 1;
	v->a[240379] = sym_herestring_redirect;
	small_parse_table_12019(v);
}

void	small_parse_table_12019(t_small_parse_table_array *v)
{
	v->a[240380] = actions(4348);
	v->a[240381] = 2;
	v->a[240382] = sym_file_descriptor;
	v->a[240383] = aux_sym_heredoc_redirect_token1;
	v->a[240384] = state(4455);
	v->a[240385] = 3;
	v->a[240386] = sym_file_redirect;
	v->a[240387] = sym_heredoc_redirect;
	v->a[240388] = aux_sym_redirected_statement_repeat1;
	v->a[240389] = actions(4253);
	v->a[240390] = 21;
	v->a[240391] = anon_sym_SEMI;
	v->a[240392] = anon_sym_PIPE_PIPE;
	v->a[240393] = anon_sym_AMP_AMP;
	v->a[240394] = anon_sym_PIPE;
	v->a[240395] = anon_sym_AMP;
	v->a[240396] = anon_sym_LT;
	v->a[240397] = anon_sym_GT;
	v->a[240398] = anon_sym_LT_LT;
	v->a[240399] = anon_sym_GT_GT;
	small_parse_table_12020(v);
}

/* EOF small_parse_table_2403.c */
