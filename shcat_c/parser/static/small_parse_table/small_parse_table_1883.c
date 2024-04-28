/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1883.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9415(t_small_parse_table_array *v)
{
	v->a[188300] = anon_sym_AMP_AMP;
	v->a[188301] = anon_sym_PIPE;
	v->a[188302] = anon_sym_AMP;
	v->a[188303] = anon_sym_LT;
	v->a[188304] = anon_sym_GT;
	v->a[188305] = anon_sym_LT_LT;
	v->a[188306] = anon_sym_GT_GT;
	v->a[188307] = anon_sym_SEMI_SEMI;
	v->a[188308] = anon_sym_PIPE_AMP;
	v->a[188309] = anon_sym_AMP_GT;
	v->a[188310] = anon_sym_AMP_GT_GT;
	v->a[188311] = anon_sym_LT_AMP;
	v->a[188312] = anon_sym_GT_AMP;
	v->a[188313] = anon_sym_GT_PIPE;
	v->a[188314] = anon_sym_LT_AMP_DASH;
	v->a[188315] = anon_sym_GT_AMP_DASH;
	v->a[188316] = anon_sym_LT_LT_DASH;
	v->a[188317] = aux_sym_heredoc_redirect_token1;
	v->a[188318] = 5;
	v->a[188319] = actions(71);
	small_parse_table_9416(v);
}

void	small_parse_table_9416(t_small_parse_table_array *v)
{
	v->a[188320] = 1;
	v->a[188321] = sym_comment;
	v->a[188322] = state(3459);
	v->a[188323] = 1;
	v->a[188324] = aux_sym_concatenation_repeat1;
	v->a[188325] = actions(7751);
	v->a[188326] = 2;
	v->a[188327] = sym__concat;
	v->a[188328] = aux_sym_concatenation_token1;
	v->a[188329] = actions(4467);
	v->a[188330] = 11;
	v->a[188331] = anon_sym_LT;
	v->a[188332] = anon_sym_GT;
	v->a[188333] = anon_sym_AMP_GT;
	v->a[188334] = anon_sym_LT_AMP;
	v->a[188335] = anon_sym_GT_AMP;
	v->a[188336] = anon_sym_DOLLAR;
	v->a[188337] = aux_sym_number_token1;
	v->a[188338] = aux_sym_number_token2;
	v->a[188339] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_9417(v);
}

void	small_parse_table_9417(t_small_parse_table_array *v)
{
	v->a[188340] = anon_sym_BQUOTE;
	v->a[188341] = sym_word;
	v->a[188342] = actions(4469);
	v->a[188343] = 21;
	v->a[188344] = sym_file_descriptor;
	v->a[188345] = sym_variable_name;
	v->a[188346] = sym_test_operator;
	v->a[188347] = sym__brace_start;
	v->a[188348] = anon_sym_LPAREN_LPAREN;
	v->a[188349] = anon_sym_GT_GT;
	v->a[188350] = anon_sym_AMP_GT_GT;
	v->a[188351] = anon_sym_GT_PIPE;
	v->a[188352] = anon_sym_LT_AMP_DASH;
	v->a[188353] = anon_sym_GT_AMP_DASH;
	v->a[188354] = anon_sym_LT_LT_LT;
	v->a[188355] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[188356] = anon_sym_DOLLAR_LBRACK;
	v->a[188357] = sym__special_character;
	v->a[188358] = anon_sym_DQUOTE;
	v->a[188359] = sym_raw_string;
	small_parse_table_9418(v);
}

void	small_parse_table_9418(t_small_parse_table_array *v)
{
	v->a[188360] = sym_ansi_c_string;
	v->a[188361] = anon_sym_DOLLAR_LBRACE;
	v->a[188362] = anon_sym_DOLLAR_BQUOTE;
	v->a[188363] = anon_sym_LT_LPAREN;
	v->a[188364] = anon_sym_GT_LPAREN;
	v->a[188365] = 21;
	v->a[188366] = actions(3);
	v->a[188367] = 1;
	v->a[188368] = sym_comment;
	v->a[188369] = actions(3729);
	v->a[188370] = 1;
	v->a[188371] = anon_sym_DOLLAR_LBRACK;
	v->a[188372] = actions(3731);
	v->a[188373] = 1;
	v->a[188374] = anon_sym_DOLLAR;
	v->a[188375] = actions(3735);
	v->a[188376] = 1;
	v->a[188377] = anon_sym_DQUOTE;
	v->a[188378] = actions(3737);
	v->a[188379] = 1;
	small_parse_table_9419(v);
}

void	small_parse_table_9419(t_small_parse_table_array *v)
{
	v->a[188380] = aux_sym_number_token1;
	v->a[188381] = actions(3739);
	v->a[188382] = 1;
	v->a[188383] = aux_sym_number_token2;
	v->a[188384] = actions(3741);
	v->a[188385] = 1;
	v->a[188386] = anon_sym_DOLLAR_LBRACE;
	v->a[188387] = actions(3743);
	v->a[188388] = 1;
	v->a[188389] = anon_sym_DOLLAR_LPAREN;
	v->a[188390] = actions(3745);
	v->a[188391] = 1;
	v->a[188392] = anon_sym_BQUOTE;
	v->a[188393] = actions(3747);
	v->a[188394] = 1;
	v->a[188395] = anon_sym_DOLLAR_BQUOTE;
	v->a[188396] = actions(3755);
	v->a[188397] = 1;
	v->a[188398] = sym__brace_start;
	v->a[188399] = actions(7765);
	small_parse_table_9420(v);
}

/* EOF small_parse_table_1883.c */
