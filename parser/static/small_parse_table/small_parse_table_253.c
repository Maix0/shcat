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
	v->a[25300] = sym_variable_name;
	v->a[25301] = actions(875);
	v->a[25302] = 1;
	v->a[25303] = sym_file_descriptor;
	v->a[25304] = state(1143);
	v->a[25305] = 2;
	v->a[25306] = sym_variable_assignment;
	v->a[25307] = aux_sym__variable_assignments_repeat1;
	v->a[25308] = state(1137);
	v->a[25309] = 3;
	v->a[25310] = sym_file_redirect;
	v->a[25311] = sym_heredoc_redirect;
	v->a[25312] = aux_sym_redirected_statement_repeat1;
	v->a[25313] = actions(762);
	v->a[25314] = 9;
	v->a[25315] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25316] = anon_sym_DOLLAR;
	v->a[25317] = anon_sym_DQUOTE;
	v->a[25318] = sym_raw_string;
	v->a[25319] = sym_number;
	small_parse_table_1266(v);
}

void	small_parse_table_1266(t_small_parse_table_array *v)
{
	v->a[25320] = anon_sym_DOLLAR_LBRACE;
	v->a[25321] = anon_sym_DOLLAR_LPAREN;
	v->a[25322] = anon_sym_BQUOTE;
	v->a[25323] = sym_word;
	v->a[25324] = actions(766);
	v->a[25325] = 20;
	v->a[25326] = anon_sym_PIPE;
	v->a[25327] = anon_sym_RPAREN;
	v->a[25328] = anon_sym_SEMI_SEMI;
	v->a[25329] = anon_sym_AMP_AMP;
	v->a[25330] = anon_sym_PIPE_PIPE;
	v->a[25331] = anon_sym_LT;
	v->a[25332] = anon_sym_GT;
	v->a[25333] = anon_sym_GT_GT;
	v->a[25334] = anon_sym_AMP_GT;
	v->a[25335] = anon_sym_AMP_GT_GT;
	v->a[25336] = anon_sym_LT_AMP;
	v->a[25337] = anon_sym_GT_AMP;
	v->a[25338] = anon_sym_GT_PIPE;
	v->a[25339] = anon_sym_LT_AMP_DASH;
	small_parse_table_1267(v);
}

void	small_parse_table_1267(t_small_parse_table_array *v)
{
	v->a[25340] = anon_sym_GT_AMP_DASH;
	v->a[25341] = anon_sym_LT_LT;
	v->a[25342] = anon_sym_LT_LT_DASH;
	v->a[25343] = aux_sym_heredoc_redirect_token1;
	v->a[25344] = anon_sym_AMP;
	v->a[25345] = anon_sym_SEMI;
	v->a[25346] = 12;
	v->a[25347] = actions(3);
	v->a[25348] = 1;
	v->a[25349] = sym_comment;
	v->a[25350] = actions(764);
	v->a[25351] = 1;
	v->a[25352] = anon_sym_SEMI_SEMI;
	v->a[25353] = actions(766);
	v->a[25354] = 1;
	v->a[25355] = anon_sym_PIPE;
	v->a[25356] = actions(774);
	v->a[25357] = 1;
	v->a[25358] = sym_file_descriptor;
	v->a[25359] = actions(895);
	small_parse_table_1268(v);
}

void	small_parse_table_1268(t_small_parse_table_array *v)
{
	v->a[25360] = 1;
	v->a[25361] = sym_variable_name;
	v->a[25362] = state(740);
	v->a[25363] = 1;
	v->a[25364] = sym_terminator;
	v->a[25365] = actions(804);
	v->a[25366] = 2;
	v->a[25367] = anon_sym_LT_LT;
	v->a[25368] = anon_sym_LT_LT_DASH;
	v->a[25369] = actions(893);
	v->a[25370] = 2;
	v->a[25371] = anon_sym_AMP_AMP;
	v->a[25372] = anon_sym_PIPE_PIPE;
	v->a[25373] = state(1270);
	v->a[25374] = 2;
	v->a[25375] = sym_variable_assignment;
	v->a[25376] = aux_sym__variable_assignments_repeat1;
	v->a[25377] = actions(800);
	v->a[25378] = 3;
	v->a[25379] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1269(v);
}

void	small_parse_table_1269(t_small_parse_table_array *v)
{
	v->a[25380] = anon_sym_AMP;
	v->a[25381] = anon_sym_SEMI;
	v->a[25382] = state(1256);
	v->a[25383] = 3;
	v->a[25384] = sym_file_redirect;
	v->a[25385] = sym_heredoc_redirect;
	v->a[25386] = aux_sym_redirected_statement_repeat1;
	v->a[25387] = actions(762);
	v->a[25388] = 19;
	v->a[25389] = anon_sym_LT;
	v->a[25390] = anon_sym_GT;
	v->a[25391] = anon_sym_GT_GT;
	v->a[25392] = anon_sym_AMP_GT;
	v->a[25393] = anon_sym_AMP_GT_GT;
	v->a[25394] = anon_sym_LT_AMP;
	v->a[25395] = anon_sym_GT_AMP;
	v->a[25396] = anon_sym_GT_PIPE;
	v->a[25397] = anon_sym_LT_AMP_DASH;
	v->a[25398] = anon_sym_GT_AMP_DASH;
	v->a[25399] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1270(v);
}

/* EOF small_parse_table_253.c */
