/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_243.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1215(t_small_parse_table_array *v)
{
	v->a[24300] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24301] = anon_sym_DQUOTE;
	v->a[24302] = sym_raw_string;
	v->a[24303] = sym_number;
	v->a[24304] = anon_sym_DOLLAR_LBRACE;
	v->a[24305] = anon_sym_DOLLAR_LPAREN;
	v->a[24306] = anon_sym_BQUOTE;
	v->a[24307] = sym_word;
	v->a[24308] = 12;
	v->a[24309] = actions(3);
	v->a[24310] = 1;
	v->a[24311] = sym_comment;
	v->a[24312] = actions(766);
	v->a[24313] = 1;
	v->a[24314] = anon_sym_PIPE;
	v->a[24315] = actions(774);
	v->a[24316] = 1;
	v->a[24317] = sym_file_descriptor;
	v->a[24318] = actions(837);
	v->a[24319] = 1;
	small_parse_table_1216(v);
}

void	small_parse_table_1216(t_small_parse_table_array *v)
{
	v->a[24320] = sym_variable_name;
	v->a[24321] = actions(840);
	v->a[24322] = 1;
	v->a[24323] = ts_builtin_sym_end;
	v->a[24324] = state(794);
	v->a[24325] = 1;
	v->a[24326] = sym_terminator;
	v->a[24327] = actions(804);
	v->a[24328] = 2;
	v->a[24329] = anon_sym_LT_LT;
	v->a[24330] = anon_sym_LT_LT_DASH;
	v->a[24331] = actions(835);
	v->a[24332] = 2;
	v->a[24333] = anon_sym_AMP_AMP;
	v->a[24334] = anon_sym_PIPE_PIPE;
	v->a[24335] = state(1131);
	v->a[24336] = 2;
	v->a[24337] = sym_variable_assignment;
	v->a[24338] = aux_sym__variable_assignments_repeat1;
	v->a[24339] = state(1133);
	small_parse_table_1217(v);
}

void	small_parse_table_1217(t_small_parse_table_array *v)
{
	v->a[24340] = 3;
	v->a[24341] = sym_file_redirect;
	v->a[24342] = sym_heredoc_redirect;
	v->a[24343] = aux_sym_redirected_statement_repeat1;
	v->a[24344] = actions(833);
	v->a[24345] = 4;
	v->a[24346] = anon_sym_SEMI_SEMI;
	v->a[24347] = aux_sym_heredoc_redirect_token1;
	v->a[24348] = anon_sym_AMP;
	v->a[24349] = anon_sym_SEMI;
	v->a[24350] = actions(762);
	v->a[24351] = 19;
	v->a[24352] = anon_sym_LT;
	v->a[24353] = anon_sym_GT;
	v->a[24354] = anon_sym_GT_GT;
	v->a[24355] = anon_sym_AMP_GT;
	v->a[24356] = anon_sym_AMP_GT_GT;
	v->a[24357] = anon_sym_LT_AMP;
	v->a[24358] = anon_sym_GT_AMP;
	v->a[24359] = anon_sym_GT_PIPE;
	small_parse_table_1218(v);
}

void	small_parse_table_1218(t_small_parse_table_array *v)
{
	v->a[24360] = anon_sym_LT_AMP_DASH;
	v->a[24361] = anon_sym_GT_AMP_DASH;
	v->a[24362] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24363] = anon_sym_DOLLAR;
	v->a[24364] = anon_sym_DQUOTE;
	v->a[24365] = sym_raw_string;
	v->a[24366] = sym_number;
	v->a[24367] = anon_sym_DOLLAR_LBRACE;
	v->a[24368] = anon_sym_DOLLAR_LPAREN;
	v->a[24369] = anon_sym_BQUOTE;
	v->a[24370] = sym_word;
	v->a[24371] = 13;
	v->a[24372] = actions(3);
	v->a[24373] = 1;
	v->a[24374] = sym_comment;
	v->a[24375] = actions(477);
	v->a[24376] = 1;
	v->a[24377] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24378] = actions(479);
	v->a[24379] = 1;
	small_parse_table_1219(v);
}

void	small_parse_table_1219(t_small_parse_table_array *v)
{
	v->a[24380] = anon_sym_DOLLAR;
	v->a[24381] = actions(481);
	v->a[24382] = 1;
	v->a[24383] = anon_sym_DQUOTE;
	v->a[24384] = actions(483);
	v->a[24385] = 1;
	v->a[24386] = anon_sym_DOLLAR_LBRACE;
	v->a[24387] = actions(485);
	v->a[24388] = 1;
	v->a[24389] = anon_sym_DOLLAR_LPAREN;
	v->a[24390] = actions(489);
	v->a[24391] = 1;
	v->a[24392] = sym__bare_dollar;
	v->a[24393] = actions(552);
	v->a[24394] = 1;
	v->a[24395] = sym_file_descriptor;
	v->a[24396] = state(218);
	v->a[24397] = 1;
	v->a[24398] = aux_sym_command_repeat2;
	v->a[24399] = state(712);
	small_parse_table_1220(v);
}

/* EOF small_parse_table_243.c */
