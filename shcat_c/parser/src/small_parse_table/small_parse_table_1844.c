/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1844.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9220(t_small_parse_table_array *v)
{
	v->a[184400] = anon_sym_GT;
	v->a[184401] = anon_sym_GT_GT;
	v->a[184402] = anon_sym_AMP_GT;
	v->a[184403] = anon_sym_AMP_GT_GT;
	v->a[184404] = anon_sym_LT_AMP;
	v->a[184405] = anon_sym_GT_AMP;
	v->a[184406] = anon_sym_GT_PIPE;
	v->a[184407] = anon_sym_LT_AMP_DASH;
	v->a[184408] = anon_sym_GT_AMP_DASH;
	v->a[184409] = anon_sym_LT_LT_LT;
	v->a[184410] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[184411] = anon_sym_DOLLAR_LBRACK;
	v->a[184412] = aux_sym_concatenation_token1;
	v->a[184413] = anon_sym_DOLLAR;
	v->a[184414] = sym__special_character;
	v->a[184415] = anon_sym_DQUOTE;
	v->a[184416] = sym_raw_string;
	v->a[184417] = sym_ansi_c_string;
	v->a[184418] = aux_sym_number_token1;
	v->a[184419] = aux_sym_number_token2;
	small_parse_table_9221(v);
}

void	small_parse_table_9221(t_small_parse_table_array *v)
{
	v->a[184420] = anon_sym_DOLLAR_LBRACE;
	v->a[184421] = anon_sym_DOLLAR_LPAREN;
	v->a[184422] = anon_sym_BQUOTE;
	v->a[184423] = anon_sym_DOLLAR_BQUOTE;
	v->a[184424] = anon_sym_LT_LPAREN;
	v->a[184425] = anon_sym_GT_LPAREN;
	v->a[184426] = sym_word;
	v->a[184427] = 24;
	v->a[184428] = actions(71);
	v->a[184429] = 1;
	v->a[184430] = sym_comment;
	v->a[184431] = actions(6474);
	v->a[184432] = 1;
	v->a[184433] = sym_word;
	v->a[184434] = actions(6480);
	v->a[184435] = 1;
	v->a[184436] = anon_sym_LPAREN;
	v->a[184437] = actions(6488);
	v->a[184438] = 1;
	v->a[184439] = anon_sym_DOLLAR;
	small_parse_table_9222(v);
}

void	small_parse_table_9222(t_small_parse_table_array *v)
{
	v->a[184440] = actions(6494);
	v->a[184441] = 1;
	v->a[184442] = aux_sym_number_token1;
	v->a[184443] = actions(6496);
	v->a[184444] = 1;
	v->a[184445] = aux_sym_number_token2;
	v->a[184446] = actions(6500);
	v->a[184447] = 1;
	v->a[184448] = anon_sym_DOLLAR_LPAREN;
	v->a[184449] = actions(6508);
	v->a[184450] = 1;
	v->a[184451] = sym_test_operator;
	v->a[184452] = actions(6510);
	v->a[184453] = 1;
	v->a[184454] = sym_extglob_pattern;
	v->a[184455] = actions(6512);
	v->a[184456] = 1;
	v->a[184457] = sym__brace_start;
	v->a[184458] = actions(7226);
	v->a[184459] = 1;
	small_parse_table_9223(v);
}

void	small_parse_table_9223(t_small_parse_table_array *v)
{
	v->a[184460] = anon_sym_DOLLAR_LBRACK;
	v->a[184461] = actions(7228);
	v->a[184462] = 1;
	v->a[184463] = sym__special_character;
	v->a[184464] = actions(7230);
	v->a[184465] = 1;
	v->a[184466] = anon_sym_DQUOTE;
	v->a[184467] = actions(7234);
	v->a[184468] = 1;
	v->a[184469] = anon_sym_DOLLAR_LBRACE;
	v->a[184470] = actions(7236);
	v->a[184471] = 1;
	v->a[184472] = anon_sym_BQUOTE;
	v->a[184473] = actions(7238);
	v->a[184474] = 1;
	v->a[184475] = anon_sym_DOLLAR_BQUOTE;
	v->a[184476] = state(6426);
	v->a[184477] = 1;
	v->a[184478] = aux_sym__literal_repeat1;
	v->a[184479] = state(7494);
	small_parse_table_9224(v);
}

void	small_parse_table_9224(t_small_parse_table_array *v)
{
	v->a[184480] = 1;
	v->a[184481] = sym_last_case_item;
	v->a[184482] = actions(7224);
	v->a[184483] = 2;
	v->a[184484] = anon_sym_LPAREN_LPAREN;
	v->a[184485] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[184486] = actions(7232);
	v->a[184487] = 2;
	v->a[184488] = sym_raw_string;
	v->a[184489] = sym_ansi_c_string;
	v->a[184490] = actions(7240);
	v->a[184491] = 2;
	v->a[184492] = anon_sym_LT_LPAREN;
	v->a[184493] = anon_sym_GT_LPAREN;
	v->a[184494] = state(3477);
	v->a[184495] = 2;
	v->a[184496] = sym_case_item;
	v->a[184497] = aux_sym_case_statement_repeat1;
	v->a[184498] = state(6695);
	v->a[184499] = 2;
	small_parse_table_9225(v);
}

/* EOF small_parse_table_1844.c */
