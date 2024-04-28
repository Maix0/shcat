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
	v->a[13400] = sym_arithmetic_expansion;
	v->a[13401] = sym_brace_expression;
	v->a[13402] = sym_string;
	v->a[13403] = sym_translated_string;
	v->a[13404] = sym_number;
	v->a[13405] = sym_simple_expansion;
	v->a[13406] = sym_expansion;
	v->a[13407] = sym_command_substitution;
	v->a[13408] = sym_process_substitution;
	v->a[13409] = actions(2562);
	v->a[13410] = 20;
	v->a[13411] = anon_sym_SEMI;
	v->a[13412] = anon_sym_PIPE_PIPE;
	v->a[13413] = anon_sym_AMP_AMP;
	v->a[13414] = anon_sym_PIPE;
	v->a[13415] = anon_sym_AMP;
	v->a[13416] = anon_sym_LT;
	v->a[13417] = anon_sym_GT;
	v->a[13418] = anon_sym_LT_LT;
	v->a[13419] = anon_sym_GT_GT;
	small_parse_table_671(v);
}

void	small_parse_table_671(t_small_parse_table_array *v)
{
	v->a[13420] = anon_sym_RPAREN;
	v->a[13421] = anon_sym_SEMI_SEMI;
	v->a[13422] = anon_sym_PIPE_AMP;
	v->a[13423] = anon_sym_AMP_GT;
	v->a[13424] = anon_sym_AMP_GT_GT;
	v->a[13425] = anon_sym_LT_AMP;
	v->a[13426] = anon_sym_GT_AMP;
	v->a[13427] = anon_sym_GT_PIPE;
	v->a[13428] = anon_sym_LT_AMP_DASH;
	v->a[13429] = anon_sym_GT_AMP_DASH;
	v->a[13430] = anon_sym_LT_LT_DASH;
	v->a[13431] = 8;
	v->a[13432] = actions(3);
	v->a[13433] = 1;
	v->a[13434] = sym_comment;
	v->a[13435] = actions(3115);
	v->a[13436] = 1;
	v->a[13437] = anon_sym_DQUOTE;
	v->a[13438] = actions(3119);
	v->a[13439] = 1;
	small_parse_table_672(v);
}

void	small_parse_table_672(t_small_parse_table_array *v)
{
	v->a[13440] = sym_variable_name;
	v->a[13441] = state(1864);
	v->a[13442] = 1;
	v->a[13443] = sym_string;
	v->a[13444] = actions(3117);
	v->a[13445] = 2;
	v->a[13446] = aux_sym__simple_variable_name_token1;
	v->a[13447] = aux_sym__multiline_variable_name_token1;
	v->a[13448] = actions(1241);
	v->a[13449] = 3;
	v->a[13450] = sym_file_descriptor;
	v->a[13451] = sym_test_operator;
	v->a[13452] = sym__brace_start;
	v->a[13453] = actions(3113);
	v->a[13454] = 9;
	v->a[13455] = anon_sym_DASH;
	v->a[13456] = anon_sym_STAR;
	v->a[13457] = anon_sym_BANG;
	v->a[13458] = anon_sym_QMARK;
	v->a[13459] = anon_sym_DOLLAR;
	small_parse_table_673(v);
}

void	small_parse_table_673(t_small_parse_table_array *v)
{
	v->a[13460] = anon_sym_POUND;
	v->a[13461] = anon_sym_AT2;
	v->a[13462] = anon_sym_0;
	v->a[13463] = anon_sym__;
	v->a[13464] = actions(1239);
	v->a[13465] = 37;
	v->a[13466] = anon_sym_LPAREN_LPAREN;
	v->a[13467] = anon_sym_SEMI;
	v->a[13468] = anon_sym_PIPE_PIPE;
	v->a[13469] = anon_sym_AMP_AMP;
	v->a[13470] = anon_sym_PIPE;
	v->a[13471] = anon_sym_AMP;
	v->a[13472] = anon_sym_LT;
	v->a[13473] = anon_sym_GT;
	v->a[13474] = anon_sym_LT_LT;
	v->a[13475] = anon_sym_GT_GT;
	v->a[13476] = anon_sym_RPAREN;
	v->a[13477] = anon_sym_SEMI_SEMI;
	v->a[13478] = anon_sym_PIPE_AMP;
	v->a[13479] = anon_sym_AMP_GT;
	small_parse_table_674(v);
}

void	small_parse_table_674(t_small_parse_table_array *v)
{
	v->a[13480] = anon_sym_AMP_GT_GT;
	v->a[13481] = anon_sym_LT_AMP;
	v->a[13482] = anon_sym_GT_AMP;
	v->a[13483] = anon_sym_GT_PIPE;
	v->a[13484] = anon_sym_LT_AMP_DASH;
	v->a[13485] = anon_sym_GT_AMP_DASH;
	v->a[13486] = anon_sym_LT_LT_DASH;
	v->a[13487] = aux_sym_heredoc_redirect_token1;
	v->a[13488] = anon_sym_LT_LT_LT;
	v->a[13489] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13490] = anon_sym_DOLLAR_LBRACK;
	v->a[13491] = sym__special_character;
	v->a[13492] = sym_raw_string;
	v->a[13493] = sym_ansi_c_string;
	v->a[13494] = aux_sym_number_token1;
	v->a[13495] = aux_sym_number_token2;
	v->a[13496] = anon_sym_DOLLAR_LBRACE;
	v->a[13497] = anon_sym_DOLLAR_LPAREN;
	v->a[13498] = anon_sym_BQUOTE;
	v->a[13499] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_675(v);
}

/* EOF small_parse_table_134.c */
