/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_204.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1020(t_small_parse_table_array *v)
{
	v->a[20400] = state(416);
	v->a[20401] = 1;
	v->a[20402] = sym_terminator;
	v->a[20403] = actions(769);
	v->a[20404] = 2;
	v->a[20405] = anon_sym_AMP_AMP;
	v->a[20406] = anon_sym_PIPE_PIPE;
	v->a[20407] = state(995);
	v->a[20408] = 2;
	v->a[20409] = sym_variable_assignment;
	v->a[20410] = aux_sym__variable_assignments_repeat1;
	v->a[20411] = actions(593);
	v->a[20412] = 3;
	v->a[20413] = anon_sym_SEMI_SEMI;
	v->a[20414] = aux_sym_heredoc_redirect_token1;
	v->a[20415] = anon_sym_SEMI;
	v->a[20416] = state(1040);
	v->a[20417] = 3;
	v->a[20418] = sym_file_redirect;
	v->a[20419] = sym_heredoc_redirect;
	small_parse_table_1021(v);
}

void	small_parse_table_1021(t_small_parse_table_array *v)
{
	v->a[20420] = aux_sym_redirected_statement_repeat1;
	v->a[20421] = actions(576);
	v->a[20422] = 12;
	v->a[20423] = anon_sym_LT;
	v->a[20424] = anon_sym_GT;
	v->a[20425] = anon_sym_GT_GT;
	v->a[20426] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20427] = anon_sym_DOLLAR;
	v->a[20428] = anon_sym_DQUOTE;
	v->a[20429] = sym_raw_string;
	v->a[20430] = sym_number;
	v->a[20431] = anon_sym_DOLLAR_LBRACE;
	v->a[20432] = anon_sym_DOLLAR_LPAREN;
	v->a[20433] = anon_sym_BQUOTE;
	v->a[20434] = sym_word;
	v->a[20435] = 10;
	v->a[20436] = actions(3);
	v->a[20437] = 1;
	v->a[20438] = sym_comment;
	v->a[20439] = actions(580);
	small_parse_table_1022(v);
}

void	small_parse_table_1022(t_small_parse_table_array *v)
{
	v->a[20440] = 1;
	v->a[20441] = anon_sym_PIPE;
	v->a[20442] = actions(597);
	v->a[20443] = 1;
	v->a[20444] = anon_sym_LT_LT;
	v->a[20445] = actions(771);
	v->a[20446] = 1;
	v->a[20447] = sym_variable_name;
	v->a[20448] = state(469);
	v->a[20449] = 1;
	v->a[20450] = sym_terminator;
	v->a[20451] = actions(769);
	v->a[20452] = 2;
	v->a[20453] = anon_sym_AMP_AMP;
	v->a[20454] = anon_sym_PIPE_PIPE;
	v->a[20455] = state(995);
	v->a[20456] = 2;
	v->a[20457] = sym_variable_assignment;
	v->a[20458] = aux_sym__variable_assignments_repeat1;
	v->a[20459] = actions(831);
	small_parse_table_1023(v);
}

void	small_parse_table_1023(t_small_parse_table_array *v)
{
	v->a[20460] = 3;
	v->a[20461] = anon_sym_SEMI_SEMI;
	v->a[20462] = aux_sym_heredoc_redirect_token1;
	v->a[20463] = anon_sym_SEMI;
	v->a[20464] = state(1040);
	v->a[20465] = 3;
	v->a[20466] = sym_file_redirect;
	v->a[20467] = sym_heredoc_redirect;
	v->a[20468] = aux_sym_redirected_statement_repeat1;
	v->a[20469] = actions(576);
	v->a[20470] = 12;
	v->a[20471] = anon_sym_LT;
	v->a[20472] = anon_sym_GT;
	v->a[20473] = anon_sym_GT_GT;
	v->a[20474] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20475] = anon_sym_DOLLAR;
	v->a[20476] = anon_sym_DQUOTE;
	v->a[20477] = sym_raw_string;
	v->a[20478] = sym_number;
	v->a[20479] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1024(v);
}

void	small_parse_table_1024(t_small_parse_table_array *v)
{
	v->a[20480] = anon_sym_DOLLAR_LPAREN;
	v->a[20481] = anon_sym_BQUOTE;
	v->a[20482] = sym_word;
	v->a[20483] = 11;
	v->a[20484] = actions(3);
	v->a[20485] = 1;
	v->a[20486] = sym_comment;
	v->a[20487] = actions(580);
	v->a[20488] = 1;
	v->a[20489] = anon_sym_PIPE;
	v->a[20490] = actions(591);
	v->a[20491] = 1;
	v->a[20492] = anon_sym_BQUOTE;
	v->a[20493] = actions(597);
	v->a[20494] = 1;
	v->a[20495] = anon_sym_LT_LT;
	v->a[20496] = actions(764);
	v->a[20497] = 1;
	v->a[20498] = sym_variable_name;
	v->a[20499] = state(544);
	small_parse_table_1025(v);
}

/* EOF small_parse_table_204.c */
