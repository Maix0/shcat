/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_303.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1515(t_small_parse_table_array *v)
{
	v->a[30300] = anon_sym_BQUOTE;
	v->a[30301] = anon_sym_DOLLAR_BQUOTE;
	v->a[30302] = sym_word;
	v->a[30303] = 12;
	v->a[30304] = actions(3);
	v->a[30305] = 1;
	v->a[30306] = sym_comment;
	v->a[30307] = actions(2514);
	v->a[30308] = 1;
	v->a[30309] = anon_sym_BQUOTE;
	v->a[30310] = actions(3368);
	v->a[30311] = 1;
	v->a[30312] = sym_variable_name;
	v->a[30313] = actions(3379);
	v->a[30314] = 1;
	v->a[30315] = aux_sym_heredoc_redirect_token1;
	v->a[30316] = actions(2516);
	v->a[30317] = 2;
	v->a[30318] = anon_sym_PIPE;
	v->a[30319] = anon_sym_PIPE_AMP;
	small_parse_table_1516(v);
}

void	small_parse_table_1516(t_small_parse_table_array *v)
{
	v->a[30320] = actions(2945);
	v->a[30321] = 2;
	v->a[30322] = anon_sym_LT_LT;
	v->a[30323] = anon_sym_LT_LT_DASH;
	v->a[30324] = actions(3377);
	v->a[30325] = 2;
	v->a[30326] = anon_sym_AMP_AMP;
	v->a[30327] = anon_sym_PIPE_PIPE;
	v->a[30328] = state(2139);
	v->a[30329] = 2;
	v->a[30330] = sym_variable_assignment;
	v->a[30331] = aux_sym_variable_assignments_repeat1;
	v->a[30332] = actions(2526);
	v->a[30333] = 3;
	v->a[30334] = sym_file_descriptor;
	v->a[30335] = sym_test_operator;
	v->a[30336] = sym__brace_start;
	v->a[30337] = actions(3375);
	v->a[30338] = 3;
	v->a[30339] = anon_sym_SEMI_SEMI;
	small_parse_table_1517(v);
}

void	small_parse_table_1517(t_small_parse_table_array *v)
{
	v->a[30340] = anon_sym_AMP;
	v->a[30341] = anon_sym_SEMI;
	v->a[30342] = state(2140);
	v->a[30343] = 3;
	v->a[30344] = sym_file_redirect;
	v->a[30345] = sym_heredoc_redirect;
	v->a[30346] = aux_sym_redirected_statement_repeat1;
	v->a[30347] = actions(2512);
	v->a[30348] = 21;
	v->a[30349] = anon_sym_LT;
	v->a[30350] = anon_sym_GT;
	v->a[30351] = anon_sym_GT_GT;
	v->a[30352] = anon_sym_AMP_GT;
	v->a[30353] = anon_sym_AMP_GT_GT;
	v->a[30354] = anon_sym_LT_AMP;
	v->a[30355] = anon_sym_GT_AMP;
	v->a[30356] = anon_sym_GT_PIPE;
	v->a[30357] = anon_sym_LT_AMP_DASH;
	v->a[30358] = anon_sym_GT_AMP_DASH;
	v->a[30359] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1518(v);
}

void	small_parse_table_1518(t_small_parse_table_array *v)
{
	v->a[30360] = anon_sym_DOLLAR;
	v->a[30361] = sym__special_character;
	v->a[30362] = anon_sym_DQUOTE;
	v->a[30363] = sym_raw_string;
	v->a[30364] = aux_sym_number_token1;
	v->a[30365] = aux_sym_number_token2;
	v->a[30366] = anon_sym_DOLLAR_LBRACE;
	v->a[30367] = anon_sym_DOLLAR_LPAREN;
	v->a[30368] = anon_sym_DOLLAR_BQUOTE;
	v->a[30369] = sym_word;
	v->a[30370] = 3;
	v->a[30371] = actions(3);
	v->a[30372] = 1;
	v->a[30373] = sym_comment;
	v->a[30374] = actions(2654);
	v->a[30375] = 6;
	v->a[30376] = sym_file_descriptor;
	v->a[30377] = sym__concat;
	v->a[30378] = sym_variable_name;
	v->a[30379] = sym_test_operator;
	small_parse_table_1519(v);
}

void	small_parse_table_1519(t_small_parse_table_array *v)
{
	v->a[30380] = sym__brace_start;
	v->a[30381] = aux_sym_heredoc_redirect_token1;
	v->a[30382] = actions(2652);
	v->a[30383] = 35;
	v->a[30384] = anon_sym_PIPE;
	v->a[30385] = anon_sym_SEMI_SEMI;
	v->a[30386] = anon_sym_SEMI_AMP;
	v->a[30387] = anon_sym_SEMI_SEMI_AMP;
	v->a[30388] = anon_sym_PIPE_AMP;
	v->a[30389] = anon_sym_AMP_AMP;
	v->a[30390] = anon_sym_PIPE_PIPE;
	v->a[30391] = anon_sym_LT;
	v->a[30392] = anon_sym_GT;
	v->a[30393] = anon_sym_GT_GT;
	v->a[30394] = anon_sym_AMP_GT;
	v->a[30395] = anon_sym_AMP_GT_GT;
	v->a[30396] = anon_sym_LT_AMP;
	v->a[30397] = anon_sym_GT_AMP;
	v->a[30398] = anon_sym_GT_PIPE;
	v->a[30399] = anon_sym_LT_AMP_DASH;
	small_parse_table_1520(v);
}

/* EOF small_parse_table_303.c */
