/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_424.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2120(t_small_parse_table_array *v)
{
	v->a[42400] = 2;
	v->a[42401] = anon_sym_DASH2;
	v->a[42402] = anon_sym_PLUS2;
	v->a[42403] = actions(1485);
	v->a[42404] = 2;
	v->a[42405] = sym_number;
	v->a[42406] = aux_sym__simple_variable_name_token1;
	v->a[42407] = state(194);
	v->a[42408] = 3;
	v->a[42409] = sym_string;
	v->a[42410] = sym_simple_expansion;
	v->a[42411] = sym_expansion;
	v->a[42412] = state(298);
	v->a[42413] = 8;
	v->a[42414] = sym__arithmetic_expression;
	v->a[42415] = sym_arithmetic_literal;
	v->a[42416] = sym_arithmetic_binary_expression;
	v->a[42417] = sym_arithmetic_ternary_expression;
	v->a[42418] = sym_arithmetic_unary_expression;
	v->a[42419] = sym_arithmetic_postfix_expression;
	small_parse_table_2121(v);
}

void	small_parse_table_2121(t_small_parse_table_array *v)
{
	v->a[42420] = sym_arithmetic_parenthesized_expression;
	v->a[42421] = sym_command_substitution;
	v->a[42422] = 7;
	v->a[42423] = actions(3);
	v->a[42424] = 1;
	v->a[42425] = sym_comment;
	v->a[42426] = actions(1457);
	v->a[42427] = 1;
	v->a[42428] = sym_file_descriptor;
	v->a[42429] = actions(1460);
	v->a[42430] = 1;
	v->a[42431] = sym_variable_name;
	v->a[42432] = actions(1520);
	v->a[42433] = 1;
	v->a[42434] = anon_sym_RPAREN;
	v->a[42435] = actions(1454);
	v->a[42436] = 7;
	v->a[42437] = anon_sym_LT;
	v->a[42438] = anon_sym_GT;
	v->a[42439] = anon_sym_GT_GT;
	small_parse_table_2122(v);
}

void	small_parse_table_2122(t_small_parse_table_array *v)
{
	v->a[42440] = anon_sym_LT_AMP;
	v->a[42441] = anon_sym_GT_AMP;
	v->a[42442] = anon_sym_GT_PIPE;
	v->a[42443] = anon_sym_LT_GT;
	v->a[42444] = actions(1449);
	v->a[42445] = 8;
	v->a[42446] = anon_sym_PIPE;
	v->a[42447] = anon_sym_SEMI_SEMI;
	v->a[42448] = anon_sym_AMP_AMP;
	v->a[42449] = anon_sym_PIPE_PIPE;
	v->a[42450] = anon_sym_LT_LT;
	v->a[42451] = anon_sym_LT_LT_DASH;
	v->a[42452] = aux_sym_heredoc_redirect_token1;
	v->a[42453] = anon_sym_SEMI;
	v->a[42454] = actions(1447);
	v->a[42455] = 9;
	v->a[42456] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42457] = anon_sym_DOLLAR;
	v->a[42458] = anon_sym_DQUOTE;
	v->a[42459] = sym_raw_string;
	small_parse_table_2123(v);
}

void	small_parse_table_2123(t_small_parse_table_array *v)
{
	v->a[42460] = sym_number;
	v->a[42461] = anon_sym_DOLLAR_LBRACE;
	v->a[42462] = anon_sym_DOLLAR_LPAREN;
	v->a[42463] = anon_sym_BQUOTE;
	v->a[42464] = sym_word;
	v->a[42465] = 3;
	v->a[42466] = actions(3);
	v->a[42467] = 1;
	v->a[42468] = sym_comment;
	v->a[42469] = actions(1525);
	v->a[42470] = 2;
	v->a[42471] = sym_file_descriptor;
	v->a[42472] = sym__bare_dollar;
	v->a[42473] = actions(1523);
	v->a[42474] = 25;
	v->a[42475] = anon_sym_PIPE;
	v->a[42476] = anon_sym_RPAREN;
	v->a[42477] = anon_sym_SEMI_SEMI;
	v->a[42478] = anon_sym_AMP_AMP;
	v->a[42479] = anon_sym_PIPE_PIPE;
	small_parse_table_2124(v);
}

void	small_parse_table_2124(t_small_parse_table_array *v)
{
	v->a[42480] = anon_sym_LT;
	v->a[42481] = anon_sym_GT;
	v->a[42482] = anon_sym_GT_GT;
	v->a[42483] = anon_sym_LT_AMP;
	v->a[42484] = anon_sym_GT_AMP;
	v->a[42485] = anon_sym_GT_PIPE;
	v->a[42486] = anon_sym_LT_GT;
	v->a[42487] = anon_sym_LT_LT;
	v->a[42488] = anon_sym_LT_LT_DASH;
	v->a[42489] = aux_sym_heredoc_redirect_token1;
	v->a[42490] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42491] = anon_sym_DOLLAR;
	v->a[42492] = anon_sym_DQUOTE;
	v->a[42493] = sym_raw_string;
	v->a[42494] = sym_number;
	v->a[42495] = anon_sym_DOLLAR_LBRACE;
	v->a[42496] = anon_sym_DOLLAR_LPAREN;
	v->a[42497] = anon_sym_BQUOTE;
	v->a[42498] = sym_word;
	v->a[42499] = anon_sym_SEMI;
	small_parse_table_2125(v);
}

/* EOF small_parse_table_424.c */
