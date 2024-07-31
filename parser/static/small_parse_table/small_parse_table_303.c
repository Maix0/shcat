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
	v->a[30300] = 3;
	v->a[30301] = actions(3);
	v->a[30302] = 1;
	v->a[30303] = sym_comment;
	v->a[30304] = actions(483);
	v->a[30305] = 2;
	v->a[30306] = sym__concat;
	v->a[30307] = sym_variable_name;
	v->a[30308] = actions(481);
	v->a[30309] = 26;
	v->a[30310] = anon_sym_esac;
	v->a[30311] = anon_sym_PIPE;
	v->a[30312] = anon_sym_SEMI_SEMI;
	v->a[30313] = anon_sym_AMP_AMP;
	v->a[30314] = anon_sym_PIPE_PIPE;
	v->a[30315] = anon_sym_LT;
	v->a[30316] = anon_sym_GT;
	v->a[30317] = anon_sym_GT_GT;
	v->a[30318] = anon_sym_LT_AMP;
	v->a[30319] = anon_sym_GT_AMP;
	small_parse_table_1516(v);
}

void	small_parse_table_1516(t_small_parse_table_array *v)
{
	v->a[30320] = anon_sym_GT_PIPE;
	v->a[30321] = anon_sym_LT_GT;
	v->a[30322] = anon_sym_LT_LT;
	v->a[30323] = anon_sym_LT_LT_DASH;
	v->a[30324] = aux_sym_heredoc_redirect_token1;
	v->a[30325] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30326] = aux_sym_concatenation_token1;
	v->a[30327] = anon_sym_DOLLAR;
	v->a[30328] = anon_sym_DQUOTE;
	v->a[30329] = sym_raw_string;
	v->a[30330] = sym_number;
	v->a[30331] = anon_sym_DOLLAR_LBRACE;
	v->a[30332] = anon_sym_DOLLAR_LPAREN;
	v->a[30333] = anon_sym_BQUOTE;
	v->a[30334] = sym_word;
	v->a[30335] = anon_sym_SEMI;
	v->a[30336] = 5;
	v->a[30337] = actions(3);
	v->a[30338] = 1;
	v->a[30339] = sym_comment;
	small_parse_table_1517(v);
}

void	small_parse_table_1517(t_small_parse_table_array *v)
{
	v->a[30340] = actions(1209);
	v->a[30341] = 1;
	v->a[30342] = aux_sym_concatenation_token1;
	v->a[30343] = actions(1239);
	v->a[30344] = 1;
	v->a[30345] = sym__concat;
	v->a[30346] = state(410);
	v->a[30347] = 1;
	v->a[30348] = aux_sym_concatenation_repeat1;
	v->a[30349] = actions(997);
	v->a[30350] = 25;
	v->a[30351] = anon_sym_PIPE;
	v->a[30352] = anon_sym_RPAREN;
	v->a[30353] = anon_sym_SEMI_SEMI;
	v->a[30354] = anon_sym_AMP_AMP;
	v->a[30355] = anon_sym_PIPE_PIPE;
	v->a[30356] = anon_sym_LT;
	v->a[30357] = anon_sym_GT;
	v->a[30358] = anon_sym_GT_GT;
	v->a[30359] = anon_sym_LT_AMP;
	small_parse_table_1518(v);
}

void	small_parse_table_1518(t_small_parse_table_array *v)
{
	v->a[30360] = anon_sym_GT_AMP;
	v->a[30361] = anon_sym_GT_PIPE;
	v->a[30362] = anon_sym_LT_GT;
	v->a[30363] = anon_sym_LT_LT;
	v->a[30364] = anon_sym_LT_LT_DASH;
	v->a[30365] = aux_sym_heredoc_redirect_token1;
	v->a[30366] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30367] = anon_sym_DOLLAR;
	v->a[30368] = anon_sym_DQUOTE;
	v->a[30369] = sym_raw_string;
	v->a[30370] = sym_number;
	v->a[30371] = anon_sym_DOLLAR_LBRACE;
	v->a[30372] = anon_sym_DOLLAR_LPAREN;
	v->a[30373] = anon_sym_BQUOTE;
	v->a[30374] = sym_word;
	v->a[30375] = anon_sym_SEMI;
	v->a[30376] = 3;
	v->a[30377] = actions(3);
	v->a[30378] = 1;
	v->a[30379] = sym_comment;
	small_parse_table_1519(v);
}

void	small_parse_table_1519(t_small_parse_table_array *v)
{
	v->a[30380] = actions(1147);
	v->a[30381] = 3;
	v->a[30382] = sym__concat;
	v->a[30383] = sym__bare_dollar;
	v->a[30384] = ts_builtin_sym_end;
	v->a[30385] = actions(1145);
	v->a[30386] = 25;
	v->a[30387] = anon_sym_PIPE;
	v->a[30388] = anon_sym_SEMI_SEMI;
	v->a[30389] = anon_sym_AMP_AMP;
	v->a[30390] = anon_sym_PIPE_PIPE;
	v->a[30391] = anon_sym_LT;
	v->a[30392] = anon_sym_GT;
	v->a[30393] = anon_sym_GT_GT;
	v->a[30394] = anon_sym_LT_AMP;
	v->a[30395] = anon_sym_GT_AMP;
	v->a[30396] = anon_sym_GT_PIPE;
	v->a[30397] = anon_sym_LT_GT;
	v->a[30398] = anon_sym_LT_LT;
	v->a[30399] = anon_sym_LT_LT_DASH;
	small_parse_table_1520(v);
}

/* EOF small_parse_table_303.c */
