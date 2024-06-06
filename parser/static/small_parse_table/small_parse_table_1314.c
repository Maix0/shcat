/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1314.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6570(t_small_parse_table_array *v)
{
	v->a[131400] = sym_extglob_pattern;
	v->a[131401] = sym__brace_start;
	v->a[131402] = anon_sym_LPAREN;
	v->a[131403] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[131404] = sym__special_character;
	v->a[131405] = anon_sym_DQUOTE;
	v->a[131406] = sym_raw_string;
	v->a[131407] = anon_sym_DOLLAR_LBRACE;
	v->a[131408] = anon_sym_BQUOTE;
	v->a[131409] = anon_sym_DOLLAR_BQUOTE;
	v->a[131410] = 3;
	v->a[131411] = actions(3);
	v->a[131412] = 1;
	v->a[131413] = sym_comment;
	v->a[131414] = actions(2888);
	v->a[131415] = 3;
	v->a[131416] = sym_file_descriptor;
	v->a[131417] = sym__concat;
	v->a[131418] = aux_sym_heredoc_redirect_token1;
	v->a[131419] = actions(2886);
	small_parse_table_6571(v);
}

void	small_parse_table_6571(t_small_parse_table_array *v)
{
	v->a[131420] = 13;
	v->a[131421] = anon_sym_AMP_AMP;
	v->a[131422] = anon_sym_PIPE_PIPE;
	v->a[131423] = anon_sym_LT;
	v->a[131424] = anon_sym_GT;
	v->a[131425] = anon_sym_GT_GT;
	v->a[131426] = anon_sym_AMP_GT;
	v->a[131427] = anon_sym_AMP_GT_GT;
	v->a[131428] = anon_sym_LT_AMP;
	v->a[131429] = anon_sym_GT_AMP;
	v->a[131430] = anon_sym_GT_PIPE;
	v->a[131431] = anon_sym_LT_AMP_DASH;
	v->a[131432] = anon_sym_GT_AMP_DASH;
	v->a[131433] = aux_sym_concatenation_token1;
	v->a[131434] = 3;
	v->a[131435] = actions(57);
	v->a[131436] = 1;
	v->a[131437] = sym_comment;
	v->a[131438] = actions(7479);
	v->a[131439] = 5;
	small_parse_table_6572(v);
}

void	small_parse_table_6572(t_small_parse_table_array *v)
{
	v->a[131440] = anon_sym_DOLLAR;
	v->a[131441] = aux_sym_number_token1;
	v->a[131442] = aux_sym_number_token2;
	v->a[131443] = anon_sym_DOLLAR_LPAREN;
	v->a[131444] = sym_word;
	v->a[131445] = actions(7481);
	v->a[131446] = 11;
	v->a[131447] = sym_test_operator;
	v->a[131448] = sym_extglob_pattern;
	v->a[131449] = sym__brace_start;
	v->a[131450] = anon_sym_LPAREN;
	v->a[131451] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[131452] = sym__special_character;
	v->a[131453] = anon_sym_DQUOTE;
	v->a[131454] = sym_raw_string;
	v->a[131455] = anon_sym_DOLLAR_LBRACE;
	v->a[131456] = anon_sym_BQUOTE;
	v->a[131457] = anon_sym_DOLLAR_BQUOTE;
	v->a[131458] = 7;
	v->a[131459] = actions(3);
	small_parse_table_6573(v);
}

void	small_parse_table_6573(t_small_parse_table_array *v)
{
	v->a[131460] = 1;
	v->a[131461] = sym_comment;
	v->a[131462] = actions(7520);
	v->a[131463] = 1;
	v->a[131464] = anon_sym_PERCENT;
	v->a[131465] = actions(7524);
	v->a[131466] = 1;
	v->a[131467] = anon_sym_RBRACE3;
	v->a[131468] = state(3927);
	v->a[131469] = 1;
	v->a[131470] = sym__expansion_regex;
	v->a[131471] = state(3928);
	v->a[131472] = 1;
	v->a[131473] = sym__expansion_expression;
	v->a[131474] = actions(7522);
	v->a[131475] = 3;
	v->a[131476] = sym__immediate_double_hash;
	v->a[131477] = anon_sym_POUND;
	v->a[131478] = anon_sym_PERCENT_PERCENT;
	v->a[131479] = actions(7526);
	small_parse_table_6574(v);
}

void	small_parse_table_6574(t_small_parse_table_array *v)
{
	v->a[131480] = 8;
	v->a[131481] = anon_sym_COLON_DASH;
	v->a[131482] = anon_sym_DASH3;
	v->a[131483] = anon_sym_COLON_EQ;
	v->a[131484] = anon_sym_EQ2;
	v->a[131485] = anon_sym_COLON_QMARK;
	v->a[131486] = anon_sym_QMARK2;
	v->a[131487] = anon_sym_COLON_PLUS;
	v->a[131488] = anon_sym_PLUS3;
	v->a[131489] = 3;
	v->a[131490] = actions(3);
	v->a[131491] = 1;
	v->a[131492] = sym_comment;
	v->a[131493] = actions(2664);
	v->a[131494] = 2;
	v->a[131495] = sym_file_descriptor;
	v->a[131496] = aux_sym_heredoc_redirect_token1;
	v->a[131497] = actions(2662);
	v->a[131498] = 13;
	v->a[131499] = anon_sym_AMP_AMP;
	small_parse_table_6575(v);
}

/* EOF small_parse_table_1314.c */
