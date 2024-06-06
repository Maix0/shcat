/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_134.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_670(t_small_parse_table_array *v)
{
	v->a[13400] = 1;
	v->a[13401] = anon_sym_DOLLAR_BQUOTE;
	v->a[13402] = actions(2376);
	v->a[13403] = 1;
	v->a[13404] = sym__brace_start;
	v->a[13405] = actions(2411);
	v->a[13406] = 1;
	v->a[13407] = sym__special_character;
	v->a[13408] = actions(2413);
	v->a[13409] = 1;
	v->a[13410] = sym_test_operator;
	v->a[13411] = state(1996);
	v->a[13412] = 1;
	v->a[13413] = aux_sym__literal_repeat1;
	v->a[13414] = state(2320);
	v->a[13415] = 1;
	v->a[13416] = sym_concatenation;
	v->a[13417] = actions(1534);
	v->a[13418] = 2;
	v->a[13419] = sym_file_descriptor;
	small_parse_table_671(v);
}

void	small_parse_table_671(t_small_parse_table_array *v)
{
	v->a[13420] = aux_sym_heredoc_redirect_token1;
	v->a[13421] = actions(2409);
	v->a[13422] = 2;
	v->a[13423] = sym_raw_string;
	v->a[13424] = sym_word;
	v->a[13425] = state(2067);
	v->a[13426] = 7;
	v->a[13427] = sym_arithmetic_expansion;
	v->a[13428] = sym_brace_expression;
	v->a[13429] = sym_string;
	v->a[13430] = sym_number;
	v->a[13431] = sym_simple_expansion;
	v->a[13432] = sym_expansion;
	v->a[13433] = sym_command_substitution;
	v->a[13434] = actions(1532);
	v->a[13435] = 20;
	v->a[13436] = anon_sym_PIPE;
	v->a[13437] = anon_sym_RPAREN;
	v->a[13438] = anon_sym_SEMI_SEMI;
	v->a[13439] = anon_sym_PIPE_AMP;
	small_parse_table_672(v);
}

void	small_parse_table_672(t_small_parse_table_array *v)
{
	v->a[13440] = anon_sym_AMP_AMP;
	v->a[13441] = anon_sym_PIPE_PIPE;
	v->a[13442] = anon_sym_LT;
	v->a[13443] = anon_sym_GT;
	v->a[13444] = anon_sym_GT_GT;
	v->a[13445] = anon_sym_AMP_GT;
	v->a[13446] = anon_sym_AMP_GT_GT;
	v->a[13447] = anon_sym_LT_AMP;
	v->a[13448] = anon_sym_GT_AMP;
	v->a[13449] = anon_sym_GT_PIPE;
	v->a[13450] = anon_sym_LT_AMP_DASH;
	v->a[13451] = anon_sym_GT_AMP_DASH;
	v->a[13452] = anon_sym_LT_LT;
	v->a[13453] = anon_sym_LT_LT_DASH;
	v->a[13454] = anon_sym_AMP;
	v->a[13455] = anon_sym_SEMI;
	v->a[13456] = 19;
	v->a[13457] = actions(3);
	v->a[13458] = 1;
	v->a[13459] = sym_comment;
	small_parse_table_673(v);
}

void	small_parse_table_673(t_small_parse_table_array *v)
{
	v->a[13460] = actions(2354);
	v->a[13461] = 1;
	v->a[13462] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13463] = actions(2356);
	v->a[13464] = 1;
	v->a[13465] = anon_sym_DOLLAR;
	v->a[13466] = actions(2360);
	v->a[13467] = 1;
	v->a[13468] = anon_sym_DQUOTE;
	v->a[13469] = actions(2362);
	v->a[13470] = 1;
	v->a[13471] = aux_sym_number_token1;
	v->a[13472] = actions(2364);
	v->a[13473] = 1;
	v->a[13474] = aux_sym_number_token2;
	v->a[13475] = actions(2366);
	v->a[13476] = 1;
	v->a[13477] = anon_sym_DOLLAR_LBRACE;
	v->a[13478] = actions(2368);
	v->a[13479] = 1;
	small_parse_table_674(v);
}

void	small_parse_table_674(t_small_parse_table_array *v)
{
	v->a[13480] = anon_sym_DOLLAR_LPAREN;
	v->a[13481] = actions(2370);
	v->a[13482] = 1;
	v->a[13483] = anon_sym_BQUOTE;
	v->a[13484] = actions(2372);
	v->a[13485] = 1;
	v->a[13486] = anon_sym_DOLLAR_BQUOTE;
	v->a[13487] = actions(2376);
	v->a[13488] = 1;
	v->a[13489] = sym__brace_start;
	v->a[13490] = actions(2411);
	v->a[13491] = 1;
	v->a[13492] = sym__special_character;
	v->a[13493] = actions(2417);
	v->a[13494] = 1;
	v->a[13495] = sym_test_operator;
	v->a[13496] = state(1981);
	v->a[13497] = 1;
	v->a[13498] = aux_sym__literal_repeat1;
	v->a[13499] = state(2315);
	small_parse_table_675(v);
}

/* EOF small_parse_table_134.c */
