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
	v->a[24300] = anon_sym_PERCENT_EQ;
	v->a[24301] = anon_sym_LT_LT_EQ;
	v->a[24302] = anon_sym_GT_GT_EQ;
	v->a[24303] = anon_sym_AMP_EQ;
	v->a[24304] = anon_sym_CARET_EQ;
	v->a[24305] = anon_sym_PIPE_EQ;
	v->a[24306] = anon_sym_QMARK;
	v->a[24307] = anon_sym_COLON;
	v->a[24308] = 6;
	v->a[24309] = actions(3);
	v->a[24310] = 1;
	v->a[24311] = sym_comment;
	v->a[24312] = actions(379);
	v->a[24313] = 1;
	v->a[24314] = sym_file_descriptor;
	v->a[24315] = actions(880);
	v->a[24316] = 1;
	v->a[24317] = sym_variable_name;
	v->a[24318] = actions(878);
	v->a[24319] = 2;
	small_parse_table_1216(v);
}

void	small_parse_table_1216(t_small_parse_table_array *v)
{
	v->a[24320] = aux_sym__simple_variable_name_token1;
	v->a[24321] = aux_sym__multiline_variable_name_token1;
	v->a[24322] = actions(876);
	v->a[24323] = 9;
	v->a[24324] = anon_sym_BANG;
	v->a[24325] = anon_sym_DASH;
	v->a[24326] = anon_sym_STAR;
	v->a[24327] = anon_sym_QMARK;
	v->a[24328] = anon_sym_DOLLAR;
	v->a[24329] = anon_sym_POUND;
	v->a[24330] = anon_sym_AT;
	v->a[24331] = anon_sym_0;
	v->a[24332] = anon_sym__;
	v->a[24333] = actions(381);
	v->a[24334] = 21;
	v->a[24335] = anon_sym_PIPE;
	v->a[24336] = anon_sym_AMP_AMP;
	v->a[24337] = anon_sym_PIPE_PIPE;
	v->a[24338] = anon_sym_LT;
	v->a[24339] = anon_sym_GT;
	small_parse_table_1217(v);
}

void	small_parse_table_1217(t_small_parse_table_array *v)
{
	v->a[24340] = anon_sym_GT_GT;
	v->a[24341] = anon_sym_LT_AMP;
	v->a[24342] = anon_sym_GT_AMP;
	v->a[24343] = anon_sym_GT_PIPE;
	v->a[24344] = anon_sym_LT_AMP_DASH;
	v->a[24345] = anon_sym_GT_AMP_DASH;
	v->a[24346] = anon_sym_LT_LT;
	v->a[24347] = anon_sym_LT_LT_DASH;
	v->a[24348] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24349] = anon_sym_DQUOTE;
	v->a[24350] = sym_raw_string;
	v->a[24351] = sym_number;
	v->a[24352] = anon_sym_DOLLAR_LBRACE;
	v->a[24353] = anon_sym_DOLLAR_LPAREN;
	v->a[24354] = anon_sym_BQUOTE;
	v->a[24355] = sym_word;
	v->a[24356] = 20;
	v->a[24357] = actions(3);
	v->a[24358] = 1;
	v->a[24359] = sym_comment;
	small_parse_table_1218(v);
}

void	small_parse_table_1218(t_small_parse_table_array *v)
{
	v->a[24360] = actions(892);
	v->a[24361] = 1;
	v->a[24362] = aux_sym_heredoc_redirect_token1;
	v->a[24363] = actions(894);
	v->a[24364] = 1;
	v->a[24365] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24366] = actions(896);
	v->a[24367] = 1;
	v->a[24368] = anon_sym_DOLLAR;
	v->a[24369] = actions(898);
	v->a[24370] = 1;
	v->a[24371] = anon_sym_DQUOTE;
	v->a[24372] = actions(900);
	v->a[24373] = 1;
	v->a[24374] = anon_sym_DOLLAR_LBRACE;
	v->a[24375] = actions(902);
	v->a[24376] = 1;
	v->a[24377] = anon_sym_DOLLAR_LPAREN;
	v->a[24378] = actions(904);
	v->a[24379] = 1;
	small_parse_table_1219(v);
}

void	small_parse_table_1219(t_small_parse_table_array *v)
{
	v->a[24380] = anon_sym_BQUOTE;
	v->a[24381] = actions(906);
	v->a[24382] = 1;
	v->a[24383] = sym_file_descriptor;
	v->a[24384] = state(1418);
	v->a[24385] = 1;
	v->a[24386] = aux_sym__heredoc_command;
	v->a[24387] = state(1937);
	v->a[24388] = 1;
	v->a[24389] = sym_concatenation;
	v->a[24390] = state(2261);
	v->a[24391] = 1;
	v->a[24392] = sym__heredoc_expression;
	v->a[24393] = state(2262);
	v->a[24394] = 1;
	v->a[24395] = sym__heredoc_pipeline;
	v->a[24396] = actions(884);
	v->a[24397] = 2;
	v->a[24398] = anon_sym_PIPE;
	v->a[24399] = anon_sym_PIPE_AMP;
	small_parse_table_1220(v);
}

/* EOF small_parse_table_243.c */
