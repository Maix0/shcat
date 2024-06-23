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
	v->a[24300] = sym_file_descriptor;
	v->a[24301] = actions(813);
	v->a[24302] = 1;
	v->a[24303] = sym_variable_name;
	v->a[24304] = state(1285);
	v->a[24305] = 2;
	v->a[24306] = sym_variable_assignment;
	v->a[24307] = aux_sym__variable_assignments_repeat1;
	v->a[24308] = state(1289);
	v->a[24309] = 3;
	v->a[24310] = sym_file_redirect;
	v->a[24311] = sym_heredoc_redirect;
	v->a[24312] = aux_sym_redirected_statement_repeat1;
	v->a[24313] = actions(809);
	v->a[24314] = 8;
	v->a[24315] = anon_sym_SEMI_SEMI;
	v->a[24316] = anon_sym_AMP_AMP;
	v->a[24317] = anon_sym_PIPE_PIPE;
	v->a[24318] = anon_sym_LT_LT;
	v->a[24319] = anon_sym_LT_LT_DASH;
	small_parse_table_1216(v);
}

void	small_parse_table_1216(t_small_parse_table_array *v)
{
	v->a[24320] = aux_sym_heredoc_redirect_token1;
	v->a[24321] = anon_sym_AMP;
	v->a[24322] = anon_sym_SEMI;
	v->a[24323] = actions(805);
	v->a[24324] = 19;
	v->a[24325] = anon_sym_LT;
	v->a[24326] = anon_sym_GT;
	v->a[24327] = anon_sym_GT_GT;
	v->a[24328] = anon_sym_AMP_GT;
	v->a[24329] = anon_sym_AMP_GT_GT;
	v->a[24330] = anon_sym_LT_AMP;
	v->a[24331] = anon_sym_GT_AMP;
	v->a[24332] = anon_sym_GT_PIPE;
	v->a[24333] = anon_sym_LT_AMP_DASH;
	v->a[24334] = anon_sym_GT_AMP_DASH;
	v->a[24335] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24336] = anon_sym_DOLLAR;
	v->a[24337] = anon_sym_DQUOTE;
	v->a[24338] = sym_raw_string;
	v->a[24339] = sym_number;
	small_parse_table_1217(v);
}

void	small_parse_table_1217(t_small_parse_table_array *v)
{
	v->a[24340] = anon_sym_DOLLAR_LBRACE;
	v->a[24341] = anon_sym_DOLLAR_LPAREN;
	v->a[24342] = anon_sym_BQUOTE;
	v->a[24343] = sym_word;
	v->a[24344] = 6;
	v->a[24345] = actions(3);
	v->a[24346] = 1;
	v->a[24347] = sym_comment;
	v->a[24348] = actions(379);
	v->a[24349] = 1;
	v->a[24350] = sym_file_descriptor;
	v->a[24351] = actions(820);
	v->a[24352] = 1;
	v->a[24353] = sym_variable_name;
	v->a[24354] = actions(818);
	v->a[24355] = 2;
	v->a[24356] = aux_sym__simple_variable_name_token1;
	v->a[24357] = aux_sym__multiline_variable_name_token1;
	v->a[24358] = actions(816);
	v->a[24359] = 9;
	small_parse_table_1218(v);
}

void	small_parse_table_1218(t_small_parse_table_array *v)
{
	v->a[24360] = anon_sym_BANG;
	v->a[24361] = anon_sym_DASH;
	v->a[24362] = anon_sym_STAR;
	v->a[24363] = anon_sym_QMARK;
	v->a[24364] = anon_sym_DOLLAR;
	v->a[24365] = anon_sym_POUND;
	v->a[24366] = anon_sym_AT;
	v->a[24367] = anon_sym_0;
	v->a[24368] = anon_sym__;
	v->a[24369] = actions(381);
	v->a[24370] = 23;
	v->a[24371] = anon_sym_PIPE;
	v->a[24372] = anon_sym_AMP_AMP;
	v->a[24373] = anon_sym_PIPE_PIPE;
	v->a[24374] = anon_sym_LT;
	v->a[24375] = anon_sym_GT;
	v->a[24376] = anon_sym_GT_GT;
	v->a[24377] = anon_sym_AMP_GT;
	v->a[24378] = anon_sym_AMP_GT_GT;
	v->a[24379] = anon_sym_LT_AMP;
	small_parse_table_1219(v);
}

void	small_parse_table_1219(t_small_parse_table_array *v)
{
	v->a[24380] = anon_sym_GT_AMP;
	v->a[24381] = anon_sym_GT_PIPE;
	v->a[24382] = anon_sym_LT_AMP_DASH;
	v->a[24383] = anon_sym_GT_AMP_DASH;
	v->a[24384] = anon_sym_LT_LT;
	v->a[24385] = anon_sym_LT_LT_DASH;
	v->a[24386] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24387] = anon_sym_DQUOTE;
	v->a[24388] = sym_raw_string;
	v->a[24389] = sym_number;
	v->a[24390] = anon_sym_DOLLAR_LBRACE;
	v->a[24391] = anon_sym_DOLLAR_LPAREN;
	v->a[24392] = anon_sym_BQUOTE;
	v->a[24393] = sym_word;
	v->a[24394] = 12;
	v->a[24395] = actions(3);
	v->a[24396] = 1;
	v->a[24397] = sym_comment;
	v->a[24398] = actions(824);
	v->a[24399] = 1;
	small_parse_table_1220(v);
}

/* EOF small_parse_table_243.c */
