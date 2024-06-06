/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_734.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3670(t_small_parse_table_array *v)
{
	v->a[73400] = 13;
	v->a[73401] = anon_sym_PIPE;
	v->a[73402] = anon_sym_LT;
	v->a[73403] = anon_sym_GT;
	v->a[73404] = anon_sym_AMP_GT;
	v->a[73405] = anon_sym_LT_AMP;
	v->a[73406] = anon_sym_GT_AMP;
	v->a[73407] = anon_sym_LT_LT;
	v->a[73408] = anon_sym_DOLLAR;
	v->a[73409] = aux_sym_number_token1;
	v->a[73410] = aux_sym_number_token2;
	v->a[73411] = anon_sym_DOLLAR_LPAREN;
	v->a[73412] = anon_sym_BQUOTE;
	v->a[73413] = sym_word;
	v->a[73414] = actions(2908);
	v->a[73415] = 21;
	v->a[73416] = sym_file_descriptor;
	v->a[73417] = sym__concat;
	v->a[73418] = sym_variable_name;
	v->a[73419] = sym_test_operator;
	small_parse_table_3671(v);
}

void	small_parse_table_3671(t_small_parse_table_array *v)
{
	v->a[73420] = sym__brace_start;
	v->a[73421] = anon_sym_PIPE_AMP;
	v->a[73422] = anon_sym_AMP_AMP;
	v->a[73423] = anon_sym_PIPE_PIPE;
	v->a[73424] = anon_sym_GT_GT;
	v->a[73425] = anon_sym_AMP_GT_GT;
	v->a[73426] = anon_sym_GT_PIPE;
	v->a[73427] = anon_sym_LT_AMP_DASH;
	v->a[73428] = anon_sym_GT_AMP_DASH;
	v->a[73429] = anon_sym_LT_LT_DASH;
	v->a[73430] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[73431] = aux_sym_concatenation_token1;
	v->a[73432] = sym__special_character;
	v->a[73433] = anon_sym_DQUOTE;
	v->a[73434] = sym_raw_string;
	v->a[73435] = anon_sym_DOLLAR_LBRACE;
	v->a[73436] = anon_sym_DOLLAR_BQUOTE;
	v->a[73437] = 6;
	v->a[73438] = actions(3);
	v->a[73439] = 1;
	small_parse_table_3672(v);
}

void	small_parse_table_3672(t_small_parse_table_array *v)
{
	v->a[73440] = sym_comment;
	v->a[73441] = actions(4412);
	v->a[73442] = 1;
	v->a[73443] = sym_variable_name;
	v->a[73444] = actions(816);
	v->a[73445] = 2;
	v->a[73446] = sym_file_descriptor;
	v->a[73447] = ts_builtin_sym_end;
	v->a[73448] = actions(4410);
	v->a[73449] = 2;
	v->a[73450] = aux_sym__simple_variable_name_token1;
	v->a[73451] = aux_sym__multiline_variable_name_token1;
	v->a[73452] = actions(4408);
	v->a[73453] = 9;
	v->a[73454] = anon_sym_BANG;
	v->a[73455] = anon_sym_DASH;
	v->a[73456] = anon_sym_STAR;
	v->a[73457] = anon_sym_QMARK;
	v->a[73458] = anon_sym_DOLLAR;
	v->a[73459] = anon_sym_POUND;
	small_parse_table_3673(v);
}

void	small_parse_table_3673(t_small_parse_table_array *v)
{
	v->a[73460] = anon_sym_AT;
	v->a[73461] = anon_sym_0;
	v->a[73462] = anon_sym__;
	v->a[73463] = actions(810);
	v->a[73464] = 20;
	v->a[73465] = anon_sym_PIPE;
	v->a[73466] = anon_sym_SEMI_SEMI;
	v->a[73467] = anon_sym_PIPE_AMP;
	v->a[73468] = anon_sym_AMP_AMP;
	v->a[73469] = anon_sym_PIPE_PIPE;
	v->a[73470] = anon_sym_LT;
	v->a[73471] = anon_sym_GT;
	v->a[73472] = anon_sym_GT_GT;
	v->a[73473] = anon_sym_AMP_GT;
	v->a[73474] = anon_sym_AMP_GT_GT;
	v->a[73475] = anon_sym_LT_AMP;
	v->a[73476] = anon_sym_GT_AMP;
	v->a[73477] = anon_sym_GT_PIPE;
	v->a[73478] = anon_sym_LT_AMP_DASH;
	v->a[73479] = anon_sym_GT_AMP_DASH;
	small_parse_table_3674(v);
}

void	small_parse_table_3674(t_small_parse_table_array *v)
{
	v->a[73480] = anon_sym_LT_LT;
	v->a[73481] = anon_sym_LT_LT_DASH;
	v->a[73482] = aux_sym_heredoc_redirect_token1;
	v->a[73483] = anon_sym_AMP;
	v->a[73484] = anon_sym_SEMI;
	v->a[73485] = 3;
	v->a[73486] = actions(57);
	v->a[73487] = 1;
	v->a[73488] = sym_comment;
	v->a[73489] = actions(2886);
	v->a[73490] = 14;
	v->a[73491] = anon_sym_PIPE;
	v->a[73492] = anon_sym_LT;
	v->a[73493] = anon_sym_GT;
	v->a[73494] = anon_sym_AMP_GT;
	v->a[73495] = anon_sym_LT_AMP;
	v->a[73496] = anon_sym_GT_AMP;
	v->a[73497] = anon_sym_LT_LT;
	v->a[73498] = anon_sym_DOLLAR;
	v->a[73499] = aux_sym_number_token1;
	small_parse_table_3675(v);
}

/* EOF small_parse_table_734.c */
