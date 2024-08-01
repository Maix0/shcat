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
	v->a[30300] = anon_sym_LT;
	v->a[30301] = anon_sym_GT;
	v->a[30302] = anon_sym_GT_GT;
	v->a[30303] = actions(1249);
	v->a[30304] = 7;
	v->a[30305] = anon_sym_PIPE;
	v->a[30306] = anon_sym_SEMI_SEMI;
	v->a[30307] = anon_sym_AMP_AMP;
	v->a[30308] = anon_sym_PIPE_PIPE;
	v->a[30309] = anon_sym_LT_LT;
	v->a[30310] = aux_sym_heredoc_redirect_token1;
	v->a[30311] = anon_sym_SEMI;
	v->a[30312] = actions(1247);
	v->a[30313] = 9;
	v->a[30314] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30315] = anon_sym_DOLLAR;
	v->a[30316] = anon_sym_DQUOTE;
	v->a[30317] = sym_raw_string;
	v->a[30318] = sym_number;
	v->a[30319] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1516(v);
}

void	small_parse_table_1516(t_small_parse_table_array *v)
{
	v->a[30320] = anon_sym_DOLLAR_LPAREN;
	v->a[30321] = anon_sym_BQUOTE;
	v->a[30322] = sym_word;
	v->a[30323] = 6;
	v->a[30324] = actions(3);
	v->a[30325] = 1;
	v->a[30326] = sym_comment;
	v->a[30327] = actions(1257);
	v->a[30328] = 1;
	v->a[30329] = sym_variable_name;
	v->a[30330] = actions(1262);
	v->a[30331] = 1;
	v->a[30332] = anon_sym_RPAREN;
	v->a[30333] = actions(1254);
	v->a[30334] = 3;
	v->a[30335] = anon_sym_LT;
	v->a[30336] = anon_sym_GT;
	v->a[30337] = anon_sym_GT_GT;
	v->a[30338] = actions(1249);
	v->a[30339] = 7;
	small_parse_table_1517(v);
}

void	small_parse_table_1517(t_small_parse_table_array *v)
{
	v->a[30340] = anon_sym_PIPE;
	v->a[30341] = anon_sym_SEMI_SEMI;
	v->a[30342] = anon_sym_AMP_AMP;
	v->a[30343] = anon_sym_PIPE_PIPE;
	v->a[30344] = anon_sym_LT_LT;
	v->a[30345] = aux_sym_heredoc_redirect_token1;
	v->a[30346] = anon_sym_SEMI;
	v->a[30347] = actions(1247);
	v->a[30348] = 9;
	v->a[30349] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30350] = anon_sym_DOLLAR;
	v->a[30351] = anon_sym_DQUOTE;
	v->a[30352] = sym_raw_string;
	v->a[30353] = sym_number;
	v->a[30354] = anon_sym_DOLLAR_LBRACE;
	v->a[30355] = anon_sym_DOLLAR_LPAREN;
	v->a[30356] = anon_sym_BQUOTE;
	v->a[30357] = sym_word;
	v->a[30358] = 15;
	v->a[30359] = actions(3);
	small_parse_table_1518(v);
}

void	small_parse_table_1518(t_small_parse_table_array *v)
{
	v->a[30360] = 1;
	v->a[30361] = sym_comment;
	v->a[30362] = actions(778);
	v->a[30363] = 1;
	v->a[30364] = anon_sym_LPAREN;
	v->a[30365] = actions(782);
	v->a[30366] = 1;
	v->a[30367] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30368] = actions(784);
	v->a[30369] = 1;
	v->a[30370] = anon_sym_DOLLAR;
	v->a[30371] = actions(786);
	v->a[30372] = 1;
	v->a[30373] = anon_sym_DQUOTE;
	v->a[30374] = actions(788);
	v->a[30375] = 1;
	v->a[30376] = anon_sym_DOLLAR_LBRACE;
	v->a[30377] = actions(790);
	v->a[30378] = 1;
	v->a[30379] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1519(v);
}

void	small_parse_table_1519(t_small_parse_table_array *v)
{
	v->a[30380] = actions(792);
	v->a[30381] = 1;
	v->a[30382] = anon_sym_BQUOTE;
	v->a[30383] = actions(794);
	v->a[30384] = 1;
	v->a[30385] = sym_extglob_pattern;
	v->a[30386] = state(597);
	v->a[30387] = 1;
	v->a[30388] = aux_sym_case_statement_repeat1;
	v->a[30389] = state(1232);
	v->a[30390] = 1;
	v->a[30391] = sym_case_item;
	v->a[30392] = state(1753);
	v->a[30393] = 1;
	v->a[30394] = sym__case_item_last;
	v->a[30395] = state(1538);
	v->a[30396] = 2;
	v->a[30397] = sym_concatenation;
	v->a[30398] = sym__extglob_blob;
	v->a[30399] = actions(774);
	small_parse_table_1520(v);
}

/* EOF small_parse_table_303.c */
