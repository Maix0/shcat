/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2593.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12965(t_small_parse_table_array *v)
{
	v->a[259300] = sym_comment;
	v->a[259301] = actions(1298);
	v->a[259302] = 4;
	v->a[259303] = sym__concat;
	v->a[259304] = sym_test_operator;
	v->a[259305] = sym__brace_start;
	v->a[259306] = aux_sym_heredoc_redirect_token1;
	v->a[259307] = actions(1296);
	v->a[259308] = 21;
	v->a[259309] = anon_sym_LPAREN_LPAREN;
	v->a[259310] = anon_sym_SEMI;
	v->a[259311] = anon_sym_AMP;
	v->a[259312] = anon_sym_SEMI_SEMI;
	v->a[259313] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[259314] = anon_sym_DOLLAR_LBRACK;
	v->a[259315] = aux_sym_concatenation_token1;
	v->a[259316] = anon_sym_DOLLAR;
	v->a[259317] = sym__special_character;
	v->a[259318] = anon_sym_DQUOTE;
	v->a[259319] = sym_raw_string;
	small_parse_table_12966(v);
}

void	small_parse_table_12966(t_small_parse_table_array *v)
{
	v->a[259320] = sym_ansi_c_string;
	v->a[259321] = aux_sym_number_token1;
	v->a[259322] = aux_sym_number_token2;
	v->a[259323] = anon_sym_DOLLAR_LBRACE;
	v->a[259324] = anon_sym_DOLLAR_LPAREN;
	v->a[259325] = anon_sym_BQUOTE;
	v->a[259326] = anon_sym_DOLLAR_BQUOTE;
	v->a[259327] = anon_sym_LT_LPAREN;
	v->a[259328] = anon_sym_GT_LPAREN;
	v->a[259329] = sym_word;
	v->a[259330] = 3;
	v->a[259331] = actions(3);
	v->a[259332] = 1;
	v->a[259333] = sym_comment;
	v->a[259334] = actions(4554);
	v->a[259335] = 2;
	v->a[259336] = sym_file_descriptor;
	v->a[259337] = aux_sym_heredoc_redirect_token1;
	v->a[259338] = actions(4552);
	v->a[259339] = 23;
	small_parse_table_12967(v);
}

void	small_parse_table_12967(t_small_parse_table_array *v)
{
	v->a[259340] = anon_sym_SEMI;
	v->a[259341] = anon_sym_PIPE_PIPE;
	v->a[259342] = anon_sym_AMP_AMP;
	v->a[259343] = anon_sym_PIPE;
	v->a[259344] = anon_sym_AMP;
	v->a[259345] = anon_sym_LT;
	v->a[259346] = anon_sym_GT;
	v->a[259347] = anon_sym_LT_LT;
	v->a[259348] = anon_sym_GT_GT;
	v->a[259349] = anon_sym_esac;
	v->a[259350] = anon_sym_SEMI_SEMI;
	v->a[259351] = anon_sym_SEMI_AMP;
	v->a[259352] = anon_sym_SEMI_SEMI_AMP;
	v->a[259353] = anon_sym_PIPE_AMP;
	v->a[259354] = anon_sym_AMP_GT;
	v->a[259355] = anon_sym_AMP_GT_GT;
	v->a[259356] = anon_sym_LT_AMP;
	v->a[259357] = anon_sym_GT_AMP;
	v->a[259358] = anon_sym_GT_PIPE;
	v->a[259359] = anon_sym_LT_AMP_DASH;
	small_parse_table_12968(v);
}

void	small_parse_table_12968(t_small_parse_table_array *v)
{
	v->a[259360] = anon_sym_GT_AMP_DASH;
	v->a[259361] = anon_sym_LT_LT_DASH;
	v->a[259362] = anon_sym_LT_LT_LT;
	v->a[259363] = 8;
	v->a[259364] = actions(3);
	v->a[259365] = 1;
	v->a[259366] = sym_comment;
	v->a[259367] = actions(11431);
	v->a[259368] = 1;
	v->a[259369] = aux_sym_heredoc_redirect_token1;
	v->a[259370] = actions(11926);
	v->a[259371] = 1;
	v->a[259372] = sym_file_descriptor;
	v->a[259373] = actions(11920);
	v->a[259374] = 2;
	v->a[259375] = anon_sym_LT_LT;
	v->a[259376] = anon_sym_LT_LT_DASH;
	v->a[259377] = actions(11923);
	v->a[259378] = 2;
	v->a[259379] = anon_sym_LT_AMP_DASH;
	small_parse_table_12969(v);
}

void	small_parse_table_12969(t_small_parse_table_array *v)
{
	v->a[259380] = anon_sym_GT_AMP_DASH;
	v->a[259381] = state(4710);
	v->a[259382] = 3;
	v->a[259383] = sym_file_redirect;
	v->a[259384] = sym_heredoc_redirect;
	v->a[259385] = aux_sym_redirected_statement_repeat1;
	v->a[259386] = actions(11420);
	v->a[259387] = 8;
	v->a[259388] = anon_sym_SEMI;
	v->a[259389] = anon_sym_PIPE_PIPE;
	v->a[259390] = anon_sym_AMP_AMP;
	v->a[259391] = anon_sym_PIPE;
	v->a[259392] = anon_sym_AMP;
	v->a[259393] = anon_sym_RPAREN;
	v->a[259394] = anon_sym_SEMI_SEMI;
	v->a[259395] = anon_sym_PIPE_AMP;
	v->a[259396] = actions(11917);
	v->a[259397] = 8;
	v->a[259398] = anon_sym_LT;
	v->a[259399] = anon_sym_GT;
	small_parse_table_12970(v);
}

/* EOF small_parse_table_2593.c */
