/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_754.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3770(t_small_parse_table_array *v)
{
	v->a[75400] = anon_sym_SEMI_SEMI;
	v->a[75401] = anon_sym_SEMI_AMP;
	v->a[75402] = anon_sym_SEMI_SEMI_AMP;
	v->a[75403] = anon_sym_PIPE_AMP;
	v->a[75404] = anon_sym_AMP_GT;
	v->a[75405] = anon_sym_AMP_GT_GT;
	v->a[75406] = anon_sym_LT_AMP;
	v->a[75407] = anon_sym_GT_AMP;
	v->a[75408] = anon_sym_GT_PIPE;
	v->a[75409] = anon_sym_LT_AMP_DASH;
	v->a[75410] = anon_sym_GT_AMP_DASH;
	v->a[75411] = anon_sym_LT_LT_DASH;
	v->a[75412] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75413] = anon_sym_DOLLAR_LBRACK;
	v->a[75414] = aux_sym_concatenation_token1;
	v->a[75415] = anon_sym_DOLLAR;
	v->a[75416] = sym__special_character;
	v->a[75417] = anon_sym_DQUOTE;
	v->a[75418] = sym_raw_string;
	v->a[75419] = sym_ansi_c_string;
	small_parse_table_3771(v);
}

void	small_parse_table_3771(t_small_parse_table_array *v)
{
	v->a[75420] = aux_sym_number_token1;
	v->a[75421] = aux_sym_number_token2;
	v->a[75422] = anon_sym_DOLLAR_LBRACE;
	v->a[75423] = anon_sym_DOLLAR_LPAREN;
	v->a[75424] = anon_sym_BQUOTE;
	v->a[75425] = anon_sym_DOLLAR_BQUOTE;
	v->a[75426] = anon_sym_LT_LPAREN;
	v->a[75427] = anon_sym_GT_LPAREN;
	v->a[75428] = aux_sym__simple_variable_name_token1;
	v->a[75429] = sym_word;
	v->a[75430] = 3;
	v->a[75431] = actions(3);
	v->a[75432] = 1;
	v->a[75433] = sym_comment;
	v->a[75434] = actions(4554);
	v->a[75435] = 6;
	v->a[75436] = sym_file_descriptor;
	v->a[75437] = sym_test_operator;
	v->a[75438] = sym__bare_dollar;
	v->a[75439] = sym__brace_start;
	small_parse_table_3772(v);
}

void	small_parse_table_3772(t_small_parse_table_array *v)
{
	v->a[75440] = ts_builtin_sym_end;
	v->a[75441] = aux_sym_heredoc_redirect_token1;
	v->a[75442] = actions(4552);
	v->a[75443] = 39;
	v->a[75444] = anon_sym_LPAREN_LPAREN;
	v->a[75445] = anon_sym_SEMI;
	v->a[75446] = anon_sym_PIPE_PIPE;
	v->a[75447] = anon_sym_AMP_AMP;
	v->a[75448] = anon_sym_PIPE;
	v->a[75449] = anon_sym_AMP;
	v->a[75450] = anon_sym_EQ_EQ;
	v->a[75451] = anon_sym_LT;
	v->a[75452] = anon_sym_GT;
	v->a[75453] = anon_sym_LT_LT;
	v->a[75454] = anon_sym_GT_GT;
	v->a[75455] = anon_sym_SEMI_SEMI;
	v->a[75456] = anon_sym_PIPE_AMP;
	v->a[75457] = anon_sym_EQ_TILDE;
	v->a[75458] = anon_sym_AMP_GT;
	v->a[75459] = anon_sym_AMP_GT_GT;
	small_parse_table_3773(v);
}

void	small_parse_table_3773(t_small_parse_table_array *v)
{
	v->a[75460] = anon_sym_LT_AMP;
	v->a[75461] = anon_sym_GT_AMP;
	v->a[75462] = anon_sym_GT_PIPE;
	v->a[75463] = anon_sym_LT_AMP_DASH;
	v->a[75464] = anon_sym_GT_AMP_DASH;
	v->a[75465] = anon_sym_LT_LT_DASH;
	v->a[75466] = anon_sym_LT_LT_LT;
	v->a[75467] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75468] = anon_sym_DOLLAR_LBRACK;
	v->a[75469] = anon_sym_DOLLAR;
	v->a[75470] = sym__special_character;
	v->a[75471] = anon_sym_DQUOTE;
	v->a[75472] = sym_raw_string;
	v->a[75473] = sym_ansi_c_string;
	v->a[75474] = aux_sym_number_token1;
	v->a[75475] = aux_sym_number_token2;
	v->a[75476] = anon_sym_DOLLAR_LBRACE;
	v->a[75477] = anon_sym_DOLLAR_LPAREN;
	v->a[75478] = anon_sym_BQUOTE;
	v->a[75479] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_3774(v);
}

void	small_parse_table_3774(t_small_parse_table_array *v)
{
	v->a[75480] = anon_sym_LT_LPAREN;
	v->a[75481] = anon_sym_GT_LPAREN;
	v->a[75482] = sym_word;
	v->a[75483] = 3;
	v->a[75484] = actions(3);
	v->a[75485] = 1;
	v->a[75486] = sym_comment;
	v->a[75487] = actions(1342);
	v->a[75488] = 6;
	v->a[75489] = sym_file_descriptor;
	v->a[75490] = sym__concat;
	v->a[75491] = sym_variable_name;
	v->a[75492] = sym_test_operator;
	v->a[75493] = sym__brace_start;
	v->a[75494] = aux_sym_heredoc_redirect_token1;
	v->a[75495] = actions(1340);
	v->a[75496] = 39;
	v->a[75497] = anon_sym_LPAREN_LPAREN;
	v->a[75498] = anon_sym_SEMI;
	v->a[75499] = anon_sym_PIPE_PIPE;
	small_parse_table_3775(v);
}

/* EOF small_parse_table_754.c */
