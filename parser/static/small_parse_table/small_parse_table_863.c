/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_863.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4315(t_small_parse_table_array *v)
{
	v->a[86300] = 1;
	v->a[86301] = sym__comment_word;
	v->a[86302] = actions(3256);
	v->a[86303] = 1;
	v->a[86304] = sym__empty_value;
	v->a[86305] = state(1236);
	v->a[86306] = 1;
	v->a[86307] = sym_concatenation;
	v->a[86308] = actions(3483);
	v->a[86309] = 3;
	v->a[86310] = sym_raw_string;
	v->a[86311] = sym_number;
	v->a[86312] = sym_word;
	v->a[86313] = state(1179);
	v->a[86314] = 5;
	v->a[86315] = sym_arithmetic_expansion;
	v->a[86316] = sym_string;
	v->a[86317] = sym_simple_expansion;
	v->a[86318] = sym_expansion;
	v->a[86319] = sym_command_substitution;
	small_parse_table_4316(v);
}

void	small_parse_table_4316(t_small_parse_table_array *v)
{
	v->a[86320] = 10;
	v->a[86321] = actions(3);
	v->a[86322] = 1;
	v->a[86323] = sym_comment;
	v->a[86324] = actions(749);
	v->a[86325] = 1;
	v->a[86326] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86327] = actions(753);
	v->a[86328] = 1;
	v->a[86329] = anon_sym_DQUOTE;
	v->a[86330] = actions(755);
	v->a[86331] = 1;
	v->a[86332] = anon_sym_DOLLAR_LBRACE;
	v->a[86333] = actions(757);
	v->a[86334] = 1;
	v->a[86335] = anon_sym_DOLLAR_LPAREN;
	v->a[86336] = actions(759);
	v->a[86337] = 1;
	v->a[86338] = anon_sym_BQUOTE;
	v->a[86339] = actions(3340);
	small_parse_table_4317(v);
}

void	small_parse_table_4317(t_small_parse_table_array *v)
{
	v->a[86340] = 1;
	v->a[86341] = sym__bare_dollar;
	v->a[86342] = actions(3485);
	v->a[86343] = 1;
	v->a[86344] = anon_sym_DOLLAR;
	v->a[86345] = actions(3338);
	v->a[86346] = 5;
	v->a[86347] = aux_sym_concatenation_token1;
	v->a[86348] = sym_raw_string;
	v->a[86349] = sym_number;
	v->a[86350] = sym__comment_word;
	v->a[86351] = sym_word;
	v->a[86352] = state(630);
	v->a[86353] = 5;
	v->a[86354] = sym_arithmetic_expansion;
	v->a[86355] = sym_string;
	v->a[86356] = sym_simple_expansion;
	v->a[86357] = sym_expansion;
	v->a[86358] = sym_command_substitution;
	v->a[86359] = 8;
	small_parse_table_4318(v);
}

void	small_parse_table_4318(t_small_parse_table_array *v)
{
	v->a[86360] = actions(3);
	v->a[86361] = 1;
	v->a[86362] = sym_comment;
	v->a[86363] = actions(896);
	v->a[86364] = 1;
	v->a[86365] = sym_file_descriptor;
	v->a[86366] = actions(3487);
	v->a[86367] = 1;
	v->a[86368] = aux_sym_heredoc_redirect_token1;
	v->a[86369] = state(2323);
	v->a[86370] = 1;
	v->a[86371] = sym__heredoc_expression;
	v->a[86372] = actions(876);
	v->a[86373] = 2;
	v->a[86374] = anon_sym_AMP_AMP;
	v->a[86375] = anon_sym_PIPE_PIPE;
	v->a[86376] = actions(880);
	v->a[86377] = 2;
	v->a[86378] = anon_sym_LT_AMP_DASH;
	v->a[86379] = anon_sym_GT_AMP_DASH;
	small_parse_table_4319(v);
}

void	small_parse_table_4319(t_small_parse_table_array *v)
{
	v->a[86380] = state(1733);
	v->a[86381] = 2;
	v->a[86382] = sym_file_redirect;
	v->a[86383] = aux_sym_redirected_statement_repeat2;
	v->a[86384] = actions(878);
	v->a[86385] = 8;
	v->a[86386] = anon_sym_LT;
	v->a[86387] = anon_sym_GT;
	v->a[86388] = anon_sym_GT_GT;
	v->a[86389] = anon_sym_AMP_GT;
	v->a[86390] = anon_sym_AMP_GT_GT;
	v->a[86391] = anon_sym_LT_AMP;
	v->a[86392] = anon_sym_GT_AMP;
	v->a[86393] = anon_sym_GT_PIPE;
	v->a[86394] = 10;
	v->a[86395] = actions(3);
	v->a[86396] = 1;
	v->a[86397] = sym_comment;
	v->a[86398] = actions(910);
	v->a[86399] = 1;
	small_parse_table_4320(v);
}

/* EOF small_parse_table_863.c */
