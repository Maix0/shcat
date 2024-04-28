/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1235.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6175(t_small_parse_table_array *v)
{
	v->a[123500] = 1;
	v->a[123501] = anon_sym_DOLLAR_BQUOTE;
	v->a[123502] = actions(6508);
	v->a[123503] = 1;
	v->a[123504] = sym_test_operator;
	v->a[123505] = actions(6510);
	v->a[123506] = 1;
	v->a[123507] = sym_extglob_pattern;
	v->a[123508] = actions(6512);
	v->a[123509] = 1;
	v->a[123510] = sym__brace_start;
	v->a[123511] = actions(6530);
	v->a[123512] = 1;
	v->a[123513] = anon_sym_esac;
	v->a[123514] = actions(6532);
	v->a[123515] = 1;
	v->a[123516] = aux_sym_heredoc_redirect_token1;
	v->a[123517] = state(6426);
	v->a[123518] = 1;
	v->a[123519] = aux_sym__literal_repeat1;
	small_parse_table_6176(v);
}

void	small_parse_table_6176(t_small_parse_table_array *v)
{
	v->a[123520] = state(7005);
	v->a[123521] = 1;
	v->a[123522] = sym_last_case_item;
	v->a[123523] = actions(6476);
	v->a[123524] = 2;
	v->a[123525] = anon_sym_LPAREN_LPAREN;
	v->a[123526] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[123527] = actions(6506);
	v->a[123528] = 2;
	v->a[123529] = anon_sym_LT_LPAREN;
	v->a[123530] = anon_sym_GT_LPAREN;
	v->a[123531] = state(3385);
	v->a[123532] = 2;
	v->a[123533] = sym_case_item;
	v->a[123534] = aux_sym_case_statement_repeat1;
	v->a[123535] = state(6695);
	v->a[123536] = 2;
	v->a[123537] = sym_concatenation;
	v->a[123538] = sym__extglob_blob;
	v->a[123539] = actions(6474);
	small_parse_table_6177(v);
}

void	small_parse_table_6177(t_small_parse_table_array *v)
{
	v->a[123540] = 3;
	v->a[123541] = sym_raw_string;
	v->a[123542] = sym_ansi_c_string;
	v->a[123543] = sym_word;
	v->a[123544] = actions(6528);
	v->a[123545] = 3;
	v->a[123546] = anon_sym_SEMI;
	v->a[123547] = anon_sym_AMP;
	v->a[123548] = anon_sym_SEMI_SEMI;
	v->a[123549] = state(6303);
	v->a[123550] = 9;
	v->a[123551] = sym_arithmetic_expansion;
	v->a[123552] = sym_brace_expression;
	v->a[123553] = sym_string;
	v->a[123554] = sym_translated_string;
	v->a[123555] = sym_number;
	v->a[123556] = sym_simple_expansion;
	v->a[123557] = sym_expansion;
	v->a[123558] = sym_command_substitution;
	v->a[123559] = sym_process_substitution;
	small_parse_table_6178(v);
}

void	small_parse_table_6178(t_small_parse_table_array *v)
{
	v->a[123560] = 5;
	v->a[123561] = actions(71);
	v->a[123562] = 1;
	v->a[123563] = sym_comment;
	v->a[123564] = state(2359);
	v->a[123565] = 1;
	v->a[123566] = aux_sym_concatenation_repeat1;
	v->a[123567] = actions(6534);
	v->a[123568] = 2;
	v->a[123569] = sym__concat;
	v->a[123570] = aux_sym_concatenation_token1;
	v->a[123571] = actions(1251);
	v->a[123572] = 13;
	v->a[123573] = anon_sym_PIPE;
	v->a[123574] = anon_sym_LT;
	v->a[123575] = anon_sym_GT;
	v->a[123576] = anon_sym_LT_LT;
	v->a[123577] = anon_sym_AMP_GT;
	v->a[123578] = anon_sym_LT_AMP;
	v->a[123579] = anon_sym_GT_AMP;
	small_parse_table_6179(v);
}

void	small_parse_table_6179(t_small_parse_table_array *v)
{
	v->a[123580] = anon_sym_DOLLAR;
	v->a[123581] = aux_sym_number_token1;
	v->a[123582] = aux_sym_number_token2;
	v->a[123583] = anon_sym_DOLLAR_LPAREN;
	v->a[123584] = anon_sym_BQUOTE;
	v->a[123585] = sym_word;
	v->a[123586] = actions(1253);
	v->a[123587] = 25;
	v->a[123588] = sym_file_descriptor;
	v->a[123589] = sym_variable_name;
	v->a[123590] = sym_test_operator;
	v->a[123591] = sym__brace_start;
	v->a[123592] = anon_sym_LPAREN_LPAREN;
	v->a[123593] = anon_sym_PIPE_PIPE;
	v->a[123594] = anon_sym_AMP_AMP;
	v->a[123595] = anon_sym_GT_GT;
	v->a[123596] = anon_sym_PIPE_AMP;
	v->a[123597] = anon_sym_AMP_GT_GT;
	v->a[123598] = anon_sym_GT_PIPE;
	v->a[123599] = anon_sym_LT_AMP_DASH;
	small_parse_table_6180(v);
}

/* EOF small_parse_table_1235.c */
