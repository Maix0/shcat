/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_133.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_665(t_small_parse_table_array *v)
{
	v->a[13300] = anon_sym_LT;
	v->a[13301] = anon_sym_GT;
	v->a[13302] = anon_sym_LT_LT;
	v->a[13303] = anon_sym_GT_GT;
	v->a[13304] = anon_sym_SEMI_SEMI;
	v->a[13305] = anon_sym_SEMI_AMP;
	v->a[13306] = anon_sym_SEMI_SEMI_AMP;
	v->a[13307] = anon_sym_PIPE_AMP;
	v->a[13308] = anon_sym_AMP_GT;
	v->a[13309] = anon_sym_AMP_GT_GT;
	v->a[13310] = anon_sym_LT_AMP;
	v->a[13311] = anon_sym_GT_AMP;
	v->a[13312] = anon_sym_GT_PIPE;
	v->a[13313] = anon_sym_LT_AMP_DASH;
	v->a[13314] = anon_sym_GT_AMP_DASH;
	v->a[13315] = anon_sym_LT_LT_DASH;
	v->a[13316] = aux_sym_heredoc_redirect_token1;
	v->a[13317] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13318] = anon_sym_DOLLAR_LBRACK;
	v->a[13319] = sym__special_character;
	small_parse_table_666(v);
}

void	small_parse_table_666(t_small_parse_table_array *v)
{
	v->a[13320] = sym_raw_string;
	v->a[13321] = sym_ansi_c_string;
	v->a[13322] = aux_sym_number_token1;
	v->a[13323] = aux_sym_number_token2;
	v->a[13324] = anon_sym_DOLLAR_LBRACE;
	v->a[13325] = anon_sym_DOLLAR_LPAREN;
	v->a[13326] = anon_sym_BQUOTE;
	v->a[13327] = anon_sym_DOLLAR_BQUOTE;
	v->a[13328] = anon_sym_LT_LPAREN;
	v->a[13329] = anon_sym_GT_LPAREN;
	v->a[13330] = sym_word;
	v->a[13331] = 22;
	v->a[13332] = actions(3);
	v->a[13333] = 1;
	v->a[13334] = sym_comment;
	v->a[13335] = actions(3183);
	v->a[13336] = 1;
	v->a[13337] = anon_sym_DOLLAR_LBRACK;
	v->a[13338] = actions(3185);
	v->a[13339] = 1;
	small_parse_table_667(v);
}

void	small_parse_table_667(t_small_parse_table_array *v)
{
	v->a[13340] = anon_sym_DOLLAR;
	v->a[13341] = actions(3187);
	v->a[13342] = 1;
	v->a[13343] = sym__special_character;
	v->a[13344] = actions(3189);
	v->a[13345] = 1;
	v->a[13346] = anon_sym_DQUOTE;
	v->a[13347] = actions(3191);
	v->a[13348] = 1;
	v->a[13349] = aux_sym_number_token1;
	v->a[13350] = actions(3193);
	v->a[13351] = 1;
	v->a[13352] = aux_sym_number_token2;
	v->a[13353] = actions(3195);
	v->a[13354] = 1;
	v->a[13355] = anon_sym_DOLLAR_LBRACE;
	v->a[13356] = actions(3197);
	v->a[13357] = 1;
	v->a[13358] = anon_sym_DOLLAR_LPAREN;
	v->a[13359] = actions(3199);
	small_parse_table_668(v);
}

void	small_parse_table_668(t_small_parse_table_array *v)
{
	v->a[13360] = 1;
	v->a[13361] = anon_sym_BQUOTE;
	v->a[13362] = actions(3201);
	v->a[13363] = 1;
	v->a[13364] = anon_sym_DOLLAR_BQUOTE;
	v->a[13365] = actions(3205);
	v->a[13366] = 1;
	v->a[13367] = aux_sym__simple_variable_name_token1;
	v->a[13368] = actions(3207);
	v->a[13369] = 1;
	v->a[13370] = sym_test_operator;
	v->a[13371] = actions(3209);
	v->a[13372] = 1;
	v->a[13373] = sym__brace_start;
	v->a[13374] = state(1966);
	v->a[13375] = 1;
	v->a[13376] = aux_sym__literal_repeat1;
	v->a[13377] = actions(2564);
	v->a[13378] = 2;
	v->a[13379] = sym_file_descriptor;
	small_parse_table_669(v);
}

void	small_parse_table_669(t_small_parse_table_array *v)
{
	v->a[13380] = aux_sym_heredoc_redirect_token1;
	v->a[13381] = actions(3181);
	v->a[13382] = 2;
	v->a[13383] = anon_sym_LPAREN_LPAREN;
	v->a[13384] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13385] = actions(3203);
	v->a[13386] = 2;
	v->a[13387] = anon_sym_LT_LPAREN;
	v->a[13388] = anon_sym_GT_LPAREN;
	v->a[13389] = state(709);
	v->a[13390] = 2;
	v->a[13391] = sym_concatenation;
	v->a[13392] = aux_sym_unset_command_repeat1;
	v->a[13393] = actions(3179);
	v->a[13394] = 3;
	v->a[13395] = sym_raw_string;
	v->a[13396] = sym_ansi_c_string;
	v->a[13397] = sym_word;
	v->a[13398] = state(1650);
	v->a[13399] = 9;
	small_parse_table_670(v);
}

/* EOF small_parse_table_133.c */
