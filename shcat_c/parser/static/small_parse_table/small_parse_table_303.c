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
	v->a[30300] = anon_sym_EQ_TILDE;
	v->a[30301] = anon_sym_AMP_GT;
	v->a[30302] = anon_sym_AMP_GT_GT;
	v->a[30303] = anon_sym_LT_AMP;
	v->a[30304] = anon_sym_GT_AMP;
	v->a[30305] = anon_sym_GT_PIPE;
	v->a[30306] = anon_sym_LT_AMP_DASH;
	v->a[30307] = anon_sym_GT_AMP_DASH;
	v->a[30308] = anon_sym_LT_LT_DASH;
	v->a[30309] = anon_sym_LT_LT_LT;
	v->a[30310] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30311] = anon_sym_DOLLAR_LBRACK;
	v->a[30312] = aux_sym_concatenation_token1;
	v->a[30313] = anon_sym_DOLLAR;
	v->a[30314] = sym__special_character;
	v->a[30315] = anon_sym_DQUOTE;
	v->a[30316] = sym_raw_string;
	v->a[30317] = sym_ansi_c_string;
	v->a[30318] = aux_sym_number_token1;
	v->a[30319] = aux_sym_number_token2;
	small_parse_table_1516(v);
}

void	small_parse_table_1516(t_small_parse_table_array *v)
{
	v->a[30320] = anon_sym_DOLLAR_LBRACE;
	v->a[30321] = anon_sym_DOLLAR_LPAREN;
	v->a[30322] = anon_sym_BQUOTE;
	v->a[30323] = anon_sym_DOLLAR_BQUOTE;
	v->a[30324] = anon_sym_LT_LPAREN;
	v->a[30325] = anon_sym_GT_LPAREN;
	v->a[30326] = sym_word;
	v->a[30327] = 22;
	v->a[30328] = actions(71);
	v->a[30329] = 1;
	v->a[30330] = sym_comment;
	v->a[30331] = actions(4498);
	v->a[30332] = 1;
	v->a[30333] = sym_word;
	v->a[30334] = actions(4502);
	v->a[30335] = 1;
	v->a[30336] = anon_sym_DOLLAR_LBRACK;
	v->a[30337] = actions(4504);
	v->a[30338] = 1;
	v->a[30339] = anon_sym_DOLLAR;
	small_parse_table_1517(v);
}

void	small_parse_table_1517(t_small_parse_table_array *v)
{
	v->a[30340] = actions(4506);
	v->a[30341] = 1;
	v->a[30342] = sym__special_character;
	v->a[30343] = actions(4508);
	v->a[30344] = 1;
	v->a[30345] = anon_sym_DQUOTE;
	v->a[30346] = actions(4512);
	v->a[30347] = 1;
	v->a[30348] = aux_sym_number_token1;
	v->a[30349] = actions(4514);
	v->a[30350] = 1;
	v->a[30351] = aux_sym_number_token2;
	v->a[30352] = actions(4516);
	v->a[30353] = 1;
	v->a[30354] = anon_sym_DOLLAR_LBRACE;
	v->a[30355] = actions(4518);
	v->a[30356] = 1;
	v->a[30357] = anon_sym_DOLLAR_LPAREN;
	v->a[30358] = actions(4520);
	v->a[30359] = 1;
	small_parse_table_1518(v);
}

void	small_parse_table_1518(t_small_parse_table_array *v)
{
	v->a[30360] = anon_sym_BQUOTE;
	v->a[30361] = actions(4522);
	v->a[30362] = 1;
	v->a[30363] = anon_sym_DOLLAR_BQUOTE;
	v->a[30364] = actions(4526);
	v->a[30365] = 1;
	v->a[30366] = sym_test_operator;
	v->a[30367] = actions(4528);
	v->a[30368] = 1;
	v->a[30369] = sym__brace_start;
	v->a[30370] = state(2715);
	v->a[30371] = 1;
	v->a[30372] = aux_sym__literal_repeat1;
	v->a[30373] = actions(4500);
	v->a[30374] = 2;
	v->a[30375] = anon_sym_LPAREN_LPAREN;
	v->a[30376] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30377] = actions(4510);
	v->a[30378] = 2;
	v->a[30379] = sym_raw_string;
	small_parse_table_1519(v);
}

void	small_parse_table_1519(t_small_parse_table_array *v)
{
	v->a[30380] = sym_ansi_c_string;
	v->a[30381] = actions(4524);
	v->a[30382] = 2;
	v->a[30383] = anon_sym_LT_LPAREN;
	v->a[30384] = anon_sym_GT_LPAREN;
	v->a[30385] = state(895);
	v->a[30386] = 2;
	v->a[30387] = sym_concatenation;
	v->a[30388] = aux_sym_for_statement_repeat1;
	v->a[30389] = actions(2072);
	v->a[30390] = 7;
	v->a[30391] = anon_sym_PIPE;
	v->a[30392] = anon_sym_LT;
	v->a[30393] = anon_sym_GT;
	v->a[30394] = anon_sym_LT_LT;
	v->a[30395] = anon_sym_AMP_GT;
	v->a[30396] = anon_sym_LT_AMP;
	v->a[30397] = anon_sym_GT_AMP;
	v->a[30398] = state(2438);
	v->a[30399] = 9;
	small_parse_table_1520(v);
}

/* EOF small_parse_table_303.c */
