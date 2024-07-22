/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_593.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2965(t_small_parse_table_array *v)
{
	v->a[59300] = 2;
	v->a[59301] = anon_sym_LT_LT;
	v->a[59302] = anon_sym_LT_LT_DASH;
	v->a[59303] = actions(1059);
	v->a[59304] = 2;
	v->a[59305] = anon_sym_AMP_AMP;
	v->a[59306] = anon_sym_PIPE_PIPE;
	v->a[59307] = state(1062);
	v->a[59308] = 3;
	v->a[59309] = sym_file_redirect;
	v->a[59310] = sym_heredoc_redirect;
	v->a[59311] = aux_sym_redirected_statement_repeat1;
	v->a[59312] = actions(1886);
	v->a[59313] = 7;
	v->a[59314] = anon_sym_LT;
	v->a[59315] = anon_sym_GT;
	v->a[59316] = anon_sym_GT_GT;
	v->a[59317] = anon_sym_LT_AMP;
	v->a[59318] = anon_sym_GT_AMP;
	v->a[59319] = anon_sym_GT_PIPE;
	small_parse_table_2966(v);
}

void	small_parse_table_2966(t_small_parse_table_array *v)
{
	v->a[59320] = anon_sym_LT_GT;
	v->a[59321] = 5;
	v->a[59322] = actions(3);
	v->a[59323] = 1;
	v->a[59324] = sym_comment;
	v->a[59325] = actions(792);
	v->a[59326] = 1;
	v->a[59327] = sym_file_descriptor;
	v->a[59328] = actions(888);
	v->a[59329] = 1;
	v->a[59330] = sym_variable_name;
	v->a[59331] = state(1092);
	v->a[59332] = 2;
	v->a[59333] = sym_variable_assignment;
	v->a[59334] = aux_sym__variable_assignments_repeat1;
	v->a[59335] = actions(780);
	v->a[59336] = 16;
	v->a[59337] = anon_sym_LT;
	v->a[59338] = anon_sym_GT;
	v->a[59339] = anon_sym_GT_GT;
	small_parse_table_2967(v);
}

void	small_parse_table_2967(t_small_parse_table_array *v)
{
	v->a[59340] = anon_sym_LT_AMP;
	v->a[59341] = anon_sym_GT_AMP;
	v->a[59342] = anon_sym_GT_PIPE;
	v->a[59343] = anon_sym_LT_GT;
	v->a[59344] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[59345] = anon_sym_DOLLAR;
	v->a[59346] = anon_sym_DQUOTE;
	v->a[59347] = sym_raw_string;
	v->a[59348] = sym_number;
	v->a[59349] = anon_sym_DOLLAR_LBRACE;
	v->a[59350] = anon_sym_DOLLAR_LPAREN;
	v->a[59351] = anon_sym_BQUOTE;
	v->a[59352] = sym_word;
	v->a[59353] = 11;
	v->a[59354] = actions(3);
	v->a[59355] = 1;
	v->a[59356] = sym_comment;
	v->a[59357] = actions(782);
	v->a[59358] = 1;
	v->a[59359] = anon_sym_PIPE;
	small_parse_table_2968(v);
}

void	small_parse_table_2968(t_small_parse_table_array *v)
{
	v->a[59360] = actions(784);
	v->a[59361] = 1;
	v->a[59362] = anon_sym_SEMI_SEMI;
	v->a[59363] = actions(786);
	v->a[59364] = 1;
	v->a[59365] = anon_sym_SEMI;
	v->a[59366] = actions(1888);
	v->a[59367] = 1;
	v->a[59368] = aux_sym_heredoc_redirect_token1;
	v->a[59369] = actions(1945);
	v->a[59370] = 1;
	v->a[59371] = sym_file_descriptor;
	v->a[59372] = state(580);
	v->a[59373] = 1;
	v->a[59374] = sym_terminator;
	v->a[59375] = actions(790);
	v->a[59376] = 2;
	v->a[59377] = anon_sym_LT_LT;
	v->a[59378] = anon_sym_LT_LT_DASH;
	v->a[59379] = actions(1028);
	small_parse_table_2969(v);
}

void	small_parse_table_2969(t_small_parse_table_array *v)
{
	v->a[59380] = 2;
	v->a[59381] = anon_sym_AMP_AMP;
	v->a[59382] = anon_sym_PIPE_PIPE;
	v->a[59383] = state(1194);
	v->a[59384] = 3;
	v->a[59385] = sym_file_redirect;
	v->a[59386] = sym_heredoc_redirect;
	v->a[59387] = aux_sym_redirected_statement_repeat1;
	v->a[59388] = actions(1941);
	v->a[59389] = 7;
	v->a[59390] = anon_sym_LT;
	v->a[59391] = anon_sym_GT;
	v->a[59392] = anon_sym_GT_GT;
	v->a[59393] = anon_sym_LT_AMP;
	v->a[59394] = anon_sym_GT_AMP;
	v->a[59395] = anon_sym_GT_PIPE;
	v->a[59396] = anon_sym_LT_GT;
	v->a[59397] = 3;
	v->a[59398] = actions(3);
	v->a[59399] = 1;
	small_parse_table_2970(v);
}

/* EOF small_parse_table_593.c */
