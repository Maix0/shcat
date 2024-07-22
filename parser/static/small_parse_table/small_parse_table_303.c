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
	v->a[30300] = anon_sym_DOLLAR_LBRACE;
	v->a[30301] = actions(616);
	v->a[30302] = 1;
	v->a[30303] = anon_sym_DOLLAR_LPAREN;
	v->a[30304] = actions(619);
	v->a[30305] = 1;
	v->a[30306] = anon_sym_BQUOTE;
	v->a[30307] = actions(622);
	v->a[30308] = 1;
	v->a[30309] = sym__bare_dollar;
	v->a[30310] = state(372);
	v->a[30311] = 1;
	v->a[30312] = aux_sym_command_repeat2;
	v->a[30313] = state(674);
	v->a[30314] = 1;
	v->a[30315] = sym_concatenation;
	v->a[30316] = actions(1146);
	v->a[30317] = 3;
	v->a[30318] = sym_raw_string;
	v->a[30319] = sym_number;
	small_parse_table_1516(v);
}

void	small_parse_table_1516(t_small_parse_table_array *v)
{
	v->a[30320] = sym_word;
	v->a[30321] = state(682);
	v->a[30322] = 5;
	v->a[30323] = sym_arithmetic_expansion;
	v->a[30324] = sym_string;
	v->a[30325] = sym_simple_expansion;
	v->a[30326] = sym_expansion;
	v->a[30327] = sym_command_substitution;
	v->a[30328] = actions(544);
	v->a[30329] = 13;
	v->a[30330] = anon_sym_PIPE;
	v->a[30331] = anon_sym_AMP_AMP;
	v->a[30332] = anon_sym_PIPE_PIPE;
	v->a[30333] = anon_sym_LT;
	v->a[30334] = anon_sym_GT;
	v->a[30335] = anon_sym_GT_GT;
	v->a[30336] = anon_sym_LT_AMP;
	v->a[30337] = anon_sym_GT_AMP;
	v->a[30338] = anon_sym_GT_PIPE;
	v->a[30339] = anon_sym_LT_GT;
	small_parse_table_1517(v);
}

void	small_parse_table_1517(t_small_parse_table_array *v)
{
	v->a[30340] = anon_sym_LT_LT;
	v->a[30341] = anon_sym_LT_LT_DASH;
	v->a[30342] = aux_sym_heredoc_redirect_token1;
	v->a[30343] = 6;
	v->a[30344] = actions(3);
	v->a[30345] = 1;
	v->a[30346] = sym_comment;
	v->a[30347] = actions(1101);
	v->a[30348] = 1;
	v->a[30349] = aux_sym_concatenation_token1;
	v->a[30350] = actions(1139);
	v->a[30351] = 1;
	v->a[30352] = sym__concat;
	v->a[30353] = state(356);
	v->a[30354] = 1;
	v->a[30355] = aux_sym_concatenation_repeat1;
	v->a[30356] = actions(1132);
	v->a[30357] = 3;
	v->a[30358] = sym_file_descriptor;
	v->a[30359] = sym__bare_dollar;
	small_parse_table_1518(v);
}

void	small_parse_table_1518(t_small_parse_table_array *v)
{
	v->a[30360] = ts_builtin_sym_end;
	v->a[30361] = actions(1134);
	v->a[30362] = 25;
	v->a[30363] = anon_sym_LPAREN;
	v->a[30364] = anon_sym_PIPE;
	v->a[30365] = anon_sym_SEMI_SEMI;
	v->a[30366] = anon_sym_AMP_AMP;
	v->a[30367] = anon_sym_PIPE_PIPE;
	v->a[30368] = anon_sym_LT;
	v->a[30369] = anon_sym_GT;
	v->a[30370] = anon_sym_GT_GT;
	v->a[30371] = anon_sym_LT_AMP;
	v->a[30372] = anon_sym_GT_AMP;
	v->a[30373] = anon_sym_GT_PIPE;
	v->a[30374] = anon_sym_LT_GT;
	v->a[30375] = anon_sym_LT_LT;
	v->a[30376] = anon_sym_LT_LT_DASH;
	v->a[30377] = aux_sym_heredoc_redirect_token1;
	v->a[30378] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30379] = anon_sym_DOLLAR;
	small_parse_table_1519(v);
}

void	small_parse_table_1519(t_small_parse_table_array *v)
{
	v->a[30380] = anon_sym_DQUOTE;
	v->a[30381] = sym_raw_string;
	v->a[30382] = sym_number;
	v->a[30383] = anon_sym_DOLLAR_LBRACE;
	v->a[30384] = anon_sym_DOLLAR_LPAREN;
	v->a[30385] = anon_sym_BQUOTE;
	v->a[30386] = sym_word;
	v->a[30387] = anon_sym_SEMI;
	v->a[30388] = 6;
	v->a[30389] = actions(3);
	v->a[30390] = 1;
	v->a[30391] = sym_comment;
	v->a[30392] = actions(1125);
	v->a[30393] = 1;
	v->a[30394] = aux_sym_concatenation_token1;
	v->a[30395] = actions(1144);
	v->a[30396] = 1;
	v->a[30397] = sym__concat;
	v->a[30398] = state(364);
	v->a[30399] = 1;
	small_parse_table_1520(v);
}

/* EOF small_parse_table_303.c */
