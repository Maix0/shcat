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
	v->a[20400] = anon_sym_EQ;
	v->a[20401] = anon_sym_LT;
	v->a[20402] = anon_sym_GT;
	v->a[20403] = anon_sym_GT_GT;
	v->a[20404] = anon_sym_LT_LT;
	v->a[20405] = anon_sym_CARET;
	v->a[20406] = anon_sym_AMP;
	v->a[20407] = anon_sym_PLUS;
	v->a[20408] = anon_sym_DASH;
	v->a[20409] = anon_sym_STAR;
	v->a[20410] = anon_sym_SLASH;
	v->a[20411] = anon_sym_PERCENT;
	v->a[20412] = actions(571);
	v->a[20413] = 21;
	v->a[20414] = anon_sym_AMP_AMP;
	v->a[20415] = anon_sym_PIPE_PIPE;
	v->a[20416] = anon_sym_RPAREN_RPAREN;
	v->a[20417] = anon_sym_PLUS_EQ;
	v->a[20418] = anon_sym_DASH_EQ;
	v->a[20419] = anon_sym_STAR_EQ;
	small_parse_table_1021(v);
}

void	small_parse_table_1021(t_small_parse_table_array *v)
{
	v->a[20420] = anon_sym_SLASH_EQ;
	v->a[20421] = anon_sym_PERCENT_EQ;
	v->a[20422] = anon_sym_LT_LT_EQ;
	v->a[20423] = anon_sym_GT_GT_EQ;
	v->a[20424] = anon_sym_AMP_EQ;
	v->a[20425] = anon_sym_CARET_EQ;
	v->a[20426] = anon_sym_PIPE_EQ;
	v->a[20427] = anon_sym_EQ_EQ;
	v->a[20428] = anon_sym_BANG_EQ;
	v->a[20429] = anon_sym_LT_EQ;
	v->a[20430] = anon_sym_GT_EQ;
	v->a[20431] = anon_sym_QMARK;
	v->a[20432] = anon_sym_COLON;
	v->a[20433] = anon_sym_PLUS_PLUS2;
	v->a[20434] = anon_sym_DASH_DASH2;
	v->a[20435] = 14;
	v->a[20436] = actions(3);
	v->a[20437] = 1;
	v->a[20438] = sym_comment;
	v->a[20439] = actions(576);
	small_parse_table_1022(v);
}

void	small_parse_table_1022(t_small_parse_table_array *v)
{
	v->a[20440] = 1;
	v->a[20441] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20442] = actions(579);
	v->a[20443] = 1;
	v->a[20444] = anon_sym_DOLLAR;
	v->a[20445] = actions(582);
	v->a[20446] = 1;
	v->a[20447] = anon_sym_DQUOTE;
	v->a[20448] = actions(585);
	v->a[20449] = 1;
	v->a[20450] = anon_sym_DOLLAR_LBRACE;
	v->a[20451] = actions(588);
	v->a[20452] = 1;
	v->a[20453] = anon_sym_DOLLAR_LPAREN;
	v->a[20454] = actions(591);
	v->a[20455] = 1;
	v->a[20456] = anon_sym_BQUOTE;
	v->a[20457] = actions(594);
	v->a[20458] = 1;
	v->a[20459] = sym__bare_dollar;
	small_parse_table_1023(v);
}

void	small_parse_table_1023(t_small_parse_table_array *v)
{
	v->a[20460] = state(199);
	v->a[20461] = 1;
	v->a[20462] = aux_sym_command_repeat2;
	v->a[20463] = state(694);
	v->a[20464] = 1;
	v->a[20465] = sym_concatenation;
	v->a[20466] = actions(564);
	v->a[20467] = 2;
	v->a[20468] = sym_file_descriptor;
	v->a[20469] = ts_builtin_sym_end;
	v->a[20470] = actions(573);
	v->a[20471] = 3;
	v->a[20472] = sym_raw_string;
	v->a[20473] = sym_number;
	v->a[20474] = sym_word;
	v->a[20475] = state(418);
	v->a[20476] = 5;
	v->a[20477] = sym_arithmetic_expansion;
	v->a[20478] = sym_string;
	v->a[20479] = sym_simple_expansion;
	small_parse_table_1024(v);
}

void	small_parse_table_1024(t_small_parse_table_array *v)
{
	v->a[20480] = sym_expansion;
	v->a[20481] = sym_command_substitution;
	v->a[20482] = actions(544);
	v->a[20483] = 15;
	v->a[20484] = anon_sym_PIPE;
	v->a[20485] = anon_sym_SEMI_SEMI;
	v->a[20486] = anon_sym_AMP_AMP;
	v->a[20487] = anon_sym_PIPE_PIPE;
	v->a[20488] = anon_sym_LT;
	v->a[20489] = anon_sym_GT;
	v->a[20490] = anon_sym_GT_GT;
	v->a[20491] = anon_sym_LT_AMP;
	v->a[20492] = anon_sym_GT_AMP;
	v->a[20493] = anon_sym_GT_PIPE;
	v->a[20494] = anon_sym_LT_GT;
	v->a[20495] = anon_sym_LT_LT;
	v->a[20496] = anon_sym_LT_LT_DASH;
	v->a[20497] = aux_sym_heredoc_redirect_token1;
	v->a[20498] = anon_sym_SEMI;
	v->a[20499] = 3;
	small_parse_table_1025(v);
}

/* EOF small_parse_table_204.c */
