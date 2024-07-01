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
	v->a[20400] = anon_sym_DOLLAR_LBRACE;
	v->a[20401] = actions(451);
	v->a[20402] = 1;
	v->a[20403] = anon_sym_DOLLAR_LPAREN;
	v->a[20404] = actions(453);
	v->a[20405] = 1;
	v->a[20406] = anon_sym_BQUOTE;
	v->a[20407] = actions(455);
	v->a[20408] = 1;
	v->a[20409] = sym__bare_dollar;
	v->a[20410] = state(186);
	v->a[20411] = 1;
	v->a[20412] = aux_sym_command_repeat2;
	v->a[20413] = state(681);
	v->a[20414] = 1;
	v->a[20415] = sym_concatenation;
	v->a[20416] = actions(558);
	v->a[20417] = 2;
	v->a[20418] = sym_file_descriptor;
	v->a[20419] = ts_builtin_sym_end;
	small_parse_table_1021(v);
}

void	small_parse_table_1021(t_small_parse_table_array *v)
{
	v->a[20420] = actions(439);
	v->a[20421] = 3;
	v->a[20422] = sym_raw_string;
	v->a[20423] = sym_number;
	v->a[20424] = sym_word;
	v->a[20425] = state(386);
	v->a[20426] = 5;
	v->a[20427] = sym_arithmetic_expansion;
	v->a[20428] = sym_string;
	v->a[20429] = sym_simple_expansion;
	v->a[20430] = sym_expansion;
	v->a[20431] = sym_command_substitution;
	v->a[20432] = actions(556);
	v->a[20433] = 16;
	v->a[20434] = anon_sym_PIPE;
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
	v->a[20444] = anon_sym_LT_GT;
	v->a[20445] = anon_sym_LT_LT;
	v->a[20446] = anon_sym_LT_LT_DASH;
	v->a[20447] = aux_sym_heredoc_redirect_token1;
	v->a[20448] = anon_sym_AMP;
	v->a[20449] = anon_sym_SEMI;
	v->a[20450] = 12;
	v->a[20451] = actions(3);
	v->a[20452] = 1;
	v->a[20453] = sym_comment;
	v->a[20454] = actions(621);
	v->a[20455] = 1;
	v->a[20456] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20457] = actions(624);
	v->a[20458] = 1;
	v->a[20459] = anon_sym_DOLLAR;
	small_parse_table_1023(v);
}

void	small_parse_table_1023(t_small_parse_table_array *v)
{
	v->a[20460] = actions(627);
	v->a[20461] = 1;
	v->a[20462] = anon_sym_DQUOTE;
	v->a[20463] = actions(630);
	v->a[20464] = 1;
	v->a[20465] = anon_sym_DOLLAR_LBRACE;
	v->a[20466] = actions(633);
	v->a[20467] = 1;
	v->a[20468] = anon_sym_DOLLAR_LPAREN;
	v->a[20469] = actions(636);
	v->a[20470] = 1;
	v->a[20471] = anon_sym_BQUOTE;
	v->a[20472] = actions(499);
	v->a[20473] = 2;
	v->a[20474] = sym_file_descriptor;
	v->a[20475] = sym_variable_name;
	v->a[20476] = state(196);
	v->a[20477] = 2;
	v->a[20478] = sym_concatenation;
	v->a[20479] = aux_sym_for_statement_repeat1;
	small_parse_table_1024(v);
}

void	small_parse_table_1024(t_small_parse_table_array *v)
{
	v->a[20480] = actions(618);
	v->a[20481] = 3;
	v->a[20482] = sym_raw_string;
	v->a[20483] = sym_number;
	v->a[20484] = sym_word;
	v->a[20485] = state(384);
	v->a[20486] = 5;
	v->a[20487] = sym_arithmetic_expansion;
	v->a[20488] = sym_string;
	v->a[20489] = sym_simple_expansion;
	v->a[20490] = sym_expansion;
	v->a[20491] = sym_command_substitution;
	v->a[20492] = actions(504);
	v->a[20493] = 17;
	v->a[20494] = anon_sym_PIPE;
	v->a[20495] = anon_sym_RPAREN;
	v->a[20496] = anon_sym_SEMI_SEMI;
	v->a[20497] = anon_sym_AMP_AMP;
	v->a[20498] = anon_sym_PIPE_PIPE;
	v->a[20499] = anon_sym_LT;
	small_parse_table_1025(v);
}

/* EOF small_parse_table_204.c */
