/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1293.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6465(t_small_parse_table_array *v)
{
	v->a[129300] = actions(1143);
	v->a[129301] = 1;
	v->a[129302] = aux_sym_concatenation_token1;
	v->a[129303] = actions(6666);
	v->a[129304] = 1;
	v->a[129305] = sym__concat;
	v->a[129306] = state(2312);
	v->a[129307] = 1;
	v->a[129308] = aux_sym_concatenation_repeat1;
	v->a[129309] = actions(1265);
	v->a[129310] = 14;
	v->a[129311] = anon_sym_EQ;
	v->a[129312] = anon_sym_PIPE;
	v->a[129313] = anon_sym_CARET;
	v->a[129314] = anon_sym_AMP;
	v->a[129315] = anon_sym_LT;
	v->a[129316] = anon_sym_GT;
	v->a[129317] = anon_sym_LT_LT;
	v->a[129318] = anon_sym_GT_GT;
	v->a[129319] = anon_sym_PLUS;
	small_parse_table_6466(v);
}

void	small_parse_table_6466(t_small_parse_table_array *v)
{
	v->a[129320] = anon_sym_DASH;
	v->a[129321] = anon_sym_STAR;
	v->a[129322] = anon_sym_SLASH;
	v->a[129323] = anon_sym_PERCENT;
	v->a[129324] = anon_sym_STAR_STAR;
	v->a[129325] = actions(1267);
	v->a[129326] = 23;
	v->a[129327] = sym_test_operator;
	v->a[129328] = anon_sym_PLUS_PLUS;
	v->a[129329] = anon_sym_DASH_DASH;
	v->a[129330] = anon_sym_PLUS_EQ;
	v->a[129331] = anon_sym_DASH_EQ;
	v->a[129332] = anon_sym_STAR_EQ;
	v->a[129333] = anon_sym_SLASH_EQ;
	v->a[129334] = anon_sym_PERCENT_EQ;
	v->a[129335] = anon_sym_STAR_STAR_EQ;
	v->a[129336] = anon_sym_LT_LT_EQ;
	v->a[129337] = anon_sym_GT_GT_EQ;
	v->a[129338] = anon_sym_AMP_EQ;
	v->a[129339] = anon_sym_CARET_EQ;
	small_parse_table_6467(v);
}

void	small_parse_table_6467(t_small_parse_table_array *v)
{
	v->a[129340] = anon_sym_PIPE_EQ;
	v->a[129341] = anon_sym_PIPE_PIPE;
	v->a[129342] = anon_sym_AMP_AMP;
	v->a[129343] = anon_sym_EQ_EQ;
	v->a[129344] = anon_sym_BANG_EQ;
	v->a[129345] = anon_sym_LT_EQ;
	v->a[129346] = anon_sym_GT_EQ;
	v->a[129347] = anon_sym_EQ_TILDE;
	v->a[129348] = anon_sym_QMARK;
	v->a[129349] = anon_sym_COLON;
	v->a[129350] = 5;
	v->a[129351] = actions(71);
	v->a[129352] = 1;
	v->a[129353] = sym_comment;
	v->a[129354] = state(2494);
	v->a[129355] = 1;
	v->a[129356] = aux_sym_concatenation_repeat1;
	v->a[129357] = actions(6668);
	v->a[129358] = 2;
	v->a[129359] = sym__concat;
	small_parse_table_6468(v);
}

void	small_parse_table_6468(t_small_parse_table_array *v)
{
	v->a[129360] = aux_sym_concatenation_token1;
	v->a[129361] = actions(1261);
	v->a[129362] = 14;
	v->a[129363] = anon_sym_PIPE;
	v->a[129364] = anon_sym_LT;
	v->a[129365] = anon_sym_GT;
	v->a[129366] = anon_sym_LT_LT;
	v->a[129367] = anon_sym_AMP_GT;
	v->a[129368] = anon_sym_LT_AMP;
	v->a[129369] = anon_sym_GT_AMP;
	v->a[129370] = anon_sym_DOLLAR;
	v->a[129371] = sym__special_character;
	v->a[129372] = aux_sym_number_token1;
	v->a[129373] = aux_sym_number_token2;
	v->a[129374] = anon_sym_DOLLAR_LPAREN;
	v->a[129375] = anon_sym_BQUOTE;
	v->a[129376] = sym_word;
	v->a[129377] = actions(1263);
	v->a[129378] = 23;
	v->a[129379] = sym_file_descriptor;
	small_parse_table_6469(v);
}

void	small_parse_table_6469(t_small_parse_table_array *v)
{
	v->a[129380] = sym_test_operator;
	v->a[129381] = sym__brace_start;
	v->a[129382] = anon_sym_LPAREN_LPAREN;
	v->a[129383] = anon_sym_PIPE_PIPE;
	v->a[129384] = anon_sym_AMP_AMP;
	v->a[129385] = anon_sym_GT_GT;
	v->a[129386] = anon_sym_PIPE_AMP;
	v->a[129387] = anon_sym_RBRACK;
	v->a[129388] = anon_sym_AMP_GT_GT;
	v->a[129389] = anon_sym_GT_PIPE;
	v->a[129390] = anon_sym_LT_AMP_DASH;
	v->a[129391] = anon_sym_GT_AMP_DASH;
	v->a[129392] = anon_sym_LT_LT_DASH;
	v->a[129393] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[129394] = anon_sym_DOLLAR_LBRACK;
	v->a[129395] = anon_sym_DQUOTE;
	v->a[129396] = sym_raw_string;
	v->a[129397] = sym_ansi_c_string;
	v->a[129398] = anon_sym_DOLLAR_LBRACE;
	v->a[129399] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_6470(v);
}

/* EOF small_parse_table_1293.c */
