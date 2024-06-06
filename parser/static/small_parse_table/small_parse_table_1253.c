/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1253.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6265(t_small_parse_table_array *v)
{
	v->a[125300] = anon_sym_LT_AMP_DASH;
	v->a[125301] = anon_sym_GT_AMP_DASH;
	v->a[125302] = actions(5176);
	v->a[125303] = 3;
	v->a[125304] = anon_sym_PIPE_AMP;
	v->a[125305] = anon_sym_AMP_AMP;
	v->a[125306] = anon_sym_PIPE_PIPE;
	v->a[125307] = actions(7166);
	v->a[125308] = 3;
	v->a[125309] = anon_sym_GT_GT;
	v->a[125310] = anon_sym_AMP_GT_GT;
	v->a[125311] = anon_sym_GT_PIPE;
	v->a[125312] = state(2655);
	v->a[125313] = 3;
	v->a[125314] = sym_file_redirect;
	v->a[125315] = sym_heredoc_redirect;
	v->a[125316] = aux_sym_redirected_statement_repeat1;
	v->a[125317] = actions(7163);
	v->a[125318] = 5;
	v->a[125319] = anon_sym_LT;
	small_parse_table_6266(v);
}

void	small_parse_table_6266(t_small_parse_table_array *v)
{
	v->a[125320] = anon_sym_GT;
	v->a[125321] = anon_sym_AMP_GT;
	v->a[125322] = anon_sym_LT_AMP;
	v->a[125323] = anon_sym_GT_AMP;
	v->a[125324] = 3;
	v->a[125325] = actions(3);
	v->a[125326] = 1;
	v->a[125327] = sym_comment;
	v->a[125328] = actions(2778);
	v->a[125329] = 4;
	v->a[125330] = sym__concat;
	v->a[125331] = sym_test_operator;
	v->a[125332] = sym__brace_start;
	v->a[125333] = aux_sym_heredoc_redirect_token1;
	v->a[125334] = actions(2776);
	v->a[125335] = 16;
	v->a[125336] = anon_sym_SEMI_SEMI;
	v->a[125337] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[125338] = anon_sym_AMP;
	v->a[125339] = aux_sym_concatenation_token1;
	small_parse_table_6267(v);
}

void	small_parse_table_6267(t_small_parse_table_array *v)
{
	v->a[125340] = anon_sym_DOLLAR;
	v->a[125341] = sym__special_character;
	v->a[125342] = anon_sym_DQUOTE;
	v->a[125343] = sym_raw_string;
	v->a[125344] = aux_sym_number_token1;
	v->a[125345] = aux_sym_number_token2;
	v->a[125346] = anon_sym_DOLLAR_LBRACE;
	v->a[125347] = anon_sym_DOLLAR_LPAREN;
	v->a[125348] = anon_sym_BQUOTE;
	v->a[125349] = anon_sym_DOLLAR_BQUOTE;
	v->a[125350] = sym_word;
	v->a[125351] = anon_sym_SEMI;
	v->a[125352] = 7;
	v->a[125353] = actions(3);
	v->a[125354] = 1;
	v->a[125355] = sym_comment;
	v->a[125356] = actions(5256);
	v->a[125357] = 1;
	v->a[125358] = aux_sym_heredoc_redirect_token1;
	v->a[125359] = actions(7181);
	small_parse_table_6268(v);
}

void	small_parse_table_6268(t_small_parse_table_array *v)
{
	v->a[125360] = 1;
	v->a[125361] = sym_file_descriptor;
	v->a[125362] = actions(7132);
	v->a[125363] = 2;
	v->a[125364] = anon_sym_LT_AMP_DASH;
	v->a[125365] = anon_sym_GT_AMP_DASH;
	v->a[125366] = state(2663);
	v->a[125367] = 2;
	v->a[125368] = sym_file_redirect;
	v->a[125369] = aux_sym_redirected_statement_repeat2;
	v->a[125370] = actions(5254);
	v->a[125371] = 6;
	v->a[125372] = anon_sym_PIPE;
	v->a[125373] = anon_sym_PIPE_AMP;
	v->a[125374] = anon_sym_AMP_AMP;
	v->a[125375] = anon_sym_PIPE_PIPE;
	v->a[125376] = anon_sym_LT_LT;
	v->a[125377] = anon_sym_LT_LT_DASH;
	v->a[125378] = actions(7130);
	v->a[125379] = 8;
	small_parse_table_6269(v);
}

void	small_parse_table_6269(t_small_parse_table_array *v)
{
	v->a[125380] = anon_sym_LT;
	v->a[125381] = anon_sym_GT;
	v->a[125382] = anon_sym_GT_GT;
	v->a[125383] = anon_sym_AMP_GT;
	v->a[125384] = anon_sym_AMP_GT_GT;
	v->a[125385] = anon_sym_LT_AMP;
	v->a[125386] = anon_sym_GT_AMP;
	v->a[125387] = anon_sym_GT_PIPE;
	v->a[125388] = 4;
	v->a[125389] = actions(57);
	v->a[125390] = 1;
	v->a[125391] = sym_comment;
	v->a[125392] = state(2632);
	v->a[125393] = 3;
	v->a[125394] = sym_file_redirect;
	v->a[125395] = sym_heredoc_redirect;
	v->a[125396] = aux_sym_redirected_statement_repeat1;
	v->a[125397] = actions(2630);
	v->a[125398] = 7;
	v->a[125399] = anon_sym_PIPE;
	small_parse_table_6270(v);
}

/* EOF small_parse_table_1253.c */
