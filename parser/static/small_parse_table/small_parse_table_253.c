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
	v->a[25300] = actions(919);
	v->a[25301] = 1;
	v->a[25302] = anon_sym_BQUOTE;
	v->a[25303] = state(1099);
	v->a[25304] = 1;
	v->a[25305] = sym_concatenation;
	v->a[25306] = actions(903);
	v->a[25307] = 2;
	v->a[25308] = sym_raw_string;
	v->a[25309] = sym_word;
	v->a[25310] = state(1083);
	v->a[25311] = 6;
	v->a[25312] = sym_arithmetic_expansion;
	v->a[25313] = sym_string;
	v->a[25314] = sym_number;
	v->a[25315] = sym_simple_expansion;
	v->a[25316] = sym_expansion;
	v->a[25317] = sym_command_substitution;
	v->a[25318] = actions(757);
	v->a[25319] = 20;
	small_parse_table_1266(v);
}

void	small_parse_table_1266(t_small_parse_table_array *v)
{
	v->a[25320] = anon_sym_PIPE;
	v->a[25321] = anon_sym_RPAREN;
	v->a[25322] = anon_sym_SEMI_SEMI;
	v->a[25323] = anon_sym_AMP_AMP;
	v->a[25324] = anon_sym_PIPE_PIPE;
	v->a[25325] = anon_sym_LT;
	v->a[25326] = anon_sym_GT;
	v->a[25327] = anon_sym_GT_GT;
	v->a[25328] = anon_sym_AMP_GT;
	v->a[25329] = anon_sym_AMP_GT_GT;
	v->a[25330] = anon_sym_LT_AMP;
	v->a[25331] = anon_sym_GT_AMP;
	v->a[25332] = anon_sym_GT_PIPE;
	v->a[25333] = anon_sym_LT_AMP_DASH;
	v->a[25334] = anon_sym_GT_AMP_DASH;
	v->a[25335] = anon_sym_LT_LT;
	v->a[25336] = anon_sym_LT_LT_DASH;
	v->a[25337] = aux_sym_heredoc_redirect_token1;
	v->a[25338] = anon_sym_AMP;
	v->a[25339] = anon_sym_SEMI;
	small_parse_table_1267(v);
}

void	small_parse_table_1267(t_small_parse_table_array *v)
{
	v->a[25340] = 5;
	v->a[25341] = actions(3);
	v->a[25342] = 1;
	v->a[25343] = sym_comment;
	v->a[25344] = state(726);
	v->a[25345] = 1;
	v->a[25346] = sym_concatenation;
	v->a[25347] = actions(755);
	v->a[25348] = 2;
	v->a[25349] = sym_file_descriptor;
	v->a[25350] = sym_variable_name;
	v->a[25351] = state(432);
	v->a[25352] = 6;
	v->a[25353] = sym_arithmetic_expansion;
	v->a[25354] = sym_string;
	v->a[25355] = sym_number;
	v->a[25356] = sym_simple_expansion;
	v->a[25357] = sym_expansion;
	v->a[25358] = sym_command_substitution;
	v->a[25359] = actions(757);
	small_parse_table_1268(v);
}

void	small_parse_table_1268(t_small_parse_table_array *v)
{
	v->a[25360] = 29;
	v->a[25361] = anon_sym_PIPE;
	v->a[25362] = anon_sym_SEMI_SEMI;
	v->a[25363] = anon_sym_AMP_AMP;
	v->a[25364] = anon_sym_PIPE_PIPE;
	v->a[25365] = anon_sym_LT;
	v->a[25366] = anon_sym_GT;
	v->a[25367] = anon_sym_GT_GT;
	v->a[25368] = anon_sym_AMP_GT;
	v->a[25369] = anon_sym_AMP_GT_GT;
	v->a[25370] = anon_sym_LT_AMP;
	v->a[25371] = anon_sym_GT_AMP;
	v->a[25372] = anon_sym_GT_PIPE;
	v->a[25373] = anon_sym_LT_AMP_DASH;
	v->a[25374] = anon_sym_GT_AMP_DASH;
	v->a[25375] = anon_sym_LT_LT;
	v->a[25376] = anon_sym_LT_LT_DASH;
	v->a[25377] = aux_sym_heredoc_redirect_token1;
	v->a[25378] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25379] = anon_sym_AMP;
	small_parse_table_1269(v);
}

void	small_parse_table_1269(t_small_parse_table_array *v)
{
	v->a[25380] = anon_sym_DOLLAR;
	v->a[25381] = anon_sym_DQUOTE;
	v->a[25382] = sym_raw_string;
	v->a[25383] = aux_sym_number_token1;
	v->a[25384] = aux_sym_number_token2;
	v->a[25385] = anon_sym_DOLLAR_LBRACE;
	v->a[25386] = anon_sym_DOLLAR_LPAREN;
	v->a[25387] = anon_sym_BQUOTE;
	v->a[25388] = sym_word;
	v->a[25389] = anon_sym_SEMI;
	v->a[25390] = 22;
	v->a[25391] = actions(3);
	v->a[25392] = 1;
	v->a[25393] = sym_comment;
	v->a[25394] = actions(931);
	v->a[25395] = 1;
	v->a[25396] = aux_sym_heredoc_redirect_token1;
	v->a[25397] = actions(933);
	v->a[25398] = 1;
	v->a[25399] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1270(v);
}

/* EOF small_parse_table_253.c */
