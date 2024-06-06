/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1123.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5615(t_small_parse_table_array *v)
{
	v->a[112300] = sym_expansion;
	v->a[112301] = sym_command_substitution;
	v->a[112302] = 16;
	v->a[112303] = actions(3);
	v->a[112304] = 1;
	v->a[112305] = sym_comment;
	v->a[112306] = actions(163);
	v->a[112307] = 1;
	v->a[112308] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[112309] = actions(165);
	v->a[112310] = 1;
	v->a[112311] = anon_sym_DOLLAR;
	v->a[112312] = actions(169);
	v->a[112313] = 1;
	v->a[112314] = anon_sym_DQUOTE;
	v->a[112315] = actions(173);
	v->a[112316] = 1;
	v->a[112317] = aux_sym_number_token1;
	v->a[112318] = actions(175);
	v->a[112319] = 1;
	small_parse_table_5616(v);
}

void	small_parse_table_5616(t_small_parse_table_array *v)
{
	v->a[112320] = aux_sym_number_token2;
	v->a[112321] = actions(177);
	v->a[112322] = 1;
	v->a[112323] = anon_sym_DOLLAR_LBRACE;
	v->a[112324] = actions(179);
	v->a[112325] = 1;
	v->a[112326] = anon_sym_DOLLAR_LPAREN;
	v->a[112327] = actions(181);
	v->a[112328] = 1;
	v->a[112329] = anon_sym_BQUOTE;
	v->a[112330] = actions(183);
	v->a[112331] = 1;
	v->a[112332] = anon_sym_DOLLAR_BQUOTE;
	v->a[112333] = actions(189);
	v->a[112334] = 1;
	v->a[112335] = sym__brace_start;
	v->a[112336] = actions(6454);
	v->a[112337] = 1;
	v->a[112338] = sym_word;
	v->a[112339] = actions(6456);
	small_parse_table_5617(v);
}

void	small_parse_table_5617(t_small_parse_table_array *v)
{
	v->a[112340] = 1;
	v->a[112341] = sym__special_character;
	v->a[112342] = actions(6460);
	v->a[112343] = 1;
	v->a[112344] = sym__comment_word;
	v->a[112345] = actions(6458);
	v->a[112346] = 3;
	v->a[112347] = sym_test_operator;
	v->a[112348] = sym__bare_dollar;
	v->a[112349] = sym_raw_string;
	v->a[112350] = state(560);
	v->a[112351] = 7;
	v->a[112352] = sym_arithmetic_expansion;
	v->a[112353] = sym_brace_expression;
	v->a[112354] = sym_string;
	v->a[112355] = sym_number;
	v->a[112356] = sym_simple_expansion;
	v->a[112357] = sym_expansion;
	v->a[112358] = sym_command_substitution;
	v->a[112359] = 7;
	small_parse_table_5618(v);
}

void	small_parse_table_5618(t_small_parse_table_array *v)
{
	v->a[112360] = actions(3);
	v->a[112361] = 1;
	v->a[112362] = sym_comment;
	v->a[112363] = actions(5952);
	v->a[112364] = 1;
	v->a[112365] = sym_file_descriptor;
	v->a[112366] = state(2286);
	v->a[112367] = 1;
	v->a[112368] = sym_file_redirect;
	v->a[112369] = actions(5602);
	v->a[112370] = 2;
	v->a[112371] = anon_sym_LT_AMP_DASH;
	v->a[112372] = anon_sym_GT_AMP_DASH;
	v->a[112373] = actions(5641);
	v->a[112374] = 2;
	v->a[112375] = ts_builtin_sym_end;
	v->a[112376] = aux_sym_heredoc_redirect_token1;
	v->a[112377] = actions(5600);
	v->a[112378] = 8;
	v->a[112379] = anon_sym_LT;
	small_parse_table_5619(v);
}

void	small_parse_table_5619(t_small_parse_table_array *v)
{
	v->a[112380] = anon_sym_GT;
	v->a[112381] = anon_sym_GT_GT;
	v->a[112382] = anon_sym_AMP_GT;
	v->a[112383] = anon_sym_AMP_GT_GT;
	v->a[112384] = anon_sym_LT_AMP;
	v->a[112385] = anon_sym_GT_AMP;
	v->a[112386] = anon_sym_GT_PIPE;
	v->a[112387] = actions(5639);
	v->a[112388] = 9;
	v->a[112389] = anon_sym_PIPE;
	v->a[112390] = anon_sym_SEMI_SEMI;
	v->a[112391] = anon_sym_PIPE_AMP;
	v->a[112392] = anon_sym_AMP_AMP;
	v->a[112393] = anon_sym_PIPE_PIPE;
	v->a[112394] = anon_sym_LT_LT;
	v->a[112395] = anon_sym_LT_LT_DASH;
	v->a[112396] = anon_sym_AMP;
	v->a[112397] = anon_sym_SEMI;
	v->a[112398] = 16;
	v->a[112399] = actions(3);
	small_parse_table_5620(v);
}

/* EOF small_parse_table_1123.c */
