/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_253.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1265(t_small_parse_table_array *v)
{
	v->a[25300] = anon_sym_LPAREN;
	v->a[25301] = anon_sym_LBRACE;
	v->a[25302] = anon_sym_BANG;
	v->a[25303] = anon_sym_LT;
	v->a[25304] = anon_sym_GT;
	v->a[25305] = anon_sym_GT_GT;
	v->a[25306] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25307] = anon_sym_DOLLAR;
	v->a[25308] = anon_sym_DQUOTE;
	v->a[25309] = sym_raw_string;
	v->a[25310] = sym_number;
	v->a[25311] = anon_sym_DOLLAR_LBRACE;
	v->a[25312] = anon_sym_DOLLAR_LPAREN;
	v->a[25313] = anon_sym_BQUOTE;
	v->a[25314] = sym_word;
	v->a[25315] = 3;
	v->a[25316] = actions(3);
	v->a[25317] = 1;
	v->a[25318] = sym_comment;
	v->a[25319] = actions(1097);
	small_parse_table_1266(v);
}

void	small_parse_table_1266(t_small_parse_table_array *v)
{
	v->a[25320] = 3;
	v->a[25321] = sym__concat;
	v->a[25322] = sym__bare_dollar;
	v->a[25323] = ts_builtin_sym_end;
	v->a[25324] = actions(1095);
	v->a[25325] = 20;
	v->a[25326] = anon_sym_PIPE;
	v->a[25327] = anon_sym_SEMI_SEMI;
	v->a[25328] = anon_sym_AMP_AMP;
	v->a[25329] = anon_sym_PIPE_PIPE;
	v->a[25330] = anon_sym_LT;
	v->a[25331] = anon_sym_GT;
	v->a[25332] = anon_sym_GT_GT;
	v->a[25333] = anon_sym_LT_LT;
	v->a[25334] = aux_sym_heredoc_redirect_token1;
	v->a[25335] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25336] = aux_sym_concatenation_token1;
	v->a[25337] = anon_sym_DOLLAR;
	v->a[25338] = anon_sym_DQUOTE;
	v->a[25339] = sym_raw_string;
	small_parse_table_1267(v);
}

void	small_parse_table_1267(t_small_parse_table_array *v)
{
	v->a[25340] = sym_number;
	v->a[25341] = anon_sym_DOLLAR_LBRACE;
	v->a[25342] = anon_sym_DOLLAR_LPAREN;
	v->a[25343] = anon_sym_BQUOTE;
	v->a[25344] = sym_word;
	v->a[25345] = anon_sym_SEMI;
	v->a[25346] = 3;
	v->a[25347] = actions(3);
	v->a[25348] = 1;
	v->a[25349] = sym_comment;
	v->a[25350] = actions(1093);
	v->a[25351] = 3;
	v->a[25352] = sym__concat;
	v->a[25353] = sym__bare_dollar;
	v->a[25354] = ts_builtin_sym_end;
	v->a[25355] = actions(1091);
	v->a[25356] = 20;
	v->a[25357] = anon_sym_PIPE;
	v->a[25358] = anon_sym_SEMI_SEMI;
	v->a[25359] = anon_sym_AMP_AMP;
	small_parse_table_1268(v);
}

void	small_parse_table_1268(t_small_parse_table_array *v)
{
	v->a[25360] = anon_sym_PIPE_PIPE;
	v->a[25361] = anon_sym_LT;
	v->a[25362] = anon_sym_GT;
	v->a[25363] = anon_sym_GT_GT;
	v->a[25364] = anon_sym_LT_LT;
	v->a[25365] = aux_sym_heredoc_redirect_token1;
	v->a[25366] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25367] = aux_sym_concatenation_token1;
	v->a[25368] = anon_sym_DOLLAR;
	v->a[25369] = anon_sym_DQUOTE;
	v->a[25370] = sym_raw_string;
	v->a[25371] = sym_number;
	v->a[25372] = anon_sym_DOLLAR_LBRACE;
	v->a[25373] = anon_sym_DOLLAR_LPAREN;
	v->a[25374] = anon_sym_BQUOTE;
	v->a[25375] = sym_word;
	v->a[25376] = anon_sym_SEMI;
	v->a[25377] = 4;
	v->a[25378] = actions(3);
	v->a[25379] = 1;
	small_parse_table_1269(v);
}

void	small_parse_table_1269(t_small_parse_table_array *v)
{
	v->a[25380] = sym_comment;
	v->a[25381] = actions(1044);
	v->a[25382] = 1;
	v->a[25383] = sym_variable_name;
	v->a[25384] = actions(1042);
	v->a[25385] = 2;
	v->a[25386] = anon_sym_RPAREN;
	v->a[25387] = anon_sym_SEMI_SEMI;
	v->a[25388] = actions(1040);
	v->a[25389] = 20;
	v->a[25390] = anon_sym_for;
	v->a[25391] = anon_sym_while;
	v->a[25392] = anon_sym_until;
	v->a[25393] = anon_sym_if;
	v->a[25394] = anon_sym_case;
	v->a[25395] = anon_sym_LPAREN;
	v->a[25396] = anon_sym_LBRACE;
	v->a[25397] = anon_sym_BANG;
	v->a[25398] = anon_sym_LT;
	v->a[25399] = anon_sym_GT;
	small_parse_table_1270(v);
}

/* EOF small_parse_table_253.c */
