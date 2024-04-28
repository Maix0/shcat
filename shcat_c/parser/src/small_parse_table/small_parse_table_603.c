/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_603.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3015(t_small_parse_table_array *v)
{
	v->a[60300] = anon_sym_AMP_AMP;
	v->a[60301] = anon_sym_PIPE;
	v->a[60302] = anon_sym_AMP;
	v->a[60303] = anon_sym_LT;
	v->a[60304] = anon_sym_GT;
	v->a[60305] = anon_sym_LT_LT;
	v->a[60306] = anon_sym_GT_GT;
	v->a[60307] = anon_sym_SEMI_SEMI;
	v->a[60308] = anon_sym_PIPE_AMP;
	v->a[60309] = anon_sym_AMP_GT;
	v->a[60310] = anon_sym_AMP_GT_GT;
	v->a[60311] = anon_sym_LT_AMP;
	v->a[60312] = anon_sym_GT_AMP;
	v->a[60313] = anon_sym_GT_PIPE;
	v->a[60314] = anon_sym_LT_AMP_DASH;
	v->a[60315] = anon_sym_GT_AMP_DASH;
	v->a[60316] = anon_sym_LT_LT_DASH;
	v->a[60317] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60318] = anon_sym_DOLLAR_LBRACK;
	v->a[60319] = anon_sym_DOLLAR;
	small_parse_table_3016(v);
}

void	small_parse_table_3016(t_small_parse_table_array *v)
{
	v->a[60320] = sym__special_character;
	v->a[60321] = anon_sym_DQUOTE;
	v->a[60322] = sym_raw_string;
	v->a[60323] = sym_ansi_c_string;
	v->a[60324] = aux_sym_number_token1;
	v->a[60325] = aux_sym_number_token2;
	v->a[60326] = anon_sym_DOLLAR_LBRACE;
	v->a[60327] = anon_sym_DOLLAR_LPAREN;
	v->a[60328] = anon_sym_BQUOTE;
	v->a[60329] = anon_sym_DOLLAR_BQUOTE;
	v->a[60330] = anon_sym_LT_LPAREN;
	v->a[60331] = anon_sym_GT_LPAREN;
	v->a[60332] = aux_sym__simple_variable_name_token1;
	v->a[60333] = sym_word;
	v->a[60334] = 6;
	v->a[60335] = actions(3);
	v->a[60336] = 1;
	v->a[60337] = sym_comment;
	v->a[60338] = actions(5648);
	v->a[60339] = 1;
	small_parse_table_3017(v);
}

void	small_parse_table_3017(t_small_parse_table_array *v)
{
	v->a[60340] = aux_sym_concatenation_token1;
	v->a[60341] = actions(5654);
	v->a[60342] = 1;
	v->a[60343] = sym__concat;
	v->a[60344] = state(1333);
	v->a[60345] = 1;
	v->a[60346] = aux_sym_concatenation_repeat1;
	v->a[60347] = actions(4372);
	v->a[60348] = 6;
	v->a[60349] = sym_file_descriptor;
	v->a[60350] = sym_variable_name;
	v->a[60351] = sym_test_operator;
	v->a[60352] = sym__brace_start;
	v->a[60353] = ts_builtin_sym_end;
	v->a[60354] = aux_sym_heredoc_redirect_token1;
	v->a[60355] = actions(4370);
	v->a[60356] = 37;
	v->a[60357] = anon_sym_LPAREN_LPAREN;
	v->a[60358] = anon_sym_SEMI;
	v->a[60359] = anon_sym_PIPE_PIPE;
	small_parse_table_3018(v);
}

void	small_parse_table_3018(t_small_parse_table_array *v)
{
	v->a[60360] = anon_sym_AMP_AMP;
	v->a[60361] = anon_sym_PIPE;
	v->a[60362] = anon_sym_AMP;
	v->a[60363] = anon_sym_LT;
	v->a[60364] = anon_sym_GT;
	v->a[60365] = anon_sym_LT_LT;
	v->a[60366] = anon_sym_GT_GT;
	v->a[60367] = anon_sym_SEMI_SEMI;
	v->a[60368] = anon_sym_PIPE_AMP;
	v->a[60369] = anon_sym_AMP_GT;
	v->a[60370] = anon_sym_AMP_GT_GT;
	v->a[60371] = anon_sym_LT_AMP;
	v->a[60372] = anon_sym_GT_AMP;
	v->a[60373] = anon_sym_GT_PIPE;
	v->a[60374] = anon_sym_LT_AMP_DASH;
	v->a[60375] = anon_sym_GT_AMP_DASH;
	v->a[60376] = anon_sym_LT_LT_DASH;
	v->a[60377] = anon_sym_LT_LT_LT;
	v->a[60378] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60379] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_3019(v);
}

void	small_parse_table_3019(t_small_parse_table_array *v)
{
	v->a[60380] = anon_sym_DOLLAR;
	v->a[60381] = sym__special_character;
	v->a[60382] = anon_sym_DQUOTE;
	v->a[60383] = sym_raw_string;
	v->a[60384] = sym_ansi_c_string;
	v->a[60385] = aux_sym_number_token1;
	v->a[60386] = aux_sym_number_token2;
	v->a[60387] = anon_sym_DOLLAR_LBRACE;
	v->a[60388] = anon_sym_DOLLAR_LPAREN;
	v->a[60389] = anon_sym_BQUOTE;
	v->a[60390] = anon_sym_DOLLAR_BQUOTE;
	v->a[60391] = anon_sym_LT_LPAREN;
	v->a[60392] = anon_sym_GT_LPAREN;
	v->a[60393] = sym_word;
	v->a[60394] = 6;
	v->a[60395] = actions(3);
	v->a[60396] = 1;
	v->a[60397] = sym_comment;
	v->a[60398] = actions(5638);
	v->a[60399] = 1;
	small_parse_table_3020(v);
}

/* EOF small_parse_table_603.c */
