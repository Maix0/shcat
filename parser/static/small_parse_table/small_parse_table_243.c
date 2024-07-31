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
	v->a[24300] = anon_sym_BQUOTE;
	v->a[24301] = sym_word;
	v->a[24302] = 5;
	v->a[24303] = actions(3);
	v->a[24304] = 1;
	v->a[24305] = sym_comment;
	v->a[24306] = actions(952);
	v->a[24307] = 1;
	v->a[24308] = sym_variable_name;
	v->a[24309] = actions(950);
	v->a[24310] = 2;
	v->a[24311] = aux_sym__simple_variable_name_token1;
	v->a[24312] = aux_sym__multiline_variable_name_token1;
	v->a[24313] = actions(948);
	v->a[24314] = 8;
	v->a[24315] = anon_sym_BANG;
	v->a[24316] = anon_sym_DASH;
	v->a[24317] = anon_sym_STAR;
	v->a[24318] = anon_sym_QMARK;
	v->a[24319] = anon_sym_DOLLAR;
	small_parse_table_1216(v);
}

void	small_parse_table_1216(t_small_parse_table_array *v)
{
	v->a[24320] = anon_sym_POUND;
	v->a[24321] = anon_sym_AT;
	v->a[24322] = anon_sym_0;
	v->a[24323] = actions(345);
	v->a[24324] = 20;
	v->a[24325] = anon_sym_PIPE;
	v->a[24326] = anon_sym_AMP_AMP;
	v->a[24327] = anon_sym_PIPE_PIPE;
	v->a[24328] = anon_sym_LT;
	v->a[24329] = anon_sym_GT;
	v->a[24330] = anon_sym_GT_GT;
	v->a[24331] = anon_sym_LT_AMP;
	v->a[24332] = anon_sym_GT_AMP;
	v->a[24333] = anon_sym_GT_PIPE;
	v->a[24334] = anon_sym_LT_GT;
	v->a[24335] = anon_sym_LT_LT;
	v->a[24336] = anon_sym_LT_LT_DASH;
	v->a[24337] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24338] = anon_sym_DQUOTE;
	v->a[24339] = sym_raw_string;
	small_parse_table_1217(v);
}

void	small_parse_table_1217(t_small_parse_table_array *v)
{
	v->a[24340] = sym_number;
	v->a[24341] = anon_sym_DOLLAR_LBRACE;
	v->a[24342] = anon_sym_DOLLAR_LPAREN;
	v->a[24343] = anon_sym_BQUOTE;
	v->a[24344] = sym_word;
	v->a[24345] = 10;
	v->a[24346] = actions(3);
	v->a[24347] = 1;
	v->a[24348] = sym_comment;
	v->a[24349] = actions(886);
	v->a[24350] = 1;
	v->a[24351] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24352] = actions(888);
	v->a[24353] = 1;
	v->a[24354] = anon_sym_DOLLAR;
	v->a[24355] = actions(890);
	v->a[24356] = 1;
	v->a[24357] = anon_sym_DQUOTE;
	v->a[24358] = actions(892);
	v->a[24359] = 1;
	small_parse_table_1218(v);
}

void	small_parse_table_1218(t_small_parse_table_array *v)
{
	v->a[24360] = anon_sym_DOLLAR_LBRACE;
	v->a[24361] = actions(894);
	v->a[24362] = 1;
	v->a[24363] = anon_sym_DOLLAR_LPAREN;
	v->a[24364] = state(301);
	v->a[24365] = 2;
	v->a[24366] = sym_concatenation;
	v->a[24367] = aux_sym_for_statement_repeat1;
	v->a[24368] = actions(944);
	v->a[24369] = 3;
	v->a[24370] = sym_raw_string;
	v->a[24371] = sym_number;
	v->a[24372] = sym_word;
	v->a[24373] = state(512);
	v->a[24374] = 5;
	v->a[24375] = sym_arithmetic_expansion;
	v->a[24376] = sym_string;
	v->a[24377] = sym_simple_expansion;
	v->a[24378] = sym_expansion;
	v->a[24379] = sym_command_substitution;
	small_parse_table_1219(v);
}

void	small_parse_table_1219(t_small_parse_table_array *v)
{
	v->a[24380] = actions(487);
	v->a[24381] = 16;
	v->a[24382] = anon_sym_PIPE;
	v->a[24383] = anon_sym_SEMI_SEMI;
	v->a[24384] = anon_sym_AMP_AMP;
	v->a[24385] = anon_sym_PIPE_PIPE;
	v->a[24386] = anon_sym_LT;
	v->a[24387] = anon_sym_GT;
	v->a[24388] = anon_sym_GT_GT;
	v->a[24389] = anon_sym_LT_AMP;
	v->a[24390] = anon_sym_GT_AMP;
	v->a[24391] = anon_sym_GT_PIPE;
	v->a[24392] = anon_sym_LT_GT;
	v->a[24393] = anon_sym_LT_LT;
	v->a[24394] = anon_sym_LT_LT_DASH;
	v->a[24395] = aux_sym_heredoc_redirect_token1;
	v->a[24396] = anon_sym_BQUOTE;
	v->a[24397] = anon_sym_SEMI;
	v->a[24398] = 18;
	v->a[24399] = actions(3);
	small_parse_table_1220(v);
}

/* EOF small_parse_table_243.c */
