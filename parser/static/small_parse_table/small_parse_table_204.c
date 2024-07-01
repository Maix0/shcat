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
	v->a[20400] = anon_sym_DOLLAR_LPAREN;
	v->a[20401] = actions(469);
	v->a[20402] = 1;
	v->a[20403] = anon_sym_BQUOTE;
	v->a[20404] = actions(471);
	v->a[20405] = 1;
	v->a[20406] = sym_file_descriptor;
	v->a[20407] = actions(473);
	v->a[20408] = 1;
	v->a[20409] = sym__bare_dollar;
	v->a[20410] = state(195);
	v->a[20411] = 1;
	v->a[20412] = aux_sym_command_repeat2;
	v->a[20413] = state(718);
	v->a[20414] = 1;
	v->a[20415] = sym_concatenation;
	v->a[20416] = state(1235);
	v->a[20417] = 1;
	v->a[20418] = sym_subshell;
	v->a[20419] = actions(455);
	small_parse_table_1021(v);
}

void	small_parse_table_1021(t_small_parse_table_array *v)
{
	v->a[20420] = 3;
	v->a[20421] = sym_raw_string;
	v->a[20422] = sym_number;
	v->a[20423] = sym_word;
	v->a[20424] = state(448);
	v->a[20425] = 5;
	v->a[20426] = sym_arithmetic_expansion;
	v->a[20427] = sym_string;
	v->a[20428] = sym_simple_expansion;
	v->a[20429] = sym_expansion;
	v->a[20430] = sym_command_substitution;
	v->a[20431] = actions(457);
	v->a[20432] = 18;
	v->a[20433] = anon_sym_PIPE;
	v->a[20434] = anon_sym_RPAREN;
	v->a[20435] = anon_sym_SEMI_SEMI;
	v->a[20436] = anon_sym_AMP_AMP;
	v->a[20437] = anon_sym_PIPE_PIPE;
	v->a[20438] = anon_sym_LT;
	v->a[20439] = anon_sym_GT;
	small_parse_table_1022(v);
}

void	small_parse_table_1022(t_small_parse_table_array *v)
{
	v->a[20440] = anon_sym_GT_GT;
	v->a[20441] = anon_sym_LT_AMP;
	v->a[20442] = anon_sym_GT_AMP;
	v->a[20443] = anon_sym_GT_PIPE;
	v->a[20444] = anon_sym_LT_AMP_DASH;
	v->a[20445] = anon_sym_GT_AMP_DASH;
	v->a[20446] = anon_sym_LT_LT;
	v->a[20447] = anon_sym_LT_LT_DASH;
	v->a[20448] = aux_sym_heredoc_redirect_token1;
	v->a[20449] = anon_sym_AMP;
	v->a[20450] = anon_sym_SEMI;
	v->a[20451] = 16;
	v->a[20452] = actions(3);
	v->a[20453] = 1;
	v->a[20454] = sym_comment;
	v->a[20455] = actions(17);
	v->a[20456] = 1;
	v->a[20457] = anon_sym_LPAREN;
	v->a[20458] = actions(477);
	v->a[20459] = 1;
	small_parse_table_1023(v);
}

void	small_parse_table_1023(t_small_parse_table_array *v)
{
	v->a[20460] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20461] = actions(479);
	v->a[20462] = 1;
	v->a[20463] = anon_sym_DOLLAR;
	v->a[20464] = actions(481);
	v->a[20465] = 1;
	v->a[20466] = anon_sym_DQUOTE;
	v->a[20467] = actions(483);
	v->a[20468] = 1;
	v->a[20469] = anon_sym_DOLLAR_LBRACE;
	v->a[20470] = actions(485);
	v->a[20471] = 1;
	v->a[20472] = anon_sym_DOLLAR_LPAREN;
	v->a[20473] = actions(487);
	v->a[20474] = 1;
	v->a[20475] = anon_sym_BQUOTE;
	v->a[20476] = actions(489);
	v->a[20477] = 1;
	v->a[20478] = sym__bare_dollar;
	v->a[20479] = state(207);
	small_parse_table_1024(v);
}

void	small_parse_table_1024(t_small_parse_table_array *v)
{
	v->a[20480] = 1;
	v->a[20481] = aux_sym_command_repeat2;
	v->a[20482] = state(731);
	v->a[20483] = 1;
	v->a[20484] = sym_concatenation;
	v->a[20485] = state(1235);
	v->a[20486] = 1;
	v->a[20487] = sym_subshell;
	v->a[20488] = actions(471);
	v->a[20489] = 2;
	v->a[20490] = sym_file_descriptor;
	v->a[20491] = ts_builtin_sym_end;
	v->a[20492] = actions(475);
	v->a[20493] = 3;
	v->a[20494] = sym_raw_string;
	v->a[20495] = sym_number;
	v->a[20496] = sym_word;
	v->a[20497] = state(476);
	v->a[20498] = 5;
	v->a[20499] = sym_arithmetic_expansion;
	small_parse_table_1025(v);
}

/* EOF small_parse_table_204.c */
