/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_964.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4820(t_small_parse_table_array *v)
{
	v->a[96400] = aux_sym_number_token1;
	v->a[96401] = aux_sym_number_token2;
	v->a[96402] = anon_sym_DOLLAR_LPAREN;
	v->a[96403] = anon_sym_BQUOTE;
	v->a[96404] = sym_word;
	v->a[96405] = actions(1358);
	v->a[96406] = 27;
	v->a[96407] = sym_file_descriptor;
	v->a[96408] = sym__concat;
	v->a[96409] = sym_test_operator;
	v->a[96410] = sym__bare_dollar;
	v->a[96411] = sym__brace_start;
	v->a[96412] = anon_sym_LPAREN_LPAREN;
	v->a[96413] = anon_sym_PIPE_PIPE;
	v->a[96414] = anon_sym_AMP_AMP;
	v->a[96415] = anon_sym_GT_GT;
	v->a[96416] = anon_sym_PIPE_AMP;
	v->a[96417] = anon_sym_AMP_GT_GT;
	v->a[96418] = anon_sym_GT_PIPE;
	v->a[96419] = anon_sym_LT_AMP_DASH;
	small_parse_table_4821(v);
}

void	small_parse_table_4821(t_small_parse_table_array *v)
{
	v->a[96420] = anon_sym_GT_AMP_DASH;
	v->a[96421] = anon_sym_LT_LT_DASH;
	v->a[96422] = anon_sym_LT_LT_LT;
	v->a[96423] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[96424] = anon_sym_DOLLAR_LBRACK;
	v->a[96425] = aux_sym_concatenation_token1;
	v->a[96426] = sym__special_character;
	v->a[96427] = anon_sym_DQUOTE;
	v->a[96428] = sym_raw_string;
	v->a[96429] = sym_ansi_c_string;
	v->a[96430] = anon_sym_DOLLAR_LBRACE;
	v->a[96431] = anon_sym_DOLLAR_BQUOTE;
	v->a[96432] = anon_sym_LT_LPAREN;
	v->a[96433] = anon_sym_GT_LPAREN;
	v->a[96434] = 3;
	v->a[96435] = actions(3);
	v->a[96436] = 1;
	v->a[96437] = sym_comment;
	v->a[96438] = actions(5772);
	v->a[96439] = 6;
	small_parse_table_4822(v);
}

void	small_parse_table_4822(t_small_parse_table_array *v)
{
	v->a[96440] = sym_file_descriptor;
	v->a[96441] = sym_variable_name;
	v->a[96442] = sym_test_operator;
	v->a[96443] = sym__brace_start;
	v->a[96444] = ts_builtin_sym_end;
	v->a[96445] = aux_sym_heredoc_redirect_token1;
	v->a[96446] = actions(5770);
	v->a[96447] = 37;
	v->a[96448] = anon_sym_LPAREN_LPAREN;
	v->a[96449] = anon_sym_SEMI;
	v->a[96450] = anon_sym_PIPE_PIPE;
	v->a[96451] = anon_sym_AMP_AMP;
	v->a[96452] = anon_sym_PIPE;
	v->a[96453] = anon_sym_AMP;
	v->a[96454] = anon_sym_LT;
	v->a[96455] = anon_sym_GT;
	v->a[96456] = anon_sym_LT_LT;
	v->a[96457] = anon_sym_GT_GT;
	v->a[96458] = anon_sym_SEMI_SEMI;
	v->a[96459] = anon_sym_PIPE_AMP;
	small_parse_table_4823(v);
}

void	small_parse_table_4823(t_small_parse_table_array *v)
{
	v->a[96460] = anon_sym_AMP_GT;
	v->a[96461] = anon_sym_AMP_GT_GT;
	v->a[96462] = anon_sym_LT_AMP;
	v->a[96463] = anon_sym_GT_AMP;
	v->a[96464] = anon_sym_GT_PIPE;
	v->a[96465] = anon_sym_LT_AMP_DASH;
	v->a[96466] = anon_sym_GT_AMP_DASH;
	v->a[96467] = anon_sym_LT_LT_DASH;
	v->a[96468] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[96469] = anon_sym_DOLLAR_LBRACK;
	v->a[96470] = anon_sym_DOLLAR;
	v->a[96471] = sym__special_character;
	v->a[96472] = anon_sym_DQUOTE;
	v->a[96473] = sym_raw_string;
	v->a[96474] = sym_ansi_c_string;
	v->a[96475] = aux_sym_number_token1;
	v->a[96476] = aux_sym_number_token2;
	v->a[96477] = anon_sym_DOLLAR_LBRACE;
	v->a[96478] = anon_sym_DOLLAR_LPAREN;
	v->a[96479] = anon_sym_BQUOTE;
	small_parse_table_4824(v);
}

void	small_parse_table_4824(t_small_parse_table_array *v)
{
	v->a[96480] = anon_sym_DOLLAR_BQUOTE;
	v->a[96481] = anon_sym_LT_LPAREN;
	v->a[96482] = anon_sym_GT_LPAREN;
	v->a[96483] = aux_sym__simple_variable_name_token1;
	v->a[96484] = sym_word;
	v->a[96485] = 3;
	v->a[96486] = actions(71);
	v->a[96487] = 1;
	v->a[96488] = sym_comment;
	v->a[96489] = actions(1352);
	v->a[96490] = 16;
	v->a[96491] = anon_sym_PIPE;
	v->a[96492] = anon_sym_EQ_EQ;
	v->a[96493] = anon_sym_LT;
	v->a[96494] = anon_sym_GT;
	v->a[96495] = anon_sym_LT_LT;
	v->a[96496] = anon_sym_LPAREN;
	v->a[96497] = anon_sym_EQ_TILDE;
	v->a[96498] = anon_sym_AMP_GT;
	v->a[96499] = anon_sym_LT_AMP;
	small_parse_table_4825(v);
}

/* EOF small_parse_table_964.c */
