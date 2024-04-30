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
	v->a[24300] = anon_sym_DOLLAR_LBRACE;
	v->a[24301] = actions(3799);
	v->a[24302] = 1;
	v->a[24303] = anon_sym_DOLLAR_LPAREN;
	v->a[24304] = actions(3803);
	v->a[24305] = 1;
	v->a[24306] = anon_sym_DOLLAR_BQUOTE;
	v->a[24307] = actions(3809);
	v->a[24308] = 1;
	v->a[24309] = sym__brace_start;
	v->a[24310] = actions(4070);
	v->a[24311] = 1;
	v->a[24312] = sym__special_character;
	v->a[24313] = actions(4129);
	v->a[24314] = 1;
	v->a[24315] = sym_test_operator;
	v->a[24316] = state(4277);
	v->a[24317] = 1;
	v->a[24318] = aux_sym__literal_repeat1;
	v->a[24319] = state(4782);
	small_parse_table_1216(v);
}

void	small_parse_table_1216(t_small_parse_table_array *v)
{
	v->a[24320] = 1;
	v->a[24321] = sym_concatenation;
	v->a[24322] = actions(2496);
	v->a[24323] = 2;
	v->a[24324] = sym_file_descriptor;
	v->a[24325] = aux_sym_heredoc_redirect_token1;
	v->a[24326] = actions(3783);
	v->a[24327] = 2;
	v->a[24328] = anon_sym_LPAREN_LPAREN;
	v->a[24329] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24330] = actions(3805);
	v->a[24331] = 2;
	v->a[24332] = anon_sym_LT_LPAREN;
	v->a[24333] = anon_sym_GT_LPAREN;
	v->a[24334] = actions(4127);
	v->a[24335] = 3;
	v->a[24336] = sym_raw_string;
	v->a[24337] = sym_ansi_c_string;
	v->a[24338] = sym_word;
	v->a[24339] = state(4479);
	small_parse_table_1217(v);
}

void	small_parse_table_1217(t_small_parse_table_array *v)
{
	v->a[24340] = 9;
	v->a[24341] = sym_arithmetic_expansion;
	v->a[24342] = sym_brace_expression;
	v->a[24343] = sym_string;
	v->a[24344] = sym_translated_string;
	v->a[24345] = sym_number;
	v->a[24346] = sym_simple_expansion;
	v->a[24347] = sym_expansion;
	v->a[24348] = sym_command_substitution;
	v->a[24349] = sym_process_substitution;
	v->a[24350] = actions(2494);
	v->a[24351] = 21;
	v->a[24352] = anon_sym_SEMI;
	v->a[24353] = anon_sym_PIPE_PIPE;
	v->a[24354] = anon_sym_AMP_AMP;
	v->a[24355] = anon_sym_PIPE;
	v->a[24356] = anon_sym_AMP;
	v->a[24357] = anon_sym_LT;
	v->a[24358] = anon_sym_GT;
	v->a[24359] = anon_sym_LT_LT;
	small_parse_table_1218(v);
}

void	small_parse_table_1218(t_small_parse_table_array *v)
{
	v->a[24360] = anon_sym_GT_GT;
	v->a[24361] = anon_sym_SEMI_SEMI;
	v->a[24362] = anon_sym_PIPE_AMP;
	v->a[24363] = anon_sym_AMP_GT;
	v->a[24364] = anon_sym_AMP_GT_GT;
	v->a[24365] = anon_sym_LT_AMP;
	v->a[24366] = anon_sym_GT_AMP;
	v->a[24367] = anon_sym_GT_PIPE;
	v->a[24368] = anon_sym_LT_AMP_DASH;
	v->a[24369] = anon_sym_GT_AMP_DASH;
	v->a[24370] = anon_sym_LT_LT_DASH;
	v->a[24371] = anon_sym_LT_LT_LT;
	v->a[24372] = anon_sym_BQUOTE;
	v->a[24373] = 20;
	v->a[24374] = actions(3);
	v->a[24375] = 1;
	v->a[24376] = sym_comment;
	v->a[24377] = actions(3580);
	v->a[24378] = 1;
	v->a[24379] = anon_sym_DQUOTE;
	small_parse_table_1219(v);
}

void	small_parse_table_1219(t_small_parse_table_array *v)
{
	v->a[24380] = actions(3610);
	v->a[24381] = 1;
	v->a[24382] = anon_sym_DOLLAR_LBRACK;
	v->a[24383] = actions(3612);
	v->a[24384] = 1;
	v->a[24385] = anon_sym_DOLLAR;
	v->a[24386] = actions(3616);
	v->a[24387] = 1;
	v->a[24388] = aux_sym_number_token1;
	v->a[24389] = actions(3618);
	v->a[24390] = 1;
	v->a[24391] = aux_sym_number_token2;
	v->a[24392] = actions(3620);
	v->a[24393] = 1;
	v->a[24394] = anon_sym_DOLLAR_LBRACE;
	v->a[24395] = actions(3622);
	v->a[24396] = 1;
	v->a[24397] = anon_sym_DOLLAR_LPAREN;
	v->a[24398] = actions(3626);
	v->a[24399] = 1;
	small_parse_table_1220(v);
}

/* EOF small_parse_table_243.c */