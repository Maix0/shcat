/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1244.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6220(t_small_parse_table_array *v)
{
	v->a[124400] = anon_sym_BQUOTE;
	v->a[124401] = actions(6504);
	v->a[124402] = 1;
	v->a[124403] = anon_sym_DOLLAR_BQUOTE;
	v->a[124404] = actions(6508);
	v->a[124405] = 1;
	v->a[124406] = sym_test_operator;
	v->a[124407] = actions(6510);
	v->a[124408] = 1;
	v->a[124409] = sym_extglob_pattern;
	v->a[124410] = actions(6512);
	v->a[124411] = 1;
	v->a[124412] = sym__brace_start;
	v->a[124413] = actions(6560);
	v->a[124414] = 1;
	v->a[124415] = anon_sym_esac;
	v->a[124416] = actions(6562);
	v->a[124417] = 1;
	v->a[124418] = aux_sym_heredoc_redirect_token1;
	v->a[124419] = state(6426);
	small_parse_table_6221(v);
}

void	small_parse_table_6221(t_small_parse_table_array *v)
{
	v->a[124420] = 1;
	v->a[124421] = aux_sym__literal_repeat1;
	v->a[124422] = state(6851);
	v->a[124423] = 1;
	v->a[124424] = sym_last_case_item;
	v->a[124425] = actions(6476);
	v->a[124426] = 2;
	v->a[124427] = anon_sym_LPAREN_LPAREN;
	v->a[124428] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[124429] = actions(6506);
	v->a[124430] = 2;
	v->a[124431] = anon_sym_LT_LPAREN;
	v->a[124432] = anon_sym_GT_LPAREN;
	v->a[124433] = state(3377);
	v->a[124434] = 2;
	v->a[124435] = sym_case_item;
	v->a[124436] = aux_sym_case_statement_repeat1;
	v->a[124437] = state(6695);
	v->a[124438] = 2;
	v->a[124439] = sym_concatenation;
	small_parse_table_6222(v);
}

void	small_parse_table_6222(t_small_parse_table_array *v)
{
	v->a[124440] = sym__extglob_blob;
	v->a[124441] = actions(6474);
	v->a[124442] = 3;
	v->a[124443] = sym_raw_string;
	v->a[124444] = sym_ansi_c_string;
	v->a[124445] = sym_word;
	v->a[124446] = actions(6558);
	v->a[124447] = 3;
	v->a[124448] = anon_sym_SEMI;
	v->a[124449] = anon_sym_AMP;
	v->a[124450] = anon_sym_SEMI_SEMI;
	v->a[124451] = state(6303);
	v->a[124452] = 9;
	v->a[124453] = sym_arithmetic_expansion;
	v->a[124454] = sym_brace_expression;
	v->a[124455] = sym_string;
	v->a[124456] = sym_translated_string;
	v->a[124457] = sym_number;
	v->a[124458] = sym_simple_expansion;
	v->a[124459] = sym_expansion;
	small_parse_table_6223(v);
}

void	small_parse_table_6223(t_small_parse_table_array *v)
{
	v->a[124460] = sym_command_substitution;
	v->a[124461] = sym_process_substitution;
	v->a[124462] = 5;
	v->a[124463] = actions(71);
	v->a[124464] = 1;
	v->a[124465] = sym_comment;
	v->a[124466] = state(2407);
	v->a[124467] = 1;
	v->a[124468] = aux_sym_concatenation_repeat1;
	v->a[124469] = actions(6564);
	v->a[124470] = 2;
	v->a[124471] = sym__concat;
	v->a[124472] = aux_sym_concatenation_token1;
	v->a[124473] = actions(1261);
	v->a[124474] = 14;
	v->a[124475] = anon_sym_PIPE;
	v->a[124476] = anon_sym_LT;
	v->a[124477] = anon_sym_GT;
	v->a[124478] = anon_sym_LT_LT;
	v->a[124479] = anon_sym_AMP_GT;
	small_parse_table_6224(v);
}

void	small_parse_table_6224(t_small_parse_table_array *v)
{
	v->a[124480] = anon_sym_LT_AMP;
	v->a[124481] = anon_sym_GT_AMP;
	v->a[124482] = anon_sym_DOLLAR;
	v->a[124483] = aux_sym_number_token1;
	v->a[124484] = aux_sym_number_token2;
	v->a[124485] = anon_sym_DOLLAR_LPAREN;
	v->a[124486] = anon_sym_BQUOTE;
	v->a[124487] = aux_sym__simple_variable_name_token1;
	v->a[124488] = sym_word;
	v->a[124489] = actions(1263);
	v->a[124490] = 24;
	v->a[124491] = sym_file_descriptor;
	v->a[124492] = sym_variable_name;
	v->a[124493] = sym_test_operator;
	v->a[124494] = sym__brace_start;
	v->a[124495] = anon_sym_LPAREN_LPAREN;
	v->a[124496] = anon_sym_PIPE_PIPE;
	v->a[124497] = anon_sym_AMP_AMP;
	v->a[124498] = anon_sym_GT_GT;
	v->a[124499] = anon_sym_PIPE_AMP;
	small_parse_table_6225(v);
}

/* EOF small_parse_table_1244.c */
