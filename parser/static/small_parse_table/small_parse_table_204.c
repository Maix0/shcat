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
	v->a[20400] = 1;
	v->a[20401] = anon_sym_BQUOTE;
	v->a[20402] = actions(107);
	v->a[20403] = 1;
	v->a[20404] = anon_sym_DOLLAR_BQUOTE;
	v->a[20405] = actions(111);
	v->a[20406] = 1;
	v->a[20407] = sym_variable_name;
	v->a[20408] = actions(113);
	v->a[20409] = 1;
	v->a[20410] = sym__brace_start;
	v->a[20411] = actions(2900);
	v->a[20412] = 1;
	v->a[20413] = sym_file_descriptor;
	v->a[20414] = actions(2935);
	v->a[20415] = 1;
	v->a[20416] = sym_word;
	v->a[20417] = actions(2937);
	v->a[20418] = 1;
	v->a[20419] = sym__special_character;
	small_parse_table_1021(v);
}

void	small_parse_table_1021(t_small_parse_table_array *v)
{
	v->a[20420] = state(310);
	v->a[20421] = 1;
	v->a[20422] = sym_command_name;
	v->a[20423] = state(1035);
	v->a[20424] = 1;
	v->a[20425] = aux_sym_command_repeat1;
	v->a[20426] = state(1048);
	v->a[20427] = 1;
	v->a[20428] = aux_sym__literal_repeat1;
	v->a[20429] = state(1192);
	v->a[20430] = 1;
	v->a[20431] = sym_concatenation;
	v->a[20432] = state(1291);
	v->a[20433] = 1;
	v->a[20434] = sym_variable_assignment;
	v->a[20435] = state(1995);
	v->a[20436] = 1;
	v->a[20437] = sym_file_redirect;
	v->a[20438] = state(2168);
	v->a[20439] = 1;
	small_parse_table_1022(v);
}

void	small_parse_table_1022(t_small_parse_table_array *v)
{
	v->a[20440] = sym_subshell;
	v->a[20441] = state(2169);
	v->a[20442] = 1;
	v->a[20443] = sym_command;
	v->a[20444] = actions(95);
	v->a[20445] = 2;
	v->a[20446] = sym_test_operator;
	v->a[20447] = sym_raw_string;
	v->a[20448] = actions(2896);
	v->a[20449] = 2;
	v->a[20450] = anon_sym_LT_AMP_DASH;
	v->a[20451] = anon_sym_GT_AMP_DASH;
	v->a[20452] = actions(2894);
	v->a[20453] = 3;
	v->a[20454] = anon_sym_GT_GT;
	v->a[20455] = anon_sym_AMP_GT_GT;
	v->a[20456] = anon_sym_GT_PIPE;
	v->a[20457] = actions(2892);
	v->a[20458] = 5;
	v->a[20459] = anon_sym_LT;
	small_parse_table_1023(v);
}

void	small_parse_table_1023(t_small_parse_table_array *v)
{
	v->a[20460] = anon_sym_GT;
	v->a[20461] = anon_sym_AMP_GT;
	v->a[20462] = anon_sym_LT_AMP;
	v->a[20463] = anon_sym_GT_AMP;
	v->a[20464] = state(834);
	v->a[20465] = 7;
	v->a[20466] = sym_arithmetic_expansion;
	v->a[20467] = sym_brace_expression;
	v->a[20468] = sym_string;
	v->a[20469] = sym_number;
	v->a[20470] = sym_simple_expansion;
	v->a[20471] = sym_expansion;
	v->a[20472] = sym_command_substitution;
	v->a[20473] = 12;
	v->a[20474] = actions(3);
	v->a[20475] = 1;
	v->a[20476] = sym_comment;
	v->a[20477] = actions(2939);
	v->a[20478] = 1;
	v->a[20479] = ts_builtin_sym_end;
	small_parse_table_1024(v);
}

void	small_parse_table_1024(t_small_parse_table_array *v)
{
	v->a[20480] = actions(2947);
	v->a[20481] = 1;
	v->a[20482] = aux_sym_heredoc_redirect_token1;
	v->a[20483] = actions(2949);
	v->a[20484] = 1;
	v->a[20485] = sym_variable_name;
	v->a[20486] = actions(2516);
	v->a[20487] = 2;
	v->a[20488] = anon_sym_PIPE;
	v->a[20489] = anon_sym_PIPE_AMP;
	v->a[20490] = actions(2943);
	v->a[20491] = 2;
	v->a[20492] = anon_sym_AMP_AMP;
	v->a[20493] = anon_sym_PIPE_PIPE;
	v->a[20494] = actions(2945);
	v->a[20495] = 2;
	v->a[20496] = anon_sym_LT_LT;
	v->a[20497] = anon_sym_LT_LT_DASH;
	v->a[20498] = state(2128);
	v->a[20499] = 2;
	small_parse_table_1025(v);
}

/* EOF small_parse_table_204.c */
