/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1224.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6120(t_small_parse_table_array *v)
{
	v->a[122400] = sym_number;
	v->a[122401] = sym_simple_expansion;
	v->a[122402] = sym_expansion;
	v->a[122403] = sym_command_substitution;
	v->a[122404] = 16;
	v->a[122405] = actions(3);
	v->a[122406] = 1;
	v->a[122407] = sym_comment;
	v->a[122408] = actions(5645);
	v->a[122409] = 1;
	v->a[122410] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[122411] = actions(5651);
	v->a[122412] = 1;
	v->a[122413] = anon_sym_DQUOTE;
	v->a[122414] = actions(5655);
	v->a[122415] = 1;
	v->a[122416] = aux_sym_number_token1;
	v->a[122417] = actions(5657);
	v->a[122418] = 1;
	v->a[122419] = aux_sym_number_token2;
	small_parse_table_6121(v);
}

void	small_parse_table_6121(t_small_parse_table_array *v)
{
	v->a[122420] = actions(5659);
	v->a[122421] = 1;
	v->a[122422] = anon_sym_DOLLAR_LBRACE;
	v->a[122423] = actions(5661);
	v->a[122424] = 1;
	v->a[122425] = anon_sym_DOLLAR_LPAREN;
	v->a[122426] = actions(5663);
	v->a[122427] = 1;
	v->a[122428] = anon_sym_BQUOTE;
	v->a[122429] = actions(5665);
	v->a[122430] = 1;
	v->a[122431] = anon_sym_DOLLAR_BQUOTE;
	v->a[122432] = actions(5671);
	v->a[122433] = 1;
	v->a[122434] = sym__brace_start;
	v->a[122435] = actions(6493);
	v->a[122436] = 1;
	v->a[122437] = sym_word;
	v->a[122438] = actions(6495);
	v->a[122439] = 1;
	small_parse_table_6122(v);
}

void	small_parse_table_6122(t_small_parse_table_array *v)
{
	v->a[122440] = sym__special_character;
	v->a[122441] = actions(6499);
	v->a[122442] = 1;
	v->a[122443] = sym__comment_word;
	v->a[122444] = actions(7063);
	v->a[122445] = 1;
	v->a[122446] = anon_sym_DOLLAR;
	v->a[122447] = actions(6497);
	v->a[122448] = 3;
	v->a[122449] = sym_test_operator;
	v->a[122450] = sym__bare_dollar;
	v->a[122451] = sym_raw_string;
	v->a[122452] = state(2652);
	v->a[122453] = 7;
	v->a[122454] = sym_arithmetic_expansion;
	v->a[122455] = sym_brace_expression;
	v->a[122456] = sym_string;
	v->a[122457] = sym_number;
	v->a[122458] = sym_simple_expansion;
	v->a[122459] = sym_expansion;
	small_parse_table_6123(v);
}

void	small_parse_table_6123(t_small_parse_table_array *v)
{
	v->a[122460] = sym_command_substitution;
	v->a[122461] = 5;
	v->a[122462] = actions(3);
	v->a[122463] = 1;
	v->a[122464] = sym_comment;
	v->a[122465] = state(2573);
	v->a[122466] = 1;
	v->a[122467] = aux_sym_pipeline_repeat1;
	v->a[122468] = actions(5367);
	v->a[122469] = 2;
	v->a[122470] = sym_file_descriptor;
	v->a[122471] = aux_sym_heredoc_redirect_token1;
	v->a[122472] = actions(7065);
	v->a[122473] = 2;
	v->a[122474] = anon_sym_PIPE;
	v->a[122475] = anon_sym_PIPE_AMP;
	v->a[122476] = actions(5362);
	v->a[122477] = 18;
	v->a[122478] = anon_sym_SEMI_SEMI;
	v->a[122479] = anon_sym_AMP_AMP;
	small_parse_table_6124(v);
}

void	small_parse_table_6124(t_small_parse_table_array *v)
{
	v->a[122480] = anon_sym_PIPE_PIPE;
	v->a[122481] = anon_sym_LT;
	v->a[122482] = anon_sym_GT;
	v->a[122483] = anon_sym_GT_GT;
	v->a[122484] = anon_sym_AMP_GT;
	v->a[122485] = anon_sym_AMP_GT_GT;
	v->a[122486] = anon_sym_LT_AMP;
	v->a[122487] = anon_sym_GT_AMP;
	v->a[122488] = anon_sym_GT_PIPE;
	v->a[122489] = anon_sym_LT_AMP_DASH;
	v->a[122490] = anon_sym_GT_AMP_DASH;
	v->a[122491] = anon_sym_LT_LT;
	v->a[122492] = anon_sym_LT_LT_DASH;
	v->a[122493] = anon_sym_AMP;
	v->a[122494] = anon_sym_BQUOTE;
	v->a[122495] = anon_sym_SEMI;
	v->a[122496] = 16;
	v->a[122497] = actions(3);
	v->a[122498] = 1;
	v->a[122499] = sym_comment;
	small_parse_table_6125(v);
}

/* EOF small_parse_table_1224.c */
