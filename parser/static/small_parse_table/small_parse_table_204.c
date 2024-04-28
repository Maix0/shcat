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
	v->a[20400] = anon_sym_DOLLAR_BQUOTE;
	v->a[20401] = actions(3209);
	v->a[20402] = 1;
	v->a[20403] = sym__brace_start;
	v->a[20404] = actions(3657);
	v->a[20405] = 1;
	v->a[20406] = sym__special_character;
	v->a[20407] = actions(3661);
	v->a[20408] = 1;
	v->a[20409] = sym_test_operator;
	v->a[20410] = actions(3711);
	v->a[20411] = 1;
	v->a[20412] = aux_sym__simple_variable_name_token1;
	v->a[20413] = state(1966);
	v->a[20414] = 1;
	v->a[20415] = aux_sym__literal_repeat1;
	v->a[20416] = actions(2564);
	v->a[20417] = 2;
	v->a[20418] = sym_file_descriptor;
	v->a[20419] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1021(v);
}

void	small_parse_table_1021(t_small_parse_table_array *v)
{
	v->a[20420] = actions(3181);
	v->a[20421] = 2;
	v->a[20422] = anon_sym_LPAREN_LPAREN;
	v->a[20423] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20424] = actions(3203);
	v->a[20425] = 2;
	v->a[20426] = anon_sym_LT_LPAREN;
	v->a[20427] = anon_sym_GT_LPAREN;
	v->a[20428] = state(731);
	v->a[20429] = 2;
	v->a[20430] = sym_concatenation;
	v->a[20431] = aux_sym_unset_command_repeat1;
	v->a[20432] = actions(3655);
	v->a[20433] = 3;
	v->a[20434] = sym_raw_string;
	v->a[20435] = sym_ansi_c_string;
	v->a[20436] = sym_word;
	v->a[20437] = state(1902);
	v->a[20438] = 9;
	v->a[20439] = sym_arithmetic_expansion;
	small_parse_table_1022(v);
}

void	small_parse_table_1022(t_small_parse_table_array *v)
{
	v->a[20440] = sym_brace_expression;
	v->a[20441] = sym_string;
	v->a[20442] = sym_translated_string;
	v->a[20443] = sym_number;
	v->a[20444] = sym_simple_expansion;
	v->a[20445] = sym_expansion;
	v->a[20446] = sym_command_substitution;
	v->a[20447] = sym_process_substitution;
	v->a[20448] = actions(2562);
	v->a[20449] = 19;
	v->a[20450] = anon_sym_SEMI;
	v->a[20451] = anon_sym_PIPE_PIPE;
	v->a[20452] = anon_sym_AMP_AMP;
	v->a[20453] = anon_sym_PIPE;
	v->a[20454] = anon_sym_AMP;
	v->a[20455] = anon_sym_LT;
	v->a[20456] = anon_sym_GT;
	v->a[20457] = anon_sym_LT_LT;
	v->a[20458] = anon_sym_GT_GT;
	v->a[20459] = anon_sym_SEMI_SEMI;
	small_parse_table_1023(v);
}

void	small_parse_table_1023(t_small_parse_table_array *v)
{
	v->a[20460] = anon_sym_PIPE_AMP;
	v->a[20461] = anon_sym_AMP_GT;
	v->a[20462] = anon_sym_AMP_GT_GT;
	v->a[20463] = anon_sym_LT_AMP;
	v->a[20464] = anon_sym_GT_AMP;
	v->a[20465] = anon_sym_GT_PIPE;
	v->a[20466] = anon_sym_LT_AMP_DASH;
	v->a[20467] = anon_sym_GT_AMP_DASH;
	v->a[20468] = anon_sym_LT_LT_DASH;
	v->a[20469] = 30;
	v->a[20470] = actions(3);
	v->a[20471] = 1;
	v->a[20472] = sym_comment;
	v->a[20473] = actions(3727);
	v->a[20474] = 1;
	v->a[20475] = anon_sym_LT_LT_LT;
	v->a[20476] = actions(3729);
	v->a[20477] = 1;
	v->a[20478] = anon_sym_DOLLAR_LBRACK;
	v->a[20479] = actions(3731);
	small_parse_table_1024(v);
}

void	small_parse_table_1024(t_small_parse_table_array *v)
{
	v->a[20480] = 1;
	v->a[20481] = anon_sym_DOLLAR;
	v->a[20482] = actions(3733);
	v->a[20483] = 1;
	v->a[20484] = sym__special_character;
	v->a[20485] = actions(3735);
	v->a[20486] = 1;
	v->a[20487] = anon_sym_DQUOTE;
	v->a[20488] = actions(3737);
	v->a[20489] = 1;
	v->a[20490] = aux_sym_number_token1;
	v->a[20491] = actions(3739);
	v->a[20492] = 1;
	v->a[20493] = aux_sym_number_token2;
	v->a[20494] = actions(3741);
	v->a[20495] = 1;
	v->a[20496] = anon_sym_DOLLAR_LBRACE;
	v->a[20497] = actions(3743);
	v->a[20498] = 1;
	v->a[20499] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1025(v);
}

/* EOF small_parse_table_204.c */
