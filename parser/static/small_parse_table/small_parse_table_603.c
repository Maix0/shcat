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
	v->a[60300] = aux_sym_heredoc_redirect_token1;
	v->a[60301] = actions(2662);
	v->a[60302] = 33;
	v->a[60303] = anon_sym_PIPE;
	v->a[60304] = anon_sym_SEMI_SEMI;
	v->a[60305] = anon_sym_SEMI_AMP;
	v->a[60306] = anon_sym_SEMI_SEMI_AMP;
	v->a[60307] = anon_sym_PIPE_AMP;
	v->a[60308] = anon_sym_AMP_AMP;
	v->a[60309] = anon_sym_PIPE_PIPE;
	v->a[60310] = anon_sym_LT;
	v->a[60311] = anon_sym_GT;
	v->a[60312] = anon_sym_GT_GT;
	v->a[60313] = anon_sym_AMP_GT;
	v->a[60314] = anon_sym_AMP_GT_GT;
	v->a[60315] = anon_sym_LT_AMP;
	v->a[60316] = anon_sym_GT_AMP;
	v->a[60317] = anon_sym_GT_PIPE;
	v->a[60318] = anon_sym_LT_AMP_DASH;
	v->a[60319] = anon_sym_GT_AMP_DASH;
	small_parse_table_3016(v);
}

void	small_parse_table_3016(t_small_parse_table_array *v)
{
	v->a[60320] = anon_sym_LT_LT;
	v->a[60321] = anon_sym_LT_LT_DASH;
	v->a[60322] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60323] = anon_sym_AMP;
	v->a[60324] = anon_sym_DOLLAR;
	v->a[60325] = sym__special_character;
	v->a[60326] = anon_sym_DQUOTE;
	v->a[60327] = sym_raw_string;
	v->a[60328] = aux_sym_number_token1;
	v->a[60329] = aux_sym_number_token2;
	v->a[60330] = anon_sym_DOLLAR_LBRACE;
	v->a[60331] = anon_sym_DOLLAR_LPAREN;
	v->a[60332] = anon_sym_BQUOTE;
	v->a[60333] = anon_sym_DOLLAR_BQUOTE;
	v->a[60334] = sym_word;
	v->a[60335] = anon_sym_SEMI;
	v->a[60336] = 8;
	v->a[60337] = actions(3);
	v->a[60338] = 1;
	v->a[60339] = sym_comment;
	small_parse_table_3017(v);
}

void	small_parse_table_3017(t_small_parse_table_array *v)
{
	v->a[60340] = actions(3632);
	v->a[60341] = 1;
	v->a[60342] = aux_sym_heredoc_redirect_token1;
	v->a[60343] = actions(3634);
	v->a[60344] = 1;
	v->a[60345] = sym_file_descriptor;
	v->a[60346] = actions(3969);
	v->a[60347] = 1;
	v->a[60348] = anon_sym_RPAREN;
	v->a[60349] = actions(3637);
	v->a[60350] = 3;
	v->a[60351] = sym_variable_name;
	v->a[60352] = sym_test_operator;
	v->a[60353] = sym__brace_start;
	v->a[60354] = actions(3627);
	v->a[60355] = 9;
	v->a[60356] = anon_sym_PIPE;
	v->a[60357] = anon_sym_SEMI_SEMI;
	v->a[60358] = anon_sym_PIPE_AMP;
	v->a[60359] = anon_sym_AMP_AMP;
	small_parse_table_3018(v);
}

void	small_parse_table_3018(t_small_parse_table_array *v)
{
	v->a[60360] = anon_sym_PIPE_PIPE;
	v->a[60361] = anon_sym_LT_LT;
	v->a[60362] = anon_sym_LT_LT_DASH;
	v->a[60363] = anon_sym_AMP;
	v->a[60364] = anon_sym_SEMI;
	v->a[60365] = actions(3629);
	v->a[60366] = 10;
	v->a[60367] = anon_sym_LT;
	v->a[60368] = anon_sym_GT;
	v->a[60369] = anon_sym_GT_GT;
	v->a[60370] = anon_sym_AMP_GT;
	v->a[60371] = anon_sym_AMP_GT_GT;
	v->a[60372] = anon_sym_LT_AMP;
	v->a[60373] = anon_sym_GT_AMP;
	v->a[60374] = anon_sym_GT_PIPE;
	v->a[60375] = anon_sym_LT_AMP_DASH;
	v->a[60376] = anon_sym_GT_AMP_DASH;
	v->a[60377] = actions(3625);
	v->a[60378] = 12;
	v->a[60379] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3019(v);
}

void	small_parse_table_3019(t_small_parse_table_array *v)
{
	v->a[60380] = anon_sym_DOLLAR;
	v->a[60381] = sym__special_character;
	v->a[60382] = anon_sym_DQUOTE;
	v->a[60383] = sym_raw_string;
	v->a[60384] = aux_sym_number_token1;
	v->a[60385] = aux_sym_number_token2;
	v->a[60386] = anon_sym_DOLLAR_LBRACE;
	v->a[60387] = anon_sym_DOLLAR_LPAREN;
	v->a[60388] = anon_sym_BQUOTE;
	v->a[60389] = anon_sym_DOLLAR_BQUOTE;
	v->a[60390] = sym_word;
	v->a[60391] = 6;
	v->a[60392] = actions(3);
	v->a[60393] = 1;
	v->a[60394] = sym_comment;
	v->a[60395] = actions(3358);
	v->a[60396] = 1;
	v->a[60397] = aux_sym_concatenation_token1;
	v->a[60398] = actions(3360);
	v->a[60399] = 1;
	small_parse_table_3020(v);
}

/* EOF small_parse_table_603.c */
